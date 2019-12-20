from django.shortcuts import render
from django.http import HttpResponse
from datetime import datetime, timezone, timedelta
from .models import Experiment, Properties
import json
from .proto import messages_motor_pb2
import socket
import matplotlib.pyplot as plt
import matplotlib.ticker as ticker
import os
# Create your views here.


def plotter(request):
    speed = request.GET.get('speed')
    speed = 0. if speed == None else float(speed)
    position = request.GET.get('position')
    position = 0. if position == None else float(position)

    now = datetime.now(timezone.utc)
    the_exp = None
    for exp in Experiment.objects.all():
        if now - exp.Datetime < timedelta(hours=0, minutes=0, seconds=3):
            the_exp = exp

    if the_exp is None:
        the_exp = Experiment(number=0, Datetime=datetime.now(timezone.utc))
        the_exp.save()

    the_exp.Datetime = datetime.now(timezone.utc)
    the_exp.save()
    myProperty = Properties(speed=speed, position=position, experiment=the_exp)
    myProperty.save()

    worldmodel = messages_motor_pb2.WorldModel()
    motor = worldmodel.motor
    motor.anguleVelocity = speed
    motor.direction = position
    str = worldmodel.SerializeToString()
    UDP_IP = "127.0.0.1"
    UDP_PORT = 10040
    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    sock.sendto(str, (UDP_IP, UDP_PORT))
    return HttpResponse("speed {}, position {}".format(speed, position))


def get_data(request):
    pk = request.GET.get('pk')
    pk = -1 if pk == None else int(pk)
    if pk == -1:
        return HttpResponse("NO PK")

    the_exp = None
    for exp in Experiment.objects.all():
        if exp.pk == pk:
            the_exp = exp
    if the_exp is None:
        return HttpResponse("INVALID PK")

    data_dict = {"speeds": [], 'positions': []}
    for prop in the_exp.all_properties.all():
        data_dict["speeds"].append(prop.speed)
        data_dict["positions"].append(prop.position)

    return HttpResponse(json.dumps(data_dict), content_type="application/json")

def plot_data(request):
    pk = request.GET.get('pk')
    pk = -1 if pk == None else int(pk)
    if pk == -1:
        return HttpResponse("NO PK")

    the_exp = None
    for exp in Experiment.objects.all():
        if exp.pk == pk:
            the_exp = exp
    if the_exp is None:
        return HttpResponse("INVALID PK")

    data_dict = {"speeds": [], 'positions': []}
    for prop in the_exp.all_properties.all():
        data_dict["speeds"].append(prop.speed)
        data_dict["positions"].append(prop.position)

    fig = plt.figure()
    ax = plt.subplot(111)
    # time = [i for i in range(len(data_dict["speeds"]))]
    data_size = len(data_dict["speeds"])
    ax.plot(data_dict["speeds"], 'r', label="speed")
    ax.plot(data_dict["positions"], 'b', label="position")
    # ax.xaxis.set_major_locator(ticker.MultipleLocator(data_size/500))
    # ax.xaxis.set_minor_locator(ticker.MultipleLocator(5))
    # ax.yaxis.set_major_locator(ticker.MultipleLocator(data_size/100))
    # ax.yaxis.set_minor_locator(ticker.MultipleLocator(5))
    plt.title('Plot')
    ax.legend(loc='upper center', bbox_to_anchor=(0.5, -0.05), shadow = True, ncol = 2)
    ax.grid()
    # plt.show()
    filename = the_exp.__str__() + '.svg'
    plt.savefig(filename)
    svg_data = open(the_exp.__str__() + '.svg')
    os.remove(filename)
    return HttpResponse(svg_data, content_type="image/svg+xml")

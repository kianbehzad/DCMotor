from django.shortcuts import render
from django.http import HttpResponse
from datetime import datetime, timezone, timedelta
from .models import Experiment, Properties
import json
from .proto import messages_motor_pb2
import socket
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
        the_exp = Experiment(number=0, Datetime=datetime.now((timezone.utc)))
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


def data(request):
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


from django.shortcuts import render
from django.http import HttpResponse
from datetime import datetime, timezone, timedelta
from .models import Experiment, Properties
import json
from rest_framework.response import Response
# Create your views here.

def plotter(request):
    speed = request.GET.get('speed')
    speed = 0. if speed == None else float(speed)
    position = request.GET.get('position')
    position = 0. if position == None else float(position)


    now = datetime.now(timezone.utc)
    the_exp = None
    for exp in Experiment.objects.all():
        print(exp.pk)
        if now - exp.Datetime < timedelta(hours=0, minutes=0, seconds=3):
            the_exp = exp

    if the_exp is None:
        the_exp = Experiment(number=0, Datetime=datetime.now((timezone.utc)))
        the_exp.save()


    myProperty = Properties(speed=speed, position=position, experiment=the_exp)
    myProperty.save()

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

    dict = {"speeds": [], 'positions': []}
    for prop in the_exp.all_properties.all():
        dict["speeds"].append(prop.speed)
        dict["positions"].append(prop.position)

    return HttpResponse(json.dumps(dict), content_type="application/json")

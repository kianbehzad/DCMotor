from django.shortcuts import render
from django.http import HttpResponse
from datetime import datetime
from .models import Experiment, Properties
# Create your views here.

def plotter(request):
    speed = request.GET.get('speed')
    speed = 0. if speed == None else float(speed)
    position = request.GET.get('position')
    position = 0. if position == None else float(position)

    for exp in Experiment.objects.all():
        print(exp)

    return HttpResponse("speed {}, position {}".format(speed, position))
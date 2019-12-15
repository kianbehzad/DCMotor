from django.db import models
from datetime import datetime, timedelta
from dateutil import tz

# Create your models here.


class Experiment(models.Model):
    number = models.IntegerField()
    Datetime = models.DateTimeField()

    def __str__(self):
        return str(self.Datetime + timedelta(hours=3, minutes=30))


class Properties(models.Model):
    speed = models.FloatField(default=0.)
    position = models.FloatField(default=0.)
    experiment = models.ForeignKey(Experiment, on_delete=models.CASCADE)

    def __str__(self):
        return "speed " + str(self.speed) + ", pos " + str(self.position)
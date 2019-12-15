from django.urls import path
from . import views

urlpatterns = [
    path(r'data', views.data),
    path(r'', views.plotter),
]

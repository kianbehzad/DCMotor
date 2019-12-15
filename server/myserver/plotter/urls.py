from django.urls import path
from . import views

urlpatterns = [
    path('data/', views.data),
    path('', views.plotter),
]

from django.urls import path
from . import views

urlpatterns = [
    path('get_data/', views.data),
    path('', views.plotter),
]

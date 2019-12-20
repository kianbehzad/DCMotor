from django.urls import path
from . import views

urlpatterns = [
    path('get_data/', views.get_data),
    path('plot_data/', views.plot_data),
    path('', views.plotter),
]

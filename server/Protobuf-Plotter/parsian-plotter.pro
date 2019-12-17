#-------------------------------------------------
#
# Project created by QtCreator 2018-07-04T13:04:25
#
#-------------------------------------------------

QT       += core gui opengl network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = parsian-plotter
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    plot.cpp \
    plotterwidget.cpp \
    texturecache.cpp \
    guitimer.cpp \
    timer.cpp \
    leaffilterproxymodel.cpp \
    plotter.cpp \
    proto/cpp/messages_motor.pb.cc \
    mythread.cpp

HEADERS  += mainwindow.h \
    plot.h \
    plotterwidget.h \
    texturecache.h \
    guitimer.h \
    timer.h \
    leaffilterproxymodel.h \
    plotter.h \
    proto/cpp/messages_motor.pb.h \
    mythread.h

FORMS    += \
    plotter.ui

RESOURCES +=

DISTFILES +=

MOC_DIR = objs
OBJECTS_DIR = objs

INCLUDEPATH+=proto/cpp
INCLUDEPATH+=/usr/local/include/
LIBS+=-L/usr/local/lib -lprotobuf -lprotobuf-lite


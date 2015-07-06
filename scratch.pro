#-------------------------------------------------
#
# Project created by QtCreator 2015-06-03T10:47:23
#
#-------------------------------------------------

QT       += core gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = scratch
TEMPLATE = app

CONFIG += c++11


SOURCES += main.cpp\
    gato.cpp \
    ventana.cpp \
    mover.cpp \
    girarizq.cpp \
    girarder.cpp

HEADERS  += \
    gato.h \
    ventana.h \
    mover.h \
    girarizq.h \
    girarder.h

FORMS    +=

DISTFILES += \
    Media/cat1-a.gif \
    Media/cat1-b.gif \
    Media/girar_izq.png

RESOURCES += \
    #imagenes.qrc \
    imagen.qrc

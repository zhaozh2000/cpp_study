QT += core
QT -= gui

CONFIG += c++11

TARGET = Chapter11
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    cfish.cpp \
    ctuna.cpp \
    cabstractbase.cpp \
    cderived.cpp \
    canimalbase.cpp \
    cclonetest.cpp

HEADERS += \
    cfish.h \
    ctuna.h \
    cabstractbase.h \
    cderived.h \
    canimalbase.h \
    cclonetest.h

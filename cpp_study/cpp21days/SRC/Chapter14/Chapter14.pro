QT += core
QT -= gui

CONFIG += c++11

TARGET = Chapter14
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    ctest.cpp \
    ctemplate.cpp

HEADERS += \
    ctest.h \
    ctemplate.h

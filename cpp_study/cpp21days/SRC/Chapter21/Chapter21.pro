QT += core
QT -= gui

CONFIG += c++11

TARGET = Chapter21
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    ctest.cpp

HEADERS += \
    ctest.h

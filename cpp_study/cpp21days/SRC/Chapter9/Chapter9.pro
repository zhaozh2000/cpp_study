QT += core
QT -= gui

CONFIG += c++11

QMAKE_CXXFLAGS -= -std=gnu++98
QMAKE_CXX -= -std=gnu++98
QMAKE_LINK -= -std=gnu++98

QMAKE_CXXFLAGS += -fno-elide-constructors

TARGET = Chapter9
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    chuman.cpp

HEADERS += \
    chuman.h

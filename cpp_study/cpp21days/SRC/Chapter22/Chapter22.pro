QT += core
QT -= gui

CONFIG += c++11
# -std=c++11 or -std=gnu++11

QMAKE_CXXFLAGS -= -std=gnu++98
QMAKE_CXX -= -std=gnu++98
QMAKE_LINK -= -std=gnu++98

QMAKE_CXXFLAGS += -std=gnu++11
QMAKE_CXX += -std=gnu++11
QMAKE_LINK += -std=gnu++11


TARGET = Chapter22
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

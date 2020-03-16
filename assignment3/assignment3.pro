TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        RotationMotor.cpp \
        main.cpp

SUBDIRS += \
    ../assignment2a/assignment2a.pro

HEADERS += \
    RotationMotor.h

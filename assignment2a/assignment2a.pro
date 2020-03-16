TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        RotationMotor.cpp \
        commandHandler.cpp \
        main.cpp

HEADERS += \
    RotationMotor.h \
    commandHandler.h \
    main.h

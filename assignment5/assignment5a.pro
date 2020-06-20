TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        RotationMotor.cpp \
        commandprocessor.cpp \
        main.cpp

HEADERS += \
    RotationMotor.h \
    commandprocessor.h \
    main.h

TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        animatedassets.cpp \
        dragon.cpp \
        main.cpp \
        tree.cpp


INCLUDEPATH +=  "C:/Users/ashis/Documents/I.E. Lab/SFML-2.5.1/include"

LIBS += -L "C:/Users/ashis/Documents/I.E. Lab/SFML-2.5.1/lib"
CONFIG(debug, debug|release){
    LIBS += -lsfml-audio-d -lsfml-graphics-d -lsfml-network-d -lsfml-system-d -lsfml-window-d
} else {
    LIBS += -lsfml-audio -lsfml-graphics -lsfml-network -lsfml-system -lsfml-window
}

HEADERS += \
    animatedassets.h \
    dragon.h \
    tree.h

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    hstack.cpp \
    main.cpp \
    mainwindow.cpp \
    multmaptable.cpp

HEADERS += \
    hstack.h \
    mainwindow.h \
    multmaptable.h

FORMS += \
    mainwindow.ui

INCLUDEPATH += D:\Graphviz\include\graphviz\

LIBS += -LD:/Graphviz/lib -lcgraph
#LIBS += -LD:/Graphviz/lib -lcdt
LIBS += -LD:/Graphviz/lib -lgvc




# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

#自动添加的库


#-------------------------------------------------
#
# Project created by QtCreator 2020-12-24T04:21:21
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Store_Management_System.pro
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    addfruit.cpp \
    availablefruits.cpp \
    expiredfruits.cpp \
    findfruits.cpp \
    fruitsreport.cpp \
        main.cpp \
        mainwindow.cpp \
    returnedfruits.cpp \
    soldfruits.cpp \
    spoiledfruits.cpp \
    mydb.cpp \
    updatefruitcatg.cpp

HEADERS += \
    addfruit.h \
    availablefruits.h \
    expiredfruits.h \
    findfruits.h \
    fruitsreport.h \
        mainwindow.h \
    returnedfruits.h \
    soldfruits.h \
    spoiledfruits.h \
    mydb.h \
    updatefruitcatg.h

FORMS += \
        mainwindow.ui \
    additem.ui \
    updateitem.ui \
    itemsreport.ui \
    spoileditems.ui \
    solditems.ui \
    expireditems.ui \
    returneditems.ui \
    availableitems.ui \
    finditem.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

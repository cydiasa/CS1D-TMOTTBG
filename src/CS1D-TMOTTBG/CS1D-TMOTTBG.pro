#-------------------------------------------------
#
# Project created by QtCreator 2014-04-21T18:12:33
#
#-------------------------------------------------

QT       += core gui sql declarative webkit webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CS1D-TMOTTBG
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    createuserwindow.cpp \
    dashboardwindow.cpp \
    outputlistwindow.cpp \
    displayindividualstadiuminformationwindow.cpp

HEADERS  += mainwindow.h \
    header.h \
    createuserwindow.h \
    dashboardwindow.h \
    outputlistwindow.h \
    displayindividualstadiuminformationwindow.h

FORMS    += mainwindow.ui \
    createuserwindow.ui \
    dashboardwindow.ui \
    outputlistwindow.ui \
    displayindividualstadiuminformationwindow.ui

OTHER_FILES += \
    inputFileStadiums.txt \
    inputFileCellProvidor.txt \
    inputFileStadiumCode.txt \
    inputFileCellProvidorCode.txt \
    outputLisQML.qml

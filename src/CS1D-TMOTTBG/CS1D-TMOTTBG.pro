#-------------------------------------------------
#
# Project created by QtCreator 2014-04-21T18:12:33
#
#-------------------------------------------------

QT       += core gui sql declarative webkit webkitwidgets xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CS1D-TMOTTBG
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    createuserwindow.cpp \
    dashboardwindow.cpp \
    outputlistwindow.cpp \
    displayindividualstadiuminformationwindow.cpp \
    dashboardadminwindow.cpp \
    adminedituserwindow.cpp \
    admineditselecteduserwindow.cpp \
    admineditoutputlist.cpp \
    admineditselectedoutputlist.cpp \
    splashscreen.cpp \
    introscreen.cpp \
    tutorialpage_intro.cpp \
    nonuserinterface_ui.cpp \
    securepasswordpass.cpp \
    smtp.cpp \
    displayvacationcheckedpathwindow.cpp \
    displayvacationplannerwindow.cpp \
    createstadiumwindow.cpp \
    displayindividualiteminformation.cpp \
    displaysouvenirwindow.cpp \
    displayusercartitems.cpp \

HEADERS  += mainwindow.h \
    header.h \
    createuserwindow.h \
    dashboardwindow.h \
    outputlistwindow.h \
    displayindividualstadiuminformationwindow.h \
    dashboardadminwindow.h \
    adminedituserwindow.h \
    admineditselecteduserwindow.h \
    admineditoutputlist.h \
    admineditselectedoutputlist.h \
    splashscreen.h \
    introscreen.h \
    tutorialpage_intro.h \
    nonuserinterface_ui.h \
    securepasswordpass.h \
    smtph.h \
    displayvacationcheckedpathwindow.h \
    displayvacationplannerwindow.h \
    createstadiumwindow.h \
    displayindividualiteminformation.h \
    displaysouvenirwindow.h \
    displayusercartitems.h \

FORMS    += mainwindow.ui \
    createuserwindow.ui \
    dashboardwindow.ui \
    outputlistwindow.ui \
    displayindividualstadiuminformationwindow.ui \
    dashboardadminwindow.ui \
    adminedituserwindow.ui \
    admineditselecteduserwindow.ui \
    admineditoutputlist.ui \
    admineditselectedoutputlist.ui \
    splashscreen.ui \
    introscreen.ui \
    tutorialpage_intro.ui \
    nonuserinterface_ui.ui \
    securepasswordpass.ui \
    displayvacationcheckedpathwindow.ui \
    displayvacationplannerwindow.ui \
    createstadiumwindow.ui \
    displayindividualiteminformation.ui \
    displaysouvenirwindow.ui \
    displayusercartitems.ui \

OTHER_FILES += \
    inputFileStadiums.txt \
    inputFileCellProvidor.txt \
    inputFileStadiumCode.txt \
    inputFileCellProvidorCode.txt

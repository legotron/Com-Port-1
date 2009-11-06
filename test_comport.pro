# -------------------------------------------------
# Project created by QtCreator 2009-10-29T18:27:39
# -------------------------------------------------
QT += network
TARGET = test_comport
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    my_comport.cpp \
    threadcomport.cpp
HEADERS += mainwindow.h \
    my_comport.h \
    threadcomport.h
FORMS += mainwindow.ui

# my
INCLUDEPATH += ../qextserialport
LIBS += libqextserialport.so
unix:DEFINES += _TTY_POSIX_
win32:DEFINES += _TTY_WIN_

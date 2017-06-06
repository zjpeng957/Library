#-------------------------------------------------
#
# Project created by QtCreator 2017-03-17T21:11:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Library
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
    logindialog.cpp \
    mainwindow.cpp \
    borrowdialog.cpp \
    booklist.cpp \
    registerdialog.cpp \
    book.cpp \
    book_to_inter.cpp \
    BookDetail.cpp \
    BookInfo.cpp \
    BookTabWidget.cpp \
    BorrowAndReturn.cpp \
    buy.cpp \
    client.cpp \
    client_to_inter.cpp \
    ClientDetail.cpp \
    ClientInfo.cpp \
    global.cpp \
    inter_to_book.cpp \
    inter_to_client.cpp \
    Log_managemengt.cpp \
    login.cpp \
    msgWidget.cpp \
    register.cpp \
    SearchAndCount.cpp

HEADERS  += \
    logindialog.h \
    book.h \
    client.h \
    mainwindow.h \
    borrowdialog.h \
    booklist.h \
    registerdialog.h \
    BookDetail.h \
    BookInfo.h \
    BookTabWidget.h \
    BorrowAndReturn.h \
    buy.h \
    ClientDetail.h \
    ClientInfo.h \
    fuction.h \
    global.h \
    header.h \
    login.h \
    msgWidget.h \
    register.h \
    SearchAndCount.h

FORMS    += \
    logindialog.ui \
    mainwindow.ui \
    booklist.ui \
    registerdialog.ui \
    BookDetail.ui \
    BookTabWidget.ui \
    ClientDetail.ui \
    msgWidget.ui

RESOURCES += \
    rec.qrc

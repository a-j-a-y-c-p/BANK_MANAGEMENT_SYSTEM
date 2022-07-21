QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addcustomer.cpp \
    admin.cpp \
    adminoptions.cpp \
    blockcustomer.cpp \
    customer.cpp \
    customeroptions.cpp \
    deletecustomer.cpp \
    deposit.cpp \
    loanreq.cpp \
    loanview.cpp \
    main.cpp \
    mainwindow.cpp \
    ministatement.cpp \
    viewcustomer.cpp \
    withdraw.cpp

HEADERS += \
    addcustomer.h \
    admin.h \
    adminoptions.h \
    blockcustomer.h \
    customer.h \
    customeroptions.h \
    deletecustomer.h \
    deposit.h \
    loanreq.h \
    loanview.h \
    mainwindow.h \
    ministatement.h \
    viewcustomer.h \
    withdraw.h

FORMS += \
    addcustomer.ui \
    admin.ui \
    adminoptions.ui \
    blockcustomer.ui \
    customer.ui \
    customeroptions.ui \
    deletecustomer.ui \
    deposit.ui \
    loanreq.ui \
    loanview.ui \
    mainwindow.ui \
    ministatement.ui \
    viewcustomer.ui \
    withdraw.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Pic.qrc

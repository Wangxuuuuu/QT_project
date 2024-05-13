<<<<<<< HEAD
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += resources_big



# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bullet.cpp \
    endwidget.cpp \
    enemyplane.cpp \
    heroplane.cpp \
    introduce.cpp \
    main.cpp \
    mainscene.cpp \
    map.cpp \
    startwidget.cpp

HEADERS += \
    bullet.h \
    config.h \
    endwidget.h \
    enemyplane.h \
    heroplane.h \
    introduce.h \
    mainscene.h \
    map.h \
    startwidget.h

FORMS += \
    endwidget.ui \
    introduce.ui \
    mainscene.ui \
    startwidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
=======
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += resources_big



# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bullet.cpp \
    endwidget.cpp \
    enemyplane.cpp \
    heroplane.cpp \
    introduce.cpp \
    main.cpp \
    mainscene.cpp \
    map.cpp \
    startwidget.cpp

HEADERS += \
    bullet.h \
    config.h \
    endwidget.h \
    enemyplane.h \
    heroplane.h \
    introduce.h \
    mainscene.h \
    map.h \
    startwidget.h

FORMS += \
    endwidget.ui \
    introduce.ui \
    mainscene.ui \
    startwidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
>>>>>>> 5be61a101e46b25d788dc8f017f9d2d89c294fb1

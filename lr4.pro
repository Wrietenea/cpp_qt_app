QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


INCLUDEPATH += "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\VS\include\boost_1_80_0\boost_1_80_0"
CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    SphericalSurface.cpp \
    Surface.cpp \
    lens.cpp \
    main.cpp \
    dialog.cpp

HEADERS += \
    Paraxial.h \
    SphericalSurface.h \
    Surface.h \
    dialog.h \
    lens.h

FORMS += \
    dialog.ui



# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

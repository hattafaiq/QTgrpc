QT -= gui
QT += core \
      sql \

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
CONFIG += sanitizer sanitize_address

QMAKE_CXXFLAGS+= -fsanitize=address -fno-omit-frame-pointer -g3
QMAKE_CFLAGS+= -fsanitize=address -static-libasan -fno-omit-frame-pointer
QMAKE_LFLAGS+= -fsanitize=address -static-libasan

SOURCES += \
        input_data.cpp \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    input_data.h

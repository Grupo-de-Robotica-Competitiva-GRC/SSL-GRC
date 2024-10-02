QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Define a pasta de build
build_dir = build

# Cria a pasta de build se não existir
QMAKE_BUNDLE_DATA = $$build_dir
QMAKE_BUNDLE_DESTDIR = $$build_dir

# Define o diretório de saída dos arquivos de compilação
OBJECTS_DIR = $$build_dir/objects
MOC_DIR = $$build_dir/moc
RCC_DIR = $$build_dir/rcc
UI_DIR = $$build_dir/ui

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    Includes/GRSimProtos/grSim_Commands.pb.cc \
    Includes/GRSimProtos/grSim_Packet.pb.cc \
    Includes/GRSimProtos/grSim_Replacement.pb.cc \
    Includes/VisionProtos/ssl_vision_detection.pb.cc \
    Includes/VisionProtos/ssl_vision_geometry.pb.cc \
    Includes/VisionProtos/ssl_vision_wrapper.pb.cc

HEADERS += \
    mainwindow.h \
    Includes/GRSimProtos/grSim_Commands.pb.h \
    Includes/GRSimProtos/grSim_Packet.pb.h \
    Includes/GRSimProtos/grSim_Replacement.pb.h \
    Includes/VisionProtos/ssl_vision_detection.pb.h \
    Includes/VisionProtos/ssl_vision_geometry.pb.h \
    Includes/VisionProtos/ssl_vision_wrapper.pb.h

FORMS += \
    mainwindow.ui

LIBS += -lprotobuf

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

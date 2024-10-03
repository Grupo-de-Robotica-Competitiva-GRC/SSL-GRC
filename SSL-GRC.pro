QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

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

# Arquivos .proto
PROTOBUF_DIR = Includes/GRSimProtos
PROTO_FILES = $$PROTOBUF_DIR/grSim_Commands.proto \
              $$PROTOBUF_DIR/grSim_Packet.proto \
              $$PROTOBUF_DIR/grSim_Replacement.proto \
              Includes/VisionProtos/ssl_vision_detection.proto \
              Includes/VisionProtos/ssl_vision_geometry.proto \
              Includes/VisionProtos/ssl_vision_wrapper.proto

# Gera os arquivos .pb.h e .pb.cc a partir dos .proto
PROTO_OUTPUT_DIR = $$build_dir/proto
PROTO_SOURCES = $$replace(PROTO_FILES, .proto, .pb.cc)
PROTO_HEADERS = $$replace(PROTO_FILES, .proto, .pb.h)

for(proto, PROTO_FILES) {
    protoc.commands += protoc $$proto --cpp_out=$$PROTO_OUTPUT_DIR
}

# Adiciona os arquivos .pb.cc e .pb.h gerados ao projeto
SOURCES += $$PROTO_SOURCES \
           main.cpp \
           mainwindow.cpp

HEADERS += $$PROTO_HEADERS \
           mainwindow.h

FORMS += \
    mainwindow.ui

LIBS += -lprotobuf

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

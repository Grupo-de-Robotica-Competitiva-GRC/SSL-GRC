#!/bin/bash

# Diretórios onde os arquivos .proto estão
GRSIM_PROTOS_DIR="Includes/GRSimProtos"
VISION_PROTOS_DIR="Includes/VisionProtos"

# Gerar arquivos .h e .cc na pasta Includes/
protoc --proto_path=$GRSIM_PROTOS_DIR $GRSIM_PROTOS_DIR/grSim_Commands.proto --cpp_out=$GRSIM_PROTOS_DIR
protoc --proto_path=$GRSIM_PROTOS_DIR $GRSIM_PROTOS_DIR/grSim_Packet.proto --cpp_out=$GRSIM_PROTOS_DIR
protoc --proto_path=$GRSIM_PROTOS_DIR $GRSIM_PROTOS_DIR/grSim_Replacement.proto --cpp_out=$GRSIM_PROTOS_DIR

protoc --proto_path=$VISION_PROTOS_DIR $VISION_PROTOS_DIR/ssl_vision_detection.proto --cpp_out=$VISION_PROTOS_DIR
protoc --proto_path=$VISION_PROTOS_DIR $VISION_PROTOS_DIR/ssl_vision_geometry.proto --cpp_out=$VISION_PROTOS_DIR
protoc --proto_path=$VISION_PROTOS_DIR $VISION_PROTOS_DIR/ssl_vision_wrapper.proto --cpp_out=$VISION_PROTOS_DIR

echo "Arquivos .h e .cc gerados com sucesso!"

#teste
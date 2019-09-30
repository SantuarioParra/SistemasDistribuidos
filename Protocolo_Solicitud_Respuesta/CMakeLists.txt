cmake_minimum_required(VERSION 3.14)
project(Protocolo_Solicitud_Respuesta)

set(CMAKE_CXX_STANDARD 17)

add_executable(Protocolo_Solicitud_Respuesta main.cpp mensaje.h Solicitud.h Solicitud.cpp SocketDatagrama.cpp SocketDatagrama.h PaqueteDatagrama.cpp PaqueteDatagrama.h)
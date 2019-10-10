cmake_minimum_required(VERSION 3.14)
project(TimeOut)

set(CMAKE_CXX_STANDARD 17)

add_executable(TimeOut cliente.cpp servidor.cpp mensaje.h PaqueteDatagrama.h PaqueteDatagrama.cpp SocketDatagrama.h SocketDatagrama.cpp Respuesta.cpp Respuesta.h Solicitud.h Solicitud.cpp)
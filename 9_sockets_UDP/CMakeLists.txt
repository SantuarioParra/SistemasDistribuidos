cmake_minimum_required(VERSION 3.14)
project(9_sockets_UDP)

set(CMAKE_CXX_STANDARD 17)

add_executable(9_sockets_UDP main.cpp PaqueteDatagrama.cpp PaqueteDatagrama.h SocketDatagrama.cpp SocketDatagrama.h)
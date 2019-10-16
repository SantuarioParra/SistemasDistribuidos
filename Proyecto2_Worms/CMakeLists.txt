cmake_minimum_required(VERSION 3.14)
project(Proyecto2_Worms)

set(CMAKE_CXX_STANDARD 17)

add_executable(Proyecto2_Worms main.cpp gfx.o Worm.cpp Worm.h Movimientos.cpp Movimientos.h Coordenada.cpp Coordenada.h)
cmake_minimum_required(VERSION 3.14)
project(8_threads_c__)

set(CMAKE_CXX_STANDARD 17)

add_executable(8_threads_c__ Semaforo.h Semaforo.cpp main.cpp usoDiscoDuro.cpp)
#include <cmath>
#include "Worm.h"
#include <random>
#include <unistd.h>
#include <iostream>

//
// Created by fernando on 07/10/19.
//
Worm::Worm(int tam) {
    longitud = tam;
}

void Worm::setTamanio(int tam) {
    longitud = tam;
}

int Worm::getTamanio() {
    return longitud;
}

void Worm::printWorms(int y) {
    gfx_clear();
    for (int i = 0; i <20 ; ++i) {
        gfx_point(i+10,10);gfx_point(10+i,10);
        gfx_point(i+10,10+i);gfx_point(10+i,10+i);
    }
     sleep(1);
        /*gfx_point(10,10);gfx_point(11,10);
        gfx_point(10,11);gfx_point(11,11);*/



}



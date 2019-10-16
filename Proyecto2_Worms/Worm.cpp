#include <cmath>
#include "Worm.h"
#include "Movimientos.h"
#include <random>
#include <unistd.h>
#include <iostream>
#include <ctime>

//
// Created by fernando on 07/10/19.
//
Worm::Worm(int cantidad) {
    longitud = tam;
}

void Worm::printWorms() {
    int i = 0, selector = 0;
    Coordenada coord;
    Movimientos movimientos;
    vector<Coordenada> cordenadas;
    for (int j = 0; j < 666 ; ++j) {
        selector = rand()%3;
        switch(selector) {
            case 0 :
                movimientos.recto();
                break;
            case 1 :
                movimientos.circular();
                break;
            case 2 :
                movimientos.ondular();
                break;
        }
    }
    cordenadas = movimientos.getMovimientos();
    while (!cordenadas.empty()) {
        coord = cordenadas.at(i);
        gfx_color(0, 255, 0);
        gfx_point(abs(coord.getX()) % 600, abs(coord.getY() + 1) % 600);
        gfx_point(abs(coord.getX() + 1) % 600, abs(coord.getY() + 1) % 600);
        gfx_point(abs(coord.getX()) % 600, abs(coord.getY()) % 600);
        gfx_point(abs(coord.getX() + 1) % 600, abs(coord.getY()) % 600);
        if (i >= 15) {
            coord = cordenadas.at(i - 15);
            gfx_color(0, 0, 0);
            gfx_point(abs(coord.getX()) % 600, abs(coord.getY() + 1) % 600);
            gfx_point(abs(coord.getX() + 1) % 600, abs(coord.getY() + 1) % 600);
            gfx_point(abs(coord.getX()) % 600, abs(coord.getY()) % 600);
            gfx_point(abs(coord.getX() + 1) % 600, abs(coord.getY()) % 600);
        }
        gfx_flush();
        usleep(41666/2); //24 fotogramas por segundo
        i++;
    }
}



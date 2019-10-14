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
Worm::Worm(int tam) {
    longitud = tam;
}

void Worm::setTamanio(int tam) {
    longitud = tam;
}

int Worm::getTamanio() {
    return longitud;
}

void Worm::printWorms() {
    srand(time(NULL));
    pair<int, int> coord;
    Movimientos movimientos(10, 20);
    movimientos.circular();
    int xa = 0, ya = 0;
    for (int i = 0; i < 15; ++i) {
        xa = 10 + (rand() % 500);
        ya = 10 + (rand() % 500);
        /*cout << "worm:" << longitud << "-" << x << "," << y << "Tamaño de pi: " << 2 * PI << endl;*/
        vector<pair<int, int>> mv = movimientos.getMovimientos();
        for (auto &coord:mv) {
            gfx_point((coord.first + xa) % 600, (coord.second + ya + 1) % 600);
            gfx_point((coord.first + xa + 1) % 600, (coord.second + ya + 1) % 600);
            gfx_point((coord.first + xa) % 600, (coord.second + ya) % 600);
            gfx_point((coord.first + xa + 1) % 600, (coord.second + ya) % 600);
            gfx_flush();
            usleep(41666 / 4);
        }
    }



    /*gfx_point(10,10);gfx_point(11,10);
    gfx_point(10,11);gfx_point(11,11);*/



}



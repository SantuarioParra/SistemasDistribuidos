//
// Created by fernando on 07/10/19.
//

#ifndef PROYECTO2_WORMS_MOVIMIENTOS_H
#define PROYECTO2_WORMS_MOVIMIENTOS_H

#include <iostream>
#include <utility>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include <cmath>
#include "gfx.h"
#include "Coordenada.h"
using namespace std;
const double PI  = 3.14159265359;
class Movimientos{
public:
    Movimientos();
    Movimientos(int x, int y);
    void recto();
    void circular();
    void ondular();
    vector<Coordenada> getMovimientos();
private:
    vector<Coordenada> movimientos;
    Coordenada coordenada;
};
#endif //PROYECTO2_WORMS_MOVIMIENTOS_H

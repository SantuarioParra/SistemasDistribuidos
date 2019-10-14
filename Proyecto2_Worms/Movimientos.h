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
using namespace std;
class Movimientos{
public:
    Movimientos(int x, int y);
    void recto();
    void circular();
    void ondular();
    int getX();
    int getY();
    vector<pair<int,int>> getMovimientos();
private:
    int X,Y;
    vector<pair<int,int>> movimientos;
};
#endif //PROYECTO2_WORMS_MOVIMIENTOS_H

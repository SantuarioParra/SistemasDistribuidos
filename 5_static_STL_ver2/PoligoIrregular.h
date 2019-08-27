//
// Created by root on 26/08/19.
//

#ifndef INC_5_STATIC_STL_VER2_POLIGOIRREGULAR_H
#define INC_5_STATIC_STL_VER2_POLIGOIRREGULAR_H

#include <vector>
#include "Coordenada.h"

using namespace std;

class PoligonoIrreg {
public:
    void addVertice(Coordenada vertice);

    void printVertice();

    static double getVecesMuestF();

private:
    vector<Coordenada> Poligono;
    static double vecesMuestF;

};

#endif //INC_5_STATIC_STL_VER2_POLIGOIRREGULAR_H

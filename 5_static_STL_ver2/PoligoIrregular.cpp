//
// Created by root on 26/08/19.
//
#include "PoligoIrregular.h"
#include <iostream>
#include <vector>
using namespace std;

void PoligonoIrreg::addVertice(Coordenada vertice) {
    Poligono.push_back(vertice);
    vecesMuestF++;
}

void PoligonoIrreg::addPoligono(Coordenada vertice) {
    Poligono.push_back(vertice);
    vecesMuestF++;
}
void PoligonoIrreg::printVertice() {
    for (int i =0 ; i <Poligono.size(); i++) {
        Coordenada vertices;
        vertices = Poligono[i];
        cout << "Vertice: "<< i+1 << " X: "<< vertices.obtenerX()<< " Y: "<< vertices.obtenerY()<<endl;
    }

}

int PoligonoIrreg::vecesMuestF=0;

int PoligonoIrreg::getVecesMuestF() {
    return vecesMuestF;
}

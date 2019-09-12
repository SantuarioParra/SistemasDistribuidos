//
// Created by Shado on 12/09/2019.
//

#ifndef PROYECTO1_SANTUARIO1_CRIBA_H
#define PROYECTO1_SANTUARIO1_CRIBA_H

#include <vector>
#include "Numero.h"

using namespace std;

class Criba {
public:
    Criba(int n) : numeros(n) {}

    void llenarCriba();

    void obtenerPrimos();

    void imprimirCriba();

    void imprimirPrimos();

private:
    int numeros;
    vector<Numero> criba;
};

#endif //PROYECTO1_SANTUARIO1_CRIBA_H

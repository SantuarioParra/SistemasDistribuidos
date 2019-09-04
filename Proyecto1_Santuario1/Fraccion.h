//
// Created by Shado on 02/09/2019.
//

#ifndef PROYECTO1_SANTUARIO1_FRACCION_H
#define PROYECTO1_SANTUARIO1_FRACCION_H

class Fraccion {
private:
    int numerador=0;
    int denominador=1;
public:
    Fraccion(){} ;

    Fraccion(int numerador, int denominador):numerador(numerador),denominador(denominador){};

    double printResultado();

    void printFraccionReducida();

};

#endif //PROYECTO1_SANTUARIO1_FRACCION_H

//
// Created by Shado on 12/09/2019.
//

#ifndef PROYECTO1_SANTUARIO1_ORTOEDRO_H
#define PROYECTO1_SANTUARIO1_ORTOEDRO_H

#include "Coordenada.h"
#include "Rectangulo.h"

class Ortoedro {
public:
    Ortoedro() {}

    Ortoedro(Rectangulo base, Rectangulo cara) :base1(base),base2(base),cara1(cara),cara2(cara),cara3(cara),cara4(cara) {};

    double obtieneArea();

    double obtieneVolumen();

    void obtieneVertices();

private:
    double area, volumen;
    Rectangulo base1, base2, cara1, cara2, cara3, cara4;

};

#endif //PROYECTO1_SANTUARIO1_ORTOEDRO_H

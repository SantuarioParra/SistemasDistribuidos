//
// Created by Shado on 22/08/19.
//

#ifndef PROYECTO1_SANTUARIO1_RECTANGULO_H
#define PROYECTO1_SANTUARIO1_RECTANGULO_H

#include "Coordenada.h"

class Rectangulo{
private:
    Coordenada superiorIzq;
    Coordenada inferiorDer;
public:
    Rectangulo();
    Rectangulo(double xSupIzq, double ySupIzq, double xInfDer, double yInfDer);
    Rectangulo(Coordenada coordenadaIzq,Coordenada coordenadaDer);
    void imprimeEsq();
    double obtenerArea();
    Coordenada obtieneSupIzq();
    Coordenada obtieneInfDer();
};
#endif //PROYECTO1_SANTUARIO1_RECTANGULO_H

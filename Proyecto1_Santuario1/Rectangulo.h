//
// Created by root on 22/08/19.
//

#ifndef INC_4_COMPOSICION_EN_C___RECTANGULO_H
#define INC_4_COMPOSICION_EN_C___RECTANGULO_H

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
#endif //INC_4_COMPOSICION_EN_C___RECTANGULO_H

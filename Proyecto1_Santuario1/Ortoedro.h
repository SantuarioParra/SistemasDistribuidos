//
// Created by Shado on 12/09/2019.
//

#ifndef PROYECTO1_SANTUARIO1_ORTOEDRO_H
#define PROYECTO1_SANTUARIO1_ORTOEDRO_H

#include "Coordenada.h"
#include "Rectangulo.h"

class Ortoedro {
private:
    Coordenada superiorIzq;
    Coordenada inferiorDer;
public:
    Ortoedro();
    Ortoedro(Coordenada supI, Coordenada infD);
    void obtieneVertices();
    double obtieneArea();
    double obtieneVolumen();
    Coordenada obtieneSupIzq();
    Coordenada obtieneInfDer();



};

#endif //PROYECTO1_SANTUARIO1_ORTOEDRO_H

//
// Created by Shado on 22/08/19.
//

#ifndef PROYECTO1_SANTUARIO1__COORDENADA_H
#define PROYECTO1_SANTUARIO1__COORDENADA_H
class Coordenada{
public:
    Coordenada(double = 0, double=0, double=0);
    double obtenerX();
    double obtenerY();
    double obtenerZ();

private:
    double y,x,z;
};
#endif //PROYECTO1_SANTUARIO1__COORDENADA_H

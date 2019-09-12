//
// Created by root on 22/08/19.
//

#ifndef INC_4_COMPOSICION_EN_C___COORDENADA_H
#define INC_4_COMPOSICION_EN_C___COORDENADA_H
class Coordenada{
public:
    Coordenada(double = 0, double=0, double=0);
    double obtenerX();
    double obtenerY();
    double obtenerZ();

private:
    double y,x,z;
};
#endif //INC_4_COMPOSICION_EN_C___COORDENADA_H

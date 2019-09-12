//
// Created by Shado on 22/08/19.
//

#include <iostream>
#include "cmath"
#include "Coordenada.h"
using namespace std;

Coordenada::Coordenada(double xx, double yy, double zz):x(xx),y(yy),z(zz) {}
//Coordenada::Coordenada(double r, double O):x(r*cos(O)),y(r*sin(O)){}
double Coordenada::obtenerX() {
    return x;
}
double Coordenada::obtenerY() {
    return y;
}
double Coordenada::obtenerZ() {
    return z;
}


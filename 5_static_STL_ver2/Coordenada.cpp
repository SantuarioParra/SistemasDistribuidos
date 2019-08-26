//
// Created by root on 22/08/19.
//

#include <iostream>
#include "cmath"
#include "Coordenada.h"
using namespace std;
Coordenada::Coordenada(double xx, double yy):x(xx),y(yy) {}
//Coordenada::Coordenada(double r, double O):x(r*cos(O)),y(r*sin(O)){}
double Coordenada::obtenerX() {
    return x;
}
double Coordenada::obtenerY() {
    return y;
}


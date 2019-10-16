//
// Created by fernando on 14/10/19.
//
#include "Coordenada.h"
Coordenada::Coordenada(int x, int y) {
    X=x;
    Y=y;
}
void Coordenada::setX(int x) {
    X=x;
}
void Coordenada::setY(int y) {
    Y=y;
}
int Coordenada::getY() {
    return Y;
}
int Coordenada::getX() {
    return X;
}



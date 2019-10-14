#include "Movimientos.h"


//
// Created by fernando on 07/10/19.
//
Movimientos::Movimientos(int x, int y) {
    srand(time(NULL));
    X=x;
    Y=y;
}
void Movimientos::recto() {

}

void Movimientos::circular() {
    pair<int,int> coordenadas;
    double PI = 3.14159265359;
    int R = 0, center = 0, aumentoX=0, aumentoY=0;
    R = 10 + rand() % 30;
    center = rand() % 550;
    aumentoX = 10 + (rand() % 500);
    aumentoY = 10 + (rand() % 500);
    gfx_clear();
    for (double t = 0; t < 2 * PI; t += 0.05) {
        X = R * cos(t) + center;
        Y = R * sin(t) + center;
        coordenadas.first=X;
        coordenadas.second=Y;
        movimientos.push_back(coordenadas);
        cout << X << Y << endl;
    }
}

void Movimientos::ondular() {
}

int Movimientos::getX() {
    return X;
}

int Movimientos::getY() {
    return Y;
}

vector<pair<int,int>> Movimientos::getMovimientos() {
    return movimientos;
}

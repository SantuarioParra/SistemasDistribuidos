#include "Movimientos.h"


//
// Created by fernando on 07/10/19.
//
Movimientos::Movimientos() {
    coordenada.setX(10+rand()%590);
    coordenada.setY(0);
}

void Movimientos::recto() {
    cout << "Coordenadas inicial recto: " << coordenada.getX() << "," << coordenada.getY() << endl;
    if (rand() % 2 != 0) {
        int X = coordenada.getX();
        for (int t = 0; t < 50; t++) {
            coordenada.setX(X+t);
            coordenada.setY(coordenada.getY());
            cout << "Movimiento recto: " << coordenada.getX() << " - " << coordenada.getY() << endl;
            movimientos.push_back(coordenada);
        }
    } else {
        int Y=coordenada.getY();
        for (int t = 0; t < 50; t++) {
            coordenada.setY(Y+t);
            coordenada.setX(coordenada.getX());
            cout << "Movimiento recto: " << coordenada.getX() << " - " << coordenada.getY() << endl;
            movimientos.push_back(coordenada);
        }
    }

}

void Movimientos::circular() {
    cout << "Coordenadas inicial Circulo: " << coordenada.getX() << "," << coordenada.getY() << endl;
    double R = 5+ rand() % 30;
    int Y = coordenada.getY(), X = coordenada.getX();
    for (double t = 0; t < 2*PI; t += 0.05) {
        coordenada.setX(R*(cos(t))+X-R);
        coordenada.setY(R*(sin(t))+Y);
        movimientos.push_back(coordenada);
        cout << "Coordenadas circulo: " << coordenada.getX() << "," << coordenada.getY() << endl;
    }
}

void Movimientos::ondular() {
    cout << "Coordenadas inicial ondular: " << coordenada.getX() << "," << coordenada.getY() << endl;
    int Y = coordenada.getY(), X = coordenada.getX();
    for (double t =0 ; t <50; t++) {
        coordenada.setY(Y+sin((X+t)/2)*5);
        coordenada.setX(X+t);
       /* coordenada.setX(sin((X+t)/2)*5);
        coordenada.setY(X+t);*/
        movimientos.push_back(coordenada);
        cout << "Coordenadas Onda: " << coordenada.getX() << "," << coordenada.getY() << endl;
    }
}


vector<Coordenada> Movimientos::getMovimientos() {
    return movimientos;
}

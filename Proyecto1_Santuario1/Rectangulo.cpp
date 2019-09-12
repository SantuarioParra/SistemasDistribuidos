//
// Created by root on 22/08/19.
//
#include <iostream>
#include "Rectangulo.h"

using namespace std;
Rectangulo::Rectangulo():superiorIzq(0,0),inferiorDer(0,0) {}
Rectangulo::Rectangulo(double xSupIzq, double ySupIzq, double xInfDer, double yInfDer):superiorIzq(xSupIzq,ySupIzq),inferiorDer(xInfDer,yInfDer) {}
Rectangulo::Rectangulo(Coordenada coordenadaIzq,Coordenada coordenadaDer) {
    inferiorDer = coordenadaDer;
    superiorIzq = coordenadaIzq;
}
void Rectangulo::imprimeEsq() {
    cout << "Para la esquina superior izquierda.\n";
    cout << "x = " << superiorIzq.obtenerX() << " y = " << superiorIzq.obtenerY() << endl;
    cout << "Para la esquina inferior derecha.\n";
    cout << "x = " << inferiorDer.obtenerX() << " y = " << inferiorDer.obtenerY() << endl;
}
double Rectangulo::obtenerArea(){
    double alto,ancho,area;
    alto = obtieneSupIzq().obtenerY() - obtieneInfDer().obtenerY();
    ancho = obtieneInfDer().obtenerX() - obtieneSupIzq().obtenerX();
    area=alto*ancho;
    return area;
}
Coordenada Rectangulo::obtieneSupIzq() {
    return superiorIzq;
}
Coordenada Rectangulo::obtieneInfDer() {
    return inferiorDer;
}



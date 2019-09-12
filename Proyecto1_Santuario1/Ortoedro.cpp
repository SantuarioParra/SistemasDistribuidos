//
// Created by Shado on 12/09/2019.
//
#include <iostream>
#include "Rectangulo.h"
#include "Coordenada.h"
#include "Ortoedro.h"

using namespace std;

double Ortoedro::obtieneArea() {
    double areaBases,areaCaras;
    areaBases=base1.obtenerArea()+base2.obtenerArea();
    areaCaras= cara1.obtenerArea()+cara2.obtenerArea()+cara3.obtenerArea()+cara4.obtenerArea();
    return areaBases+areaCaras;
}
double Ortoedro::obtieneVolumen() {

}
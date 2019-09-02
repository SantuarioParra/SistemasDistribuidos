//
// Created by Shado on 01/09/2019.
//
#include "proyecto.h"
#include <iostream>
#include <cmath>

using namespace std;

double Proyecto::RaizCuadrada(double n) {
    double r = n;
    double h = 0.0;
    do {
        h = r;
        if (r > 0) {
            r= ((n/r)+r)*.5;
            r = round( r*10000)/10000;
        } else {
            break;
        }
    } while (h != r);

    return r;
}

double Proyecto::AlturaEdificio(double segundos) {
    double  altura = 0;
    altura = (GRAVEDAD*.5)*pow(segundos,2.0);
    return altura ;
}

void Proyecto::ConvertirSegundos(double segundos) {
    int  horas,minutos;
    horas = segundos/HORA;
    minutos = ((segundos-horas*HORA)/MINUTO);
    segundos = segundos-(horas*HORA+minutos*MINUTO);
    cout<<horas<<"h:"<<minutos<<"m:"<<segundos<<"s"<<endl;
}
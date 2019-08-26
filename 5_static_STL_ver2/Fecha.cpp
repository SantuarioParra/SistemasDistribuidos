//
// Created by root on 21/08/19.
//
#include "Fecha.h"
#include <iostream>
using namespace std;

int Fecha::vecesMuestF=0;

int Fecha::getVecesMuestF() {
    return vecesMuestF;
}


Fecha::Fecha(int dd, int mm, int aaaa) {
    mes = mm;
    dia = dd;
    anio = aaaa;
}
void Fecha::inicializaFecha(int dd, int mm, int aaaa) {
    anio = aaaa;
    mes = mm;
    dia = dd;
}

void Fecha::muestraFecha() {
    cout << "La fecha es(dia-mes-año): " << dia << "-" << mes << "-" << anio << endl;
    vecesMuestF++;
}

void Fecha::convierte(){
    cout<<"La conversion es : "<< anio*10000 + mes*100 + dia<<endl;
}

void Fecha::leapyr() {
    bool bisiesto = anio % 4 == 0 || anio % 400 ==0;
    string res = bisiesto == 1 ? "SI":"NO";
    cout<<"El año es bisiesto? :"<< res << endl;
}
void Fecha::leapyr2() {
    int res = 0;
    for(int i = 1 ;i<anio;i++){
        bool bisiesto = i % 4 == 0 && ( i % 400 ==0 || i%100!=0);
        res += bisiesto;
    }
    cout << "Cantidad de años Bisiestos: " << res << endl;
}
//
// Created by fernando on 29/08/19.
//
#include "palabras.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string Palabras::generarPalabra() {
    string palabra;
    for(int i =0; i<3 ; i++){
        int ascii=0;
        ascii = 65+(rand()%25);
        palabra+=(char)(ascii);
    }

    return palabra;
};
string Palabras::generarPalabrota(int n) {
    string palabrota;
    for (int i = 0; i <n ; ++i) {
        palabrota += ' '+ generarPalabra()+' ';
    }
    return palabrota;
}

void Palabras::buscarIPN(string palabra) {

    if(palabra.find("IPN")== true){
        cout<<"Si hay IPN"<<endl;
    }else
        cout<<"No hay IPN"<<endl;

}

char* Palabras::generarPalabraC() {
    char palabra [4];
    for(int i =0; i<3 ; i++){
        int ascii=0;
        ascii = 65+(rand()%25);
        palabra[i]=(char)(ascii);
    }
    return palabra;
}
char* Palabras::generarPalabrotaC(int n) {
    char * palabrota;

    return palabrota;
}


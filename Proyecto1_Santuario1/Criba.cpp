//
// Created by Shado on 12/09/2019.
//
#include <iostream>
#include <cmath>
#include "Criba.h"

using namespace std;

void Criba::llenarCriba() {
    for (int i = 1; i <= numeros; i++) {
        Numero numero(i, true);
        criba.push_back(numero);
    }
}

void Criba::imprimirCriba() {
    for (int i = 0; i < criba.size(); i++) {
        Numero a = criba[i];
        cout << a.getNumero() << " - " << a.getPrimo() << ", ";
    }
}

void Criba::obtenerPrimos() {
    for (int i = 0; i < (int) sqrt(criba.size()); i++) {
        Numero n = criba[i];
        if (n.getNumero() == 1) {
            n.setPrimo(false);
            criba[i] = n;
        } else {

            for (int j = i + 1; j < criba.size(); j++) {
                Numero primo = criba[j];
                if ((primo.getPrimo() != false) && (primo.getNumero() % n.getNumero() == 0)) {
                    primo.setPrimo(false);
                    criba[j] = primo;
                } else {
                    continue;
                }
            }
        }

    }
}

void Criba::imprimirPrimos() {
    cout << "\n ----PRIMOS----" << endl;
    for (int i = 0; i < criba.size(); i++) {
        Numero a = criba[i];
        if (a.getPrimo() != false)
            cout << a.getNumero() << ", ";
    }
}
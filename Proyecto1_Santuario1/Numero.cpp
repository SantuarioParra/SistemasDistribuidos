//
// Created by Shado on 12/09/2019.
//
#include <iostream>
#include "Numero.h"


int Numero::getNumero() {
    return this->numero;
}
bool Numero::getPrimo() {
    return this->primo;
}
void Numero::setPrimo(bool primo) {
    this->primo = primo;
}

//
// Created by fernando on 29/08/19.
//

#ifndef INC_7_STRINGS_PALABRAS_H
#define INC_7_STRINGS_PALABRAS_H

#include <iostream>
#include <string>

using namespace std;

class Palabras {

public:
    string generarPalabra();
    string generarPalabrota(int n);
    void buscarIPN(string palabra);
    char* generarPalabraC();
    char* generarPalabrotaC(int n);
private:

};

#endif //INC_7_STRINGS_PALABRAS_H

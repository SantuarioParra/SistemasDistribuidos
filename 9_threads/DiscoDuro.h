//
// Created by fernando on 05/09/19.
//

#ifndef INC_9_THREADS_DISCODURO_H
#define INC_9_THREADS_DISCODURO_H

#include <iostream>
using namespace std;
class DiscoDuro{
public:
    DiscoDuro(){};
    DiscoDuro(string cadenota):Cadenota(cadenota){};
    void palabraPorPalabra();
    void letraPorLetra();
    void textoEntero();
private:
    string Cadenota;
    char buffer[BUFSIZ];
};
#endif //INC_9_THREADS_DISCODURO_H

#include <iostream>
#include "palabras.h"
#include "DiscoDuro.h"

int main() {
    Palabras p;
    string Cadenota;
    Cadenota= p.generarPalabrota(1757600);
    DiscoDuro discoDuro (Cadenota);
    //discoDuro.letraPorLetra();
    discoDuro.palabraPorPalabra();
}
//
// Created by Shado on 12/09/2019.
//

#ifndef PROYECTO1_SANTUARIO1_CRIBA_H
#define PROYECTO1_SANTUARIO1_CRIBA_H
class Criba{
public:
    Criba(int n):numeros(n){}
    void llenarCriba();
    void obtenerPrimos();
private:
    int numeros;
};
#endif //PROYECTO1_SANTUARIO1_CRIBA_H

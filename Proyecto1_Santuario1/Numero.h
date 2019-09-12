//
// Created by Shado on 12/09/2019.
//

#ifndef PROYECTO1_SANTUARIO1_NUMERO_H
#define PROYECTO1_SANTUARIO1_NUMERO_H
class Numero{
public:
    Numero(){};
    Numero(int num, bool prim):numero(num),primo(prim){};
    int getNumero();

    bool getPrimo();

    void setPrimo(bool primo);
private:
    int numero;
    bool primo;
};
#endif //PROYECTO1_SANTUARIO1_NUMERO_H

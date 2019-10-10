//
// Created by fernando on 07/10/19.
//

#ifndef PROYECTO2_WORMS_WORM_H
#define PROYECTO2_WORMS_WORM_H

#include <vector>
#include "gfx.h"

using namespace std;
class Worm{
public:
    Worm()= default;
    Worm(int tam);
    void setTamanio(int tam);
    int getTamanio();
    void printWorms(int y);
private:
int longitud;
};
#endif //PROYECTO2_WORMS_WORM_H

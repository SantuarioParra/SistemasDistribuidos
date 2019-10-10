//
// Created by fernando on 07/10/19.
//

#ifndef PROYECTO2_WORMS_MOVIMIENTOS_H
#define PROYECTO2_WORMS_MOVIMIENTOS_H
#include <utility>
#include <vector>
using namespace std;
class Movimientos{
public:
    vector<pair<int,int>>recto(int x, int y);
    vector<pair<int,int>>circular(int x, int y);
    vector<pair<int,int>>ondular(int x, int y);

private:
    int X,Y;
    vector<pair<int,int>> coordenadas;
};
#endif //PROYECTO2_WORMS_MOVIMIENTOS_H

//
// Created by fernando on 14/10/19.
//

#ifndef PROYECTO2_WORMS_COORDENADA_H
#define PROYECTO2_WORMS_COORDENADA_H
class Coordenada{
private:
    int X,Y;
public:
    Coordenada()= default;
    Coordenada(int x, int y);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
};
#endif //PROYECTO2_WORMS_COORDENADA_H

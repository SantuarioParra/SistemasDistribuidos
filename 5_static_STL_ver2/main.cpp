#include <iostream>
#include "Fecha.h"
#include "PoligoIrregular.h"
#include <cmath>

using namespace std;

int main() {
/*
    int n =100;

    srand(time(NULL));
    PoligonoIrreg a;

    vector<PoligonoIrreg> poligonos;
    poligonos.reserve(10);

    for (int x = 0; x<n ; x++){
        if(poligonos.size()<n){
            poligonos.resize(poligonos.size()+1);
            for (int i = 0; i < rand() % 100; ++i) {
                Coordenada xy(rand() % 100, rand() % 100);
                a.addVertice(xy);
            }
            poligonos[x]=a;
        }else{
            for (int i = 0; i < rand() % 100; ++i) {
                Coordenada xy(rand() % 100, rand() % 100);
                a.addVertice(xy);
            }
            poligonos[x]=a;
        }

    }

    cout <<"Poligonos creados"<<poligonos.size()<<endl;
    cout << "Vertices creados por los Poligonos: " << a.getVecesMuestF() << endl;
*/

    int n =100;

    srand(time(NULL));
    PoligonoIrreg a;

    vector<PoligonoIrreg> poligonos;

    for (int x = 0; x<n ; x++){

            for (int i = 0; i < rand() % 100; ++i) {
                Coordenada xy(rand() % 100, rand() % 100);
                a.addVertice(xy);
            }
            poligonos.push_back(a);

    }

    cout <<"Poligonos creados"<<poligonos.size()<<endl;
    cout << "Vertices creados por los Poligonos: " << a.getVecesMuestF() << endl;


}
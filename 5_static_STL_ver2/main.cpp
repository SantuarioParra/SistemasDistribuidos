#include <iostream>
#include "Fecha.h"
#include "PoligoIrregular.h"
#include <cmath>
using namespace std;

int main() {
    srand(time(NULL));
    PoligonoIrreg a, b;

    vector<PoligonoIrreg> AA;
    AA.reserve(1000);

    for (int i = 0; i < 100; ++i) {
        Coordenada xy (rand()%100, rand()%100);
        a.addVertice(xy);
    }
    a.printVertice();

    for (int i = 0; i < 10; ++i) {
        Coordenada xy (rand()%100, rand()%100);
        b.addVertice(xy);
    }
    b.printVertice();


    cout<<"PoligonosCreados: "<<a.getVecesMuestF()<<endl;
}
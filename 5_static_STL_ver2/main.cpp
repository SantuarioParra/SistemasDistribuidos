#include <iostream>
#include "Fecha.h"
#include "PoligoIrregular.h"
#include <cmath>

using namespace std;

int main() {
    /*int n = 100000;

    PoligonoIrreg b;

    vector<PoligonoIrreg> poligonos;
    poligonos.reserve(n);

    for (int x = 0; x < n; x++) {
        int r = rand() % 100;
        PoligonoIrreg a;
        for (int i = 0; i < r; ++i) {

            Coordenada xy(rand() % 10, rand() % 10);
            a.addVertice(xy);
        }
        poligonos[x] = a;

    }

    cout << "Poligonos creados: " << n << endl;
    cout << "Vertices creados por los Poligonos: " << b.getVecesMuestF() << endl;

    return 0;*/

    int n = 100000;

    PoligonoIrreg a;

    vector<PoligonoIrreg> poligonos;

    for (int x = 0; x < n; x++) {
        int r = rand() % 100;
        PoligonoIrreg b;
        for (int i = 0; i < r; ++i) {
            Coordenada xy(rand() % 10, rand() % 10);
            b.addVertice(xy);
        }
        poligonos.push_back(b);

    }

    cout << "Poligonos creados " << poligonos.size() << endl;
    cout << "Vertices creados por los Poligonos: " << a.getVecesMuestF() << endl;
}
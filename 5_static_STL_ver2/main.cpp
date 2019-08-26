#include <iostream>
#include "Fecha.h"
using namespace std;

int main() {
    Fecha a, b, c,d(21, 9, 1973);
    b.inicializaFecha(17, 6, 2019);
    a.muestraFecha();
    cout << "Se ha mandado llamar muestraFecha() " << a.getVecesMuestF() << " veces\n";
    b.muestraFecha();
    cout << "Se ha mandado llamar muestraFecha() " << b.getVecesMuestF() << " veces\n";
    c.muestraFecha();
    cout << "Se ha mandado llamar muestraFecha() " << c.getVecesMuestF() << " veces\n";
    a.convierte();
    b.leapyr();
    b.leapyr2();
}
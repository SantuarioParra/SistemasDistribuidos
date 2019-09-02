#include <iostream>
#include <iomanip>
#include "proyecto.h"
using namespace std;

int main() {
    double  n,i,c;
    Proyecto p;
    cout<<"Introduzca el numero a sacar la raiz: "<<endl;
    cin>>n;
    cout << "La raiz de "<<n<<" es igual a : "<<p.RaizCuadrada(n) <<endl;

    cout<<"Introduzca el tiempo en segundos : "<<endl;
    cin>>i;
    cout << "La altura es igual a : "<<p.AlturaEdificio(i) <<"m"<<endl;

    cout<<"Introduzca el tiempo en segundos a convertir: "<<endl;
    cin>>c;
    p.ConvertirSegundos(c);
}
#include <iostream>
#include <iomanip>
#include "proyecto.h"
#include "temperatura.h"
#include "Fraccion.h"

using namespace std;

int main() {
   /* double  n,i,c;
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

    Temperatura t;
    int opcion=0;
    double temperatura = 0;
    while(true){
        cout<< "Ingrese 1 si desea introducir temperatura o 2 si desea consultar una temperatura ya almacenada y 3 si desea salir" << endl;
        cin >> opcion;

        switch (opcion){
            case 1:
                cout<< "Ingrese 1 si desea introducir K, 2 si desea introducir C y 3 si desea introducir F seguido de la temperatura separados por un espacio"<< endl;
                cin >> opcion >> temperatura;
                switch (opcion) {
                    case 1:
                        t.setTempKelvin(temperatura);
                        break;
                    case 2:
                        t.setTempCelsius(temperatura);
                        break;
                    case 3:
                        t.setTempFahrenheit(temperatura);
                        break;
                }
                break;
            case 2:
                cout << "Ingrese 1 si desea obtener el valor almacenado de la temperatura en K, 2 en C y 3 en F" << endl;
                cin >> opcion;
                switch (opcion) {
                    case 1:
                        t.printTempKelvin();
                        break;
                    case 2:
                        t.printCelsius();
                        break;
                    case 3:
                        t.printTempFahrenheit();
                        break;
                }
                break;
            case 3:
                exit(0);
                break;

        }
    }*/

   Fraccion f (18,15);
   f.printFraccionReducida();
   cout<<f.printResultado()<<endl;

}
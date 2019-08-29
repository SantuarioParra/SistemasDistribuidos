#include <iostream>
#include "palabras.h"
#include <string>
using namespace std;

int main() {
    srand(time(NULL));
    //ej1
    /*int n;
    string line ;
    cin >> n;
    getline(cin, line);
    cout<<n<<endl;
    cout<<line<<endl;*/
    //ej2
    /*string cadena("ESCOM");
    cout << cadena[6] << endl;

    cout << cadena.at(6) << endl;*/
    //
    Palabras p;
    string palabra= p.generarPalabrota(100000);
    p.buscarIPN(palabra);
    cout<<palabra;
}
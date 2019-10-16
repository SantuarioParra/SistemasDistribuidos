#include <iostream>
#include "Solicitud.h"

#define puerto 6666

using namespace std;

int main(int argc, char const *argv[]) {
    if (argc != 3) {
        cout << "Forma de uso: " << argv[0] << " ip num1 num2\n, numero solicitudes";
        exit(0);
    }

    int argumentos[3];

    argumentos[0] = 5;
    argumentos[1] = 5;

    Solicitud solicitud;
    int res,ndb=0;;
    int n, i = 0;
    int total = 0;

    n = atoi(argv[2]);
    while (i < n) {
        argumentos[0] = 1 + rand() % 10;
        total += argumentos[0];
        memcpy(&res, solicitud.doOperation((char *) argv[1], puerto, SUMA, (char *) &argumentos), 4);
        cout << "Estado de cuenta real: " << total << endl;
        if (res==-1){
            total=-argumentos[0];
            cout<<"Total despues de un res-1 "<<total<<endl;
        }else{
            ndb=res;
            cout << "Estado de cuenta actual: " << ndb << endl;
        }
        if (total != ndb) {
            cout << "El saldo no corresponde al valor real" << endl;
            cout << "Estado de cuenta actual: " << ndb << endl;
            cout << "Estado de cuenta real: " << total << endl;
            exit(2);
        }
        i++;
    }
    cout << "Valor real de depositos:" << total << endl;

    return 0;
}

#include <iostream>
#include "PaqueteDatagrama.h"
#include "SocketDatagrama.h"
using namespace std;

int main() {
    PaqueteDatagrama paquetazo;
    paquetazo.inicializaIp((char *)"10.100.79.33");
    paquetazo.inicializaDatos((char*)"Holas");
    paquetazo.inicializaPuerto(7200);
    SocketDatagrama socketServidor;
        socketServidor.recibe(paquetazo);

}
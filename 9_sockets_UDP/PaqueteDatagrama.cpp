//
// Created by fernando on 25/09/19.
//

#include <cstring>
#include "PaqueteDatagrama.h"
#include "SocketDatagrama.h"

void PaqueteDatagrama::inicializaIp(char *IP) {
    memcpy(ip, &IP, sizeof(IP));
}

void PaqueteDatagrama::inicializaPuerto(int PUERTO) {
    this->puerto = PUERTO;
}

void PaqueteDatagrama::inicializaDatos(char *DATOS) {
    memcpy(datos, &DATOS, sizeof(DATOS));
}
char* PaqueteDatagrama::obtieneDatos() {
    return this->datos;
}



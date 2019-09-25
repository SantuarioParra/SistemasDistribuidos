//
// Created by fernando on 25/09/19.
//

#include <cstring>
#include "PaqueteDatagrama.h"
#include "SocketDatagrama.h"

PaqueteDatagrama::PaqueteDatagrama(char *DATOS, unsigned int LONGITUD, char *IP, int PUERTO) {
    puerto = PUERTO;
    longitud = LONGITUD;
    memcpy(ip,&IP, sizeof(IP));
    memcpy(datos, &DATOS, longitud);
}
PaqueteDatagrama::PaqueteDatagrama(unsigned int LONGITUD) {
    longitud=LONGITUD;
}

void PaqueteDatagrama::inicializaIp(char *IP) {
    memcpy(ip, &IP, sizeof(IP));
}

void PaqueteDatagrama::inicializaPuerto(int PUERTO) {
    this->puerto = PUERTO;
}

void PaqueteDatagrama::inicializaDatos(char *DATOS) {
    memcpy(datos, &DATOS, longitud);
}

char *PaqueteDatagrama::obtieneDatos() {
    return datos;
}

char *PaqueteDatagrama::obtieneDireccion() {
    return ip;
}

int PaqueteDatagrama::obtienePuerto() {
    return puerto;
}

unsigned int PaqueteDatagrama::obtieneLongitud() {
    return longitud;
}

PaqueteDatagrama::~PaqueteDatagrama() {
    delete datos, longitud, ip, puerto;
}

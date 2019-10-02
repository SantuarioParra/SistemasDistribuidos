//
// Created by fernando on 30/09/19.
//
#include <iostream>
#include <cstring>
#include "Respuesta.h"

using namespace std;

Respuesta::Respuesta(int pl) {
    socketlocal = new SocketDatagrama(pl);
}

struct mensaje *Respuesta::getRequest() {
    PaqueteDatagrama paqueteDatagrama(sizeof(struct mensaje));
    socketlocal->recibe(paqueteDatagrama);
    memcpy(response.arguments, paqueteDatagrama.obtieneDatos(), sizeof(struct mensaje));
    return &response;
}

void Respuesta::sendReply(char *respuesta, char *IP, int PUERTO) {//respuesta de la operacion
    memcpy(response.arguments, respuesta, sizeof(struct mensaje));
    PaqueteDatagrama paqueteDatagrama((char *) &response, sizeof(struct mensaje), IP, PUERTO);
    socketlocal->envia(paqueteDatagrama);
}

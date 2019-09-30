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
    memcpy(response.arguments,paqueteDatagrama.obtieneDatos(),paqueteDatagrama.obtieneLongitud());
    response.menssageType=1;
    return &response;
}

void Respuesta::sendReply(char *respuesta) {
    response = getRequest();
}

//
// Created by fernando on 30/09/19.
//
#include <iostream>
#include <cstring>
#include "Respuesta.h"
#include "mensaje.h"

using namespace std;

Respuesta::Respuesta(int pl) {
    socketlocal = new SocketDatagrama(pl);
}

struct mensaje * Respuesta::getRequest() {
    PaqueteDatagrama rec(sizeof(struct mensaje));
    socketlocal->recibe(rec);
    memcpy(&response,rec.obtieneDatos(),TAM_MAX_DATA);
    return &response;
}

void Respuesta::sendReply(char *respuesta, char *IP, int PUERTO) {//respuesta de la operacion
    PaqueteDatagrama env(sizeof(struct mensaje));
    memcpy(response.arguments,respuesta,TAM_MAX_DATA);
    response.messageType=1;
    response.requestId=1;
    response.operationId=0;
    env.inicializaPuerto(PUERTO);
    env.inicializaIp(IP);
    env.inicializaDatos((char *)&response);
    socketlocal->envia(env);
}

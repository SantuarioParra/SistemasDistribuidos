//
// Created by fernando on 30/09/19.
//
#include "Solicitud.h"
#include "mensaje.h"
#include <iostream>
#include <cstring>

using namespace std;
Solicitud::Solicitud(){
    socketLocal = new SocketDatagrama(0);
}
char* Solicitud::doOperation(char *IP, int Puerto, int operationId, char *arguments) {
    PaqueteDatagrama env(sizeof(struct mensaje));
    PaqueteDatagrama rec(sizeof(struct mensaje));
    env.inicializaPuerto(Puerto);
    env.inicializaIp(IP);
    memcpy(message.arguments,arguments,TAM_MAX_DATA);
    message.messageType=0;
    message.requestId=0;
    message.operationId=operationId;
    env.inicializaDatos((char *)&message);
    socketLocal->envia(env);
    socketLocal->recibe(rec);
    memcpy(&message,rec.obtieneDatos(),sizeof(struct mensaje));
    //cout<<men.arguments<<"Si recive respuesta"<<endl;
    return message.arguments;
}


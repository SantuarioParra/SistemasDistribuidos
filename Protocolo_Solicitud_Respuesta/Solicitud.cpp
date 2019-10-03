//
// Created by fernando on 30/09/19.
//
#include "Solicitud.h"
#include <iostream>
#include <cstring>

using namespace std;

char* Solicitud::doOperation(char *IP, int Puerto, int operationId, char *arguments) {
    socketLocal = new SocketDatagrama(0);
    memcpy(message.arguments,arguments, TAM_MAX_DATA);
    message.operationId = operationId;
    message.menssageType = 0;
    PaqueteDatagrama paqueteDatagrama ((char*)&message, sizeof(struct mensaje),IP,Puerto);
    socketLocal->envia(paqueteDatagrama);
    socketLocal->recibe(paqueteDatagrama);
    memcpy(&message,(mensaje *)paqueteDatagrama.obtieneDatos(), TAM_MAX_DATA);
    return message.arguments;
}


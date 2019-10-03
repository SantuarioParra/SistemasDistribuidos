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
    PaqueteDatagrama paqueteDatagrama (sizeof(response));
    socketlocal->recibe(paqueteDatagrama);
    cout<<"Datos recibidos: "<<paqueteDatagrama.obtieneDatos()<<endl;
    memcpy(&response.arguments, paqueteDatagrama.obtieneDatos(),TAM_MAX_DATA);
    return &response;
}

void Respuesta::sendReply(char *respuesta, char *IP, int PUERTO) {//respuesta de la operacion
    memcpy(response.arguments, respuesta, sizeof(struct mensaje));
    PaqueteDatagrama paqueteDatagrama((char *) &response, sizeof(struct mensaje), IP, PUERTO);
    socketlocal->envia(paqueteDatagrama);
}

//
// Created by fernando on 30/09/19.
//

#ifndef PROTOCOLO_SOLICITUD_RESPUESTA_SOLICITUD_H
#define PROTOCOLO_SOLICITUD_RESPUESTA_SOLICITUD_H

#include "SocketDatagrama.h"
#include "mensaje.h"

class Solicitud{
public:
    Solicitud(){};
    char* doOperation(char* IP,int Puerto, int operationId, char* arguments);

private:
    SocketDatagrama *socketLocal;
    struct mensaje message;
};
#endif //PROTOCOLO_SOLICITUD_RESPUESTA_SOLICITUD_H

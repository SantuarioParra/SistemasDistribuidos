//
// Created by fernando on 30/09/19.
//

#ifndef PROTOCOLO_SOLICITUD_RESPUESTA_MENSAJE_H
#define PROTOCOLO_SOLICITUD_RESPUESTA_MENSAJE_H

#define TAM_MAX_DATA 4000
#define suma 1

struct mensaje {
    int messageType;
    unsigned int requestId;
    int operationId;
    char arguments[TAM_MAX_DATA];
};

#endif //PROTOCOLO_SOLICITUD_RESPUESTA_MENSAJE_H

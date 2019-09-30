//
// Created by fernando on 30/09/19.
//

#ifndef PROTOCOLO_SOLICITUD_RESPUESTA_RESPUESTA_H
#define PROTOCOLO_SOLICITUD_RESPUESTA_RESPUESTA_H

#include "SocketDatagrama.h"
#include "mensaje.h"

class Respuesta {
public:
    Respuesta(int pl);

    struct mensaje *getRequest(void);

    void sendReply(char *respuesta);

private:
    SocketDatagrama *socketlocal;
    struct mensaje response;
};

#endif //PROTOCOLO_SOLICITUD_RESPUESTA_RESPUESTA_H

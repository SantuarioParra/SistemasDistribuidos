//
// Created by fernando on 25/09/19.
//
#ifndef INC_9_SOCKETS_UDP_SOCKETDATAGRAMA_H
#define INC_9_SOCKETS_UDP_SOCKETDATAGRAMA_H
#include <sys/socket.h>
#include "PaqueteDatagrama.h"

class SocketDatagrama {
public:
    SocketDatagrama(int puerto);
    SocketDatagrama(){}
    ~SocketDatagrama();

    //Recibe un paquete tipo datagrama proveniente de este socket
    int recibe(PaqueteDatagrama &p);

    //Envía un paquete tipo datagrama desde este socket
    int envia(PaqueteDatagrama &p);

private:
    struct sockaddr_in direccionLocal;
    struct sockaddr_in direccionForanea;
    int s; //ID socket
};


#endif //INC_9_SOCKETS_UDP_SOCKETDATAGRAMA_H


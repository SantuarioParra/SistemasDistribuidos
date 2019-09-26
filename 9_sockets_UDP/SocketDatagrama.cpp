//
// Created by fernando on 25/09/19.
//
#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include "SocketDatagrama.h"

SocketDatagrama::SocketDatagrama(int PUERTO) {
    s=socket(AF_INET,SOCK_DGRAM,0);
    direccionLocal.sin_family = AF_INET;
    direccionLocal.sin_port = htons(PUERTO);
    direccionLocal.sin_addr.s_addr =INADDR_ANY;
    bind(s,(struct sockaddr *) &direccionLocal, sizeof(direccionLocal));
}
int SocketDatagrama::envia(PaqueteDatagrama &p) {
    direccionForanea.sin_addr.s_addr= inet_addr(p.obtieneDireccion());
    return sendto(s,p.obtieneDatos(),p.obtieneLongitud(),0,(struct sockaddr *)&direccionForanea, sizeof(direccionForanea));

}
int SocketDatagrama::recibe(PaqueteDatagrama &p) {
    unsigned int lforanea= sizeof(direccionForanea);
    return  recvfrom(s, p.obtieneDatos(),p.obtieneLongitud(),0,(struct sockaddr *)&direccionForanea, &lforanea);

}
SocketDatagrama::~SocketDatagrama() {
}


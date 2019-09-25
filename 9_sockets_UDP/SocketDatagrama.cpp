//
// Created by fernando on 25/09/19.
//
#include <netinet/in.h>
#include <arpa/inet.h>
#include "SocketDatagrama.h"
#include "PaqueteDatagrama.h"

SocketDatagrama::SocketDatagrama(int PUERTO) {
    puerto = PUERTO;
    s=socket(AF_INET,SOCK_DGRAM,0);
    direccionForanea.sin_family =AF_INET;
    direccionForanea.sin_port = htons(p.obtienePuerto());
    direccionForanea.sin_addr.s_addr = INADDR_ANY;
    bind(s,(struct sockaddr *) &direccionForanea, sizeof(direccionForanea));
}
int SocketDatagrama::envia(PaqueteDatagrama &p) {

    sendto(s,p.obtieneDatos(),p.obtieneLongitud(),0,(struct sockaddr *)&direccionForanea, sizeof(direccionForanea));
    recvfrom(s, (char *) &res, sizeof(int), 0, NULL, NULL);

}
int SocketDatagrama::recibe(PaqueteDatagrama &p) {

}
SocketDatagrama::~SocketDatagrama() {
}


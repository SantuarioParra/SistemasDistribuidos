#include "Respuesta.h"
#include <iostream>
#include <string.h>
using namespace std;

Respuesta::Respuesta(int pl) {
    id = 0;
    socketlocal = new SocketDatagrama(pl);
    entrada = new PaqueteDatagrama(64000);
}

struct mensaje *Respuesta::getRequest() {

    socketlocal->recibe(*entrada);
    struct mensaje *res = (struct mensaje *) malloc(sizeof(struct mensaje));
    memcpy(res, entrada->obtieneDatos(), sizeof(struct mensaje));
    return res;
}

void Respuesta::sendReply(char *respuesta) {
    struct mensaje men;
    men.messageType = 1;
    memcpy(men.arguments, respuesta, 4);
    PaqueteDatagrama salida((char *) &men,
                            (unsigned int) sizeof(struct mensaje),
                            entrada->obtieneDireccion(),
                            entrada->obtienePuerto());
    socketlocal->envia(salida);
}

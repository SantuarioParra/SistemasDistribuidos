#include "Solicitud.h"
#include <string.h>
#include <cstdlib>

Solicitud::Solicitud() {
    socketlocal = new SocketDatagrama(0);
    id = 0;
}

char *Solicitud::doOperation(char *IP, int puerto, int operationId, char *arguments) {
    men.messageType = 0;
    men.operationId = operationId;
    men.requestId = id;
    memcpy(&men.arguments, arguments, TAM_MAX_DATA);
    paqueteenvia = new PaqueteDatagrama((char *) &men, sizeof(struct mensaje), IP, puerto);
    socketlocal->envia(*paqueteenvia);
    paqueterecibe = new PaqueteDatagrama(6400);
    short contador = 0;
    int i = socketlocal->recibeTimeout(*paqueterecibe, 2, 5000);
    while (i == -1 && contador < 6) {
        printf("%s\n", "Tiempo de recepción transcurrido");
        if (contador == 6) {
            printf("%s\n", "Servidor ocupado, intente más tarde");
        } else if (i == -1 && contador >= 7) {
            exit(1);
        }
        i = socketlocal->recibeTimeout(*paqueterecibe, 2, 5000);
        contador++;
        socketlocal->envia(*paqueteenvia);
    }
    memcpy(&men, paqueterecibe->obtieneDatos(), sizeof(struct mensaje));
    return men.arguments;
}

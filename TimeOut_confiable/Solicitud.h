#include "SocketDatagrama.h"
#include "mensaje.h"

#ifndef SOLICITUD_H_
#define SOLICITUD_H_

class Solicitud {
public:
  Solicitud();
  char * doOperation(char *IP, int puerto, int operationId, char *arguments);
private:
  SocketDatagrama *socketlocal;
  PaqueteDatagrama *paqueteenvia;
  PaqueteDatagrama *paqueterecibe;
  struct mensaje men;
};

#endif

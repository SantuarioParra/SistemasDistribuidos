#include "SocketDatagrama.h"
#include "mensaje.h"

#ifndef RESPUESTA_H_
#define RESPUESTA_H_

class Respuesta {
public:
  Respuesta(int pl);
  struct mensaje *getRequest(void);
  void sendReply(char *);
private:
  SocketDatagrama *socketlocal;
  PaqueteDatagrama *entrada;
};

#endif

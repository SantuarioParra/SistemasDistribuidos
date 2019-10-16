#ifndef MENSAJE_H_
#define MENSAJE_H_

#define TAM_MAX_DATA 4000
//Definicion de identificadores para operaciones permitidas
#define SUMA 1
// efinicion del formato de mensaje

struct mensaje {
  int messageType; //0= Solicitud, 1 = Respuesta , -1=repetido
  unsigned int requestId=0; //Identificador del mensaje
  int operationId; //Identificador de la operación
  char arguments[TAM_MAX_DATA];
};

#endif

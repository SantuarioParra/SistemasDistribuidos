#include "Solicitud.h"
#include <string.h>
#include <cstdlib>

Solicitud::Solicitud() {
	socketlocal = new SocketDatagrama(0);
}

char *Solicitud::doOperation(char *IP, int puerto, int operationId, char *arguments) {
	//struct mensaje *men = (struct mensaje *) malloc(sizeof(struct mensaje));
	men.messageType = 0;
	men.operationId = operationId;
  //cout << "arguments length = " << sizeof(*arguments) << "?\n";
	memcpy(&men.arguments, arguments, TAM_MAX_DATA);


	paqueteenvia = new PaqueteDatagrama((char *) &men, sizeof(struct mensaje), IP,
                                      puerto);

//	socketlocal->envia(*paqueteenvia);
  /*paqueterecibe = new PaqueteDatagrama(6400);

  short contador = 0;
  while(socketlocal->recibeTimeout(*paqueterecibe,2,5000)==-1 && contador<7){
    socketlocal->envia(*paqueteenvia);
    contador++;
    printf("%s\n", "Tiempo de recepción transcurrido");
  }*/

  socketlocal->envia(*paqueteenvia);
  paqueterecibe = new PaqueteDatagrama(6400);

  short contador = 0;
  int i=socketlocal->recibeTimeout(*paqueterecibe,2,5000);
  while(i==-1 && contador<6){
    printf("%s\n", "Tiempo de recepción transcurrido");
    if(contador==6){
      printf("%s\n", "Servidor ocupado, intente más tarde");
    }else if( i ==-1 &&contador>=7){
        exit(1);
    }
    i =socketlocal->recibeTimeout(*paqueterecibe,2,5000);
    contador++;
    socketlocal->envia(*paqueteenvia);
  }


 // socketlocal->recibe(*paqueterecibe);
	//struct mensaje men_res;
	//men_res = (struct mensaje *) (*paqueterecibe).obtieneDatos();
  memcpy(&men, paqueterecibe->obtieneDatos(), sizeof(struct mensaje));
  return men.arguments;
}

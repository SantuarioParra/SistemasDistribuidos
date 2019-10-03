#include "Respuesta.h"
#include <stdlib.h>
#include <cstring>
#include <iostream>
#include "mensaje.h"

using namespace std;

Respuesta::Respuesta(int pl)
{
	socketlocal = new SocketDatagrama(pl);
}

mensaje* Respuesta::getRequest(void)
{
	PaqueteDatagrama paquete(sizeof(mensaje));
  int r=socketlocal->recibe(paquete);
  
  if(r==0)
  	return NULL;
  	
	mensaje* m=(mensaje*)malloc(sizeof(mensaje));
	memcpy(m,paquete.obtieneDatos(),sizeof(mensaje));
	
	memcpy(m->IP,paquete.obtieneDireccion(),16*sizeof(char));
	m->puerto=paquete.obtienePuerto();
	
  	//return NULL;
/*	mensaje* m=(mensaje*)malloc(sizeof(mensaje));
	m->messageType=0;
	m->requestId=0;
	memcpy(m->IP,paquete.obtieneDireccion(),16*sizeof(char));
	m->puerto=paquete.obtienePuerto();
	m->operationId=0;
	memcpy(m->arguments,paquete.obtieneDatos(),sizeof(paquete.obtieneDireccion()));
*/	
	return m;
}
void Respuesta::sendReply(char *respuesta, char *ipCliente, int puertoCliente){
	PaqueteDatagrama envio((char*)respuesta,TAM_MAX_DATA*sizeof(char),ipCliente, puertoCliente);
	socketlocal->envia(envio);
}
#include "Solicitud.h"
#include "mensaje.h"
#include "SocketDatagrama.h"
#include <iostream>
#include <cstring>
using namespace std;

Solicitud::Solicitud(){
	socketlocal = new SocketDatagrama(7000);
}

char * Solicitud::doOperation(char *IP, int puerto, int operationId, char *arguments){
	mensaje m;
	m.operationId=operationId;
	memcpy(m.arguments,arguments,4000*sizeof(char));
	char* x=(char*)malloc(sizeof(mensaje));
	memcpy(x,&m,sizeof(mensaje));
	PaqueteDatagrama envio((char*)x,sizeof(mensaje),IP, puerto);
	socketlocal->envia(envio);
	char* ru=(char*)malloc(4000*sizeof(char));
	PaqueteDatagrama paquete(4000*sizeof(char));
	int r=socketlocal->recibe(paquete);
	memcpy(ru,paquete.obtieneDatos(),sizeof(char)*4000);
	return ru;
}
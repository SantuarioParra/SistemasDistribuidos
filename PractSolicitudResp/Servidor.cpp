#include "Respuesta.h"
#include "mensaje.h"
#include <iostream>
#include <cstring>
using namespace std;


int main(int argc,char** argv)
{
	Respuesta servidor(1234);
	mensaje* req;
	char* respuesta;
	while(1){
		req=servidor.getRequest();
		if(req!=NULL){
			cout <<"Cadena recibida: "<< req->arguments <<endl;
			respuesta=ordenar(req->arguments);
			cout <<"Cadena a enviar: "<< respuesta <<endl;
			servidor.sendReply(respuesta,req->IP,req->puerto);
		}
	}
	return 1;
}
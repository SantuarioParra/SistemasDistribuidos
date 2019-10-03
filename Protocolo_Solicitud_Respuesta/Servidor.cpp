#include "Respuesta.h"
#include "mensaje.h"
#include <iostream>
#include <cstring>
using namespace std;


int main(int argc,char** argv)
{
	Respuesta servidor(1234);
	struct mensaje prueba;
	char* respuesta;
	while(1){
		memcpy(&prueba,servidor.getRequest(), sizeof(struct mensaje));
			cout <<"Cadena recibida prro: "<<prueba.arguments<<endl;
			//respuesta=ordenar(req->arguments);
			cout <<"Cadena a enviar: "<<endl;
			//servidor.sendReply(respuesta,req->IP,req->puerto);
	}
	return 1;
}
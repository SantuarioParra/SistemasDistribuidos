#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <stdio.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <netdb.h>
#include <strings.h>
#include "SocketDatagrama.h"
#include "PaqueteDatagrama.h"
#include <iostream>
using namespace std;

int main(void)
{
   int *num;
   int res;
    SocketDatagrama servidor= (7200);
    while(1){
        PaqueteDatagrama paquete(2 * sizeof(int));     
        cout<<"Esperando a recibir"<<endl;
        servidor.recibe(paquete);
        cout << "Se recibio correctamente de la direccion: "<< paquete.obtieneDireccion()<<" con el puerto: "<<paquete.obtienePuerto()<<endl;
        num =  (int *)paquete.obtieneDatos();
        res = num[0]+num[1];
        cout << "enviando..." <<endl;
        PaqueteDatagrama paquete1((char *)&res,sizeof(char),paquete.obtieneDireccion(), paquete.obtienePuerto());
        servidor.envia(paquete1);
        cout << "se envio correctamente" <<endl;
    } 
}
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
#include "iostream"
using namespace std;


int main(int argc,char *argv[]){
    if(argc<2)
      exit(-1);
    SocketDatagrama sock(7000);    
    int numeros[2];
    int *res;
    numeros[0] = 1;
    numeros[1] = 3;
    PaqueteDatagrama envio((char * )numeros,2 * sizeof(int),argv[1], 7200);
    sock.envia(envio);
    cout << "se envio correctamente" <<endl;
    cout << "esperando..." <<endl;
    PaqueteDatagrama recvv(sizeof(char));
    sock.recibe(recvv);
    cout << "se recibio correctamente de la direccion: "<<recvv.obtieneDireccion()<<"con el puerto: "<<recvv.obtienePuerto() <<endl;
    res = (int*)recvv.obtieneDatos();
    cout << *res<<endl;

}
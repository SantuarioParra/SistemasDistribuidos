#include "Respuesta.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  Respuesta respuesta(6666);
  struct mensaje solicitud;
  int numeros[2];
  int nbd;

  while (true) {
    //solicitud = respuesta.getRequest();
    memcpy(&solicitud, respuesta.getRequest(), TAM_MAX_DATA);
    cout<<"antes del memcopy: "<<solicitud.requestId<<endl;
    //numeros[0] = solicitud.arguments
    memcpy(&numeros, solicitud.arguments, TAM_MAX_DATA);
    //memcpy(&numeros[0], solicitud.arguments, 4);
    //memcpy(&numeros[1], solicitud.arguments+4, 4);
    cout << "Solicitud recibida" << endl;
    cout << "Deposito : " << numeros[0] << endl;
    nbd += numeros[0];
    cout <<"Estado de cuenta: " << nbd << endl;
    respuesta.sendReply((char *) &nbd);
  }

  return 0;
}

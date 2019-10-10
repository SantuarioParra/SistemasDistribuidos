#include "Respuesta.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  Respuesta respuesta(6666);
  struct mensaje solicitud;
  int numeros[2];
  int sum;

  while (1) {
    //solicitud = respuesta.getRequest();
    memcpy(&solicitud, respuesta.getRequest(), sizeof(struct mensaje));
    //numeros[0] = solicitud.arguments
    memcpy(&numeros, solicitud.arguments, TAM_MAX_DATA);
    //memcpy(&numeros[0], solicitud.arguments, 4);
    //memcpy(&numeros[1], solicitud.arguments+4, 4);

    cout << "Solicitud recibida" << endl;
    cout << "num1 : " << numeros[0] << endl;
    cout << "num2 : " << numeros[1] << endl;
   // cout << "messageType: " << solicitud.messageType << endl;
   // cout << "operationId: " << solicitud.operationId << endl;
    
    sum = numeros[0] + numeros[1];
    cout <<"suma: " << sum << endl;
    respuesta.sendReply((char *) &sum);
  }

  return 0;
}

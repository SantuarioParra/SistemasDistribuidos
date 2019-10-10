#include <iostream>
#include "Solicitud.h"
#define puerto 6666

using namespace std;

int main(int argc, char const *argv[]) {
  if (argc != 2) {
    cout << "Forma de uso: " << argv[0] <<" ip num1 num2\n";
    exit(0);
  }

  int argumentos[2];
  //argumentos = (int *) malloc(2 * sizeof(int));
  //argumentos[0] = atoi(argv[2]);
  //argumentos[1] = atoi(argv[3]);

  argumentos[0] = 5;
  argumentos[1] = 3;

  Solicitud solicitud;
  int res;
  int n,i;

 // cout << "Solicitudes a enviar: ";
  //cin >> n ;

//  while(i < n) { 
    memcpy(&res,solicitud.doOperation((char *) argv[1], puerto, SUMA,(char *) &argumentos),4);
  //  i++;
  //}
  cout << argumentos[0] << " + "<< argumentos[1] << " = " << res << endl;

  return 0;
}

#include "Solicitud.h"
#include <iostream>
using namespace std;

int main(int argc,char** argv)
{
	Solicitud cliente;
	char mensaje[4000]={""};
	char ip[10]={'1','2','7','.','0','.','0','.','1','\0'};
	cout << "Servidor dice: "<< cliente.doOperation(argv[1],atoi(argv[2]),1,mensaje) <<endl;	
	return 1;
}
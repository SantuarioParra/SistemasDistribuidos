#include <iostream>
#include <cstring>
#include "Solicitud.h"
#include "mensaje.h"
using namespace std;

int main(int argc,char** argv)
{
	Solicitud cliente;
	int num[2]={4,1};
	//ip[10]={'1','2','7','.','0','.','0','.','1','\0'};
	cliente.doOperation(argv[1], atoi(argv[2]), 4, (char *)num);
	return 0;
}
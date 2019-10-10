#include <iostream>
#include <string.h>
#include "PaqueteDatagrama.h"
using namespace std;

PaqueteDatagrama::PaqueteDatagrama(char * d, unsigned int l, char *add, int p) {
  datos = new char[l];
  memcpy(ip, add, 16);
  longitud = l;
  memcpy(datos, d, longitud);
  puerto = p;
}

PaqueteDatagrama::~PaqueteDatagrama() {
  delete datos;
}

unsigned int PaqueteDatagrama::obtieneLongitud() {
  return longitud;
}

char * PaqueteDatagrama::obtieneDatos() {
  return datos;
}

void PaqueteDatagrama::inicializaIp(char * add) {
  memcpy(ip,add,16);
}

PaqueteDatagrama::PaqueteDatagrama(unsigned int longCadena):longitud(longCadena) {
	datos = new char[longCadena];
}

char *PaqueteDatagrama::obtieneDireccion(){
	return ip;
}

int PaqueteDatagrama::obtienePuerto(){
	return puerto;
}

void PaqueteDatagrama::inicializaPuerto(int p){
	puerto=p;
}

void PaqueteDatagrama::inicializaDatos(char * cad){
	memcpy(datos, cad, longitud);
}

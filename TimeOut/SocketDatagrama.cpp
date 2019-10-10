#include "SocketDatagrama.h"
#include <iostream>

using namespace std;

SocketDatagrama::SocketDatagrama(int p) {
  s = socket(AF_INET, SOCK_DGRAM, 0);
  bzero((char *)&direccionLocal, sizeof(direccionLocal));
  direccionLocal.sin_port = htons(p);
  direccionLocal.sin_family = AF_INET;
  direccionLocal.sin_addr.s_addr = INADDR_ANY;
  bind(s, (struct sockaddr *)&direccionLocal, sizeof(direccionLocal));
}

SocketDatagrama::~SocketDatagrama() {}

int SocketDatagrama::recibe(PaqueteDatagrama &pd) {
  socklen_t clilen = sizeof(direccionForanea);
  int length = recvfrom(s, (char *)pd.obtieneDatos(), pd.obtieneLongitud(), 0,
                  (struct sockaddr *)&direccionForanea, &clilen);
  pd.inicializaIp(inet_ntoa(direccionForanea.sin_addr));
  pd.inicializaPuerto(ntohs(direccionForanea.sin_port));
  return length;
}

int SocketDatagrama::envia(PaqueteDatagrama &pd) {
  direccionForanea.sin_port = htons(pd.obtienePuerto());
  direccionForanea.sin_family = AF_INET;
  direccionForanea.sin_addr.s_addr = inet_addr(pd.obtieneDireccion());
  return sendto(s, (char *) pd.obtieneDatos(), pd.obtieneLongitud(), 0,
                (struct sockaddr *) &direccionForanea, sizeof(direccionForanea));
}

int SocketDatagrama::recibeTimeout(PaqueteDatagrama & p, time_t segundos, suseconds_t microsegundos){
  timeout.tv_sec = segundos;
  timeout.tv_usec = microsegundos;
  setsockopt(s, SOL_SOCKET, SO_RCVTIMEO, (char *)&timeout, sizeof(timeout));

  socklen_t clilen = sizeof(direccionForanea);
  int n = recvfrom(s, (char *)p.obtieneDatos(), p.obtieneLongitud(), 0,
                (struct sockaddr *)&direccionForanea, &clilen);
  p.inicializaIp(inet_ntoa(direccionForanea.sin_addr));
  p.inicializaPuerto(ntohs(direccionForanea.sin_port));
  return n;

}

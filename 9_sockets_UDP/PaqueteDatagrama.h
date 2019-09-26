//
// Created by fernando on 25/09/19.
//

#ifndef INC_9_SOCKETS_UDP_PAQUETEDATAGRAMA_H
#define INC_9_SOCKETS_UDP_PAQUETEDATAGRAMA_H
class PaqueteDatagrama {
public:
    PaqueteDatagrama(char * DATOS, unsigned int LONGITUD, char * IP, int PUERTO);

    PaqueteDatagrama(unsigned int LONGITUD);

    PaqueteDatagrama(){}

    ~PaqueteDatagrama();

    char *obtieneDireccion();

    unsigned int obtieneLongitud();

    int obtienePuerto();

    char *obtieneDatos();

    void inicializaPuerto(int);

    void inicializaIp(char *);

    void inicializaDatos(char *);

private:
    char *datos; //Almacena los datos
    char *ip; //Almacena la IP
    unsigned int longitud; //Almacena la longitude de la cadena de datos
    int puerto; //Almacena el puerto
};

#endif //INC_9_SOCKETS_UDP_PAQUETEDATAGRAMA_H

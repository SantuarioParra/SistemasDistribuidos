//
// Created by root on 21/08/19.
//

#ifndef CONSTRUCTORES_Y_PARAMETROS_FECHA_H
#define CONSTRUCTORES_Y_PARAMETROS_FECHA_H

class Fecha {
private:
    int dia;
    int mes;
    int anio;
    static int vecesMuestF;
public:
    static int getVecesMuestF();
    Fecha(int = 3, int = 4, int = 2014);
    //Fecha(int dia, int mes, int anio);

    void inicializaFecha(int, int, int);

    void muestraFecha();

    void convierte();

    void leapyr();

    void leapyr2();
};

#endif //CONSTRUCTORES_Y_PARAMETROS_FECHA_H

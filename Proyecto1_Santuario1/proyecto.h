//
// Created by Shado on 01/09/2019.
//

#ifndef PROYECTO1_SANTUARIO1_PROYECTO_H
#define PROYECTO1_SANTUARIO1_PROYECTO_H
class Proyecto{
public:
 double RaizCuadrada(double n); //raiz cuadrada babilonica
 double AlturaEdificio(double segundos); //Altura del edificio, tiempo en segundos y salida metros;
 void ConvertirSegundos(double segundos);//Convertir horas:min:seg

private:
    const double GRAVEDAD = 9.81;
    const int HORA = 3600;
    const int MINUTO = 60;
};
#endif //PROYECTO1_SANTUARIO1_PROYECTO_H

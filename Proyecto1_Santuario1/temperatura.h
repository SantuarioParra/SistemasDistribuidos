//
// Created by Shado on 02/09/2019.
//

#ifndef PROYECTO1_SANTUARIO1_TEMPERATURA_H
#define PROYECTO1_SANTUARIO1_TEMPERATURA_H

#include <iostream>

using namespace std;

class Temperatura {
private:
    double kelvin = 0;
public:
    Temperatura() {}

    Temperatura(double tempKelvin) : kelvin(tempKelvin) {}

    void setTempKelvin(double tempKelvin);

    void setTempCelsius(double tempCelsius);

    void setTempFahrenheit(double tempFahrenheit);

    void printTempKelvin();

    void printCelsius();

    void printTempFahrenheit();

};

#endif //PROYECTO1_SANTUARIO1_TEMPERATURA_H

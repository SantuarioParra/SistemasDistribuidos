//
// Created by Shado on 02/09/2019.
//
#include "temperatura.h"
#include <iostream>

using namespace std;


void Temperatura::setTempKelvin(double tempKelvin) {
    this->kelvin = tempKelvin;
}

void Temperatura::setTempCelsius(double tempCelsius) {
    this->kelvin = 273.15 + tempCelsius;
}

void Temperatura::setTempFahrenheit(double tempFahrenheit) {
    this->kelvin = (tempFahrenheit - 32)/1.8000 + 273.15;
}

void Temperatura::printTempKelvin() {
    cout << "La temperatura en K es :" << kelvin << endl;
}

void Temperatura::printCelsius() {
    cout << "La temperatura en C es :" << kelvin - 273.15 << endl;
}

void Temperatura::printTempFahrenheit() {
    cout << "La temperatura en F es :" <<(kelvin - 273.15)*1.8000 + 32.0<< endl;
}


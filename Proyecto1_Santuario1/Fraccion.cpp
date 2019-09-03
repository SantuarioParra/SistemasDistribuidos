//
// Created by Shado on 02/09/2019.
//

#include <iostream>
#include <cmath>
#include "Fraccion.h"
using namespace std;

double Fraccion::printResultado() {
    if (denominador!=0) {
        return round((numerador / denominador)*1000) /1000;
    }else {
        cout << "No se puede divir entre cero" << endl;
        return -1;
    }
}
void Fraccion::printFraccionReducida() {
    int mod =2;
    if(denominador!=1 && denominador>0){
        do{
            if(numerador%mod==0 && denominador%mod==0){
                numerador/=mod;
                denominador/=mod;
            }else
            {
                mod++;
            }
        }
        while(mod<=numerador);
        cout<<numerador<<"/"<<denominador<<endl;
    }else{
        cout<<numerador<<"/"<<denominador<<endl;
    }
}

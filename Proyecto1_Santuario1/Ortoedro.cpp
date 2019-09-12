//
// Created by Shado on 12/09/2019.
//
#include <iostream>
#include "Rectangulo.h"
#include "Coordenada.h"
#include "Ortoedro.h"

using namespace std;
Coordenada Ortoedro::obtieneSupIzq()
{
    return superiorIzq;
}

Coordenada Ortoedro::obtieneInfDer()
{
    return inferiorDer;
}
Ortoedro::Ortoedro() : superiorIzq(0,0,0), inferiorDer(0,0,0)
{}
Ortoedro::Ortoedro(Coordenada supI,Coordenada infD) : superiorIzq(supI), inferiorDer(infD)
{}
void Ortoedro::obtieneVertices(){
    cout<<"("<< superiorIzq.obtenerX()<<","<<superiorIzq.obtenerY()<<","<< superiorIzq.obtenerZ()<<")"<<endl; //todas superior izquierda
    cout<<"("<< inferiorDer.obtenerX()<<","<<superiorIzq.obtenerY()<<","<< superiorIzq.obtenerZ()<<")"<<endl;
    cout<<"("<< superiorIzq.obtenerX()<<","<<inferiorDer.obtenerY()<<","<< superiorIzq.obtenerZ()<<")"<<endl;
    cout<<"("<< superiorIzq.obtenerX()<<","<<superiorIzq.obtenerY()<<","<< inferiorDer.obtenerZ()<<")"<<endl;
    cout<<"("<< inferiorDer.obtenerX()<<","<<inferiorDer.obtenerY()<<","<< inferiorDer.obtenerZ()<<")"<<endl;//todas inferor derecha
    cout<<"("<< superiorIzq.obtenerX()<<","<<inferiorDer.obtenerY()<<","<< inferiorDer.obtenerZ()<<")"<<endl;
    cout<<"("<< inferiorDer.obtenerX()<<","<<superiorIzq.obtenerY()<<","<< inferiorDer.obtenerZ()<<")"<<endl;
    cout<<"("<< inferiorDer.obtenerX()<<","<<inferiorDer.obtenerY()<<","<< superiorIzq.obtenerZ()<<")"<<endl;

}
double Ortoedro::obtieneArea(){
    double alto,ancho,profundo,area;
    alto = superiorIzq.obtenerY()-inferiorDer.obtenerY();
    ancho =inferiorDer.obtenerX()-superiorIzq.obtenerX();
    profundo = inferiorDer.obtenerZ()-superiorIzq.obtenerZ();
    area=(2*alto*ancho)+(2*alto*profundo)+(2*profundo*ancho);
    return area;
}
double Ortoedro::obtieneVolumen(){
    double alto,ancho,profundo,volumen;
    alto = superiorIzq.obtenerY()-inferiorDer.obtenerY();
    ancho =inferiorDer.obtenerX()-superiorIzq.obtenerX();
    profundo = inferiorDer.obtenerZ()-superiorIzq.obtenerZ();
    volumen = alto*ancho*profundo;
    return volumen;
}


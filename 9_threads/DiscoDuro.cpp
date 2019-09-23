//
// Created by fernando on 05/09/19.
//
#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <cstring>
#include <iostream>
#include <string.h>
#include "DiscoDuro.h"

using namespace std;

void DiscoDuro::letraPorLetra() {
    int destino;
    if ((destino = open("letraPorLetra.txt", O_WRONLY | O_TRUNC | O_CREAT, 0666)) == -1) {
        perror("letraPorLetra.txt");
        exit(-1);
    }
    for (char i : Cadenota) {
        write(destino, &i, 1);
    }
    fsync(destino);
    close(destino);
}

void DiscoDuro::palabraPorPalabra() {
    int destino;
    string subCad;
    if ((destino = open("palabraPorPalabra.txt", O_WRONLY | O_TRUNC | O_CREAT, 0666)) == -1) {
        perror("palabraPorPalabra.txt");
        exit(-1);
    }
    for (int i = 0; i < Cadenota.size(); i=i+3) {
        subCad = Cadenota.substr(i, i + 3);
        write(destino, &subCad, 4);
    }
    fsync(destino);
    close(destino);
}

void DiscoDuro::textoEntero() {

}
from Crypto.Random import random
import math as math


def generarCadena():
    cadena = "";
    for x in range(0, 3):
        cadena += chr(random.randrange(65, 90, 1))
    return cadena


def generarCadenota(tam):
    cadenota = ""
    for x in range(0, tam):
        cadenota += ' ' + generarCadena() + ' '
    return cadenota


def buscarIPN(cadenota):
    linea = cadenota.find("IPN", 0, len(cadenota))
    if linea != -1:
        print("IPN encontrado en la posicion: " + str(linea))
    else:
        print("IPN no encontrado")


def calculosNumericos(tamanio):
    sen = 0
    cos = 0
    tan = 0
    log = 0
    root = 0
    i = 1
    while (tamanio > i):
        sen += math.sin(i)
        cos += math.cos(i)
        tan += math.tan(i)
        log += math.log10(i)
        root += math.sqrt(i)
        i += 1


if __name__ == '__main__':
    #cadenota = generarCadenota(35152000);
   # buscarIPN(cadenota)
   calculosNumericos(10000000)

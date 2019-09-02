from Crypto.Random import random


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

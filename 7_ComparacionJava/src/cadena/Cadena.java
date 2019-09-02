package cadena;

import java.awt.event.MouseAdapter;

import static java.lang.System.exit;
import static java.lang.Math.*;

public class Cadena {

    public String generarCadena() {
        String cadena = " ";

        for (int i = 0; i < 3; i++) {
            cadena += (char) (65 + Math.random() * 25);

        }

        return cadena;
    }

    public String generarCadenota(int tamanio) {
        String cadenota = "";

        for (int i = 0; i < tamanio; i++)
            cadenota += " " + generarCadena() + "";

        return cadenota;
    }

    public void bucarIPN(String cadenota) {

        int posicion = cadenota.indexOf("IPN");
        if (posicion != -1) {
            System.out.println("IPN fue encontrado en la posicion: " + posicion);
            exit(0);
        } else {
            System.out.println("No encontramos al poli aqui...");
        }

    }

    public void calcuosMatematicos(int veces) {
        double sen = 0;
        double cos = 0;
        double tan = 0;
        double log = 0;
        double root = 0;
        int i = 1;
        while (veces > i) {
            sen += Math.sin(i);
            cos += Math.cos(i);
            tan += Math.tan(i);
            log += Math.log(i);
            root += Math.sqrt(i);
            i++;
        }
    }
}

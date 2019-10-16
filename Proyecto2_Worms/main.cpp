#include "gfx.h"
#include <unistd.h>
#include "cmath"
#include "random"
#include "Worm.h"

using namespace std;

int main() {
    srand(time(NULL));
    int t;
    int posX=600,posY=600;
    int arriba= 0,derecha= 0;
    gfx_open(600, 600, "Ejemplo Micro Animacion GFX");
    gfx_color(0, 255, 0);

    for (int i = 0; i < 3 ; ++i) {
        Worm worm;
        worm.printWorms();
    }




   /* srand(time(NULL));
    int option = 0, incrementX = 0, incrementY = 0, i=0;
    while (true) {
        if(i==50)
        {
            //gfx_color(0,300,0);
            gfx_clear();
            i=0;
        }
        option = rand() % 4;
        switch (option) {
            case 0 :
                derecha=1;
                break;
            case 1 :
                arriba=1;
                break;
            case 2 :
                derecha = -1;
                break;
            case 3 :
                arriba = -1;
                break;
        }
        posX+=derecha;
        posY+=arriba;
        gfx_point(abs(posX) % 590, abs(posY+1) % 590);gfx_point(abs(posX+1) % 590, abs(posY+1) % 590);
        gfx_point(abs(posX) % 590, abs(posY) % 590);gfx_point(abs(posX+1) % 590, abs(posY) % 590);
        i++;
        gfx_flush();
        usleep(41666); //24 fotogramas por segundo
    }*/
}
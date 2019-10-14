#include "gfx.h"
#include <unistd.h>
#include "cmath"
#include "random"
#include "Worm.h"

using namespace std;

int main() {
    int t;
    gfx_open(600, 600, "Ejemplo Micro Animacion GFX");
    gfx_color(0, 255, 0);
    Worm worm,worms;

    for (t = 0; t < 1000; t++) {
    gfx_clear();
        worm.setTamanio(1);
        worm.printWorms();
        worms.setTamanio(2);
        worms.printWorms();

        //gfx_line( (t*1-80), (t*2+40), (t*2+40), (t*3-80) );
        /*gfx_point(10, 0);
        gfx_point(590, 0);
        gfx_point(10, 590);
        gfx_point(590, 590);*/

        //gfx_line(t*5+80, sin((t*3+40)%600), t*3+40, sin((t*5+80)%600));

        gfx_flush();
        usleep(41666); //24 fotogramas por segundo
    }
    return 0;
}
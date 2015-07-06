#include "botonscreen.h"

botonscreen::botonscreen(QMainWindow *p)
{


    mover = new botones(0,0);
    mover->load_mover(pant_boton);

    girarizq = new botones(0,0);
    girarizq->load_girarizq(pant_boton);


    girarder = new botones(0,0);
    girarder->load_girarder(pant_boton);
}


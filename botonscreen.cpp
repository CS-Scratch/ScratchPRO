#include "botonscreen.h"

botonscreen::botonscreen(QMainWindow *p)
{
    int altop = 600;
    pant_boton = new QWidget(p);

    pant_boton->setGeometry(0,0,350,altop);
    pant_boton->setStyleSheet("background-color:#BDB76B");


    mover = new botones();
    mover->load_mover(pant_boton);

    girarizq = new botones();
    girarizq->load_girarizq(pant_boton);


    girarder = new botones();
    girarder->load_girarder(pant_boton);
}


#include "gatoscreen.h"

gatoscreen::gatoscreen(QMainWindow *p)
{
    int altop =600;
    pant_gat = new QWidget(p);

    pant_gat->setGeometry(650,0,350,altop);
    pant_gat->setStyleSheet("background-color:grey");
    gat = new gato(pant_gat);

}


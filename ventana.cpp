#include "ventana.h"

ventana::ventana()
{

    this->setWindowTitle("SCRATCH-PRO");
    this->setFixedSize(1000,altop);
    pant_cat = new gatoscreen(this);
    pant_botones =new botonscreen(this);

}

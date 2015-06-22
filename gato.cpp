#include "gato.h"
#include <QDebug>
#include <QRect>
#include <QGraphicsPixmapItem>

//Todavia no funciona falta el metodo Qt Mouse Event con QLabel o tmb puede ser con un sprite

gato::gato()
{
    //this->setGeometry(const QRect &
    this->setPixmap(QPixmap(":/imagen/gato.gif"));
    pos_x=0;
    pos_y=0;
    this->setGeometry(get_posx(),get_posy(),95,111);//posicion por defecto del construtor(se puede añadir tam)
}


void gato::set_posx(cifra x){
    pos_x = x;
}

void gato::set_posy(cifra y){
    pos_y = y;
}

cifra gato::get_posx(){
    return pos_x;
}

cifra gato::get_posy(){
    return pos_y;
}


void gato::mover_gato(cifra a, cifra b){
    set_posx(a);
    set_posy(b);
    this->setGeometry(get_posx(),get_posy(),95,11);
}
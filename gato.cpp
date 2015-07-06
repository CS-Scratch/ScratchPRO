#include "gato.h"
//AHORA SI FUNCIONA

gato::gato()
{
    this->setPixmap(QPixmap(":/gato.png"));
    pos_x=0;
    pos_y=0;
    this->setGeometry(get_posx(),get_posy(),90,90);

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
    this->setGeometry(get_posx(),get_posy(),100,100);
}

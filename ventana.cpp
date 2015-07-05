#include "ventana.h"
#include "gato.h"

ventana::ventana()
{

    this->setWindowTitle("SCRATCH-PRO");
    this->setFixedSize(1000,600);



    pantgat = new QWidget(this);
    pantgat->setGeometry(650,0,450,600);
    pantgat->setStyleSheet("background-color:grey;");
    gat =new gato();
    gat->setParent(pantgat);


    pantboton = new QWidget(this);
    pantboton->setGeometry(0,0,350,600);
    pantboton->setStyleSheet("background-color:white;");
    boton =new botones();
    boton->setParent(pantboton);

    pantejecutar = new QWidget(this);
    pantejecutar->setGeometry(350,0,300,600);
    pantejecutar->setStyleSheet("background-color:#D6E780;");
    //gat =new gato();
    //gat->setParent(pantgat);

}



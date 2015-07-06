#include "ventana.h"

ventana::ventana()
{

    this->setWindowTitle("SCRATCH-PRO");
    this->setFixedSize(1000,altop);



    //LA VENTANA DEL GATO
    pant_cat = new QWidget(this);
    pant_cat->setGeometry(600,0,400,altop);
    pant_cat->setStyleSheet("background-color:#FFFFFF;");
    gat = new gato();
    //IMPRIMIR AL GATO EN LA VENTA
    gat->setParent(pant_cat);


    //LA VENTANA DE LOS BOTONES
    pant_botones = new QWidget(this);
    pant_botones->setGeometry(0,0,600,altop);
    pant_botones->setStyleSheet("background-color:#BDB76B;");
    //IMPRIMIR A LOS BOTONES
    move = new mover(gat);
    move->setParent(pant_botones);

    giroder = new girarder();
    giroder->setParent(pant_botones);
    giroizq = new girarizq();
    giroizq->setParent(pant_botones);

    //IMPRIME UNA LINEA PARA SEPARAR LAS 2 PANTALLAS
    linea = new QWidget(this);
    linea->setGeometry(300,0,5,altop);
    linea->setStyleSheet("background-color:black");

    //LA SUBVENTANA DE LA VENTANA DE BOTONES EJECUTAR
    pant_ejecutar = new QWidget(pant_botones);
    pant_ejecutar->setGeometry(305,0,300,altop);


}

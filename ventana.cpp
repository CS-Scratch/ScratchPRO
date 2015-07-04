#include "ventana.h"
#include "gato.h"

ventana::ventana()
{
    this->setWindowTitle(QString::fromUtf8("SCRATCH-PRO"));
    this->setFixedSize(800,500);


    //crear la pantalla donde se va a mostrar el gato
    pantalla = new QWidget(this);   //herencia
    //tamaño de la pantalla donde se vaa ha imprimir
    pantalla->setGeometry(0,0,200,800);
    //Color de la pantalla
    pantalla->setStyleSheet("background-color:#FFFFFF;");

    gat =new gato();
    gat->setParent(pantalla);

    //gat->setParent(pantalla);

}


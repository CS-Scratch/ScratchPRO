#include "mainwindow.h"
#include <QApplication>
#include "ventana.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //creo un objeto w de ventana donde se encuentra todo lo necesario para imprimir al gato
    ventana * wind = new ventana();

    //wind->load_sprites();
    wind->show();

    return a.exec();
}

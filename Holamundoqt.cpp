/******** hola.cpp **********/
#include <QtGui>
 
int main(int argc, char *argv[])
{
    QApplication aplicacion(argc, argv);
    QLabel etiqueta("Hola Mundo!");
    etiqueta.show();
    return aplicacion.exec();
}
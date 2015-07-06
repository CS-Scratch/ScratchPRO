#include "mover.h"

mover::mover(gato *g)
{
        gat = new gato();
        gat = g;
        this->setPixmap(QPixmap(":/mover.png"));
        this->setGeometry(x,y,ancho,alto);
        datos = new QTextEdit(this);
        datos->setGeometry(54,2,30,30);


}

void mover::mouseDoubleClickEvent( QMouseEvent * e )
{
    if ( e->button() == Qt::LeftButton)
    {
        qDebug() << "imprimir\n"<<e->x()<<","<<e->y()<<"\n";
        ingre_datos = datos->toPlainText().toDouble();
        gat->mover_gato(gat->pos_x+ingre_datos,0);
        //gat->pos_x = gat->pos_x +10;
    }
}

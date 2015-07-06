#include "botones.h"

botones::botones()
{

}

void botones::load_mover(QWidget *p)
{
    mover = new botones();
    mover->setPixmap(QPixmap(":/mover.png"));
    mover->setGeometry(0,0,ancho,alto);
    mover->setParent(p);
}

void botones::load_girarizq(QWidget *p)
{
    girarizq = new botones();
    girarizq->setPixmap(QPixmap(":/girar_izq.png"));
    girarizq->setGeometry(0,35,ancho,alto);
    girarizq->setParent(p);
    //girar_izq = new QTextEdit(this);
    //girar_izq->setGeometry(54,35,27,20);
}

void botones::load_girarder(QWidget *p)
{
    girarder = new botones();
    girarder->setPixmap(QPixmap(":/girar_der.png"));
    girarder->setGeometry(0,70,ancho,alto);
    girarder->setParent(p);
    //girar_der = new QTextEdit(this);
    //girar_der->setGeometry(54,45,27,20);

}

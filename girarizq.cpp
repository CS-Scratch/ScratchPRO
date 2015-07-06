#include "girarizq.h"

girarizq::girarizq()
{

        this->setPixmap(QPixmap(":/girar_izq.png"));
        this->setGeometry(x,y,ancho,alto);
        datos = new QTextEdit(this);
        datos->setGeometry(54,2,30,30);
        ingre_datos = datos->toPlainText().toDouble();

}


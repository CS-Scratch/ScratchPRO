#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::boton_cerrar()
{
    this->close();
}

/*void MainWindow::on_btn_nuevo_clicked()
{

}


void MainWindow::on_pushButton_clicked()
{
  int aux1=atoi(ui->pline1->toPlainText().toStdString().c_str());
  int aux2=atoi(ui->pline2->toPlainText().toStdString().c_str());
  ui->pline3->setNum(aux1+aux2);

}*/

void MainWindow::on_pushButton_clicked()
{
    this->close();
}

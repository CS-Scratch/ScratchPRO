/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *group_menu;
    QPushButton *btn_nuevo;
    QPushButton *btn_guardar;
    QPushButton *btn_abrir;
    QPushButton *btn_guardarcomo;
    QPushButton *pushButton;
    QGroupBox *group_instrucciones;
    QGroupBox *group_controles;
    QCheckBox *cb_movimiento;
    QCheckBox *cb_apariencia;
    QCheckBox *cb_sonido;
    QCheckBox *cb_controles;
    QTableView *table_instrucciones;
    QLabel *lbl_titulo;
    QGroupBox *group_design;
    QGroupBox *group_previo;
    QGraphicsView *graphich_previo;
    QGroupBox *gruop_archivos;
    QListView *list_archivos;
    QProgressBar *progressBar;
    QPushButton *btn_ejecutar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(818, 489);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        group_menu = new QGroupBox(centralWidget);
        group_menu->setObjectName(QStringLiteral("group_menu"));
        group_menu->setGeometry(QRect(70, 0, 581, 61));
        btn_nuevo = new QPushButton(group_menu);
        btn_nuevo->setObjectName(QStringLiteral("btn_nuevo"));
        btn_nuevo->setGeometry(QRect(10, 20, 61, 23));
        btn_guardar = new QPushButton(group_menu);
        btn_guardar->setObjectName(QStringLiteral("btn_guardar"));
        btn_guardar->setGeometry(QRect(80, 20, 75, 23));
        btn_abrir = new QPushButton(group_menu);
        btn_abrir->setObjectName(QStringLiteral("btn_abrir"));
        btn_abrir->setGeometry(QRect(250, 20, 75, 23));
        btn_guardarcomo = new QPushButton(group_menu);
        btn_guardarcomo->setObjectName(QStringLiteral("btn_guardarcomo"));
        btn_guardarcomo->setGeometry(QRect(160, 20, 81, 23));
        pushButton = new QPushButton(group_menu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(330, 20, 75, 23));
        group_instrucciones = new QGroupBox(group_menu);
        group_instrucciones->setObjectName(QStringLiteral("group_instrucciones"));
        group_instrucciones->setGeometry(QRect(-160, 50, 241, 331));
        group_controles = new QGroupBox(group_instrucciones);
        group_controles->setObjectName(QStringLiteral("group_controles"));
        group_controles->setGeometry(QRect(10, 20, 221, 101));
        cb_movimiento = new QCheckBox(group_controles);
        cb_movimiento->setObjectName(QStringLiteral("cb_movimiento"));
        cb_movimiento->setGeometry(QRect(10, 20, 81, 17));
        cb_apariencia = new QCheckBox(group_controles);
        cb_apariencia->setObjectName(QStringLiteral("cb_apariencia"));
        cb_apariencia->setGeometry(QRect(10, 40, 70, 17));
        cb_sonido = new QCheckBox(group_controles);
        cb_sonido->setObjectName(QStringLiteral("cb_sonido"));
        cb_sonido->setGeometry(QRect(10, 60, 70, 17));
        cb_controles = new QCheckBox(group_controles);
        cb_controles->setObjectName(QStringLiteral("cb_controles"));
        cb_controles->setGeometry(QRect(100, 20, 70, 17));
        table_instrucciones = new QTableView(group_instrucciones);
        table_instrucciones->setObjectName(QStringLiteral("table_instrucciones"));
        table_instrucciones->setGeometry(QRect(10, 130, 211, 191));
        lbl_titulo = new QLabel(group_menu);
        lbl_titulo->setObjectName(QStringLiteral("lbl_titulo"));
        lbl_titulo->setGeometry(QRect(420, 10, 161, 41));
        QFont font;
        font.setFamily(QStringLiteral("deFaced"));
        font.setPointSize(20);
        font.setItalic(true);
        lbl_titulo->setFont(font);
        group_design = new QGroupBox(centralWidget);
        group_design->setObjectName(QStringLiteral("group_design"));
        group_design->setGeometry(QRect(280, 90, 231, 271));
        group_previo = new QGroupBox(centralWidget);
        group_previo->setObjectName(QStringLiteral("group_previo"));
        group_previo->setGeometry(QRect(530, 90, 271, 181));
        graphich_previo = new QGraphicsView(group_previo);
        graphich_previo->setObjectName(QStringLiteral("graphich_previo"));
        graphich_previo->setGeometry(QRect(10, 20, 251, 151));
        gruop_archivos = new QGroupBox(centralWidget);
        gruop_archivos->setObjectName(QStringLiteral("gruop_archivos"));
        gruop_archivos->setGeometry(QRect(530, 280, 271, 151));
        list_archivos = new QListView(gruop_archivos);
        list_archivos->setObjectName(QStringLiteral("list_archivos"));
        list_archivos->setGeometry(QRect(10, 20, 251, 121));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(330, 370, 118, 20));
        progressBar->setValue(24);
        btn_ejecutar = new QPushButton(centralWidget);
        btn_ejecutar->setObjectName(QStringLiteral("btn_ejecutar"));
        btn_ejecutar->setGeometry(QRect(330, 400, 111, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 818, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        group_menu->setTitle(QApplication::translate("MainWindow", "Men\303\272", 0));
        btn_nuevo->setText(QApplication::translate("MainWindow", "Nuevo", 0));
        btn_guardar->setText(QApplication::translate("MainWindow", "Guardar", 0));
        btn_abrir->setText(QApplication::translate("MainWindow", "Abrir", 0));
        btn_guardarcomo->setText(QApplication::translate("MainWindow", "Guardar Como", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Deshacer", 0));
        group_instrucciones->setTitle(QApplication::translate("MainWindow", "Instrucciones", 0));
        group_controles->setTitle(QApplication::translate("MainWindow", "Controles", 0));
        cb_movimiento->setText(QApplication::translate("MainWindow", "Movimiento", 0));
        cb_apariencia->setText(QApplication::translate("MainWindow", "Apariencia", 0));
        cb_sonido->setText(QApplication::translate("MainWindow", "Sonido", 0));
        cb_controles->setText(QApplication::translate("MainWindow", "Controles", 0));
        lbl_titulo->setText(QApplication::translate("MainWindow", "Scratch Pro", 0));
        group_design->setTitle(QApplication::translate("MainWindow", "Dise\303\261o", 0));
        group_previo->setTitle(QApplication::translate("MainWindow", "Previsualizaci\303\263n", 0));
        gruop_archivos->setTitle(QApplication::translate("MainWindow", "Archivos Importados", 0));
        btn_ejecutar->setText(QApplication::translate("MainWindow", "Ejecutar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

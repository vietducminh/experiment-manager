#include "mainwindow.h"
#include <QApplication>

#include <QMainWindow>
#include <QMenuBar>
#include<QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;

    QMenuBar * menubar = new QMenuBar;
    QMenu * qmenu   = new QMenu;
    menubar->addMenu(qmenu);

    w.show();

    return a.exec();


}

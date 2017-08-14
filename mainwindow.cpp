#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QProcess>
#include<QVBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    info = new Info(this);

    connect(ui->runButton,&QPushButton::clicked,this,&MainWindow::runExperiment);


    //menubar = new QMenuBar();
        menuFile = new QMenu("&File");
        menuPreferences = new QMenu("&Preferences");
        menuSimulation = new QMenu("&Simulation");
        menuHelp = new QMenu("&Help");
        ui->menuBar->addMenu(menuFile);
        ui->menuBar->addMenu(menuPreferences);
        ui->menuBar->addMenu(menuSimulation);
        ui->menuBar->addMenu(menuHelp);

        //QVBoxLayout *mainLayout = new QVBoxLayout;
        //setMenuBar(menubar);
        //mainLayout->addWidget(ui->menuBar);

        //mainLayout->setMenuBar(ui->menuBar);

        //setLayout(mainLayout);

        setWindowTitle(tr("Particle Simulator"));
}

void MainWindow::runExperiment()
{
    QObject *parent=0;
    QString program = "./path/click-modular-router";
    QStringList arguments;
    arguments << ui->cbTrafficRate->currentText()
              << ui->cbSpeed->currentText()
              << ui->cbScenario->currentText()
              << ui->noSenders->text()
              << ui->noReceivers->text()
              << ui->cbNoNodes->currentText()
              << ui->runningTime->text()
              << ui->noRepetitions->text();
                 //"-style" << "fusion";

   QProcess *myProcess = new QProcess(parent);
   myProcess->start(program, arguments);
   info->show();

}
MainWindow::~MainWindow()
{
    delete ui;

}

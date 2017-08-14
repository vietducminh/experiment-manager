#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"info.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void runExperiment();

    Info* info;

    QMenuBar *menubar;
        QMenu *menuFile;
        QMenu *menuPreferences;
        QMenu *menuSimulation;
        QMenu *menuHelp;
        QToolBar *toolBar;
        QAction *actionRun;
        QAction *actionPause;
        QAction *actionStop;
        QAction *actionSetup;
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

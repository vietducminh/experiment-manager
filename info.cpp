#include "info.h"
#include "ui_info.h"

Info::Info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Info)
{
    ui->setupUi(this);
    connect(ui->closeButton, &QPushButton::clicked, this, &QDialog::close);
}

Info::~Info()
{
    delete ui;
}

#include "imagen1.h"
#include "ui_imagen1.h"

Imagen1::Imagen1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Imagen1)
{
    ui->setupUi(this);
}

Imagen1::~Imagen1()
{
    delete ui;
}

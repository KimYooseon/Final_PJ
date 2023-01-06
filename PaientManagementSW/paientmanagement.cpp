#include "paientmanagement.h"
#include "ui_paientmanagement.h"

PaientManagement::PaientManagement(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PaientManagement)
{
    ui->setupUi(this);
}

PaientManagement::~PaientManagement()
{
    delete ui;
}


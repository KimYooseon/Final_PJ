#include "medicalchart.h"
#include "ui_medicalchart.h"

MedicalChart::MedicalChart(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MedicalChart)
{
    ui->setupUi(this);
}

MedicalChart::~MedicalChart()
{
    delete ui;
}

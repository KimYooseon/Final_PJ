#ifndef MEDICALCHART_H
#define MEDICALCHART_H

#include <QWidget>

namespace Ui {
class MedicalChart;
}

class MedicalChart : public QWidget
{
    Q_OBJECT

public:
    explicit MedicalChart(QWidget *parent = nullptr);
    ~MedicalChart();

private:
    Ui::MedicalChart *ui;
};

#endif // MEDICALCHART_H

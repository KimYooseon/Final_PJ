#ifndef MEDICALRECORDMANAGER_H
#define MEDICALRECORDMANAGER_H

#include <QWidget>
#include <QTreeWidget>

namespace Ui {
class MedicalRecordManager;
}

class MedicalChart;

class MedicalRecordManager : public QWidget
{
    Q_OBJECT

public:
    explicit MedicalRecordManager(QWidget *parent = nullptr);
    ~MedicalRecordManager();

private slots:
    void recordDataSended(QString, QString);

    void on_recordTreeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column);

private:
    Ui::MedicalRecordManager *ui;
    MedicalChart *medicalChart;
};

#endif // MEDICALRECORDMANAGER_H

#ifndef PATIENTSTATUSMANAGER_H
#define PATIENTSTATUSMANAGER_H

#include <QWidget>
#include <QTreeWidget>

namespace Ui {
class PatientStatusManager;
}

class PatientStatusManager : public QWidget
{
    Q_OBJECT

public:
    explicit PatientStatusManager(QWidget *parent = nullptr);
    ~PatientStatusManager();

private:
    Ui::PatientStatusManager *ui;
    QString pid, name;

private slots:
    //void waitInfoSended(QString, QString);
    void waitInfoSended(QString);
    void on_waitPaymentTreeWidget_itemClicked(QTreeWidgetItem *item, int column);
    void on_waitTreatmentTreeWidget_itemClicked(QTreeWidgetItem *item, int column);
    void on_shootRequestPushButton_clicked();

signals:
    void sendRequest(QString);
};

#endif // PATIENTSTATUSMANAGER_H

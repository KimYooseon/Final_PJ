#ifndef PAIENTMANAGEMENT_H
#define PAIENTMANAGEMENT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class PaientManagement; }
QT_END_NAMESPACE

class PaientManagement : public QMainWindow
{
    Q_OBJECT

public:
    PaientManagement(QWidget *parent = nullptr);
    ~PaientManagement();

private:
    Ui::PaientManagement *ui;
};
#endif // PAIENTMANAGEMENT_H

#ifndef OPERATRIONBT5_H
#define OPERATRIONBT5_H

#include <QWidget>
#include "./DataModule/dictionaries.h"
namespace Ui {
class operatrionbt5;
}

class operatrionbt5 : public QWidget
{
    Q_OBJECT

public:
    explicit operatrionbt5(QWidget *parent = 0);
    explicit operatrionbt5(Dictionaries &dt,QWidget *parent = 0);
    ~operatrionbt5();
signals:
   void signal_dt(Dictionaries *dt);
private slots:
    void on_pushButton_clicked();

private:
    Ui::operatrionbt5 *ui;

    Dictionaries dt;
};

#endif // OPERATRIONBT5_H

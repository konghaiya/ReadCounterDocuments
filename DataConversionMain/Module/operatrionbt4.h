#ifndef OPERATRIONBT4_H
#define OPERATRIONBT4_H

#include <QWidget>
#include "./DataModule/gt_interface.h"
namespace Ui {
class operatrionbt4;
}

class operatrionbt4 : public QWidget
{
    Q_OBJECT

public:
    explicit operatrionbt4(QWidget *parent = 0);
    explicit operatrionbt4(QString id,QWidget *parent = 0);
    explicit operatrionbt4(gt_interface &id, QWidget *parent = 0);
    ~operatrionbt4();

signals:
    void signalDetails(gt_interface *gt_id);

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::operatrionbt4 *ui;

    QString id;
    gt_interface gt_it;
};

#endif // OPERATRIONBT4_H

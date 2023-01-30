#ifndef OPERATRIONBT3_H
#define OPERATRIONBT3_H

#include <QWidget>

namespace Ui {
class OperatrionBt3;
}

class OperatrionBt3 : public QWidget
{
    Q_OBJECT

public:
    explicit OperatrionBt3(QWidget *parent = 0);
    explicit OperatrionBt3(QString id, QWidget *parent=0);
    ~OperatrionBt3();

signals:

    void signalDelete(QString id);

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::OperatrionBt3 *ui;

    QString id;
};

#endif // OPERATRIONBT3_H

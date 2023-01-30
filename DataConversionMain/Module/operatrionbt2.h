#ifndef OPERATRIONBT2_H
#define OPERATRIONBT2_H

#include <QWidget>

namespace Ui {
class Operatrionbt2;
}

class Operatrionbt2 : public QWidget
{
    Q_OBJECT

public:
    explicit Operatrionbt2(QWidget *parent = 0);
    explicit Operatrionbt2(QString id,QWidget *parent=0);
    ~Operatrionbt2();

signals:
    void signalDetails(QString id);
    void signalDelete(QString id);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Operatrionbt2 *ui;

    QString id;
};

#endif // OPERATRIONBT2_H

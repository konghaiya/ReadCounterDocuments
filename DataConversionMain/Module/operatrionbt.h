#ifndef OPERATRIONBT_H
#define OPERATRIONBT_H

#include <QWidget>

namespace Ui {
class OperatrionBt;
}

class OperatrionBt : public QWidget
{
    Q_OBJECT

public:
    explicit OperatrionBt(QWidget *parent = 0);
    explicit OperatrionBt(QString id,int row,QWidget *parent=0);
    ~OperatrionBt();

    void setId(QString id);

    QString getId();

    int getRow();
    void setRow(int value);

signals:
    void signalDetails(QString id,int row);
    void signalUpdata(QString id,int row);
    void signalDelete(QString id,int row);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::OperatrionBt *ui;

    QString id;
    int row;
};

#endif // OPERATRIONBT_H

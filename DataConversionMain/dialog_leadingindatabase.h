#ifndef DIALOG_LEADINGINDATABASE_H
#define DIALOG_LEADINGINDATABASE_H

#include <QDialog>
#include "./DataModule/dc_account.h"
namespace Ui {
class Dialog_leadingInDatabase;
}

class Dialog_leadingInDatabase : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_leadingInDatabase(QWidget *parent = 0);
    ~Dialog_leadingInDatabase();

    void paintEvent(QPaintEvent *event);

    bool leadingIndatabase();

    void TableMsgWarning(int i, QString headerName);
signals:
    void leading_hide();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_lineEdit_2_textChanged(const QString &arg1);

private:
    Ui::Dialog_leadingInDatabase *ui;
};

#endif // DIALOG_LEADINGINDATABASE_H

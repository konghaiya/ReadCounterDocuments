#ifndef DIALOG_DATAUPDATE_H
#define DIALOG_DATAUPDATE_H

#include <QDialog>
#include "./DataModule/dc_accountdao.h"
#include "./DataModule/dc_databasedao.h"
#include "dialog_datamerging.h"
namespace Ui {
class Dialog_dataUpdate;
}

class Dialog_dataUpdate : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_dataUpdate(QWidget *parent = 0);
    ~Dialog_dataUpdate();

    QString getCurrentDataName();
    void setCurrentDataName(const QString &value);

    void TablAddItem(int row, int coulmn, QString text);
    void Init();
signals:
    void dataUpdata_hide();
protected:
    void TableMsgWarning(int i, QString headerName);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Dialog_dataUpdate *ui;
    Dialog_dataMerging *m_p_dataMerging;

    QString m_currentDataName;

    QList<DC_account> accountList;
    DC_accountDao accountDao;
    QList<DC_Database> databaseList;
    DC_databaseDao databaseDao;
};

#endif // DIALOG_DATAUPDATE_H

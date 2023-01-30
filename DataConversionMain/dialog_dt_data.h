#ifndef DIALOG_DT_DATA_H
#define DIALOG_DT_DATA_H

#include <QDialog>
#include "./DataModule/dictionaries.h"
#include <QTableWidget>
namespace Ui {
class Dialog_Dt_Data;
}

class Dialog_Dt_Data : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_Dt_Data(QWidget *parent = 0);
    ~Dialog_Dt_Data();

    void setGt_Dt(const Dictionaries &value);
    void TablAddItem(int row, int coulmn, QString text, QTableWidget *tableWidget);
    void UpdataTable();
private:
    Ui::Dialog_Dt_Data *ui;

    Dictionaries gt_dt;
};

#endif // DIALOG_DT_DATA_H

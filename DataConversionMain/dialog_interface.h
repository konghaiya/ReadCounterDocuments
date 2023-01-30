#ifndef DIALOG_INTERFACE_H
#define DIALOG_INTERFACE_H

#include <QDialog>
#include "gtdatabase.h"
#include "./DataModule/gt_interface.h"
#include <QTableWidget>
namespace Ui {
class Dialog_interface;
}

class Dialog_interface : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_interface(QWidget *parent = 0);
    ~Dialog_interface();

    gt_interface getGt_it();
    void setGt_it(const gt_interface &value);

    void UpdataTable();
    void TablAddItem(int row, int coulmn, QString text, QTableWidget *tableWidget);
public slots:
    void slotDetails(Dictionaries *id);
private:
    Ui::Dialog_interface *ui;

    gt_interface gt_it;
};

#endif // DIALOG_INTERFACE_H

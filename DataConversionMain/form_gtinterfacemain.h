#ifndef FORM_GTINTERFACEMAIN_H
#define FORM_GTINTERFACEMAIN_H

#include <QWidget>
#include "gtdatabase.h"
#include <QKeyEvent>
#include "dialog_interface.h"
namespace Ui {
class Form_GtInterfaceMain;
}

class Form_GtInterfaceMain : public QWidget
{
    Q_OBJECT

public:
    explicit Form_GtInterfaceMain(QWidget *parent = 0);
    ~Form_GtInterfaceMain();


    void TablAddItem(int row, int coulmn, QString text);

    void keyPressEvent(QKeyEvent * event);
public slots:
    void slotDetails(gt_interface *id);
private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Form_GtInterfaceMain *ui;
    GtDataBase DaServer;
    QList<gt_interface> interfaceData;

};

#endif // FORM_GTINTERFACEMAIN_H

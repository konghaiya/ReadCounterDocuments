#ifndef FORM_GTMSGSHOWMAIN_H
#define FORM_GTMSGSHOWMAIN_H

#include <QWidget>
#include <QHBoxLayout>
#include "gtdatabase.h"
#include "form_gtinterfacemain.h"
#include "dialog_readgtfile.h"
#include "form_dictionaries.h"
#include "dialog_createtableheader.h"
namespace Ui {
class Form_GtMsgShowMain;
}

class Form_GtMsgShowMain : public QWidget
{
    Q_OBJECT

public:
    explicit Form_GtMsgShowMain(QWidget *parent = 0);
    ~Form_GtMsgShowMain();
    void Init();
public slots:
    void readGtFileClose();
    void createTableClose();
private slots:
    void on_bt_data_update_clicked();

    void on_bt_zd_clicked();

    void on_bt_gnh_clicked();

    void on_bt_scsjb_clicked();

private:
    Ui::Form_GtMsgShowMain *ui;
    QHBoxLayout *hblayout;
    Form_GtInterfaceMain *interfaceMain;
    Form_Dictionaries *dictionaries;
    Dialog_readGtFile *m_p_readGtFile;
    Dialog_createTableHeader *m_p_createTableHeader;
};

#endif // FORM_GTMSGSHOWMAIN_H

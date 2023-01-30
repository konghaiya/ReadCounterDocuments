#ifndef WIDGET_SHOWDATA_H
#define WIDGET_SHOWDATA_H

#include <QWidget>
#include "dialog_leadingindatabase.h"
#include <QListWidgetItem>
#include "./DataModule/dc_accountdao.h"
#include "./DataModule/dc_databasedao.h"
#include "dialog_automation.h"
#include "dialog_dataupdate.h"
#include "dialog_chosemergingtype.h"
#include <QKeyEvent>
namespace Ui {
class Widget_ShowData;
}

class Widget_ShowData : public QWidget
{
    Q_OBJECT

public:
    explicit Widget_ShowData(QWidget *parent = 0);
    ~Widget_ShowData();
    void Date_Update();

    void UI_Update();
    void AccountTable_Update(QString key = "");
protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void TablAddItem(int row, int coulmn, QString text);
    void keyPressEvent(QKeyEvent * event);
protected slots:
    void slot_leading_hide();
    void slotDetails(QString id,int row);
    void slotUpdata(QString id,int row);
    void slotDelete(QString id, int row);
    void slot_dataUpdata_hide();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_2_clicked();

    void on_pushButton_dr_clicked();

    void on_pushButton_up_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Widget_ShowData *ui;

   Dialog_leadingInDatabase *m_p_leadingInDatabase;
   Dialog_automation *m_p_automation;
   Dialog_dataUpdate *m_p_dataUpdate;
   Dialog_ChoseMergingType *m_p_ChoseMergingType;
   bool        m_bDrag;
   QPoint      mouseStartPoint;
   QPoint      windowTopLeftPoint;

   QList<DC_account> accountList;
   DC_accountDao accountDao;
   QList<DC_Database> databaseList;
   DC_databaseDao databaseDao;

};

#endif // WIDGET_SHOWDATA_H

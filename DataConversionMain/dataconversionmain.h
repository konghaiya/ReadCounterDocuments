#ifndef DATACONVERSIONMAIN_H
#define DATACONVERSIONMAIN_H

#include <QWidget>
#include <QPainter>
#include <QHBoxLayout>
#include "dialog_automation.h"
#include "widget_showdata.h"
#include "dialog_readgtfile.h"
#include "form_gtmsgshowmain.h"
namespace Ui {
class DataConversionMain;
}

class DataConversionMain : public QWidget
{
    Q_OBJECT

public:
    explicit DataConversionMain(QWidget *parent = 0);
    ~DataConversionMain();

    void paintEvent(QPaintEvent *event);

protected:
    //拖拽窗口
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::DataConversionMain *ui;

    Dialog_automation *m_p_automation;
    Widget_ShowData *m_p_ShowData;
    Dialog_readGtFile *m_p_readGtFile;
    Form_GtMsgShowMain *m_p_InterfaceMain;

    bool        m_bDrag;
    QPoint      mouseStartPoint;
    QPoint      windowTopLeftPoint;
};

#endif // DATACONVERSIONMAIN_H

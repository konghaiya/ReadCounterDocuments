#ifndef DIALOG_CHOSEMERGINGTYPE_H
#define DIALOG_CHOSEMERGINGTYPE_H

#include <QDialog>
#include "dialog_datamerging.h"
namespace Ui {
class Dialog_ChoseMergingType;
}

class Dialog_ChoseMergingType : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_ChoseMergingType(QWidget *parent = 0);
    ~Dialog_ChoseMergingType();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Dialog_ChoseMergingType *ui;

    Dialog_dataMerging *m_p_dataMerging;
};

#endif // DIALOG_CHOSEMERGINGTYPE_H

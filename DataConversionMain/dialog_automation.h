#ifndef DIALOG_AUTOMATION_H
#define DIALOG_AUTOMATION_H

#include <QDialog>
#include "dialog_dispose.h"
namespace Ui {
class Dialog_automation;
}

class Dialog_automation : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_automation(QWidget *parent = 0);
    ~Dialog_automation();

    QString dataName() ;
    void setDataName(const QString &dataName);

    bool Automation_mustFile();
protected:
    void paintEvent(QPaintEvent *event);
    bool Automation_system(QString TransmidName, QString mbName="", bool isjmp = false);

    bool Automation_bak_system(QString TransmidName, bool isjamp = false);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void slot_dispose_hide();

    void on_pushButton_5_clicked();

private:
    Ui::Dialog_automation *ui;

    QString m_srcDirPath;
    QString m_TransmidName;
    QString m_dataName;
    QDialog *prent;

    Dialog_dispose *m_p_dispose;
};

#endif // DIALOG_AUTOMATION_H

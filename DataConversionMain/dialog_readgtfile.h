#ifndef DIALOG_READGTFILE_H
#define DIALOG_READGTFILE_H

#include <QDialog>
#include <QProgressDialog>
#include <QAxObject>
#include <QCloseEvent>
#include "ksdbserver.h"
namespace Ui {
class Dialog_readGtFile;
}

class Dialog_readGtFile : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_readGtFile(QWidget *parent = 0);
    ~Dialog_readGtFile();

    bool Cread_gt_interface_table();
    bool Cread_gnh_table(QString gnh);
    bool Cread_Dictionaries_table();
    bool Cread_Dt_Data_table();
    bool Insert_gnh_table(QString gnh, QString pt_name, QString pt_ms, QString pt_msg_type, QString pt_bz, QString pt_type, QString pt_is_must);
    QString getWorldTableValue(QAxObject *table, int row, int col);

    bool readHsGtFile(QString filePath);
    bool readHsGtJkFile(QAxObject* pWorkBook);
    bool readHsGtZdFile(QAxObject* pWorkBook);
    bool readHsGtZdValueFile(QAxObject* pWorkBook);

    bool readJzwGtFile(QString filePath);
    bool readJzwGtJkFile(QAxObject *m_docx);
    bool readJzwGtZdFile(QAxObject *m_docx);

    bool readDDGtFile(QString filePath);
    bool readDDGtJkFile(QAxObject *pWorkBook);
    bool readDDGtZdFile(QAxObject *pWorkBook);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();
signals:
    void readGtFileClose();

protected:
    void closeEvent(QCloseEvent *event);

private:
    Ui::Dialog_readGtFile *ui;
    KsDbServer m_dbserver;
    QProgressDialog *progressDialog;

    int m_yw_type;  //0普通，1两融
};

#endif // DIALOG_READGTFILE_H

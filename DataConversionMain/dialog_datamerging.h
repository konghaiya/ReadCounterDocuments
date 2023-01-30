#ifndef DIALOG_DATAMERGING_H
#define DIALOG_DATAMERGING_H

#include <QDialog>
#include "ksdbserver.h"
#include <QSqlRecord>
#include <QMap>
namespace Ui {
class Dialog_dataMerging;
}

class Dialog_dataMerging : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_dataMerging(QWidget *parent = 0);
    ~Dialog_dataMerging();

    void beginMerGingData();
    bool MerGingTable(QString tableName);

    QString GetColumnNameString(QSqlRecord sqlRecord, QStringList &tableNames);
    QString GetNoRepeatString(QStringList HeadList, QStringList tabledata);
    QString GetValueString(QStringList tabledata);

    void SetBaseDb(QString dbPath);
    bool AccountHb();
    bool getMergingType() const;
    void setMergingType(bool value);

    bool GetMergingGtcode();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::Dialog_dataMerging *ui;

    KsDbServer m_dbserverBase;

    KsDbServer m_dbserverhb;

    QString hbdataFile;

    QMap<QString,QString> m_HbAccountMap;

    int zjzhclunmCount;

    bool MergingType;  //合并类型 ture 合并同一数据库文件下的数据

    QString temporaryFileName;
    QMap<QString,QString> MergingGtCodeMap;
};

#endif // DIALOG_DATAMERGING_H

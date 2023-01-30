#ifndef DIALOG_CREATETABLEHEADER_H
#define DIALOG_CREATETABLEHEADER_H

#include <QDialog>
#include <QMap>
namespace Ui {
class Dialog_createTableHeader;
}

class Dialog_createTableHeader : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_createTableHeader(QWidget *parent = 0);
    ~Dialog_createTableHeader();

    bool GetMergingGtcode();
    bool createTable();
    QString GetColumnNameString(QStringList &tableHeaders);
    bool GetTableHeads(QStringList &tableHeaders, QString tableName);
private slots:
    void on_pushButton_clicked();
    void on_pushButton_3_clicked();

signals:
    void createTableClose();

protected:
    void closeEvent(QCloseEvent *event);
private:
    Ui::Dialog_createTableHeader *ui;
    QString dbfile;
    QMap<QString,QString> MergingGtCodeMap;
};

#endif // DIALOG_CREATETABLEHEADER_H

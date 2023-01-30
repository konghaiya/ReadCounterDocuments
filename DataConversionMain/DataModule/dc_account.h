#ifndef DC_ACCOUNT_H
#define DC_ACCOUNT_H
#include <QString>
#include <QStringList>
class DC_account
{
public:
    DC_account();
    DC_account(QString account_number, QString account_type, QString account_GT, QString account_msg, QString belongdb,QString index);
    DC_account(QStringList &accountListMsg);

    QString & getAccount_number();
    void setAccount_number(const QString &value);

    QString & getAccount_type();
    void setAccount_type(const QString &value);

    QString & getAccount_GT();
    void setAccount_GT(const QString &value);

    QString & getAccount_msg();
    void setAccount_msg(const QString &value);

    QString & getBelongdb();
    void setBelongdb(const QString &value);

    QString &getIndex();
    void setIndex(QString value);

    QString GetMsg(QStringList &accountListMsg, int i);
private:
    QString index;
    QString account_number;
    QString account_type;
    QString account_GT;
    QString account_msg;
    QString belongdb;
};

#endif // DC_ACCOUNT_H

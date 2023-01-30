#ifndef DC_DATABASE_H
#define DC_DATABASE_H
#include <QStringList>
class DC_Database
{
public:
    DC_Database();
    DC_Database(QStringList &dataMsgList);
    QString & getIndex();
    void setIndex(const QString &value);

    QString &getDatabaseName();
    void setDatabaseName(const QString &value);

    QString GetMsg(QStringList &accountListMsg, int i);
private:
    QString index;
    QString databaseName;
};

#endif // DC_DATABASE_H

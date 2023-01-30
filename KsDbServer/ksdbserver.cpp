#include "ksdbserver.h"
#include "../DcLog/dclog.h"
#include <QMessageBox>
#include <QDebug>
#include <QDateTime>
QSqlDatabase*  KsDbServer::db=NULL;  /*初始化数据库连接句柄*/

int KsDbServer::dbIndex=1;

KsDbServer::KsDbServer()
{
    if(db)
    {
        query=new QSqlQuery(*db);
    }
    else
    {
        query=new QSqlQuery;
    }
}

KsDbServer::~KsDbServer()
{
    if(query)
    {
        delete query;
        query=NULL;
    }
    if(slf_db.isOpen())
    {
        slf_db.close();
    }
}

void KsDbServer::openDatabase()
{
    db=new QSqlDatabase;
    *db = QSqlDatabase::addDatabase("QSQLITE");
//    db->setHostName("192.168.0.14");
//    db->setUserName("hjj_user");
//    db->setPassword("hjj_user");
//    db->setPort(1521);
//    db->setDatabaseName("ORCLE");
    db->setDatabaseName("./DC_data.db");
    if(!db->open())
    {
        qDebug() << db->lastError().text();

    }
    else
    {
        qDebug() << "db.open seccssful";
    }
}

void KsDbServer::closeDatabase()
{
    if(db)
    {
        db->close();
        delete db;
        db=NULL;
    }
}

void KsDbServer::closeSlafDatabase()
{
    if(slf_db.isOpen())
    {
        slf_db.close();
    }
}


int KsDbServer::getMaxDataBaseTableID(QString sql)
{
    if (!query->exec(sql))
    {
        QMessageBox::warning(NULL, "getMaxDataBaseTableID", QString("Query: %1, \nError:%2").arg(query->lastQuery()).arg(query->lastError().text()));
    }

    int maxDatabaseTableID = 0;
    while (query->next())
    {
        if (query->value(0).toInt() > maxDatabaseTableID)
        {
            maxDatabaseTableID = query->value(0).toInt();
        }
    }
    return maxDatabaseTableID;
}

QVector<QString> KsDbServer::GetRecordValueFromTableBySql(QString sql, int filedNum)
{
    QVector<QString> vec;

    if (!query->exec(sql))
    {
        QMessageBox::warning(NULL, "GetRecordValueFromTableBySql", QString("Query: %1, \nError:%2").arg(query->lastQuery()).arg(query->lastError().text()));
    }

    while (query->next())
    {
        for (int i=0; i<filedNum; i++)
        {
            vec.append(query->value(i).toString());
        }
    }
    return vec;
}

bool KsDbServer::operateTableBySql(QString Sql)
{
    if (!query->exec(Sql))
    {
        //QMessageBox::warning(NULL, "operateTableBySql", QString("Query: %1, \nError:%2").arg(query->lastQuery()).arg(query->lastError().text()));
        DcLog::writeLog(QString("Query: %1, \nError:%2").arg(query->lastQuery()).arg(query->lastError().text()),"./SqlErr.log");
        return false;
    }
    else
    {
        return true;
    }

    Commit();
}

int KsDbServer::getTableRecordCounts(QString tableName)
{
    int recordNumber = 0;

    if (!query->exec(QString("select * from %1").arg(tableName)))
    {
        QMessageBox::warning(NULL, "getTableRecordCounts", QString("Query: %1, \nError:%2").arg(query->lastQuery()).arg(query->lastError().text()));
    }

    while (query->next())
    {
        recordNumber++;
    }
    return recordNumber;
}

bool KsDbServer::adjustIfExitFiledInTable(QString sql, QString filedValue)
{
    if (!query->exec(sql))
    {
        QMessageBox::warning(NULL, "adjustIdExitFiledInTable", QString("Query: %1, \nError:%2").arg(query->lastQuery()).arg(query->lastError().text()));

        return false;
    }
    while (query->next())
    {
        if (filedValue == query->value(0).toString())
        {
            return true;
        }
    }
    return false;
}

QString KsDbServer::getFiledValue(QString sql)
{
    if (!query->exec(sql))
    {
        QMessageBox::warning(NULL, "getFiledValue", QString("Query: %1, \nError:%2").arg(query->lastQuery()).arg(query->lastError().text()));
    }
    while (query->next())
    {
        return query->value(0).toString();
    }
}

void KsDbServer::Commit()
{
    if (!query->exec("COMMIT"))
    {
        QMessageBox::warning(NULL, "Commit", QString("Query: %1, \nError:%2").arg(query->lastQuery()).arg(query->lastError().text()));
    }
}

void KsDbServer::Rollback()
{
    if (!query->exec("ROLLBACK to SAVEPOINT save"))
    {
        QMessageBox::warning(NULL, "ROLLBACK", QString("Query: %1, \nError:%2").arg(query->lastQuery()).arg(query->lastError().text()));
    }
}

QVector<QStringList> KsDbServer::GetRecordValueFromSql(QString sqlstr, int fileNum)
{
    QVector<QStringList> t_Vect;

    if(!query->exec(sqlstr))
    {
        return t_Vect;
    }
    while(query->next())
    {
        QStringList tmpStr;
        for(int i=0; i<fileNum; i++)
        {
            tmpStr.append(query->value(i).toString());
        }
        t_Vect.append(tmpStr);
    }
    return t_Vect;
}

QStringList KsDbServer::GetValueFromSql(QString sqlStr, int filenum)
{
    QStringList str;
    if(!query->exec(sqlStr))
    {
//        QMessageBox box;
//        box.setText("数据库执行失败，请检查Sql语句");
//        box.exec();
        return str;
    }

    while (query->next())
    {
        for(int i  = 0; i < filenum; i++)
        {
            str.append(query->value(i).toString());
        }
    }

    return str;
}

bool KsDbServer::InsertDB(QString sqlStr)
{
    if(!query->exec(sqlStr))
    {
        QMessageBox::warning(NULL, "operateTableBySql", QString("Query: %1, \nError:%2").arg(query->lastQuery()).arg(query->lastError().text()));
        return false;
    }
   // Commit();

    return true;
}

bool KsDbServer::SetSqlQuery(QSqlDatabase sql_db)
{
    if(sql_db.isOpen())
    {
        if(query)
        {
            delete query;
            query=NULL;
        }
        query=new QSqlQuery(sql_db);

        return true;
    }
    else
    {
        if(!query)
        {
            query=new QSqlQuery;
        }
        qDebug()<<"未打开数据库！";
        return false;
    }
}

bool KsDbServer::SetSqlQuery(QString dbFilePath)
{
    if(slf_db.isOpen())
    {
        slf_db.close();
    }
    slf_db = QSqlDatabase::addDatabase("QSQLITE",QString("db%1").arg(dbIndex++));
    slf_db.setDatabaseName(dbFilePath);
    if(!slf_db.open())
    {
        qDebug() << slf_db.lastError().text();
        return false;
    }
    else
    {
        qDebug() <<dbFilePath<<" db.open seccssful";
    }
    if(SetSqlQuery(slf_db))
    {
        return true;
    }
    else
    {
        return false;
    }
}

QSqlQuery *KsDbServer::getSqlQuery()
{
    return this->query;
}


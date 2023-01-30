#ifndef KSDBSERVER_H
#define KSDBSERVER_H

#include "ksdbserver_global.h"
#include <QObject>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>

class KSDBSERVERSHARED_EXPORT KsDbServer
{

public:
    KsDbServer();
    ~KsDbServer();
    /**
     * @brief: openDatabase 打开数据库
     */
   static void openDatabase();
    /**
     * @brief: closeDatabase 关闭数据库
     */
   static void closeDatabase();

    /**
     * @brief: getMaxDataBaseTableID 获取最大唯一标识
     * @param: sql 执行的sql语句
     * @return 返回所查询字段的最大整型值
     */
    int getMaxDataBaseTableID(QString sql);
    /**
     * @brief: GetRecordValueFromTableBySql() 根据输入的sql语句按顺序查询到相对应的字段并存在容器中返回
     * @param: sql 查询的sql语句
     * @param: filedNum 返回的字段数量
     * @return 返回一个携带了查询到的字段的数据的容器
     */
    QVector<QString> GetRecordValueFromTableBySql(QString sql, int filedNum);
    /**
     * @brief: operateTableBySql 传入sql语句对数据库操作
     * @param: Sql 操作的sql语句
     * @return 执行成功返回true, 执行失败返回false
     */
    bool operateTableBySql(QString Sql);
    /**
     * @brief: getTableRecordCounts 获取数据表当前记录数
     * @param: tableName 表名
     * @return 返回当前表的记录数
     */
    int getTableRecordCounts(QString tableName);

    /**
     * @brief: adjustIfExitFiledInTable 判断数据表中是否存在某字段值
     * @param: sql 查询需要判断的字段
     * @param: filedValue 需要判断的值
     * @return 存在则返回true, 不存在则返回false
     */
    bool adjustIfExitFiledInTable(QString sql, QString filedValue);

    /**
     * @brief: getFiledValue 根据sql语句获取字段值
     * @param: sql 查询的sql语句(需要精确到某一条记录的某一字段)
     * @return 获取查询的指定字段值
     */
    QString getFiledValue(QString sql);

    /**
     * @brief: Commit() 提交已执行的sql语句
     */
    void Commit();

    /**
     * @brief: Rollback() 回滚已执行的sql语句
     */
    void Rollback();

    /**
     * @brief: GetRecordValueFromSql 查询指定的某几个字段值(可多条记录)
     * @param: sqlstr 查询的sql语句
     * @param: fileNum 字段数
     * @return 返回查询到的字段数值(每条记录一个链表存储数据)
     */
    QVector<QStringList> GetRecordValueFromSql(QString sqlstr, int fileNum);

    /**
     * @brief: GetValueFromSql 查询一条记录的数据
     * @param: sqlStr sql语句
     * @param: filenum 字段数
     * @return 单条记录的数据
     */
    QStringList GetValueFromSql(QString sqlStr, int filenum);

    /**
     * @brief: InsertDB 插入数据
     * @param: sqlStr 执行的sql语句
     * @return 插入成功返回true反之返回false
     */
    bool InsertDB(QString sqlStr);

    bool SetSqlQuery(QSqlDatabase sql_db);
    bool SetSqlQuery(QString dbFilePath);

    QSqlQuery * getSqlQuery();

    void closeSlafDatabase();
private:
    /**数据库操作对象*/
    static QSqlDatabase *db;
    /**数据库查询对象*/

    static int dbIndex;
    QSqlQuery *query;

    QSqlDatabase slf_db;
};

#endif // KSDBSERVER_H

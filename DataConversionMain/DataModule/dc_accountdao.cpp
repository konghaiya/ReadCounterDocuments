#include "dc_accountdao.h"

DC_accountDao::DC_accountDao()
{
}

bool DC_accountDao::insertAccount(DC_account &account)
{
    SqlData sqldata=ReadXml::GetValue("Insert","DC_account");

    return dbserver.InsertDB(sqldata.value.arg(account.getAccount_number()).arg(account.getAccount_type()).arg(account.getAccount_GT()).
                             arg(account.getAccount_msg()).arg(account.getBelongdb()));
}

bool DC_accountDao::insertAccount(QList<DC_account> &accountList)
{
    for(auto it= accountList.begin();it!=accountList.end();it++)
    {
        if(!insertAccount(*it))
        {
            return false;
        }
    }
    return true;
}

bool DC_accountDao::updateAccount(DC_account account)
{
     SqlData sqldata=ReadXml::GetValue("updateById","DC_account");
     return dbserver.operateTableBySql(sqldata.value.arg(account.getAccount_number()).arg(account.getAccount_type()).arg(account.getAccount_GT()).
                                       arg(account.getAccount_msg()).arg(account.getBelongdb()).arg(account.getIndex()));
}

bool DC_accountDao::deletAccountById(QString index)
{
    SqlData sqldata=ReadXml::GetValue("deleteById","DC_account");
    return dbserver.operateTableBySql(sqldata.value.arg(index));
}

bool DC_accountDao::deletAccountBydataName(QString dataName)
{
    SqlData sqldata=ReadXml::GetValue("deleteBydataName","DC_account");
    return dbserver.operateTableBySql(sqldata.value.arg(dataName));
}

DC_account DC_accountDao::selectById(QString index)
{
    SqlData sqldata=ReadXml::GetValue("selectById","DC_account");

    QStringList msglist=dbserver.GetValueFromSql(sqldata.value.arg(index),sqldata.count);

    return DC_account(msglist);
}

QList<DC_account> DC_accountDao::selectAccountAll()
{
    SqlData sqldata=ReadXml::GetValue("selectAll","DC_account");

    QVector<QStringList> msgvec=dbserver.GetRecordValueFromSql(sqldata.value,sqldata.count);

    QList<DC_account> relist;

    for(int i=0;i<msgvec.count();i++)
    {
        QStringList msglist=msgvec.at(i);

        relist.append(DC_account(msglist));
    }
    return relist;
}

QList<DC_account> DC_accountDao::selectAccount(QString account_info)
{
    SqlData sqldata=ReadXml::GetValue("selectByTypeAndKey","DC_account");

    QVector<QStringList> msgvec=dbserver.GetRecordValueFromSql(sqldata.value.arg(account_info).arg(account_info).
                                                               arg(account_info).arg(account_info).arg(account_info),sqldata.count);

    QList<DC_account> relist;

    for(int i=0;i<msgvec.count();i++)
    {
        QStringList msglist=msgvec.at(i);
        relist.append(DC_account(msglist));
    }
    return relist;
}

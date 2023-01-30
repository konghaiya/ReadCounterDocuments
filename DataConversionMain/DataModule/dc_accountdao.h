#ifndef DC_ACCOUNTDAO_H
#define DC_ACCOUNTDAO_H
#include "ksdbserver.h"
#include "dc_account.h"
#include "readxml.h"
class DC_accountDao
{
public:
    DC_accountDao();

    bool insertAccount(DC_account &account);

    bool insertAccount(QList<DC_account> &accountList);

    bool updateAccount(DC_account account);

    bool deletAccountById(QString index);

    bool deletAccountBydataName(QString dataName);

    DC_account selectById(QString index);


    QList<DC_account> selectAccountAll();

    QList<DC_account> selectAccount(QString account_info);
private:
    KsDbServer dbserver;
};

#endif // DC_ACCOUNTDAO_H

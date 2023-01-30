#include "dc_account.h"

DC_account::DC_account()
{
}

DC_account::DC_account(QString account_number, QString account_type, QString account_GT, QString account_msg,QString belongdb,QString index)
{
    this->account_number = account_number;
    this->account_type = account_type;
    this->account_GT = account_GT;
    this->account_msg = account_msg;
    this->belongdb = belongdb;
    this->index = index;
}


QString DC_account::GetMsg(QStringList &accountListMsg,int i)
{
    if (accountListMsg.value(i) == 0)
    {
        return "";
    }
    return accountListMsg.value(i);
}

DC_account::DC_account(QStringList &accountListMsg)
{
    this->index = GetMsg(accountListMsg,0);
    this->account_number = GetMsg(accountListMsg,1);
    this->account_type = GetMsg(accountListMsg,2);
    this->account_GT = GetMsg(accountListMsg,3);
    this->account_msg = GetMsg(accountListMsg,4);
    this->belongdb = GetMsg(accountListMsg,5);

}
QString &DC_account::getAccount_number()
{
    return account_number;
}

void DC_account::setAccount_number(const QString &value)
{
    account_number = value;
}
QString &DC_account::getAccount_type()
{
    return account_type;
}

void DC_account::setAccount_type(const QString &value)
{
    account_type = value;
}
QString &DC_account::getAccount_GT()
{
    return account_GT;
}

void DC_account::setAccount_GT(const QString &value)
{
    account_GT = value;
}
QString &DC_account::getAccount_msg()
{
    return account_msg;
}

void DC_account::setAccount_msg(const QString &value)
{
    account_msg = value;
}
QString &DC_account::getBelongdb()
{
    return belongdb;
}

void DC_account::setBelongdb(const QString &value)
{
    belongdb = value;
}
QString & DC_account::getIndex()
{
    return index;
}

void DC_account::setIndex(QString value)
{
    index = value;
}







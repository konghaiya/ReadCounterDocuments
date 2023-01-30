#include "dictionaries.h"

Dictionaries::Dictionaries()
{
}


Dictionaries::Dictionaries(QStringList &ListMsg)
{
     Dt_name = GetMsg(ListMsg,0);
     Dt_msg_type = GetMsg(ListMsg,1);
     Dt_ms = GetMsg(ListMsg,2);
     Dt_gt_type = GetMsg(ListMsg,3);
}

QString Dictionaries::GetMsg(QStringList &accountListMsg,int i)
{
    if (accountListMsg.value(i) == 0)
    {
        return "";
    }
    return accountListMsg.value(i);
}

QString Dictionaries::getDt_name()
{
    return Dt_name;
}

void Dictionaries::setDt_name(const QString &value)
{
    Dt_name = value;
}
QString Dictionaries::getDt_msg_type()
{
    return Dt_msg_type;
}

void Dictionaries::setDt_msg_type(const QString &value)
{
    Dt_msg_type = value;
}
QString Dictionaries::getDt_ms()
{
    return Dt_ms;
}

void Dictionaries::setDt_ms(const QString &value)
{
    Dt_ms = value;
}
QString Dictionaries::getDt_gt_type()
{
    return Dt_gt_type;
}

void Dictionaries::setDt_gt_type(const QString &value)
{
    Dt_gt_type = value;
}





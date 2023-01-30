#include "dt_data.h"

Dt_Data::Dt_Data()
{
}


Dt_Data::Dt_Data(QStringList &ListMsg)
{
     Dt_name = GetMsg(ListMsg,0);
     Dt_value = GetMsg(ListMsg,1);
     Dt_value_ms = GetMsg(ListMsg,2);
}

QString Dt_Data::GetMsg(QStringList &accountListMsg,int i)
{
    if (accountListMsg.value(i) == 0)
    {
        return "";
    }
    return accountListMsg.value(i);
}

QString Dt_Data::getDt_name()
{
    return Dt_name;
}

void Dt_Data::setDt_name(const QString &value)
{
    Dt_name = value;
}
QString Dt_Data::getDt_value()
{
    return Dt_value;
}

void Dt_Data::setDt_value(const QString &value)
{
    Dt_value = value;
}
QString Dt_Data::getDt_value_ms()
{
    return Dt_value_ms;
}

void Dt_Data::setDt_value_ms(const QString &value)
{
    Dt_value_ms = value;
}




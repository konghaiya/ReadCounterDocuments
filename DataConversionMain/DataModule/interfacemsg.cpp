#include "interfacemsg.h"

interfaceMsg::interfaceMsg()
{
}

interfaceMsg::interfaceMsg(QStringList &ListMsg)
{
    pt_name = GetMsg(ListMsg,0);
    pt_ms = GetMsg(ListMsg,1);
    pt_msg_type = GetMsg(ListMsg,2);
    pt_bz = GetMsg(ListMsg,3);
    pt_type = GetMsg(ListMsg,4);
    pt_is_must = GetMsg(ListMsg,5);
}

QString interfaceMsg::GetMsg(QStringList &accountListMsg,int i)
{
    if (accountListMsg.value(i) == 0)
    {
        return "";
    }
    return accountListMsg.value(i);
}

QString interfaceMsg::getPt_name()
{
    return pt_name;
}

void interfaceMsg::setPt_name(const QString &value)
{
    pt_name = value;
}
QString interfaceMsg::getPt_ms()
{
    return pt_ms;
}

void interfaceMsg::setPt_ms(const QString &value)
{
    pt_ms = value;
}
QString interfaceMsg::getPt_msg_type()
{
    return pt_msg_type;
}

void interfaceMsg::setPt_msg_type(const QString &value)
{
    pt_msg_type = value;
}
QString interfaceMsg::getPt_bz()
{
    return pt_bz;
}

void interfaceMsg::setPt_bz(const QString &value)
{
    pt_bz = value;
}
QString interfaceMsg::getPt_type()
{
    return pt_type;
}

void interfaceMsg::setPt_type(const QString &value)
{
    pt_type = value;
}
QString interfaceMsg::getPt_is_must()
{
    return pt_is_must;
}

void interfaceMsg::setPt_is_must(const QString &value)
{
    pt_is_must = value;
}







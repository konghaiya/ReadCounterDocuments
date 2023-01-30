#include "gt_interface.h"

gt_interface::gt_interface()
{
}

gt_interface::gt_interface(QStringList &ListMsg)
{
     interface_gnh = GetMsg(ListMsg,0);
     interface_ms = GetMsg(ListMsg,1);
     interface_yw_type = GetMsg(ListMsg,2);
     interface_gt_type = GetMsg(ListMsg,3);
     interface_bz = GetMsg(ListMsg,4);
}

QString gt_interface::GetMsg(QStringList &accountListMsg,int i)
{
    if (accountListMsg.value(i) == 0)
    {
        return "";
    }
    return accountListMsg.value(i);
}

QString gt_interface::getInterface_gnh(bool isNature)
{
    QString gnh = interface_gnh;
    if(isNature)
    {
        if(interface_yw_type == "1")
        {
            gnh.remove("HX_RZRQ_");
        }
        else
        {
            gnh.remove("HX_");
        }
    }
    return gnh;
}

void gt_interface::setInterface_gnh(const QString &value)
{
    interface_gnh = value;
}
QString gt_interface::getInterface_ms()
{
    return interface_ms;
}

void gt_interface::setInterface_ms(const QString &value)
{
    interface_ms = value;
}
QString gt_interface::getInterface_yw_type()
{
    if(interface_yw_type == "1")
    {
        return "两融";
    }
    else
    {
        return "普通";
    }
}

void gt_interface::setInterface_yw_type(const QString &value)
{
    interface_yw_type = value;
}
QString gt_interface::getInterface_gt_type()
{
    return interface_gt_type;
}

void gt_interface::setInterface_gt_type(const QString &value)
{
    interface_gt_type = value;
}
QString gt_interface::getInterface_bz()
{
    return interface_bz;
}

void gt_interface::setInterface_bz(const QString &value)
{
    interface_bz = value;
}






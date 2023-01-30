#ifndef INTERFACEMSG_H
#define INTERFACEMSG_H
#include<QStringList>
class interfaceMsg
{
public:
    interfaceMsg();
    interfaceMsg(QStringList &ListMsg);
    QString GetMsg(QStringList &accountListMsg, int i);
    QString getPt_name();
    void setPt_name(const QString &value);

    QString getPt_ms();
    void setPt_ms(const QString &value);

    QString getPt_msg_type();
    void setPt_msg_type(const QString &value);

    QString getPt_bz();
    void setPt_bz(const QString &value);

    QString getPt_type();
    void setPt_type(const QString &value);

    QString getPt_is_must();
    void setPt_is_must(const QString &value);

private:
    QString pt_name;
    QString pt_ms;
    QString pt_msg_type;
    QString pt_bz;
    QString pt_type;
    QString pt_is_must;
};

#endif // INTERFACEMSG_H

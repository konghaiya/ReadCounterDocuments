#ifndef GT_INTERFACE_H
#define GT_INTERFACE_H
#include<QString>
#include<QStringList>
#include <QMetaType>

class gt_interface
{
public:
    gt_interface();

    QString GetMsg(QStringList &accountListMsg, int i);
    gt_interface(QStringList &ListMsg);

    QString getInterface_gnh(bool isNature = false);
    void setInterface_gnh(const QString &value);

    QString getInterface_ms();
    void setInterface_ms(const QString &value);

    QString getInterface_yw_type();
    void setInterface_yw_type(const QString &value);

    QString getInterface_gt_type();
    void setInterface_gt_type(const QString &value);

    QString getInterface_bz();
    void setInterface_bz(const QString &value);
private:
    QString interface_gnh;
    QString interface_ms;
    QString interface_yw_type;
    QString interface_gt_type;
    QString interface_bz;
};
#endif // GT_INTERFACE_H

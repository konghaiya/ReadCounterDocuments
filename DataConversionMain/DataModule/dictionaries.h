#ifndef DICTIONARIES_H
#define DICTIONARIES_H
#include <QStringList>
class Dictionaries
{
public:
    Dictionaries();

    QString GetMsg(QStringList &accountListMsg, int i);
    Dictionaries(QStringList &ListMsg);

    QString getDt_name();
    void setDt_name(const QString &value);

    QString getDt_msg_type();
    void setDt_msg_type(const QString &value);

    QString getDt_ms();
    void setDt_ms(const QString &value);

    QString getDt_gt_type();
    void setDt_gt_type(const QString &value);

private:

    QString Dt_name;
    QString Dt_msg_type;
    QString Dt_ms;
    QString Dt_gt_type;
};

#endif // DICTIONARIES_H

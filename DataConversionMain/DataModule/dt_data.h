#ifndef DT_DATA_H
#define DT_DATA_H
#include <QStringList>
class Dt_Data
{
public:
    Dt_Data();

    QString GetMsg(QStringList &accountListMsg, int i);
    Dt_Data(QStringList &ListMsg);

    QString getDt_name();
    void setDt_name(const QString &value);

    QString getDt_value();
    void setDt_value(const QString &value);

    QString getDt_value_ms();
    void setDt_value_ms(const QString &value);

private:
    QString Dt_name;
    QString Dt_value;
    QString Dt_value_ms;
};

#endif // DT_DATA_H

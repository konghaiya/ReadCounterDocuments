#ifndef KSREADCONFIG_H
#define KSREADCONFIG_H

#include <QObject>
#include <QSettings>
#include "readxml_global.h"
class READXMLSHARED_EXPORT KsReadConfig
{
public:
    KsReadConfig();
    ~KsReadConfig();
    /**
     **@brief:读取配置文件;
     **@param:QString:文件名称
     **@return:none
     */
     static void ReadConfig(QString FileName);

    /**
     **@brief:向取配置文件中写入数据;
     **@param:QString:关键字； QString:关键字内容
     **@return:none
     */
      static void WriteValue(const QString &key, const QString &value);

    /**
     **@brief:获取配置文件中关键字的内容
     **@param:QString:Key值
     **@return:QString:关键字的Value
     */
     static QString GetValue(const QString &key);

private:
    /**程序设置*/
   static QSettings *m_pSet;


};

#endif // KSREADCONFIG_H

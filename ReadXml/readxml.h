#ifndef READXML_H
#define READXML_H

#include "readxml_global.h"
#include <QObject>
#include <QtXml/QDomComment>
#include <QtXml/QDomDocument>
#include <QFile>

typedef struct SqlNode{
    QString value;
    int count;
}SqlData,*PSqlData;

class READXMLSHARED_EXPORT ReadXml
{

public:
    ReadXml();
    ReadXml(QString fileName);
    ~ReadXml();
    /**
     * @brief LoadXml
     * @param fileName
     */
    static void LoadXml(QString fileName);
    /**
     **@brief:获取XML文件内容
     **@param:Key:XML文件中Key值, Type:XML文件中的类型
     **@return:返回XML中的Value值以及Count值
     */
    static SqlData GetValue(const QString &Key, const QString &Type);

    static void closeXml();

private:
   static QDomDocument *m_pDoc;   /**Dom*/
   static QFile *m_pfile;
};

#endif // READXML_H

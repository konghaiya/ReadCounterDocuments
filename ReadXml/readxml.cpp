#include "readxml.h"
#include <QDebug>

 QDomDocument * ReadXml::m_pDoc=NULL;   /**Dom*/
 QFile * ReadXml::m_pfile=NULL;

ReadXml::ReadXml()
{
}

ReadXml::ReadXml(QString fileName)
{
    LoadXml(fileName);
}

ReadXml::~ReadXml()
{
}

void ReadXml::LoadXml(QString fileName)
{
    int errorline;
    int errorCol;
    QString errorStr;
    m_pfile = new QFile(fileName);
    if (!m_pfile->open(QIODevice::ReadOnly | QIODevice::Text))
    {
       qDebug()<<"open file error";
       return;
    }
    m_pDoc = new QDomDocument();

    if(!m_pDoc->setContent(m_pfile, true, &errorStr, &errorline, &errorCol))
    {
        m_pfile->close();
        qDebug()<<"doc error::"<<errorStr;
        return ;
    }

    qDebug()<<"readxml scussful";
}

SqlData ReadXml::GetValue(const QString &Key, const QString &Type)
{
    SqlData Result;
    QDomNodeList nodeList = m_pDoc->elementsByTagName(Type);
    for(int i = 0; i < nodeList.count(); i++)
    {
        QDomNode node = nodeList.at(i);
        QDomNodeList itemList = node.childNodes();

        for(int j = 0; j < itemList.count(); j++)
        {
            QDomNode mynode = itemList.at(j);
            if(mynode.toElement().attribute("Key") == Key)
            {
                Result.value=mynode.toElement().attribute("Value");
                Result.count=mynode.toElement().attribute("Count").toInt();
                return Result;
            }
        }

    }
    return Result;
}

void ReadXml::closeXml()
{
    if(m_pDoc)
    {
        delete m_pDoc;
    }

    if(m_pfile)
    {
       m_pfile->close();
       delete m_pfile;
    }
}

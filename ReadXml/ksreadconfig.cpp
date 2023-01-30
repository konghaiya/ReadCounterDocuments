#include "ksreadconfig.h"

QSettings *KsReadConfig::m_pSet=NULL;

KsReadConfig::KsReadConfig()
{

}

KsReadConfig::~KsReadConfig()
{
    // delete m_pSet;
}

void KsReadConfig::ReadConfig(QString FileName)
{
    m_pSet = new QSettings(FileName, QSettings::IniFormat);
    return ;
}


void KsReadConfig::WriteValue(const QString &key, const QString &value)
{
    m_pSet->setValue(key, value);
}


QString KsReadConfig::GetValue(const QString &key)
{
    return m_pSet->value(key).toString();
}

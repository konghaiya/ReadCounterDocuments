#include "dclog.h"
#include<QTranslator>
#include<QDateTime>
#include<QMutex>
#include<QFile>
#include<QTextStream>

DcLog::DcLog()
{
}

bool DcLog::writeLog(QString msg , QString logFilePath)
{
    static QMutex mutex;
    mutex.lock();
    QString text;

    //日志写到文件
    QString current_date_time = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    QString message = QString("%1>%2").arg(current_date_time).arg(msg);
    QFile file(logFilePath);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Append))
    {
        return false;
    }
    QTextStream text_stream(&file);
    text_stream << message << "\r\n";
    file.flush();
    file.close();
    mutex.unlock();
    return true;
}

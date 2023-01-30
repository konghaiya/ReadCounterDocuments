#ifndef DC_PROCESS_H
#define DC_PROCESS_H
#include <QStringList>
#include <QProcess>

bool KillProcess(QString processName)
{
    QStringList params;
    params<<"/c"<<"taskkill"<<"-f"<<"-im"<<processName;
    QProcess process;
    process.start("cmd.exe",params);
    if (process.waitForFinished())
    {
        process.close();
        return true;
    }
    process.close();
    return false;
}

bool StartProcess(QString processPath)
{
    if(QProcess::startDetached(processPath))
    {
        return true;
    }
    else
    {
        return false;
    }
}

#endif // DC_PROCESS_H

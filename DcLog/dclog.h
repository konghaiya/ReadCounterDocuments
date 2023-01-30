#ifndef DCLOG_H
#define DCLOG_H

#include "dclog_global.h"

class DCLOGSHARED_EXPORT DcLog
{

public:
    DcLog();
    static bool writeLog(QString msg, QString logFilePath);
};

#endif // DCLOG_H

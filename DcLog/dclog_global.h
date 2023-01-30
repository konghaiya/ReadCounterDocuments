#ifndef DCLOG_GLOBAL_H
#define DCLOG_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DCLOG_LIBRARY)
#  define DCLOGSHARED_EXPORT Q_DECL_EXPORT
#else
#  define DCLOGSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // DCLOG_GLOBAL_H

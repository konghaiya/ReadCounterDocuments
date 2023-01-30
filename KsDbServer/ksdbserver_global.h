#ifndef KSDBSERVER_GLOBAL_H
#define KSDBSERVER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(KSDBSERVER_LIBRARY)
#  define KSDBSERVERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define KSDBSERVERSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // KSDBSERVER_GLOBAL_H

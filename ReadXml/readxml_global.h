#ifndef READXML_GLOBAL_H
#define READXML_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(READXML_LIBRARY)
#  define READXMLSHARED_EXPORT Q_DECL_EXPORT
#else
#  define READXMLSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // READXML_GLOBAL_H

#pragma once

#include <QtCore/qglobal.h>

#if defined(HELP_LIBRARY)
  #define HELP_SHARED_EXPORT Q_DECL_EXPORT
#else
  #define HELP_SHARED_EXPORT Q_DECL_IMPORT
#endif


#pragma once
#ifndef SRCC_LIBQSTRINGTOKENIZER_HPP
#define SRCC_LIBQSTRINGTOKENIZER_HPP

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QStringTokenizerBaseBase QStringTokenizerBaseBase;
#endif

QStringTokenizerBaseBase* QStringTokenizerBaseBase_new(const QStringTokenizerBaseBase* other);
QStringTokenizerBaseBase* QStringTokenizerBaseBase_new2(const QStringTokenizerBaseBase* param1);
void QStringTokenizerBaseBase_CopyAssign(QStringTokenizerBaseBase* self, QStringTokenizerBaseBase* other);

#ifdef __cplusplus
} /* extern C */
#endif

#endif

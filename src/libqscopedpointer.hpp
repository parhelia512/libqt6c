#pragma once
#ifndef SRCC_LIBQSCOPEDPOINTER_HPP
#define SRCC_LIBQSCOPEDPOINTER_HPP

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
typedef struct QScopedPointerPodDeleter QScopedPointerPodDeleter;
#endif

QScopedPointerPodDeleter* QScopedPointerPodDeleter_new(const QScopedPointerPodDeleter* other);
QScopedPointerPodDeleter* QScopedPointerPodDeleter_new2(QScopedPointerPodDeleter* other);
void QScopedPointerPodDeleter_CopyAssign(QScopedPointerPodDeleter* self, QScopedPointerPodDeleter* other);
void QScopedPointerPodDeleter_MoveAssign(QScopedPointerPodDeleter* self, QScopedPointerPodDeleter* other);
void QScopedPointerPodDeleter_Cleanup(void* pointer);
void QScopedPointerPodDeleter_OperatorCall(const QScopedPointerPodDeleter* self, void* pointer);
void QScopedPointerPodDeleter_Delete(QScopedPointerPodDeleter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif

#pragma once
#ifndef SRCC_LIBQXPTYPE_TRAITS_HPP
#define SRCC_LIBQXPTYPE_TRAITS_HPP

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_qxp__nonesuch)
typedef qxp::nonesuch qxp__nonesuch;
#endif
#else
typedef struct qxp__nonesuch qxp__nonesuch;
#endif

#ifdef __cplusplus
} /* extern C */
#endif

#endif

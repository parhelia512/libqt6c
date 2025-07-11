#pragma once
#ifndef SRCQT6C_LIBQOPERATINGSYSTEMVERSION_H
#define SRCQT6C_LIBQOPERATINGSYSTEMVERSION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qoperatingsystemversionbase.html

/// q_operatingsystemversionbase_new constructs a new QOperatingSystemVersionBase object.
///
/// ``` enum QOperatingSystemVersionBase__OSType osType, int vmajor ```
QOperatingSystemVersionBase* q_operatingsystemversionbase_new(int64_t osType, int vmajor);

/// q_operatingsystemversionbase_new2 constructs a new QOperatingSystemVersionBase object.
///
/// ``` QOperatingSystemVersionBase* param1 ```
QOperatingSystemVersionBase* q_operatingsystemversionbase_new2(void* param1);

/// q_operatingsystemversionbase_new3 constructs a new QOperatingSystemVersionBase object.
///
/// ``` enum QOperatingSystemVersionBase__OSType osType, int vmajor, int vminor ```
QOperatingSystemVersionBase* q_operatingsystemversionbase_new3(int64_t osType, int vmajor, int vminor);

/// q_operatingsystemversionbase_new4 constructs a new QOperatingSystemVersionBase object.
///
/// ``` enum QOperatingSystemVersionBase__OSType osType, int vmajor, int vminor, int vmicro ```
QOperatingSystemVersionBase* q_operatingsystemversionbase_new4(int64_t osType, int vmajor, int vminor, int vmicro);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#current)
///
///
QOperatingSystemVersionBase* q_operatingsystemversionbase_current();

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
///
/// ``` QOperatingSystemVersionBase* osversion ```
const char* q_operatingsystemversionbase_name(void* osversion);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#currentType)
///
///
int64_t q_operatingsystemversionbase_current_type();

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#version)
///
/// ``` QOperatingSystemVersionBase* self ```
QVersionNumber* q_operatingsystemversionbase_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#majorVersion)
///
/// ``` QOperatingSystemVersionBase* self ```
int32_t q_operatingsystemversionbase_major_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#minorVersion)
///
/// ``` QOperatingSystemVersionBase* self ```
int32_t q_operatingsystemversionbase_minor_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#microVersion)
///
/// ``` QOperatingSystemVersionBase* self ```
int32_t q_operatingsystemversionbase_micro_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#segmentCount)
///
/// ``` QOperatingSystemVersionBase* self ```
int32_t q_operatingsystemversionbase_segment_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#type)
///
/// ``` QOperatingSystemVersionBase* self ```
int64_t q_operatingsystemversionbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
///
/// ``` QOperatingSystemVersionBase* self ```
const char* q_operatingsystemversionbase_name2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#dtor.QOperatingSystemVersionBase)
///
/// Delete this object from C++ memory.
///
/// ``` QOperatingSystemVersionBase* self ```
void q_operatingsystemversionbase_delete(void* self);

/// https://doc.qt.io/qt-6/qoperatingsystemversionunexported.html

/// q_operatingsystemversionunexported_new constructs a new QOperatingSystemVersionUnexported object.
///
/// ``` QOperatingSystemVersionBase* other ```
QOperatingSystemVersionUnexported* q_operatingsystemversionunexported_new(void* other);

/// q_operatingsystemversionunexported_new2 constructs a new QOperatingSystemVersionUnexported object.
///
///
QOperatingSystemVersionUnexported* q_operatingsystemversionunexported_new2();

/// q_operatingsystemversionunexported_new3 constructs a new QOperatingSystemVersionUnexported object.
///
/// ``` QOperatingSystemVersionUnexported* param1 ```
QOperatingSystemVersionUnexported* q_operatingsystemversionunexported_new3(void* param1);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#current)
///
///
QOperatingSystemVersionBase* q_operatingsystemversionunexported_current();

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
///
/// ``` QOperatingSystemVersionBase* osversion ```
const char* q_operatingsystemversionunexported_name(void* osversion);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#currentType)
///
///
int64_t q_operatingsystemversionunexported_current_type();

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#version)
///
/// ``` QOperatingSystemVersionUnexported* self ```
QVersionNumber* q_operatingsystemversionunexported_version(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#majorVersion)
///
/// ``` QOperatingSystemVersionUnexported* self ```
int32_t q_operatingsystemversionunexported_major_version(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#minorVersion)
///
/// ``` QOperatingSystemVersionUnexported* self ```
int32_t q_operatingsystemversionunexported_minor_version(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#microVersion)
///
/// ``` QOperatingSystemVersionUnexported* self ```
int32_t q_operatingsystemversionunexported_micro_version(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#segmentCount)
///
/// ``` QOperatingSystemVersionUnexported* self ```
int32_t q_operatingsystemversionunexported_segment_count(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#type)
///
/// ``` QOperatingSystemVersionUnexported* self ```
int64_t q_operatingsystemversionunexported_type(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
///
/// ``` QOperatingSystemVersionUnexported* self ```
const char* q_operatingsystemversionunexported_name2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionunexported.html#dtor.QOperatingSystemVersionUnexported)
///
/// Delete this object from C++ memory.
///
/// ``` QOperatingSystemVersionUnexported* self ```
void q_operatingsystemversionunexported_delete(void* self);

/// https://doc.qt.io/qt-6/qoperatingsystemversion.html

/// q_operatingsystemversion_new constructs a new QOperatingSystemVersion object.
///
/// ``` QOperatingSystemVersionBase* osversion ```
QOperatingSystemVersion* q_operatingsystemversion_new(void* osversion);

/// q_operatingsystemversion_new2 constructs a new QOperatingSystemVersion object.
///
/// ``` enum QOperatingSystemVersion__OSType osType, int vmajor ```
QOperatingSystemVersion* q_operatingsystemversion_new2(int64_t osType, int vmajor);

/// q_operatingsystemversion_new3 constructs a new QOperatingSystemVersion object.
///
/// ``` QOperatingSystemVersion* param1 ```
QOperatingSystemVersion* q_operatingsystemversion_new3(void* param1);

/// q_operatingsystemversion_new4 constructs a new QOperatingSystemVersion object.
///
/// ``` enum QOperatingSystemVersion__OSType osType, int vmajor, int vminor ```
QOperatingSystemVersion* q_operatingsystemversion_new4(int64_t osType, int vmajor, int vminor);

/// q_operatingsystemversion_new5 constructs a new QOperatingSystemVersion object.
///
/// ``` enum QOperatingSystemVersion__OSType osType, int vmajor, int vminor, int vmicro ```
QOperatingSystemVersion* q_operatingsystemversion_new5(int64_t osType, int vmajor, int vminor, int vmicro);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#currentType)
///
///
int64_t q_operatingsystemversion_current_type();

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#type)
///
/// ``` QOperatingSystemVersion* self ```
int64_t q_operatingsystemversion_type(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#current)
///
///
QOperatingSystemVersionBase* q_operatingsystemversion_current();

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
///
/// ``` QOperatingSystemVersionBase* osversion ```
const char* q_operatingsystemversion_name(void* osversion);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#version)
///
/// ``` QOperatingSystemVersion* self ```
QVersionNumber* q_operatingsystemversion_version(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#majorVersion)
///
/// ``` QOperatingSystemVersion* self ```
int32_t q_operatingsystemversion_major_version(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#minorVersion)
///
/// ``` QOperatingSystemVersion* self ```
int32_t q_operatingsystemversion_minor_version(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#microVersion)
///
/// ``` QOperatingSystemVersion* self ```
int32_t q_operatingsystemversion_micro_version(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#segmentCount)
///
/// ``` QOperatingSystemVersion* self ```
int32_t q_operatingsystemversion_segment_count(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
///
/// ``` QOperatingSystemVersion* self ```
const char* q_operatingsystemversion_name2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#dtor.QOperatingSystemVersion)
///
/// Delete this object from C++ memory.
///
/// ``` QOperatingSystemVersion* self ```
void q_operatingsystemversion_delete(void* self);

/// https://doc.qt.io/qt-6/qoperatingsystemversion.html#types

typedef enum {
    QOPERATINGSYSTEMVERSIONBASE_OSTYPE_UNKNOWN = 0,
    QOPERATINGSYSTEMVERSIONBASE_OSTYPE_WINDOWS = 1,
    QOPERATINGSYSTEMVERSIONBASE_OSTYPE_MACOS = 2,
    QOPERATINGSYSTEMVERSIONBASE_OSTYPE_IOS = 3,
    QOPERATINGSYSTEMVERSIONBASE_OSTYPE_TVOS = 4,
    QOPERATINGSYSTEMVERSIONBASE_OSTYPE_WATCHOS = 5,
    QOPERATINGSYSTEMVERSIONBASE_OSTYPE_ANDROID = 6,
    QOPERATINGSYSTEMVERSIONBASE_OSTYPE_VISIONOS = 7
} QOperatingSystemVersionBase__OSType;

typedef enum {
    QOPERATINGSYSTEMVERSION_OSTYPE_UNKNOWN = 0,
    QOPERATINGSYSTEMVERSION_OSTYPE_WINDOWS = 1,
    QOPERATINGSYSTEMVERSION_OSTYPE_MACOS = 2,
    QOPERATINGSYSTEMVERSION_OSTYPE_IOS = 3,
    QOPERATINGSYSTEMVERSION_OSTYPE_TVOS = 4,
    QOPERATINGSYSTEMVERSION_OSTYPE_WATCHOS = 5,
    QOPERATINGSYSTEMVERSION_OSTYPE_ANDROID = 6,
    QOPERATINGSYSTEMVERSION_OSTYPE_VISIONOS = 7
} QOperatingSystemVersion__OSType;

#endif

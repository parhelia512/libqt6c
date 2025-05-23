#include <QAnyStringView>
#include <QBindingStorage>
#include <QBuffer>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QIODeviceBase>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qbuffer.h>
#include "libqbuffer.hpp"
#include "libqbuffer.hxx"

QBuffer* QBuffer_new() {
    return new VirtualQBuffer();
}

QBuffer* QBuffer_new2(QObject* parent) {
    return new VirtualQBuffer(parent);
}

QMetaObject* QBuffer_MetaObject(const QBuffer* self) {
    return (QMetaObject*)self->metaObject();
}

void* QBuffer_Metacast(QBuffer* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QBuffer_Metacall(QBuffer* self, int param1, int param2, void** param3) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QBuffer_OnMetacall(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_Metacall_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QBuffer_QBaseMetacall(QBuffer* self, int param1, int param2, void** param3) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_Metacall_IsBase(true);
        return vqbuffer->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QBuffer_Tr(const char* s) {
    QString _ret = QBuffer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QBuffer_Buffer(QBuffer* self) {
    QByteArray _qb = self->buffer();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QBuffer_Buffer2(const QBuffer* self) {
    const QByteArray _qb = self->buffer();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QBuffer_SetData(QBuffer* self, libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->setData(data_QByteArray);
}

void QBuffer_SetData2(QBuffer* self, const char* data, int lenVal) {
    self->setData(data, static_cast<int>(lenVal));
}

libqt_string QBuffer_Data(const QBuffer* self) {
    const QByteArray _qb = self->data();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QBuffer_Tr2(const char* s, const char* c) {
    QString _ret = QBuffer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QBuffer_Tr3(const char* s, const char* c, int n) {
    QString _ret = QBuffer::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool QBuffer_Open(QBuffer* self, int openMode) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        return vqbuffer->open(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        return vqbuffer->open(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
bool QBuffer_QBaseOpen(QBuffer* self, int openMode) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_Open_IsBase(true);
        return vqbuffer->open(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        return vqbuffer->open(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnOpen(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_Open_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_Open_Callback>(slot));
    }
}

// Derived class handler implementation
void QBuffer_Close(QBuffer* self) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->close();
    } else {
        vqbuffer->close();
    }
}

// Base class handler implementation
void QBuffer_QBaseClose(QBuffer* self) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_Close_IsBase(true);
        vqbuffer->close();
    } else {
        vqbuffer->close();
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnClose(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_Close_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_Close_Callback>(slot));
    }
}

// Derived class handler implementation
long long QBuffer_Size(const QBuffer* self) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        return static_cast<long long>(vqbuffer->size());
    } else {
        return static_cast<long long>(vqbuffer->size());
    }
}

// Base class handler implementation
long long QBuffer_QBaseSize(const QBuffer* self) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        vqbuffer->setQBuffer_Size_IsBase(true);
        return static_cast<long long>(vqbuffer->size());
    } else {
        return static_cast<long long>(vqbuffer->size());
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnSize(const QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        vqbuffer->setQBuffer_Size_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_Size_Callback>(slot));
    }
}

// Derived class handler implementation
long long QBuffer_Pos(const QBuffer* self) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        return static_cast<long long>(vqbuffer->pos());
    } else {
        return static_cast<long long>(vqbuffer->pos());
    }
}

// Base class handler implementation
long long QBuffer_QBasePos(const QBuffer* self) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        vqbuffer->setQBuffer_Pos_IsBase(true);
        return static_cast<long long>(vqbuffer->pos());
    } else {
        return static_cast<long long>(vqbuffer->pos());
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnPos(const QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        vqbuffer->setQBuffer_Pos_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_Pos_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBuffer_Seek(QBuffer* self, long long off) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        return vqbuffer->seek(static_cast<qint64>(off));
    } else {
        return vqbuffer->seek(static_cast<qint64>(off));
    }
}

// Base class handler implementation
bool QBuffer_QBaseSeek(QBuffer* self, long long off) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_Seek_IsBase(true);
        return vqbuffer->seek(static_cast<qint64>(off));
    } else {
        return vqbuffer->seek(static_cast<qint64>(off));
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnSeek(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_Seek_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_Seek_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBuffer_AtEnd(const QBuffer* self) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        return vqbuffer->atEnd();
    } else {
        return vqbuffer->atEnd();
    }
}

// Base class handler implementation
bool QBuffer_QBaseAtEnd(const QBuffer* self) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        vqbuffer->setQBuffer_AtEnd_IsBase(true);
        return vqbuffer->atEnd();
    } else {
        return vqbuffer->atEnd();
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnAtEnd(const QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        vqbuffer->setQBuffer_AtEnd_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_AtEnd_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBuffer_CanReadLine(const QBuffer* self) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        return vqbuffer->canReadLine();
    } else {
        return vqbuffer->canReadLine();
    }
}

// Base class handler implementation
bool QBuffer_QBaseCanReadLine(const QBuffer* self) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        vqbuffer->setQBuffer_CanReadLine_IsBase(true);
        return vqbuffer->canReadLine();
    } else {
        return vqbuffer->canReadLine();
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnCanReadLine(const QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        vqbuffer->setQBuffer_CanReadLine_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_CanReadLine_Callback>(slot));
    }
}

// Derived class handler implementation
void QBuffer_ConnectNotify(QBuffer* self, QMetaMethod* param1) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->connectNotify(*param1);
    } else {
        vqbuffer->connectNotify(*param1);
    }
}

// Base class handler implementation
void QBuffer_QBaseConnectNotify(QBuffer* self, QMetaMethod* param1) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_ConnectNotify_IsBase(true);
        vqbuffer->connectNotify(*param1);
    } else {
        vqbuffer->connectNotify(*param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnConnectNotify(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_ConnectNotify_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QBuffer_DisconnectNotify(QBuffer* self, QMetaMethod* param1) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->disconnectNotify(*param1);
    } else {
        vqbuffer->disconnectNotify(*param1);
    }
}

// Base class handler implementation
void QBuffer_QBaseDisconnectNotify(QBuffer* self, QMetaMethod* param1) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_DisconnectNotify_IsBase(true);
        vqbuffer->disconnectNotify(*param1);
    } else {
        vqbuffer->disconnectNotify(*param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnDisconnectNotify(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_DisconnectNotify_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
long long QBuffer_ReadData(QBuffer* self, char* data, long long maxlen) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        return static_cast<long long>(vqbuffer->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqbuffer->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QBuffer_QBaseReadData(QBuffer* self, char* data, long long maxlen) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_ReadData_IsBase(true);
        return static_cast<long long>(vqbuffer->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqbuffer->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnReadData(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_ReadData_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_ReadData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QBuffer_WriteData(QBuffer* self, const char* data, long long lenVal) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        return static_cast<long long>(vqbuffer->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(vqbuffer->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Base class handler implementation
long long QBuffer_QBaseWriteData(QBuffer* self, const char* data, long long lenVal) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_WriteData_IsBase(true);
        return static_cast<long long>(vqbuffer->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(vqbuffer->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnWriteData(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_WriteData_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_WriteData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBuffer_IsSequential(const QBuffer* self) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        return vqbuffer->isSequential();
    } else {
        return vqbuffer->isSequential();
    }
}

// Base class handler implementation
bool QBuffer_QBaseIsSequential(const QBuffer* self) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        vqbuffer->setQBuffer_IsSequential_IsBase(true);
        return vqbuffer->isSequential();
    } else {
        return vqbuffer->isSequential();
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnIsSequential(const QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        vqbuffer->setQBuffer_IsSequential_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_IsSequential_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBuffer_Reset(QBuffer* self) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        return vqbuffer->reset();
    } else {
        return vqbuffer->reset();
    }
}

// Base class handler implementation
bool QBuffer_QBaseReset(QBuffer* self) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_Reset_IsBase(true);
        return vqbuffer->reset();
    } else {
        return vqbuffer->reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnReset(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_Reset_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
long long QBuffer_BytesAvailable(const QBuffer* self) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        return static_cast<long long>(vqbuffer->bytesAvailable());
    } else {
        return static_cast<long long>(vqbuffer->bytesAvailable());
    }
}

// Base class handler implementation
long long QBuffer_QBaseBytesAvailable(const QBuffer* self) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        vqbuffer->setQBuffer_BytesAvailable_IsBase(true);
        return static_cast<long long>(vqbuffer->bytesAvailable());
    } else {
        return static_cast<long long>(vqbuffer->bytesAvailable());
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnBytesAvailable(const QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        vqbuffer->setQBuffer_BytesAvailable_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_BytesAvailable_Callback>(slot));
    }
}

// Derived class handler implementation
long long QBuffer_BytesToWrite(const QBuffer* self) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        return static_cast<long long>(vqbuffer->bytesToWrite());
    } else {
        return static_cast<long long>(vqbuffer->bytesToWrite());
    }
}

// Base class handler implementation
long long QBuffer_QBaseBytesToWrite(const QBuffer* self) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        vqbuffer->setQBuffer_BytesToWrite_IsBase(true);
        return static_cast<long long>(vqbuffer->bytesToWrite());
    } else {
        return static_cast<long long>(vqbuffer->bytesToWrite());
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnBytesToWrite(const QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        vqbuffer->setQBuffer_BytesToWrite_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_BytesToWrite_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBuffer_WaitForReadyRead(QBuffer* self, int msecs) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        return vqbuffer->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return vqbuffer->waitForReadyRead(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QBuffer_QBaseWaitForReadyRead(QBuffer* self, int msecs) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_WaitForReadyRead_IsBase(true);
        return vqbuffer->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return vqbuffer->waitForReadyRead(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnWaitForReadyRead(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_WaitForReadyRead_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_WaitForReadyRead_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBuffer_WaitForBytesWritten(QBuffer* self, int msecs) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        return vqbuffer->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return vqbuffer->waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QBuffer_QBaseWaitForBytesWritten(QBuffer* self, int msecs) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_WaitForBytesWritten_IsBase(true);
        return vqbuffer->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return vqbuffer->waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnWaitForBytesWritten(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_WaitForBytesWritten_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_WaitForBytesWritten_Callback>(slot));
    }
}

// Derived class handler implementation
long long QBuffer_ReadLineData(QBuffer* self, char* data, long long maxlen) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        return static_cast<long long>(vqbuffer->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqbuffer->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QBuffer_QBaseReadLineData(QBuffer* self, char* data, long long maxlen) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_ReadLineData_IsBase(true);
        return static_cast<long long>(vqbuffer->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqbuffer->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnReadLineData(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_ReadLineData_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_ReadLineData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QBuffer_SkipData(QBuffer* self, long long maxSize) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        return static_cast<long long>(vqbuffer->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(vqbuffer->skipData(static_cast<qint64>(maxSize)));
    }
}

// Base class handler implementation
long long QBuffer_QBaseSkipData(QBuffer* self, long long maxSize) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_SkipData_IsBase(true);
        return static_cast<long long>(vqbuffer->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(vqbuffer->skipData(static_cast<qint64>(maxSize)));
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnSkipData(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_SkipData_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_SkipData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBuffer_Event(QBuffer* self, QEvent* event) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        return vqbuffer->event(event);
    } else {
        return vqbuffer->event(event);
    }
}

// Base class handler implementation
bool QBuffer_QBaseEvent(QBuffer* self, QEvent* event) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_Event_IsBase(true);
        return vqbuffer->event(event);
    } else {
        return vqbuffer->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnEvent(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_Event_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBuffer_EventFilter(QBuffer* self, QObject* watched, QEvent* event) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        return vqbuffer->eventFilter(watched, event);
    } else {
        return vqbuffer->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QBuffer_QBaseEventFilter(QBuffer* self, QObject* watched, QEvent* event) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_EventFilter_IsBase(true);
        return vqbuffer->eventFilter(watched, event);
    } else {
        return vqbuffer->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnEventFilter(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_EventFilter_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QBuffer_TimerEvent(QBuffer* self, QTimerEvent* event) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->timerEvent(event);
    } else {
        vqbuffer->timerEvent(event);
    }
}

// Base class handler implementation
void QBuffer_QBaseTimerEvent(QBuffer* self, QTimerEvent* event) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_TimerEvent_IsBase(true);
        vqbuffer->timerEvent(event);
    } else {
        vqbuffer->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnTimerEvent(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_TimerEvent_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBuffer_ChildEvent(QBuffer* self, QChildEvent* event) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->childEvent(event);
    } else {
        vqbuffer->childEvent(event);
    }
}

// Base class handler implementation
void QBuffer_QBaseChildEvent(QBuffer* self, QChildEvent* event) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_ChildEvent_IsBase(true);
        vqbuffer->childEvent(event);
    } else {
        vqbuffer->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnChildEvent(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_ChildEvent_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBuffer_CustomEvent(QBuffer* self, QEvent* event) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->customEvent(event);
    } else {
        vqbuffer->customEvent(event);
    }
}

// Base class handler implementation
void QBuffer_QBaseCustomEvent(QBuffer* self, QEvent* event) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_CustomEvent_IsBase(true);
        vqbuffer->customEvent(event);
    } else {
        vqbuffer->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnCustomEvent(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_CustomEvent_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBuffer_SetOpenMode(QBuffer* self, int openMode) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        vqbuffer->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
void QBuffer_QBaseSetOpenMode(QBuffer* self, int openMode) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_SetOpenMode_IsBase(true);
        vqbuffer->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        vqbuffer->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnSetOpenMode(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_SetOpenMode_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_SetOpenMode_Callback>(slot));
    }
}

// Derived class handler implementation
void QBuffer_SetErrorString(QBuffer* self, libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setErrorString(errorString_QString);
    } else {
        vqbuffer->setErrorString(errorString_QString);
    }
}

// Base class handler implementation
void QBuffer_QBaseSetErrorString(QBuffer* self, libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_SetErrorString_IsBase(true);
        vqbuffer->setErrorString(errorString_QString);
    } else {
        vqbuffer->setErrorString(errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnSetErrorString(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->setQBuffer_SetErrorString_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QBuffer_Sender(const QBuffer* self) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        return vqbuffer->sender();
    } else {
        return vqbuffer->sender();
    }
}

// Base class handler implementation
QObject* QBuffer_QBaseSender(const QBuffer* self) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        vqbuffer->setQBuffer_Sender_IsBase(true);
        return vqbuffer->sender();
    } else {
        return vqbuffer->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnSender(const QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        vqbuffer->setQBuffer_Sender_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QBuffer_SenderSignalIndex(const QBuffer* self) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        return vqbuffer->senderSignalIndex();
    } else {
        return vqbuffer->senderSignalIndex();
    }
}

// Base class handler implementation
int QBuffer_QBaseSenderSignalIndex(const QBuffer* self) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        vqbuffer->setQBuffer_SenderSignalIndex_IsBase(true);
        return vqbuffer->senderSignalIndex();
    } else {
        return vqbuffer->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnSenderSignalIndex(const QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        vqbuffer->setQBuffer_SenderSignalIndex_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QBuffer_Receivers(const QBuffer* self, const char* signal) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        return vqbuffer->receivers(signal);
    } else {
        return vqbuffer->receivers(signal);
    }
}

// Base class handler implementation
int QBuffer_QBaseReceivers(const QBuffer* self, const char* signal) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        vqbuffer->setQBuffer_Receivers_IsBase(true);
        return vqbuffer->receivers(signal);
    } else {
        return vqbuffer->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnReceivers(const QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        vqbuffer->setQBuffer_Receivers_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBuffer_IsSignalConnected(const QBuffer* self, QMetaMethod* signal) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        return vqbuffer->isSignalConnected(*signal);
    } else {
        return vqbuffer->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QBuffer_QBaseIsSignalConnected(const QBuffer* self, QMetaMethod* signal) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        vqbuffer->setQBuffer_IsSignalConnected_IsBase(true);
        return vqbuffer->isSignalConnected(*signal);
    } else {
        return vqbuffer->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnIsSignalConnected(const QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        vqbuffer->setQBuffer_IsSignalConnected_Callback(reinterpret_cast<VirtualQBuffer::QBuffer_IsSignalConnected_Callback>(slot));
    }
}

void QBuffer_Delete(QBuffer* self) {
    delete self;
}

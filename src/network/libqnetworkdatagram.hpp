#pragma once
#ifndef SRC_NETWORKC_LIBQNETWORKDATAGRAM_HPP
#define SRC_NETWORKC_LIBQNETWORKDATAGRAM_HPP

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QHostAddress QHostAddress;
typedef struct QNetworkDatagram QNetworkDatagram;
#endif

QNetworkDatagram* QNetworkDatagram_new();
QNetworkDatagram* QNetworkDatagram_new2(libqt_string data);
QNetworkDatagram* QNetworkDatagram_new3(QNetworkDatagram* other);
QNetworkDatagram* QNetworkDatagram_new4(libqt_string data, QHostAddress* destinationAddress);
QNetworkDatagram* QNetworkDatagram_new5(libqt_string data, QHostAddress* destinationAddress, uint16_t port);
void QNetworkDatagram_OperatorAssign(QNetworkDatagram* self, QNetworkDatagram* other);
void QNetworkDatagram_Swap(QNetworkDatagram* self, QNetworkDatagram* other);
void QNetworkDatagram_Clear(QNetworkDatagram* self);
bool QNetworkDatagram_IsValid(const QNetworkDatagram* self);
bool QNetworkDatagram_IsNull(const QNetworkDatagram* self);
unsigned int QNetworkDatagram_InterfaceIndex(const QNetworkDatagram* self);
void QNetworkDatagram_SetInterfaceIndex(QNetworkDatagram* self, unsigned int index);
QHostAddress* QNetworkDatagram_SenderAddress(const QNetworkDatagram* self);
QHostAddress* QNetworkDatagram_DestinationAddress(const QNetworkDatagram* self);
int QNetworkDatagram_SenderPort(const QNetworkDatagram* self);
int QNetworkDatagram_DestinationPort(const QNetworkDatagram* self);
void QNetworkDatagram_SetSender(QNetworkDatagram* self, QHostAddress* address);
void QNetworkDatagram_SetDestination(QNetworkDatagram* self, QHostAddress* address, uint16_t port);
int QNetworkDatagram_HopLimit(const QNetworkDatagram* self);
void QNetworkDatagram_SetHopLimit(QNetworkDatagram* self, int count);
libqt_string QNetworkDatagram_Data(const QNetworkDatagram* self);
void QNetworkDatagram_SetData(QNetworkDatagram* self, libqt_string data);
QNetworkDatagram* QNetworkDatagram_MakeReply(const QNetworkDatagram* self, libqt_string payload);
void QNetworkDatagram_SetSender2(QNetworkDatagram* self, QHostAddress* address, uint16_t port);
void QNetworkDatagram_Delete(QNetworkDatagram* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif

#pragma once
#ifndef SRCC_LIBVIRTUALQGRAPHICSTRANSFORM_H
#define SRCC_LIBVIRTUALQGRAPHICSTRANSFORM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsTransform so that we can call protected methods
class VirtualQGraphicsTransform : public QGraphicsTransform {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsTransform_Metacall_Callback = int (*)(QGraphicsTransform*, QMetaObject::Call, int, void**);
    using QGraphicsTransform_ApplyTo_Callback = void (*)(const QGraphicsTransform*, QMatrix4x4*);
    using QGraphicsTransform_Event_Callback = bool (*)(QGraphicsTransform*, QEvent*);
    using QGraphicsTransform_EventFilter_Callback = bool (*)(QGraphicsTransform*, QObject*, QEvent*);
    using QGraphicsTransform_TimerEvent_Callback = void (*)(QGraphicsTransform*, QTimerEvent*);
    using QGraphicsTransform_ChildEvent_Callback = void (*)(QGraphicsTransform*, QChildEvent*);
    using QGraphicsTransform_CustomEvent_Callback = void (*)(QGraphicsTransform*, QEvent*);
    using QGraphicsTransform_ConnectNotify_Callback = void (*)(QGraphicsTransform*, const QMetaMethod&);
    using QGraphicsTransform_DisconnectNotify_Callback = void (*)(QGraphicsTransform*, const QMetaMethod&);
    using QGraphicsTransform_Update_Callback = void (*)();
    using QGraphicsTransform_Sender_Callback = QObject* (*)();
    using QGraphicsTransform_SenderSignalIndex_Callback = int (*)();
    using QGraphicsTransform_Receivers_Callback = int (*)(const QGraphicsTransform*, const char*);
    using QGraphicsTransform_IsSignalConnected_Callback = bool (*)(const QGraphicsTransform*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QGraphicsTransform_Metacall_Callback qgraphicstransform_metacall_callback = nullptr;
    QGraphicsTransform_ApplyTo_Callback qgraphicstransform_applyto_callback = nullptr;
    QGraphicsTransform_Event_Callback qgraphicstransform_event_callback = nullptr;
    QGraphicsTransform_EventFilter_Callback qgraphicstransform_eventfilter_callback = nullptr;
    QGraphicsTransform_TimerEvent_Callback qgraphicstransform_timerevent_callback = nullptr;
    QGraphicsTransform_ChildEvent_Callback qgraphicstransform_childevent_callback = nullptr;
    QGraphicsTransform_CustomEvent_Callback qgraphicstransform_customevent_callback = nullptr;
    QGraphicsTransform_ConnectNotify_Callback qgraphicstransform_connectnotify_callback = nullptr;
    QGraphicsTransform_DisconnectNotify_Callback qgraphicstransform_disconnectnotify_callback = nullptr;
    QGraphicsTransform_Update_Callback qgraphicstransform_update_callback = nullptr;
    QGraphicsTransform_Sender_Callback qgraphicstransform_sender_callback = nullptr;
    QGraphicsTransform_SenderSignalIndex_Callback qgraphicstransform_sendersignalindex_callback = nullptr;
    QGraphicsTransform_Receivers_Callback qgraphicstransform_receivers_callback = nullptr;
    QGraphicsTransform_IsSignalConnected_Callback qgraphicstransform_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicstransform_metacall_isbase = false;
    mutable bool qgraphicstransform_applyto_isbase = false;
    mutable bool qgraphicstransform_event_isbase = false;
    mutable bool qgraphicstransform_eventfilter_isbase = false;
    mutable bool qgraphicstransform_timerevent_isbase = false;
    mutable bool qgraphicstransform_childevent_isbase = false;
    mutable bool qgraphicstransform_customevent_isbase = false;
    mutable bool qgraphicstransform_connectnotify_isbase = false;
    mutable bool qgraphicstransform_disconnectnotify_isbase = false;
    mutable bool qgraphicstransform_update_isbase = false;
    mutable bool qgraphicstransform_sender_isbase = false;
    mutable bool qgraphicstransform_sendersignalindex_isbase = false;
    mutable bool qgraphicstransform_receivers_isbase = false;
    mutable bool qgraphicstransform_issignalconnected_isbase = false;

  public:
    VirtualQGraphicsTransform() : QGraphicsTransform(){};
    VirtualQGraphicsTransform(QObject* parent) : QGraphicsTransform(parent){};

    ~VirtualQGraphicsTransform() {
        qgraphicstransform_metacall_callback = nullptr;
        qgraphicstransform_applyto_callback = nullptr;
        qgraphicstransform_event_callback = nullptr;
        qgraphicstransform_eventfilter_callback = nullptr;
        qgraphicstransform_timerevent_callback = nullptr;
        qgraphicstransform_childevent_callback = nullptr;
        qgraphicstransform_customevent_callback = nullptr;
        qgraphicstransform_connectnotify_callback = nullptr;
        qgraphicstransform_disconnectnotify_callback = nullptr;
        qgraphicstransform_update_callback = nullptr;
        qgraphicstransform_sender_callback = nullptr;
        qgraphicstransform_sendersignalindex_callback = nullptr;
        qgraphicstransform_receivers_callback = nullptr;
        qgraphicstransform_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsTransform_Metacall_Callback(QGraphicsTransform_Metacall_Callback cb) { qgraphicstransform_metacall_callback = cb; }
    void setQGraphicsTransform_ApplyTo_Callback(QGraphicsTransform_ApplyTo_Callback cb) { qgraphicstransform_applyto_callback = cb; }
    void setQGraphicsTransform_Event_Callback(QGraphicsTransform_Event_Callback cb) { qgraphicstransform_event_callback = cb; }
    void setQGraphicsTransform_EventFilter_Callback(QGraphicsTransform_EventFilter_Callback cb) { qgraphicstransform_eventfilter_callback = cb; }
    void setQGraphicsTransform_TimerEvent_Callback(QGraphicsTransform_TimerEvent_Callback cb) { qgraphicstransform_timerevent_callback = cb; }
    void setQGraphicsTransform_ChildEvent_Callback(QGraphicsTransform_ChildEvent_Callback cb) { qgraphicstransform_childevent_callback = cb; }
    void setQGraphicsTransform_CustomEvent_Callback(QGraphicsTransform_CustomEvent_Callback cb) { qgraphicstransform_customevent_callback = cb; }
    void setQGraphicsTransform_ConnectNotify_Callback(QGraphicsTransform_ConnectNotify_Callback cb) { qgraphicstransform_connectnotify_callback = cb; }
    void setQGraphicsTransform_DisconnectNotify_Callback(QGraphicsTransform_DisconnectNotify_Callback cb) { qgraphicstransform_disconnectnotify_callback = cb; }
    void setQGraphicsTransform_Update_Callback(QGraphicsTransform_Update_Callback cb) { qgraphicstransform_update_callback = cb; }
    void setQGraphicsTransform_Sender_Callback(QGraphicsTransform_Sender_Callback cb) { qgraphicstransform_sender_callback = cb; }
    void setQGraphicsTransform_SenderSignalIndex_Callback(QGraphicsTransform_SenderSignalIndex_Callback cb) { qgraphicstransform_sendersignalindex_callback = cb; }
    void setQGraphicsTransform_Receivers_Callback(QGraphicsTransform_Receivers_Callback cb) { qgraphicstransform_receivers_callback = cb; }
    void setQGraphicsTransform_IsSignalConnected_Callback(QGraphicsTransform_IsSignalConnected_Callback cb) { qgraphicstransform_issignalconnected_callback = cb; }

    // Base flag setters
    void setQGraphicsTransform_Metacall_IsBase(bool value) const { qgraphicstransform_metacall_isbase = value; }
    void setQGraphicsTransform_ApplyTo_IsBase(bool value) const { qgraphicstransform_applyto_isbase = value; }
    void setQGraphicsTransform_Event_IsBase(bool value) const { qgraphicstransform_event_isbase = value; }
    void setQGraphicsTransform_EventFilter_IsBase(bool value) const { qgraphicstransform_eventfilter_isbase = value; }
    void setQGraphicsTransform_TimerEvent_IsBase(bool value) const { qgraphicstransform_timerevent_isbase = value; }
    void setQGraphicsTransform_ChildEvent_IsBase(bool value) const { qgraphicstransform_childevent_isbase = value; }
    void setQGraphicsTransform_CustomEvent_IsBase(bool value) const { qgraphicstransform_customevent_isbase = value; }
    void setQGraphicsTransform_ConnectNotify_IsBase(bool value) const { qgraphicstransform_connectnotify_isbase = value; }
    void setQGraphicsTransform_DisconnectNotify_IsBase(bool value) const { qgraphicstransform_disconnectnotify_isbase = value; }
    void setQGraphicsTransform_Update_IsBase(bool value) const { qgraphicstransform_update_isbase = value; }
    void setQGraphicsTransform_Sender_IsBase(bool value) const { qgraphicstransform_sender_isbase = value; }
    void setQGraphicsTransform_SenderSignalIndex_IsBase(bool value) const { qgraphicstransform_sendersignalindex_isbase = value; }
    void setQGraphicsTransform_Receivers_IsBase(bool value) const { qgraphicstransform_receivers_isbase = value; }
    void setQGraphicsTransform_IsSignalConnected_IsBase(bool value) const { qgraphicstransform_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicstransform_metacall_isbase) {
            qgraphicstransform_metacall_isbase = false;
            return QGraphicsTransform::qt_metacall(param1, param2, param3);
        } else if (qgraphicstransform_metacall_callback != nullptr) {
            return qgraphicstransform_metacall_callback(this, param1, param2, param3);
        } else {
            return QGraphicsTransform::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyTo(QMatrix4x4* matrix) const override {
        qgraphicstransform_applyto_callback(this, matrix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicstransform_event_isbase) {
            qgraphicstransform_event_isbase = false;
            return QGraphicsTransform::event(event);
        } else if (qgraphicstransform_event_callback != nullptr) {
            return qgraphicstransform_event_callback(this, event);
        } else {
            return QGraphicsTransform::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicstransform_eventfilter_isbase) {
            qgraphicstransform_eventfilter_isbase = false;
            return QGraphicsTransform::eventFilter(watched, event);
        } else if (qgraphicstransform_eventfilter_callback != nullptr) {
            return qgraphicstransform_eventfilter_callback(this, watched, event);
        } else {
            return QGraphicsTransform::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicstransform_timerevent_isbase) {
            qgraphicstransform_timerevent_isbase = false;
            QGraphicsTransform::timerEvent(event);
        } else if (qgraphicstransform_timerevent_callback != nullptr) {
            qgraphicstransform_timerevent_callback(this, event);
        } else {
            QGraphicsTransform::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicstransform_childevent_isbase) {
            qgraphicstransform_childevent_isbase = false;
            QGraphicsTransform::childEvent(event);
        } else if (qgraphicstransform_childevent_callback != nullptr) {
            qgraphicstransform_childevent_callback(this, event);
        } else {
            QGraphicsTransform::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicstransform_customevent_isbase) {
            qgraphicstransform_customevent_isbase = false;
            QGraphicsTransform::customEvent(event);
        } else if (qgraphicstransform_customevent_callback != nullptr) {
            qgraphicstransform_customevent_callback(this, event);
        } else {
            QGraphicsTransform::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicstransform_connectnotify_isbase) {
            qgraphicstransform_connectnotify_isbase = false;
            QGraphicsTransform::connectNotify(signal);
        } else if (qgraphicstransform_connectnotify_callback != nullptr) {
            qgraphicstransform_connectnotify_callback(this, signal);
        } else {
            QGraphicsTransform::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicstransform_disconnectnotify_isbase) {
            qgraphicstransform_disconnectnotify_isbase = false;
            QGraphicsTransform::disconnectNotify(signal);
        } else if (qgraphicstransform_disconnectnotify_callback != nullptr) {
            qgraphicstransform_disconnectnotify_callback(this, signal);
        } else {
            QGraphicsTransform::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void update() {
        if (qgraphicstransform_update_isbase) {
            qgraphicstransform_update_isbase = false;
            QGraphicsTransform::update();
        } else if (qgraphicstransform_update_callback != nullptr) {
            qgraphicstransform_update_callback();
        } else {
            QGraphicsTransform::update();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgraphicstransform_sender_isbase) {
            qgraphicstransform_sender_isbase = false;
            return QGraphicsTransform::sender();
        } else if (qgraphicstransform_sender_callback != nullptr) {
            return qgraphicstransform_sender_callback();
        } else {
            return QGraphicsTransform::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgraphicstransform_sendersignalindex_isbase) {
            qgraphicstransform_sendersignalindex_isbase = false;
            return QGraphicsTransform::senderSignalIndex();
        } else if (qgraphicstransform_sendersignalindex_callback != nullptr) {
            return qgraphicstransform_sendersignalindex_callback();
        } else {
            return QGraphicsTransform::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgraphicstransform_receivers_isbase) {
            qgraphicstransform_receivers_isbase = false;
            return QGraphicsTransform::receivers(signal);
        } else if (qgraphicstransform_receivers_callback != nullptr) {
            return qgraphicstransform_receivers_callback(this, signal);
        } else {
            return QGraphicsTransform::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgraphicstransform_issignalconnected_isbase) {
            qgraphicstransform_issignalconnected_isbase = false;
            return QGraphicsTransform::isSignalConnected(signal);
        } else if (qgraphicstransform_issignalconnected_callback != nullptr) {
            return qgraphicstransform_issignalconnected_callback(this, signal);
        } else {
            return QGraphicsTransform::isSignalConnected(signal);
        }
    }
};

// This class is a subclass of QGraphicsScale so that we can call protected methods
class VirtualQGraphicsScale : public QGraphicsScale {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsScale_Metacall_Callback = int (*)(QGraphicsScale*, QMetaObject::Call, int, void**);
    using QGraphicsScale_ApplyTo_Callback = void (*)(const QGraphicsScale*, QMatrix4x4*);
    using QGraphicsScale_Event_Callback = bool (*)(QGraphicsScale*, QEvent*);
    using QGraphicsScale_EventFilter_Callback = bool (*)(QGraphicsScale*, QObject*, QEvent*);
    using QGraphicsScale_TimerEvent_Callback = void (*)(QGraphicsScale*, QTimerEvent*);
    using QGraphicsScale_ChildEvent_Callback = void (*)(QGraphicsScale*, QChildEvent*);
    using QGraphicsScale_CustomEvent_Callback = void (*)(QGraphicsScale*, QEvent*);
    using QGraphicsScale_ConnectNotify_Callback = void (*)(QGraphicsScale*, const QMetaMethod&);
    using QGraphicsScale_DisconnectNotify_Callback = void (*)(QGraphicsScale*, const QMetaMethod&);
    using QGraphicsScale_Update_Callback = void (*)();
    using QGraphicsScale_Sender_Callback = QObject* (*)();
    using QGraphicsScale_SenderSignalIndex_Callback = int (*)();
    using QGraphicsScale_Receivers_Callback = int (*)(const QGraphicsScale*, const char*);
    using QGraphicsScale_IsSignalConnected_Callback = bool (*)(const QGraphicsScale*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QGraphicsScale_Metacall_Callback qgraphicsscale_metacall_callback = nullptr;
    QGraphicsScale_ApplyTo_Callback qgraphicsscale_applyto_callback = nullptr;
    QGraphicsScale_Event_Callback qgraphicsscale_event_callback = nullptr;
    QGraphicsScale_EventFilter_Callback qgraphicsscale_eventfilter_callback = nullptr;
    QGraphicsScale_TimerEvent_Callback qgraphicsscale_timerevent_callback = nullptr;
    QGraphicsScale_ChildEvent_Callback qgraphicsscale_childevent_callback = nullptr;
    QGraphicsScale_CustomEvent_Callback qgraphicsscale_customevent_callback = nullptr;
    QGraphicsScale_ConnectNotify_Callback qgraphicsscale_connectnotify_callback = nullptr;
    QGraphicsScale_DisconnectNotify_Callback qgraphicsscale_disconnectnotify_callback = nullptr;
    QGraphicsScale_Update_Callback qgraphicsscale_update_callback = nullptr;
    QGraphicsScale_Sender_Callback qgraphicsscale_sender_callback = nullptr;
    QGraphicsScale_SenderSignalIndex_Callback qgraphicsscale_sendersignalindex_callback = nullptr;
    QGraphicsScale_Receivers_Callback qgraphicsscale_receivers_callback = nullptr;
    QGraphicsScale_IsSignalConnected_Callback qgraphicsscale_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsscale_metacall_isbase = false;
    mutable bool qgraphicsscale_applyto_isbase = false;
    mutable bool qgraphicsscale_event_isbase = false;
    mutable bool qgraphicsscale_eventfilter_isbase = false;
    mutable bool qgraphicsscale_timerevent_isbase = false;
    mutable bool qgraphicsscale_childevent_isbase = false;
    mutable bool qgraphicsscale_customevent_isbase = false;
    mutable bool qgraphicsscale_connectnotify_isbase = false;
    mutable bool qgraphicsscale_disconnectnotify_isbase = false;
    mutable bool qgraphicsscale_update_isbase = false;
    mutable bool qgraphicsscale_sender_isbase = false;
    mutable bool qgraphicsscale_sendersignalindex_isbase = false;
    mutable bool qgraphicsscale_receivers_isbase = false;
    mutable bool qgraphicsscale_issignalconnected_isbase = false;

  public:
    VirtualQGraphicsScale() : QGraphicsScale(){};
    VirtualQGraphicsScale(QObject* parent) : QGraphicsScale(parent){};

    ~VirtualQGraphicsScale() {
        qgraphicsscale_metacall_callback = nullptr;
        qgraphicsscale_applyto_callback = nullptr;
        qgraphicsscale_event_callback = nullptr;
        qgraphicsscale_eventfilter_callback = nullptr;
        qgraphicsscale_timerevent_callback = nullptr;
        qgraphicsscale_childevent_callback = nullptr;
        qgraphicsscale_customevent_callback = nullptr;
        qgraphicsscale_connectnotify_callback = nullptr;
        qgraphicsscale_disconnectnotify_callback = nullptr;
        qgraphicsscale_update_callback = nullptr;
        qgraphicsscale_sender_callback = nullptr;
        qgraphicsscale_sendersignalindex_callback = nullptr;
        qgraphicsscale_receivers_callback = nullptr;
        qgraphicsscale_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsScale_Metacall_Callback(QGraphicsScale_Metacall_Callback cb) { qgraphicsscale_metacall_callback = cb; }
    void setQGraphicsScale_ApplyTo_Callback(QGraphicsScale_ApplyTo_Callback cb) { qgraphicsscale_applyto_callback = cb; }
    void setQGraphicsScale_Event_Callback(QGraphicsScale_Event_Callback cb) { qgraphicsscale_event_callback = cb; }
    void setQGraphicsScale_EventFilter_Callback(QGraphicsScale_EventFilter_Callback cb) { qgraphicsscale_eventfilter_callback = cb; }
    void setQGraphicsScale_TimerEvent_Callback(QGraphicsScale_TimerEvent_Callback cb) { qgraphicsscale_timerevent_callback = cb; }
    void setQGraphicsScale_ChildEvent_Callback(QGraphicsScale_ChildEvent_Callback cb) { qgraphicsscale_childevent_callback = cb; }
    void setQGraphicsScale_CustomEvent_Callback(QGraphicsScale_CustomEvent_Callback cb) { qgraphicsscale_customevent_callback = cb; }
    void setQGraphicsScale_ConnectNotify_Callback(QGraphicsScale_ConnectNotify_Callback cb) { qgraphicsscale_connectnotify_callback = cb; }
    void setQGraphicsScale_DisconnectNotify_Callback(QGraphicsScale_DisconnectNotify_Callback cb) { qgraphicsscale_disconnectnotify_callback = cb; }
    void setQGraphicsScale_Update_Callback(QGraphicsScale_Update_Callback cb) { qgraphicsscale_update_callback = cb; }
    void setQGraphicsScale_Sender_Callback(QGraphicsScale_Sender_Callback cb) { qgraphicsscale_sender_callback = cb; }
    void setQGraphicsScale_SenderSignalIndex_Callback(QGraphicsScale_SenderSignalIndex_Callback cb) { qgraphicsscale_sendersignalindex_callback = cb; }
    void setQGraphicsScale_Receivers_Callback(QGraphicsScale_Receivers_Callback cb) { qgraphicsscale_receivers_callback = cb; }
    void setQGraphicsScale_IsSignalConnected_Callback(QGraphicsScale_IsSignalConnected_Callback cb) { qgraphicsscale_issignalconnected_callback = cb; }

    // Base flag setters
    void setQGraphicsScale_Metacall_IsBase(bool value) const { qgraphicsscale_metacall_isbase = value; }
    void setQGraphicsScale_ApplyTo_IsBase(bool value) const { qgraphicsscale_applyto_isbase = value; }
    void setQGraphicsScale_Event_IsBase(bool value) const { qgraphicsscale_event_isbase = value; }
    void setQGraphicsScale_EventFilter_IsBase(bool value) const { qgraphicsscale_eventfilter_isbase = value; }
    void setQGraphicsScale_TimerEvent_IsBase(bool value) const { qgraphicsscale_timerevent_isbase = value; }
    void setQGraphicsScale_ChildEvent_IsBase(bool value) const { qgraphicsscale_childevent_isbase = value; }
    void setQGraphicsScale_CustomEvent_IsBase(bool value) const { qgraphicsscale_customevent_isbase = value; }
    void setQGraphicsScale_ConnectNotify_IsBase(bool value) const { qgraphicsscale_connectnotify_isbase = value; }
    void setQGraphicsScale_DisconnectNotify_IsBase(bool value) const { qgraphicsscale_disconnectnotify_isbase = value; }
    void setQGraphicsScale_Update_IsBase(bool value) const { qgraphicsscale_update_isbase = value; }
    void setQGraphicsScale_Sender_IsBase(bool value) const { qgraphicsscale_sender_isbase = value; }
    void setQGraphicsScale_SenderSignalIndex_IsBase(bool value) const { qgraphicsscale_sendersignalindex_isbase = value; }
    void setQGraphicsScale_Receivers_IsBase(bool value) const { qgraphicsscale_receivers_isbase = value; }
    void setQGraphicsScale_IsSignalConnected_IsBase(bool value) const { qgraphicsscale_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsscale_metacall_isbase) {
            qgraphicsscale_metacall_isbase = false;
            return QGraphicsScale::qt_metacall(param1, param2, param3);
        } else if (qgraphicsscale_metacall_callback != nullptr) {
            return qgraphicsscale_metacall_callback(this, param1, param2, param3);
        } else {
            return QGraphicsScale::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyTo(QMatrix4x4* matrix) const override {
        if (qgraphicsscale_applyto_isbase) {
            qgraphicsscale_applyto_isbase = false;
            QGraphicsScale::applyTo(matrix);
        } else if (qgraphicsscale_applyto_callback != nullptr) {
            qgraphicsscale_applyto_callback(this, matrix);
        } else {
            QGraphicsScale::applyTo(matrix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicsscale_event_isbase) {
            qgraphicsscale_event_isbase = false;
            return QGraphicsScale::event(event);
        } else if (qgraphicsscale_event_callback != nullptr) {
            return qgraphicsscale_event_callback(this, event);
        } else {
            return QGraphicsScale::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicsscale_eventfilter_isbase) {
            qgraphicsscale_eventfilter_isbase = false;
            return QGraphicsScale::eventFilter(watched, event);
        } else if (qgraphicsscale_eventfilter_callback != nullptr) {
            return qgraphicsscale_eventfilter_callback(this, watched, event);
        } else {
            return QGraphicsScale::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsscale_timerevent_isbase) {
            qgraphicsscale_timerevent_isbase = false;
            QGraphicsScale::timerEvent(event);
        } else if (qgraphicsscale_timerevent_callback != nullptr) {
            qgraphicsscale_timerevent_callback(this, event);
        } else {
            QGraphicsScale::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsscale_childevent_isbase) {
            qgraphicsscale_childevent_isbase = false;
            QGraphicsScale::childEvent(event);
        } else if (qgraphicsscale_childevent_callback != nullptr) {
            qgraphicsscale_childevent_callback(this, event);
        } else {
            QGraphicsScale::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsscale_customevent_isbase) {
            qgraphicsscale_customevent_isbase = false;
            QGraphicsScale::customEvent(event);
        } else if (qgraphicsscale_customevent_callback != nullptr) {
            qgraphicsscale_customevent_callback(this, event);
        } else {
            QGraphicsScale::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsscale_connectnotify_isbase) {
            qgraphicsscale_connectnotify_isbase = false;
            QGraphicsScale::connectNotify(signal);
        } else if (qgraphicsscale_connectnotify_callback != nullptr) {
            qgraphicsscale_connectnotify_callback(this, signal);
        } else {
            QGraphicsScale::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsscale_disconnectnotify_isbase) {
            qgraphicsscale_disconnectnotify_isbase = false;
            QGraphicsScale::disconnectNotify(signal);
        } else if (qgraphicsscale_disconnectnotify_callback != nullptr) {
            qgraphicsscale_disconnectnotify_callback(this, signal);
        } else {
            QGraphicsScale::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void update() {
        if (qgraphicsscale_update_isbase) {
            qgraphicsscale_update_isbase = false;
            QGraphicsScale::update();
        } else if (qgraphicsscale_update_callback != nullptr) {
            qgraphicsscale_update_callback();
        } else {
            QGraphicsScale::update();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgraphicsscale_sender_isbase) {
            qgraphicsscale_sender_isbase = false;
            return QGraphicsScale::sender();
        } else if (qgraphicsscale_sender_callback != nullptr) {
            return qgraphicsscale_sender_callback();
        } else {
            return QGraphicsScale::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgraphicsscale_sendersignalindex_isbase) {
            qgraphicsscale_sendersignalindex_isbase = false;
            return QGraphicsScale::senderSignalIndex();
        } else if (qgraphicsscale_sendersignalindex_callback != nullptr) {
            return qgraphicsscale_sendersignalindex_callback();
        } else {
            return QGraphicsScale::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgraphicsscale_receivers_isbase) {
            qgraphicsscale_receivers_isbase = false;
            return QGraphicsScale::receivers(signal);
        } else if (qgraphicsscale_receivers_callback != nullptr) {
            return qgraphicsscale_receivers_callback(this, signal);
        } else {
            return QGraphicsScale::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgraphicsscale_issignalconnected_isbase) {
            qgraphicsscale_issignalconnected_isbase = false;
            return QGraphicsScale::isSignalConnected(signal);
        } else if (qgraphicsscale_issignalconnected_callback != nullptr) {
            return qgraphicsscale_issignalconnected_callback(this, signal);
        } else {
            return QGraphicsScale::isSignalConnected(signal);
        }
    }
};

// This class is a subclass of QGraphicsRotation so that we can call protected methods
class VirtualQGraphicsRotation : public QGraphicsRotation {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsRotation_Metacall_Callback = int (*)(QGraphicsRotation*, QMetaObject::Call, int, void**);
    using QGraphicsRotation_ApplyTo_Callback = void (*)(const QGraphicsRotation*, QMatrix4x4*);
    using QGraphicsRotation_Event_Callback = bool (*)(QGraphicsRotation*, QEvent*);
    using QGraphicsRotation_EventFilter_Callback = bool (*)(QGraphicsRotation*, QObject*, QEvent*);
    using QGraphicsRotation_TimerEvent_Callback = void (*)(QGraphicsRotation*, QTimerEvent*);
    using QGraphicsRotation_ChildEvent_Callback = void (*)(QGraphicsRotation*, QChildEvent*);
    using QGraphicsRotation_CustomEvent_Callback = void (*)(QGraphicsRotation*, QEvent*);
    using QGraphicsRotation_ConnectNotify_Callback = void (*)(QGraphicsRotation*, const QMetaMethod&);
    using QGraphicsRotation_DisconnectNotify_Callback = void (*)(QGraphicsRotation*, const QMetaMethod&);
    using QGraphicsRotation_Update_Callback = void (*)();
    using QGraphicsRotation_Sender_Callback = QObject* (*)();
    using QGraphicsRotation_SenderSignalIndex_Callback = int (*)();
    using QGraphicsRotation_Receivers_Callback = int (*)(const QGraphicsRotation*, const char*);
    using QGraphicsRotation_IsSignalConnected_Callback = bool (*)(const QGraphicsRotation*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QGraphicsRotation_Metacall_Callback qgraphicsrotation_metacall_callback = nullptr;
    QGraphicsRotation_ApplyTo_Callback qgraphicsrotation_applyto_callback = nullptr;
    QGraphicsRotation_Event_Callback qgraphicsrotation_event_callback = nullptr;
    QGraphicsRotation_EventFilter_Callback qgraphicsrotation_eventfilter_callback = nullptr;
    QGraphicsRotation_TimerEvent_Callback qgraphicsrotation_timerevent_callback = nullptr;
    QGraphicsRotation_ChildEvent_Callback qgraphicsrotation_childevent_callback = nullptr;
    QGraphicsRotation_CustomEvent_Callback qgraphicsrotation_customevent_callback = nullptr;
    QGraphicsRotation_ConnectNotify_Callback qgraphicsrotation_connectnotify_callback = nullptr;
    QGraphicsRotation_DisconnectNotify_Callback qgraphicsrotation_disconnectnotify_callback = nullptr;
    QGraphicsRotation_Update_Callback qgraphicsrotation_update_callback = nullptr;
    QGraphicsRotation_Sender_Callback qgraphicsrotation_sender_callback = nullptr;
    QGraphicsRotation_SenderSignalIndex_Callback qgraphicsrotation_sendersignalindex_callback = nullptr;
    QGraphicsRotation_Receivers_Callback qgraphicsrotation_receivers_callback = nullptr;
    QGraphicsRotation_IsSignalConnected_Callback qgraphicsrotation_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsrotation_metacall_isbase = false;
    mutable bool qgraphicsrotation_applyto_isbase = false;
    mutable bool qgraphicsrotation_event_isbase = false;
    mutable bool qgraphicsrotation_eventfilter_isbase = false;
    mutable bool qgraphicsrotation_timerevent_isbase = false;
    mutable bool qgraphicsrotation_childevent_isbase = false;
    mutable bool qgraphicsrotation_customevent_isbase = false;
    mutable bool qgraphicsrotation_connectnotify_isbase = false;
    mutable bool qgraphicsrotation_disconnectnotify_isbase = false;
    mutable bool qgraphicsrotation_update_isbase = false;
    mutable bool qgraphicsrotation_sender_isbase = false;
    mutable bool qgraphicsrotation_sendersignalindex_isbase = false;
    mutable bool qgraphicsrotation_receivers_isbase = false;
    mutable bool qgraphicsrotation_issignalconnected_isbase = false;

  public:
    VirtualQGraphicsRotation() : QGraphicsRotation(){};
    VirtualQGraphicsRotation(QObject* parent) : QGraphicsRotation(parent){};

    ~VirtualQGraphicsRotation() {
        qgraphicsrotation_metacall_callback = nullptr;
        qgraphicsrotation_applyto_callback = nullptr;
        qgraphicsrotation_event_callback = nullptr;
        qgraphicsrotation_eventfilter_callback = nullptr;
        qgraphicsrotation_timerevent_callback = nullptr;
        qgraphicsrotation_childevent_callback = nullptr;
        qgraphicsrotation_customevent_callback = nullptr;
        qgraphicsrotation_connectnotify_callback = nullptr;
        qgraphicsrotation_disconnectnotify_callback = nullptr;
        qgraphicsrotation_update_callback = nullptr;
        qgraphicsrotation_sender_callback = nullptr;
        qgraphicsrotation_sendersignalindex_callback = nullptr;
        qgraphicsrotation_receivers_callback = nullptr;
        qgraphicsrotation_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsRotation_Metacall_Callback(QGraphicsRotation_Metacall_Callback cb) { qgraphicsrotation_metacall_callback = cb; }
    void setQGraphicsRotation_ApplyTo_Callback(QGraphicsRotation_ApplyTo_Callback cb) { qgraphicsrotation_applyto_callback = cb; }
    void setQGraphicsRotation_Event_Callback(QGraphicsRotation_Event_Callback cb) { qgraphicsrotation_event_callback = cb; }
    void setQGraphicsRotation_EventFilter_Callback(QGraphicsRotation_EventFilter_Callback cb) { qgraphicsrotation_eventfilter_callback = cb; }
    void setQGraphicsRotation_TimerEvent_Callback(QGraphicsRotation_TimerEvent_Callback cb) { qgraphicsrotation_timerevent_callback = cb; }
    void setQGraphicsRotation_ChildEvent_Callback(QGraphicsRotation_ChildEvent_Callback cb) { qgraphicsrotation_childevent_callback = cb; }
    void setQGraphicsRotation_CustomEvent_Callback(QGraphicsRotation_CustomEvent_Callback cb) { qgraphicsrotation_customevent_callback = cb; }
    void setQGraphicsRotation_ConnectNotify_Callback(QGraphicsRotation_ConnectNotify_Callback cb) { qgraphicsrotation_connectnotify_callback = cb; }
    void setQGraphicsRotation_DisconnectNotify_Callback(QGraphicsRotation_DisconnectNotify_Callback cb) { qgraphicsrotation_disconnectnotify_callback = cb; }
    void setQGraphicsRotation_Update_Callback(QGraphicsRotation_Update_Callback cb) { qgraphicsrotation_update_callback = cb; }
    void setQGraphicsRotation_Sender_Callback(QGraphicsRotation_Sender_Callback cb) { qgraphicsrotation_sender_callback = cb; }
    void setQGraphicsRotation_SenderSignalIndex_Callback(QGraphicsRotation_SenderSignalIndex_Callback cb) { qgraphicsrotation_sendersignalindex_callback = cb; }
    void setQGraphicsRotation_Receivers_Callback(QGraphicsRotation_Receivers_Callback cb) { qgraphicsrotation_receivers_callback = cb; }
    void setQGraphicsRotation_IsSignalConnected_Callback(QGraphicsRotation_IsSignalConnected_Callback cb) { qgraphicsrotation_issignalconnected_callback = cb; }

    // Base flag setters
    void setQGraphicsRotation_Metacall_IsBase(bool value) const { qgraphicsrotation_metacall_isbase = value; }
    void setQGraphicsRotation_ApplyTo_IsBase(bool value) const { qgraphicsrotation_applyto_isbase = value; }
    void setQGraphicsRotation_Event_IsBase(bool value) const { qgraphicsrotation_event_isbase = value; }
    void setQGraphicsRotation_EventFilter_IsBase(bool value) const { qgraphicsrotation_eventfilter_isbase = value; }
    void setQGraphicsRotation_TimerEvent_IsBase(bool value) const { qgraphicsrotation_timerevent_isbase = value; }
    void setQGraphicsRotation_ChildEvent_IsBase(bool value) const { qgraphicsrotation_childevent_isbase = value; }
    void setQGraphicsRotation_CustomEvent_IsBase(bool value) const { qgraphicsrotation_customevent_isbase = value; }
    void setQGraphicsRotation_ConnectNotify_IsBase(bool value) const { qgraphicsrotation_connectnotify_isbase = value; }
    void setQGraphicsRotation_DisconnectNotify_IsBase(bool value) const { qgraphicsrotation_disconnectnotify_isbase = value; }
    void setQGraphicsRotation_Update_IsBase(bool value) const { qgraphicsrotation_update_isbase = value; }
    void setQGraphicsRotation_Sender_IsBase(bool value) const { qgraphicsrotation_sender_isbase = value; }
    void setQGraphicsRotation_SenderSignalIndex_IsBase(bool value) const { qgraphicsrotation_sendersignalindex_isbase = value; }
    void setQGraphicsRotation_Receivers_IsBase(bool value) const { qgraphicsrotation_receivers_isbase = value; }
    void setQGraphicsRotation_IsSignalConnected_IsBase(bool value) const { qgraphicsrotation_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsrotation_metacall_isbase) {
            qgraphicsrotation_metacall_isbase = false;
            return QGraphicsRotation::qt_metacall(param1, param2, param3);
        } else if (qgraphicsrotation_metacall_callback != nullptr) {
            return qgraphicsrotation_metacall_callback(this, param1, param2, param3);
        } else {
            return QGraphicsRotation::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyTo(QMatrix4x4* matrix) const override {
        if (qgraphicsrotation_applyto_isbase) {
            qgraphicsrotation_applyto_isbase = false;
            QGraphicsRotation::applyTo(matrix);
        } else if (qgraphicsrotation_applyto_callback != nullptr) {
            qgraphicsrotation_applyto_callback(this, matrix);
        } else {
            QGraphicsRotation::applyTo(matrix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicsrotation_event_isbase) {
            qgraphicsrotation_event_isbase = false;
            return QGraphicsRotation::event(event);
        } else if (qgraphicsrotation_event_callback != nullptr) {
            return qgraphicsrotation_event_callback(this, event);
        } else {
            return QGraphicsRotation::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicsrotation_eventfilter_isbase) {
            qgraphicsrotation_eventfilter_isbase = false;
            return QGraphicsRotation::eventFilter(watched, event);
        } else if (qgraphicsrotation_eventfilter_callback != nullptr) {
            return qgraphicsrotation_eventfilter_callback(this, watched, event);
        } else {
            return QGraphicsRotation::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsrotation_timerevent_isbase) {
            qgraphicsrotation_timerevent_isbase = false;
            QGraphicsRotation::timerEvent(event);
        } else if (qgraphicsrotation_timerevent_callback != nullptr) {
            qgraphicsrotation_timerevent_callback(this, event);
        } else {
            QGraphicsRotation::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsrotation_childevent_isbase) {
            qgraphicsrotation_childevent_isbase = false;
            QGraphicsRotation::childEvent(event);
        } else if (qgraphicsrotation_childevent_callback != nullptr) {
            qgraphicsrotation_childevent_callback(this, event);
        } else {
            QGraphicsRotation::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsrotation_customevent_isbase) {
            qgraphicsrotation_customevent_isbase = false;
            QGraphicsRotation::customEvent(event);
        } else if (qgraphicsrotation_customevent_callback != nullptr) {
            qgraphicsrotation_customevent_callback(this, event);
        } else {
            QGraphicsRotation::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsrotation_connectnotify_isbase) {
            qgraphicsrotation_connectnotify_isbase = false;
            QGraphicsRotation::connectNotify(signal);
        } else if (qgraphicsrotation_connectnotify_callback != nullptr) {
            qgraphicsrotation_connectnotify_callback(this, signal);
        } else {
            QGraphicsRotation::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsrotation_disconnectnotify_isbase) {
            qgraphicsrotation_disconnectnotify_isbase = false;
            QGraphicsRotation::disconnectNotify(signal);
        } else if (qgraphicsrotation_disconnectnotify_callback != nullptr) {
            qgraphicsrotation_disconnectnotify_callback(this, signal);
        } else {
            QGraphicsRotation::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void update() {
        if (qgraphicsrotation_update_isbase) {
            qgraphicsrotation_update_isbase = false;
            QGraphicsRotation::update();
        } else if (qgraphicsrotation_update_callback != nullptr) {
            qgraphicsrotation_update_callback();
        } else {
            QGraphicsRotation::update();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgraphicsrotation_sender_isbase) {
            qgraphicsrotation_sender_isbase = false;
            return QGraphicsRotation::sender();
        } else if (qgraphicsrotation_sender_callback != nullptr) {
            return qgraphicsrotation_sender_callback();
        } else {
            return QGraphicsRotation::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgraphicsrotation_sendersignalindex_isbase) {
            qgraphicsrotation_sendersignalindex_isbase = false;
            return QGraphicsRotation::senderSignalIndex();
        } else if (qgraphicsrotation_sendersignalindex_callback != nullptr) {
            return qgraphicsrotation_sendersignalindex_callback();
        } else {
            return QGraphicsRotation::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgraphicsrotation_receivers_isbase) {
            qgraphicsrotation_receivers_isbase = false;
            return QGraphicsRotation::receivers(signal);
        } else if (qgraphicsrotation_receivers_callback != nullptr) {
            return qgraphicsrotation_receivers_callback(this, signal);
        } else {
            return QGraphicsRotation::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgraphicsrotation_issignalconnected_isbase) {
            qgraphicsrotation_issignalconnected_isbase = false;
            return QGraphicsRotation::isSignalConnected(signal);
        } else if (qgraphicsrotation_issignalconnected_callback != nullptr) {
            return qgraphicsrotation_issignalconnected_callback(this, signal);
        } else {
            return QGraphicsRotation::isSignalConnected(signal);
        }
    }
};

#endif

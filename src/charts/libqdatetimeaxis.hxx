#pragma once
#ifndef SRC_CHARTSC_LIBVIRTUALQDATETIMEAXIS_H
#define SRC_CHARTSC_LIBVIRTUALQDATETIMEAXIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDateTimeAxis so that we can call protected methods
class VirtualQDateTimeAxis : public QDateTimeAxis {

  public:
    // Virtual class public types (including callbacks)
    using QDateTimeAxis_Metacall_Callback = int (*)(QDateTimeAxis*, QMetaObject::Call, int, void**);
    using QDateTimeAxis_Type_Callback = QAbstractAxis::AxisType (*)();
    using QDateTimeAxis_Event_Callback = bool (*)(QDateTimeAxis*, QEvent*);
    using QDateTimeAxis_EventFilter_Callback = bool (*)(QDateTimeAxis*, QObject*, QEvent*);
    using QDateTimeAxis_TimerEvent_Callback = void (*)(QDateTimeAxis*, QTimerEvent*);
    using QDateTimeAxis_ChildEvent_Callback = void (*)(QDateTimeAxis*, QChildEvent*);
    using QDateTimeAxis_CustomEvent_Callback = void (*)(QDateTimeAxis*, QEvent*);
    using QDateTimeAxis_ConnectNotify_Callback = void (*)(QDateTimeAxis*, const QMetaMethod&);
    using QDateTimeAxis_DisconnectNotify_Callback = void (*)(QDateTimeAxis*, const QMetaMethod&);
    using QDateTimeAxis_Sender_Callback = QObject* (*)();
    using QDateTimeAxis_SenderSignalIndex_Callback = int (*)();
    using QDateTimeAxis_Receivers_Callback = int (*)(const QDateTimeAxis*, const char*);
    using QDateTimeAxis_IsSignalConnected_Callback = bool (*)(const QDateTimeAxis*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QDateTimeAxis_Metacall_Callback qdatetimeaxis_metacall_callback = nullptr;
    QDateTimeAxis_Type_Callback qdatetimeaxis_type_callback = nullptr;
    QDateTimeAxis_Event_Callback qdatetimeaxis_event_callback = nullptr;
    QDateTimeAxis_EventFilter_Callback qdatetimeaxis_eventfilter_callback = nullptr;
    QDateTimeAxis_TimerEvent_Callback qdatetimeaxis_timerevent_callback = nullptr;
    QDateTimeAxis_ChildEvent_Callback qdatetimeaxis_childevent_callback = nullptr;
    QDateTimeAxis_CustomEvent_Callback qdatetimeaxis_customevent_callback = nullptr;
    QDateTimeAxis_ConnectNotify_Callback qdatetimeaxis_connectnotify_callback = nullptr;
    QDateTimeAxis_DisconnectNotify_Callback qdatetimeaxis_disconnectnotify_callback = nullptr;
    QDateTimeAxis_Sender_Callback qdatetimeaxis_sender_callback = nullptr;
    QDateTimeAxis_SenderSignalIndex_Callback qdatetimeaxis_sendersignalindex_callback = nullptr;
    QDateTimeAxis_Receivers_Callback qdatetimeaxis_receivers_callback = nullptr;
    QDateTimeAxis_IsSignalConnected_Callback qdatetimeaxis_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdatetimeaxis_metacall_isbase = false;
    mutable bool qdatetimeaxis_type_isbase = false;
    mutable bool qdatetimeaxis_event_isbase = false;
    mutable bool qdatetimeaxis_eventfilter_isbase = false;
    mutable bool qdatetimeaxis_timerevent_isbase = false;
    mutable bool qdatetimeaxis_childevent_isbase = false;
    mutable bool qdatetimeaxis_customevent_isbase = false;
    mutable bool qdatetimeaxis_connectnotify_isbase = false;
    mutable bool qdatetimeaxis_disconnectnotify_isbase = false;
    mutable bool qdatetimeaxis_sender_isbase = false;
    mutable bool qdatetimeaxis_sendersignalindex_isbase = false;
    mutable bool qdatetimeaxis_receivers_isbase = false;
    mutable bool qdatetimeaxis_issignalconnected_isbase = false;

  public:
    VirtualQDateTimeAxis() : QDateTimeAxis(){};
    VirtualQDateTimeAxis(QObject* parent) : QDateTimeAxis(parent){};

    ~VirtualQDateTimeAxis() {
        qdatetimeaxis_metacall_callback = nullptr;
        qdatetimeaxis_type_callback = nullptr;
        qdatetimeaxis_event_callback = nullptr;
        qdatetimeaxis_eventfilter_callback = nullptr;
        qdatetimeaxis_timerevent_callback = nullptr;
        qdatetimeaxis_childevent_callback = nullptr;
        qdatetimeaxis_customevent_callback = nullptr;
        qdatetimeaxis_connectnotify_callback = nullptr;
        qdatetimeaxis_disconnectnotify_callback = nullptr;
        qdatetimeaxis_sender_callback = nullptr;
        qdatetimeaxis_sendersignalindex_callback = nullptr;
        qdatetimeaxis_receivers_callback = nullptr;
        qdatetimeaxis_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQDateTimeAxis_Metacall_Callback(QDateTimeAxis_Metacall_Callback cb) { qdatetimeaxis_metacall_callback = cb; }
    void setQDateTimeAxis_Type_Callback(QDateTimeAxis_Type_Callback cb) { qdatetimeaxis_type_callback = cb; }
    void setQDateTimeAxis_Event_Callback(QDateTimeAxis_Event_Callback cb) { qdatetimeaxis_event_callback = cb; }
    void setQDateTimeAxis_EventFilter_Callback(QDateTimeAxis_EventFilter_Callback cb) { qdatetimeaxis_eventfilter_callback = cb; }
    void setQDateTimeAxis_TimerEvent_Callback(QDateTimeAxis_TimerEvent_Callback cb) { qdatetimeaxis_timerevent_callback = cb; }
    void setQDateTimeAxis_ChildEvent_Callback(QDateTimeAxis_ChildEvent_Callback cb) { qdatetimeaxis_childevent_callback = cb; }
    void setQDateTimeAxis_CustomEvent_Callback(QDateTimeAxis_CustomEvent_Callback cb) { qdatetimeaxis_customevent_callback = cb; }
    void setQDateTimeAxis_ConnectNotify_Callback(QDateTimeAxis_ConnectNotify_Callback cb) { qdatetimeaxis_connectnotify_callback = cb; }
    void setQDateTimeAxis_DisconnectNotify_Callback(QDateTimeAxis_DisconnectNotify_Callback cb) { qdatetimeaxis_disconnectnotify_callback = cb; }
    void setQDateTimeAxis_Sender_Callback(QDateTimeAxis_Sender_Callback cb) { qdatetimeaxis_sender_callback = cb; }
    void setQDateTimeAxis_SenderSignalIndex_Callback(QDateTimeAxis_SenderSignalIndex_Callback cb) { qdatetimeaxis_sendersignalindex_callback = cb; }
    void setQDateTimeAxis_Receivers_Callback(QDateTimeAxis_Receivers_Callback cb) { qdatetimeaxis_receivers_callback = cb; }
    void setQDateTimeAxis_IsSignalConnected_Callback(QDateTimeAxis_IsSignalConnected_Callback cb) { qdatetimeaxis_issignalconnected_callback = cb; }

    // Base flag setters
    void setQDateTimeAxis_Metacall_IsBase(bool value) const { qdatetimeaxis_metacall_isbase = value; }
    void setQDateTimeAxis_Type_IsBase(bool value) const { qdatetimeaxis_type_isbase = value; }
    void setQDateTimeAxis_Event_IsBase(bool value) const { qdatetimeaxis_event_isbase = value; }
    void setQDateTimeAxis_EventFilter_IsBase(bool value) const { qdatetimeaxis_eventfilter_isbase = value; }
    void setQDateTimeAxis_TimerEvent_IsBase(bool value) const { qdatetimeaxis_timerevent_isbase = value; }
    void setQDateTimeAxis_ChildEvent_IsBase(bool value) const { qdatetimeaxis_childevent_isbase = value; }
    void setQDateTimeAxis_CustomEvent_IsBase(bool value) const { qdatetimeaxis_customevent_isbase = value; }
    void setQDateTimeAxis_ConnectNotify_IsBase(bool value) const { qdatetimeaxis_connectnotify_isbase = value; }
    void setQDateTimeAxis_DisconnectNotify_IsBase(bool value) const { qdatetimeaxis_disconnectnotify_isbase = value; }
    void setQDateTimeAxis_Sender_IsBase(bool value) const { qdatetimeaxis_sender_isbase = value; }
    void setQDateTimeAxis_SenderSignalIndex_IsBase(bool value) const { qdatetimeaxis_sendersignalindex_isbase = value; }
    void setQDateTimeAxis_Receivers_IsBase(bool value) const { qdatetimeaxis_receivers_isbase = value; }
    void setQDateTimeAxis_IsSignalConnected_IsBase(bool value) const { qdatetimeaxis_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdatetimeaxis_metacall_isbase) {
            qdatetimeaxis_metacall_isbase = false;
            return QDateTimeAxis::qt_metacall(param1, param2, param3);
        } else if (qdatetimeaxis_metacall_callback != nullptr) {
            return qdatetimeaxis_metacall_callback(this, param1, param2, param3);
        } else {
            return QDateTimeAxis::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractAxis::AxisType type() const override {
        if (qdatetimeaxis_type_isbase) {
            qdatetimeaxis_type_isbase = false;
            return QDateTimeAxis::type();
        } else if (qdatetimeaxis_type_callback != nullptr) {
            return qdatetimeaxis_type_callback();
        } else {
            return QDateTimeAxis::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdatetimeaxis_event_isbase) {
            qdatetimeaxis_event_isbase = false;
            return QDateTimeAxis::event(event);
        } else if (qdatetimeaxis_event_callback != nullptr) {
            return qdatetimeaxis_event_callback(this, event);
        } else {
            return QDateTimeAxis::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdatetimeaxis_eventfilter_isbase) {
            qdatetimeaxis_eventfilter_isbase = false;
            return QDateTimeAxis::eventFilter(watched, event);
        } else if (qdatetimeaxis_eventfilter_callback != nullptr) {
            return qdatetimeaxis_eventfilter_callback(this, watched, event);
        } else {
            return QDateTimeAxis::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdatetimeaxis_timerevent_isbase) {
            qdatetimeaxis_timerevent_isbase = false;
            QDateTimeAxis::timerEvent(event);
        } else if (qdatetimeaxis_timerevent_callback != nullptr) {
            qdatetimeaxis_timerevent_callback(this, event);
        } else {
            QDateTimeAxis::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdatetimeaxis_childevent_isbase) {
            qdatetimeaxis_childevent_isbase = false;
            QDateTimeAxis::childEvent(event);
        } else if (qdatetimeaxis_childevent_callback != nullptr) {
            qdatetimeaxis_childevent_callback(this, event);
        } else {
            QDateTimeAxis::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdatetimeaxis_customevent_isbase) {
            qdatetimeaxis_customevent_isbase = false;
            QDateTimeAxis::customEvent(event);
        } else if (qdatetimeaxis_customevent_callback != nullptr) {
            qdatetimeaxis_customevent_callback(this, event);
        } else {
            QDateTimeAxis::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdatetimeaxis_connectnotify_isbase) {
            qdatetimeaxis_connectnotify_isbase = false;
            QDateTimeAxis::connectNotify(signal);
        } else if (qdatetimeaxis_connectnotify_callback != nullptr) {
            qdatetimeaxis_connectnotify_callback(this, signal);
        } else {
            QDateTimeAxis::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdatetimeaxis_disconnectnotify_isbase) {
            qdatetimeaxis_disconnectnotify_isbase = false;
            QDateTimeAxis::disconnectNotify(signal);
        } else if (qdatetimeaxis_disconnectnotify_callback != nullptr) {
            qdatetimeaxis_disconnectnotify_callback(this, signal);
        } else {
            QDateTimeAxis::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdatetimeaxis_sender_isbase) {
            qdatetimeaxis_sender_isbase = false;
            return QDateTimeAxis::sender();
        } else if (qdatetimeaxis_sender_callback != nullptr) {
            return qdatetimeaxis_sender_callback();
        } else {
            return QDateTimeAxis::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdatetimeaxis_sendersignalindex_isbase) {
            qdatetimeaxis_sendersignalindex_isbase = false;
            return QDateTimeAxis::senderSignalIndex();
        } else if (qdatetimeaxis_sendersignalindex_callback != nullptr) {
            return qdatetimeaxis_sendersignalindex_callback();
        } else {
            return QDateTimeAxis::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdatetimeaxis_receivers_isbase) {
            qdatetimeaxis_receivers_isbase = false;
            return QDateTimeAxis::receivers(signal);
        } else if (qdatetimeaxis_receivers_callback != nullptr) {
            return qdatetimeaxis_receivers_callback(this, signal);
        } else {
            return QDateTimeAxis::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdatetimeaxis_issignalconnected_isbase) {
            qdatetimeaxis_issignalconnected_isbase = false;
            return QDateTimeAxis::isSignalConnected(signal);
        } else if (qdatetimeaxis_issignalconnected_callback != nullptr) {
            return qdatetimeaxis_issignalconnected_callback(this, signal);
        } else {
            return QDateTimeAxis::isSignalConnected(signal);
        }
    }
};

#endif

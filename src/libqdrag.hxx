#pragma once
#ifndef SRCC_LIBVIRTUALQDRAG_H
#define SRCC_LIBVIRTUALQDRAG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QDrag so that we can call protected methods
class VirtualQDrag : public QDrag {

  public:
    // Virtual class public types (including callbacks)
    using QDrag_Metacall_Callback = int (*)(QDrag*, QMetaObject::Call, int, void**);
    using QDrag_Event_Callback = bool (*)(QDrag*, QEvent*);
    using QDrag_EventFilter_Callback = bool (*)(QDrag*, QObject*, QEvent*);
    using QDrag_TimerEvent_Callback = void (*)(QDrag*, QTimerEvent*);
    using QDrag_ChildEvent_Callback = void (*)(QDrag*, QChildEvent*);
    using QDrag_CustomEvent_Callback = void (*)(QDrag*, QEvent*);
    using QDrag_ConnectNotify_Callback = void (*)(QDrag*, const QMetaMethod&);
    using QDrag_DisconnectNotify_Callback = void (*)(QDrag*, const QMetaMethod&);
    using QDrag_Sender_Callback = QObject* (*)();
    using QDrag_SenderSignalIndex_Callback = int (*)();
    using QDrag_Receivers_Callback = int (*)(const QDrag*, const char*);
    using QDrag_IsSignalConnected_Callback = bool (*)(const QDrag*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QDrag_Metacall_Callback qdrag_metacall_callback = nullptr;
    QDrag_Event_Callback qdrag_event_callback = nullptr;
    QDrag_EventFilter_Callback qdrag_eventfilter_callback = nullptr;
    QDrag_TimerEvent_Callback qdrag_timerevent_callback = nullptr;
    QDrag_ChildEvent_Callback qdrag_childevent_callback = nullptr;
    QDrag_CustomEvent_Callback qdrag_customevent_callback = nullptr;
    QDrag_ConnectNotify_Callback qdrag_connectnotify_callback = nullptr;
    QDrag_DisconnectNotify_Callback qdrag_disconnectnotify_callback = nullptr;
    QDrag_Sender_Callback qdrag_sender_callback = nullptr;
    QDrag_SenderSignalIndex_Callback qdrag_sendersignalindex_callback = nullptr;
    QDrag_Receivers_Callback qdrag_receivers_callback = nullptr;
    QDrag_IsSignalConnected_Callback qdrag_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdrag_metacall_isbase = false;
    mutable bool qdrag_event_isbase = false;
    mutable bool qdrag_eventfilter_isbase = false;
    mutable bool qdrag_timerevent_isbase = false;
    mutable bool qdrag_childevent_isbase = false;
    mutable bool qdrag_customevent_isbase = false;
    mutable bool qdrag_connectnotify_isbase = false;
    mutable bool qdrag_disconnectnotify_isbase = false;
    mutable bool qdrag_sender_isbase = false;
    mutable bool qdrag_sendersignalindex_isbase = false;
    mutable bool qdrag_receivers_isbase = false;
    mutable bool qdrag_issignalconnected_isbase = false;

  public:
    VirtualQDrag(QObject* dragSource) : QDrag(dragSource){};

    ~VirtualQDrag() {
        qdrag_metacall_callback = nullptr;
        qdrag_event_callback = nullptr;
        qdrag_eventfilter_callback = nullptr;
        qdrag_timerevent_callback = nullptr;
        qdrag_childevent_callback = nullptr;
        qdrag_customevent_callback = nullptr;
        qdrag_connectnotify_callback = nullptr;
        qdrag_disconnectnotify_callback = nullptr;
        qdrag_sender_callback = nullptr;
        qdrag_sendersignalindex_callback = nullptr;
        qdrag_receivers_callback = nullptr;
        qdrag_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQDrag_Metacall_Callback(QDrag_Metacall_Callback cb) { qdrag_metacall_callback = cb; }
    void setQDrag_Event_Callback(QDrag_Event_Callback cb) { qdrag_event_callback = cb; }
    void setQDrag_EventFilter_Callback(QDrag_EventFilter_Callback cb) { qdrag_eventfilter_callback = cb; }
    void setQDrag_TimerEvent_Callback(QDrag_TimerEvent_Callback cb) { qdrag_timerevent_callback = cb; }
    void setQDrag_ChildEvent_Callback(QDrag_ChildEvent_Callback cb) { qdrag_childevent_callback = cb; }
    void setQDrag_CustomEvent_Callback(QDrag_CustomEvent_Callback cb) { qdrag_customevent_callback = cb; }
    void setQDrag_ConnectNotify_Callback(QDrag_ConnectNotify_Callback cb) { qdrag_connectnotify_callback = cb; }
    void setQDrag_DisconnectNotify_Callback(QDrag_DisconnectNotify_Callback cb) { qdrag_disconnectnotify_callback = cb; }
    void setQDrag_Sender_Callback(QDrag_Sender_Callback cb) { qdrag_sender_callback = cb; }
    void setQDrag_SenderSignalIndex_Callback(QDrag_SenderSignalIndex_Callback cb) { qdrag_sendersignalindex_callback = cb; }
    void setQDrag_Receivers_Callback(QDrag_Receivers_Callback cb) { qdrag_receivers_callback = cb; }
    void setQDrag_IsSignalConnected_Callback(QDrag_IsSignalConnected_Callback cb) { qdrag_issignalconnected_callback = cb; }

    // Base flag setters
    void setQDrag_Metacall_IsBase(bool value) const { qdrag_metacall_isbase = value; }
    void setQDrag_Event_IsBase(bool value) const { qdrag_event_isbase = value; }
    void setQDrag_EventFilter_IsBase(bool value) const { qdrag_eventfilter_isbase = value; }
    void setQDrag_TimerEvent_IsBase(bool value) const { qdrag_timerevent_isbase = value; }
    void setQDrag_ChildEvent_IsBase(bool value) const { qdrag_childevent_isbase = value; }
    void setQDrag_CustomEvent_IsBase(bool value) const { qdrag_customevent_isbase = value; }
    void setQDrag_ConnectNotify_IsBase(bool value) const { qdrag_connectnotify_isbase = value; }
    void setQDrag_DisconnectNotify_IsBase(bool value) const { qdrag_disconnectnotify_isbase = value; }
    void setQDrag_Sender_IsBase(bool value) const { qdrag_sender_isbase = value; }
    void setQDrag_SenderSignalIndex_IsBase(bool value) const { qdrag_sendersignalindex_isbase = value; }
    void setQDrag_Receivers_IsBase(bool value) const { qdrag_receivers_isbase = value; }
    void setQDrag_IsSignalConnected_IsBase(bool value) const { qdrag_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdrag_metacall_isbase) {
            qdrag_metacall_isbase = false;
            return QDrag::qt_metacall(param1, param2, param3);
        } else if (qdrag_metacall_callback != nullptr) {
            return qdrag_metacall_callback(this, param1, param2, param3);
        } else {
            return QDrag::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdrag_event_isbase) {
            qdrag_event_isbase = false;
            return QDrag::event(event);
        } else if (qdrag_event_callback != nullptr) {
            return qdrag_event_callback(this, event);
        } else {
            return QDrag::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdrag_eventfilter_isbase) {
            qdrag_eventfilter_isbase = false;
            return QDrag::eventFilter(watched, event);
        } else if (qdrag_eventfilter_callback != nullptr) {
            return qdrag_eventfilter_callback(this, watched, event);
        } else {
            return QDrag::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdrag_timerevent_isbase) {
            qdrag_timerevent_isbase = false;
            QDrag::timerEvent(event);
        } else if (qdrag_timerevent_callback != nullptr) {
            qdrag_timerevent_callback(this, event);
        } else {
            QDrag::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdrag_childevent_isbase) {
            qdrag_childevent_isbase = false;
            QDrag::childEvent(event);
        } else if (qdrag_childevent_callback != nullptr) {
            qdrag_childevent_callback(this, event);
        } else {
            QDrag::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdrag_customevent_isbase) {
            qdrag_customevent_isbase = false;
            QDrag::customEvent(event);
        } else if (qdrag_customevent_callback != nullptr) {
            qdrag_customevent_callback(this, event);
        } else {
            QDrag::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdrag_connectnotify_isbase) {
            qdrag_connectnotify_isbase = false;
            QDrag::connectNotify(signal);
        } else if (qdrag_connectnotify_callback != nullptr) {
            qdrag_connectnotify_callback(this, signal);
        } else {
            QDrag::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdrag_disconnectnotify_isbase) {
            qdrag_disconnectnotify_isbase = false;
            QDrag::disconnectNotify(signal);
        } else if (qdrag_disconnectnotify_callback != nullptr) {
            qdrag_disconnectnotify_callback(this, signal);
        } else {
            QDrag::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdrag_sender_isbase) {
            qdrag_sender_isbase = false;
            return QDrag::sender();
        } else if (qdrag_sender_callback != nullptr) {
            return qdrag_sender_callback();
        } else {
            return QDrag::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdrag_sendersignalindex_isbase) {
            qdrag_sendersignalindex_isbase = false;
            return QDrag::senderSignalIndex();
        } else if (qdrag_sendersignalindex_callback != nullptr) {
            return qdrag_sendersignalindex_callback();
        } else {
            return QDrag::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdrag_receivers_isbase) {
            qdrag_receivers_isbase = false;
            return QDrag::receivers(signal);
        } else if (qdrag_receivers_callback != nullptr) {
            return qdrag_receivers_callback(this, signal);
        } else {
            return QDrag::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdrag_issignalconnected_isbase) {
            qdrag_issignalconnected_isbase = false;
            return QDrag::isSignalConnected(signal);
        } else if (qdrag_issignalconnected_callback != nullptr) {
            return qdrag_issignalconnected_callback(this, signal);
        } else {
            return QDrag::isSignalConnected(signal);
        }
    }
};

#endif

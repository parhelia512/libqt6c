#pragma once
#ifndef SRCC_LIBVIRTUALQITEMSELECTIONMODEL_H
#define SRCC_LIBVIRTUALQITEMSELECTIONMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QItemSelectionModel so that we can call protected methods
class VirtualQItemSelectionModel : public QItemSelectionModel {

  public:
    // Virtual class public types (including callbacks)
    using QItemSelectionModel_Metacall_Callback = int (*)(QItemSelectionModel*, QMetaObject::Call, int, void**);
    using QItemSelectionModel_SetCurrentIndex_Callback = void (*)(QItemSelectionModel*, const QModelIndex&, QItemSelectionModel::SelectionFlags);
    using QItemSelectionModel_Select_Callback = void (*)(QItemSelectionModel*, const QModelIndex&, QItemSelectionModel::SelectionFlags);
    using QItemSelectionModel_Select2_Callback = void (*)(QItemSelectionModel*, const QItemSelection&, QItemSelectionModel::SelectionFlags);
    using QItemSelectionModel_Clear_Callback = void (*)();
    using QItemSelectionModel_Reset_Callback = void (*)();
    using QItemSelectionModel_ClearCurrentIndex_Callback = void (*)();
    using QItemSelectionModel_Event_Callback = bool (*)(QItemSelectionModel*, QEvent*);
    using QItemSelectionModel_EventFilter_Callback = bool (*)(QItemSelectionModel*, QObject*, QEvent*);
    using QItemSelectionModel_TimerEvent_Callback = void (*)(QItemSelectionModel*, QTimerEvent*);
    using QItemSelectionModel_ChildEvent_Callback = void (*)(QItemSelectionModel*, QChildEvent*);
    using QItemSelectionModel_CustomEvent_Callback = void (*)(QItemSelectionModel*, QEvent*);
    using QItemSelectionModel_ConnectNotify_Callback = void (*)(QItemSelectionModel*, const QMetaMethod&);
    using QItemSelectionModel_DisconnectNotify_Callback = void (*)(QItemSelectionModel*, const QMetaMethod&);
    using QItemSelectionModel_EmitSelectionChanged_Callback = void (*)(QItemSelectionModel*, const QItemSelection&, const QItemSelection&);
    using QItemSelectionModel_Sender_Callback = QObject* (*)();
    using QItemSelectionModel_SenderSignalIndex_Callback = int (*)();
    using QItemSelectionModel_Receivers_Callback = int (*)(const QItemSelectionModel*, const char*);
    using QItemSelectionModel_IsSignalConnected_Callback = bool (*)(const QItemSelectionModel*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QItemSelectionModel_Metacall_Callback qitemselectionmodel_metacall_callback = nullptr;
    QItemSelectionModel_SetCurrentIndex_Callback qitemselectionmodel_setcurrentindex_callback = nullptr;
    QItemSelectionModel_Select_Callback qitemselectionmodel_select_callback = nullptr;
    QItemSelectionModel_Select2_Callback qitemselectionmodel_select2_callback = nullptr;
    QItemSelectionModel_Clear_Callback qitemselectionmodel_clear_callback = nullptr;
    QItemSelectionModel_Reset_Callback qitemselectionmodel_reset_callback = nullptr;
    QItemSelectionModel_ClearCurrentIndex_Callback qitemselectionmodel_clearcurrentindex_callback = nullptr;
    QItemSelectionModel_Event_Callback qitemselectionmodel_event_callback = nullptr;
    QItemSelectionModel_EventFilter_Callback qitemselectionmodel_eventfilter_callback = nullptr;
    QItemSelectionModel_TimerEvent_Callback qitemselectionmodel_timerevent_callback = nullptr;
    QItemSelectionModel_ChildEvent_Callback qitemselectionmodel_childevent_callback = nullptr;
    QItemSelectionModel_CustomEvent_Callback qitemselectionmodel_customevent_callback = nullptr;
    QItemSelectionModel_ConnectNotify_Callback qitemselectionmodel_connectnotify_callback = nullptr;
    QItemSelectionModel_DisconnectNotify_Callback qitemselectionmodel_disconnectnotify_callback = nullptr;
    QItemSelectionModel_EmitSelectionChanged_Callback qitemselectionmodel_emitselectionchanged_callback = nullptr;
    QItemSelectionModel_Sender_Callback qitemselectionmodel_sender_callback = nullptr;
    QItemSelectionModel_SenderSignalIndex_Callback qitemselectionmodel_sendersignalindex_callback = nullptr;
    QItemSelectionModel_Receivers_Callback qitemselectionmodel_receivers_callback = nullptr;
    QItemSelectionModel_IsSignalConnected_Callback qitemselectionmodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qitemselectionmodel_metacall_isbase = false;
    mutable bool qitemselectionmodel_setcurrentindex_isbase = false;
    mutable bool qitemselectionmodel_select_isbase = false;
    mutable bool qitemselectionmodel_select2_isbase = false;
    mutable bool qitemselectionmodel_clear_isbase = false;
    mutable bool qitemselectionmodel_reset_isbase = false;
    mutable bool qitemselectionmodel_clearcurrentindex_isbase = false;
    mutable bool qitemselectionmodel_event_isbase = false;
    mutable bool qitemselectionmodel_eventfilter_isbase = false;
    mutable bool qitemselectionmodel_timerevent_isbase = false;
    mutable bool qitemselectionmodel_childevent_isbase = false;
    mutable bool qitemselectionmodel_customevent_isbase = false;
    mutable bool qitemselectionmodel_connectnotify_isbase = false;
    mutable bool qitemselectionmodel_disconnectnotify_isbase = false;
    mutable bool qitemselectionmodel_emitselectionchanged_isbase = false;
    mutable bool qitemselectionmodel_sender_isbase = false;
    mutable bool qitemselectionmodel_sendersignalindex_isbase = false;
    mutable bool qitemselectionmodel_receivers_isbase = false;
    mutable bool qitemselectionmodel_issignalconnected_isbase = false;

  public:
    VirtualQItemSelectionModel() : QItemSelectionModel(){};
    VirtualQItemSelectionModel(QAbstractItemModel* model, QObject* parent) : QItemSelectionModel(model, parent){};
    VirtualQItemSelectionModel(QAbstractItemModel* model) : QItemSelectionModel(model){};

    ~VirtualQItemSelectionModel() {
        qitemselectionmodel_metacall_callback = nullptr;
        qitemselectionmodel_setcurrentindex_callback = nullptr;
        qitemselectionmodel_select_callback = nullptr;
        qitemselectionmodel_select2_callback = nullptr;
        qitemselectionmodel_clear_callback = nullptr;
        qitemselectionmodel_reset_callback = nullptr;
        qitemselectionmodel_clearcurrentindex_callback = nullptr;
        qitemselectionmodel_event_callback = nullptr;
        qitemselectionmodel_eventfilter_callback = nullptr;
        qitemselectionmodel_timerevent_callback = nullptr;
        qitemselectionmodel_childevent_callback = nullptr;
        qitemselectionmodel_customevent_callback = nullptr;
        qitemselectionmodel_connectnotify_callback = nullptr;
        qitemselectionmodel_disconnectnotify_callback = nullptr;
        qitemselectionmodel_emitselectionchanged_callback = nullptr;
        qitemselectionmodel_sender_callback = nullptr;
        qitemselectionmodel_sendersignalindex_callback = nullptr;
        qitemselectionmodel_receivers_callback = nullptr;
        qitemselectionmodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQItemSelectionModel_Metacall_Callback(QItemSelectionModel_Metacall_Callback cb) { qitemselectionmodel_metacall_callback = cb; }
    void setQItemSelectionModel_SetCurrentIndex_Callback(QItemSelectionModel_SetCurrentIndex_Callback cb) { qitemselectionmodel_setcurrentindex_callback = cb; }
    void setQItemSelectionModel_Select_Callback(QItemSelectionModel_Select_Callback cb) { qitemselectionmodel_select_callback = cb; }
    void setQItemSelectionModel_Select2_Callback(QItemSelectionModel_Select2_Callback cb) { qitemselectionmodel_select2_callback = cb; }
    void setQItemSelectionModel_Clear_Callback(QItemSelectionModel_Clear_Callback cb) { qitemselectionmodel_clear_callback = cb; }
    void setQItemSelectionModel_Reset_Callback(QItemSelectionModel_Reset_Callback cb) { qitemselectionmodel_reset_callback = cb; }
    void setQItemSelectionModel_ClearCurrentIndex_Callback(QItemSelectionModel_ClearCurrentIndex_Callback cb) { qitemselectionmodel_clearcurrentindex_callback = cb; }
    void setQItemSelectionModel_Event_Callback(QItemSelectionModel_Event_Callback cb) { qitemselectionmodel_event_callback = cb; }
    void setQItemSelectionModel_EventFilter_Callback(QItemSelectionModel_EventFilter_Callback cb) { qitemselectionmodel_eventfilter_callback = cb; }
    void setQItemSelectionModel_TimerEvent_Callback(QItemSelectionModel_TimerEvent_Callback cb) { qitemselectionmodel_timerevent_callback = cb; }
    void setQItemSelectionModel_ChildEvent_Callback(QItemSelectionModel_ChildEvent_Callback cb) { qitemselectionmodel_childevent_callback = cb; }
    void setQItemSelectionModel_CustomEvent_Callback(QItemSelectionModel_CustomEvent_Callback cb) { qitemselectionmodel_customevent_callback = cb; }
    void setQItemSelectionModel_ConnectNotify_Callback(QItemSelectionModel_ConnectNotify_Callback cb) { qitemselectionmodel_connectnotify_callback = cb; }
    void setQItemSelectionModel_DisconnectNotify_Callback(QItemSelectionModel_DisconnectNotify_Callback cb) { qitemselectionmodel_disconnectnotify_callback = cb; }
    void setQItemSelectionModel_EmitSelectionChanged_Callback(QItemSelectionModel_EmitSelectionChanged_Callback cb) { qitemselectionmodel_emitselectionchanged_callback = cb; }
    void setQItemSelectionModel_Sender_Callback(QItemSelectionModel_Sender_Callback cb) { qitemselectionmodel_sender_callback = cb; }
    void setQItemSelectionModel_SenderSignalIndex_Callback(QItemSelectionModel_SenderSignalIndex_Callback cb) { qitemselectionmodel_sendersignalindex_callback = cb; }
    void setQItemSelectionModel_Receivers_Callback(QItemSelectionModel_Receivers_Callback cb) { qitemselectionmodel_receivers_callback = cb; }
    void setQItemSelectionModel_IsSignalConnected_Callback(QItemSelectionModel_IsSignalConnected_Callback cb) { qitemselectionmodel_issignalconnected_callback = cb; }

    // Base flag setters
    void setQItemSelectionModel_Metacall_IsBase(bool value) const { qitemselectionmodel_metacall_isbase = value; }
    void setQItemSelectionModel_SetCurrentIndex_IsBase(bool value) const { qitemselectionmodel_setcurrentindex_isbase = value; }
    void setQItemSelectionModel_Select_IsBase(bool value) const { qitemselectionmodel_select_isbase = value; }
    void setQItemSelectionModel_Select2_IsBase(bool value) const { qitemselectionmodel_select2_isbase = value; }
    void setQItemSelectionModel_Clear_IsBase(bool value) const { qitemselectionmodel_clear_isbase = value; }
    void setQItemSelectionModel_Reset_IsBase(bool value) const { qitemselectionmodel_reset_isbase = value; }
    void setQItemSelectionModel_ClearCurrentIndex_IsBase(bool value) const { qitemselectionmodel_clearcurrentindex_isbase = value; }
    void setQItemSelectionModel_Event_IsBase(bool value) const { qitemselectionmodel_event_isbase = value; }
    void setQItemSelectionModel_EventFilter_IsBase(bool value) const { qitemselectionmodel_eventfilter_isbase = value; }
    void setQItemSelectionModel_TimerEvent_IsBase(bool value) const { qitemselectionmodel_timerevent_isbase = value; }
    void setQItemSelectionModel_ChildEvent_IsBase(bool value) const { qitemselectionmodel_childevent_isbase = value; }
    void setQItemSelectionModel_CustomEvent_IsBase(bool value) const { qitemselectionmodel_customevent_isbase = value; }
    void setQItemSelectionModel_ConnectNotify_IsBase(bool value) const { qitemselectionmodel_connectnotify_isbase = value; }
    void setQItemSelectionModel_DisconnectNotify_IsBase(bool value) const { qitemselectionmodel_disconnectnotify_isbase = value; }
    void setQItemSelectionModel_EmitSelectionChanged_IsBase(bool value) const { qitemselectionmodel_emitselectionchanged_isbase = value; }
    void setQItemSelectionModel_Sender_IsBase(bool value) const { qitemselectionmodel_sender_isbase = value; }
    void setQItemSelectionModel_SenderSignalIndex_IsBase(bool value) const { qitemselectionmodel_sendersignalindex_isbase = value; }
    void setQItemSelectionModel_Receivers_IsBase(bool value) const { qitemselectionmodel_receivers_isbase = value; }
    void setQItemSelectionModel_IsSignalConnected_IsBase(bool value) const { qitemselectionmodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qitemselectionmodel_metacall_isbase) {
            qitemselectionmodel_metacall_isbase = false;
            return QItemSelectionModel::qt_metacall(param1, param2, param3);
        } else if (qitemselectionmodel_metacall_callback != nullptr) {
            return qitemselectionmodel_metacall_callback(this, param1, param2, param3);
        } else {
            return QItemSelectionModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCurrentIndex(const QModelIndex& index, QItemSelectionModel::SelectionFlags command) override {
        if (qitemselectionmodel_setcurrentindex_isbase) {
            qitemselectionmodel_setcurrentindex_isbase = false;
            QItemSelectionModel::setCurrentIndex(index, command);
        } else if (qitemselectionmodel_setcurrentindex_callback != nullptr) {
            qitemselectionmodel_setcurrentindex_callback(this, index, command);
        } else {
            QItemSelectionModel::setCurrentIndex(index, command);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void select(const QModelIndex& index, QItemSelectionModel::SelectionFlags command) override {
        if (qitemselectionmodel_select_isbase) {
            qitemselectionmodel_select_isbase = false;
            QItemSelectionModel::select(index, command);
        } else if (qitemselectionmodel_select_callback != nullptr) {
            qitemselectionmodel_select_callback(this, index, command);
        } else {
            QItemSelectionModel::select(index, command);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void select(const QItemSelection& selection, QItemSelectionModel::SelectionFlags command) override {
        if (qitemselectionmodel_select2_isbase) {
            qitemselectionmodel_select2_isbase = false;
            QItemSelectionModel::select(selection, command);
        } else if (qitemselectionmodel_select2_callback != nullptr) {
            qitemselectionmodel_select2_callback(this, selection, command);
        } else {
            QItemSelectionModel::select(selection, command);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qitemselectionmodel_clear_isbase) {
            qitemselectionmodel_clear_isbase = false;
            QItemSelectionModel::clear();
        } else if (qitemselectionmodel_clear_callback != nullptr) {
            qitemselectionmodel_clear_callback();
        } else {
            QItemSelectionModel::clear();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qitemselectionmodel_reset_isbase) {
            qitemselectionmodel_reset_isbase = false;
            QItemSelectionModel::reset();
        } else if (qitemselectionmodel_reset_callback != nullptr) {
            qitemselectionmodel_reset_callback();
        } else {
            QItemSelectionModel::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clearCurrentIndex() override {
        if (qitemselectionmodel_clearcurrentindex_isbase) {
            qitemselectionmodel_clearcurrentindex_isbase = false;
            QItemSelectionModel::clearCurrentIndex();
        } else if (qitemselectionmodel_clearcurrentindex_callback != nullptr) {
            qitemselectionmodel_clearcurrentindex_callback();
        } else {
            QItemSelectionModel::clearCurrentIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qitemselectionmodel_event_isbase) {
            qitemselectionmodel_event_isbase = false;
            return QItemSelectionModel::event(event);
        } else if (qitemselectionmodel_event_callback != nullptr) {
            return qitemselectionmodel_event_callback(this, event);
        } else {
            return QItemSelectionModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qitemselectionmodel_eventfilter_isbase) {
            qitemselectionmodel_eventfilter_isbase = false;
            return QItemSelectionModel::eventFilter(watched, event);
        } else if (qitemselectionmodel_eventfilter_callback != nullptr) {
            return qitemselectionmodel_eventfilter_callback(this, watched, event);
        } else {
            return QItemSelectionModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qitemselectionmodel_timerevent_isbase) {
            qitemselectionmodel_timerevent_isbase = false;
            QItemSelectionModel::timerEvent(event);
        } else if (qitemselectionmodel_timerevent_callback != nullptr) {
            qitemselectionmodel_timerevent_callback(this, event);
        } else {
            QItemSelectionModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qitemselectionmodel_childevent_isbase) {
            qitemselectionmodel_childevent_isbase = false;
            QItemSelectionModel::childEvent(event);
        } else if (qitemselectionmodel_childevent_callback != nullptr) {
            qitemselectionmodel_childevent_callback(this, event);
        } else {
            QItemSelectionModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qitemselectionmodel_customevent_isbase) {
            qitemselectionmodel_customevent_isbase = false;
            QItemSelectionModel::customEvent(event);
        } else if (qitemselectionmodel_customevent_callback != nullptr) {
            qitemselectionmodel_customevent_callback(this, event);
        } else {
            QItemSelectionModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qitemselectionmodel_connectnotify_isbase) {
            qitemselectionmodel_connectnotify_isbase = false;
            QItemSelectionModel::connectNotify(signal);
        } else if (qitemselectionmodel_connectnotify_callback != nullptr) {
            qitemselectionmodel_connectnotify_callback(this, signal);
        } else {
            QItemSelectionModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qitemselectionmodel_disconnectnotify_isbase) {
            qitemselectionmodel_disconnectnotify_isbase = false;
            QItemSelectionModel::disconnectNotify(signal);
        } else if (qitemselectionmodel_disconnectnotify_callback != nullptr) {
            qitemselectionmodel_disconnectnotify_callback(this, signal);
        } else {
            QItemSelectionModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitSelectionChanged(const QItemSelection& newSelection, const QItemSelection& oldSelection) {
        if (qitemselectionmodel_emitselectionchanged_isbase) {
            qitemselectionmodel_emitselectionchanged_isbase = false;
            QItemSelectionModel::emitSelectionChanged(newSelection, oldSelection);
        } else if (qitemselectionmodel_emitselectionchanged_callback != nullptr) {
            qitemselectionmodel_emitselectionchanged_callback(this, newSelection, oldSelection);
        } else {
            QItemSelectionModel::emitSelectionChanged(newSelection, oldSelection);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qitemselectionmodel_sender_isbase) {
            qitemselectionmodel_sender_isbase = false;
            return QItemSelectionModel::sender();
        } else if (qitemselectionmodel_sender_callback != nullptr) {
            return qitemselectionmodel_sender_callback();
        } else {
            return QItemSelectionModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qitemselectionmodel_sendersignalindex_isbase) {
            qitemselectionmodel_sendersignalindex_isbase = false;
            return QItemSelectionModel::senderSignalIndex();
        } else if (qitemselectionmodel_sendersignalindex_callback != nullptr) {
            return qitemselectionmodel_sendersignalindex_callback();
        } else {
            return QItemSelectionModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qitemselectionmodel_receivers_isbase) {
            qitemselectionmodel_receivers_isbase = false;
            return QItemSelectionModel::receivers(signal);
        } else if (qitemselectionmodel_receivers_callback != nullptr) {
            return qitemselectionmodel_receivers_callback(this, signal);
        } else {
            return QItemSelectionModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qitemselectionmodel_issignalconnected_isbase) {
            qitemselectionmodel_issignalconnected_isbase = false;
            return QItemSelectionModel::isSignalConnected(signal);
        } else if (qitemselectionmodel_issignalconnected_callback != nullptr) {
            return qitemselectionmodel_issignalconnected_callback(this, signal);
        } else {
            return QItemSelectionModel::isSignalConnected(signal);
        }
    }
};

#endif

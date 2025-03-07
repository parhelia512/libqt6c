#pragma once
#ifndef SRCC_LIBVIRTUALQRUBBERBAND_H
#define SRCC_LIBVIRTUALQRUBBERBAND_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QRubberBand so that we can call protected methods
class VirtualQRubberBand : public QRubberBand {

  public:
    // Virtual class public types (including callbacks)
    using QRubberBand_Metacall_Callback = int (*)(QRubberBand*, QMetaObject::Call, int, void**);
    using QRubberBand_Event_Callback = bool (*)(QRubberBand*, QEvent*);
    using QRubberBand_PaintEvent_Callback = void (*)(QRubberBand*, QPaintEvent*);
    using QRubberBand_ChangeEvent_Callback = void (*)(QRubberBand*, QEvent*);
    using QRubberBand_ShowEvent_Callback = void (*)(QRubberBand*, QShowEvent*);
    using QRubberBand_ResizeEvent_Callback = void (*)(QRubberBand*, QResizeEvent*);
    using QRubberBand_MoveEvent_Callback = void (*)(QRubberBand*, QMoveEvent*);
    using QRubberBand_InitStyleOption_Callback = void (*)(const QRubberBand*, QStyleOptionRubberBand*);
    using QRubberBand_DevType_Callback = int (*)();
    using QRubberBand_SetVisible_Callback = void (*)(QRubberBand*, bool);
    using QRubberBand_SizeHint_Callback = QSize (*)();
    using QRubberBand_MinimumSizeHint_Callback = QSize (*)();
    using QRubberBand_HeightForWidth_Callback = int (*)(const QRubberBand*, int);
    using QRubberBand_HasHeightForWidth_Callback = bool (*)();
    using QRubberBand_PaintEngine_Callback = QPaintEngine* (*)();
    using QRubberBand_MousePressEvent_Callback = void (*)(QRubberBand*, QMouseEvent*);
    using QRubberBand_MouseReleaseEvent_Callback = void (*)(QRubberBand*, QMouseEvent*);
    using QRubberBand_MouseDoubleClickEvent_Callback = void (*)(QRubberBand*, QMouseEvent*);
    using QRubberBand_MouseMoveEvent_Callback = void (*)(QRubberBand*, QMouseEvent*);
    using QRubberBand_WheelEvent_Callback = void (*)(QRubberBand*, QWheelEvent*);
    using QRubberBand_KeyPressEvent_Callback = void (*)(QRubberBand*, QKeyEvent*);
    using QRubberBand_KeyReleaseEvent_Callback = void (*)(QRubberBand*, QKeyEvent*);
    using QRubberBand_FocusInEvent_Callback = void (*)(QRubberBand*, QFocusEvent*);
    using QRubberBand_FocusOutEvent_Callback = void (*)(QRubberBand*, QFocusEvent*);
    using QRubberBand_EnterEvent_Callback = void (*)(QRubberBand*, QEnterEvent*);
    using QRubberBand_LeaveEvent_Callback = void (*)(QRubberBand*, QEvent*);
    using QRubberBand_CloseEvent_Callback = void (*)(QRubberBand*, QCloseEvent*);
    using QRubberBand_ContextMenuEvent_Callback = void (*)(QRubberBand*, QContextMenuEvent*);
    using QRubberBand_TabletEvent_Callback = void (*)(QRubberBand*, QTabletEvent*);
    using QRubberBand_ActionEvent_Callback = void (*)(QRubberBand*, QActionEvent*);
    using QRubberBand_DragEnterEvent_Callback = void (*)(QRubberBand*, QDragEnterEvent*);
    using QRubberBand_DragMoveEvent_Callback = void (*)(QRubberBand*, QDragMoveEvent*);
    using QRubberBand_DragLeaveEvent_Callback = void (*)(QRubberBand*, QDragLeaveEvent*);
    using QRubberBand_DropEvent_Callback = void (*)(QRubberBand*, QDropEvent*);
    using QRubberBand_HideEvent_Callback = void (*)(QRubberBand*, QHideEvent*);
    using QRubberBand_NativeEvent_Callback = bool (*)(QRubberBand*, const QByteArray&, void*, qintptr*);
    using QRubberBand_Metric_Callback = int (*)(const QRubberBand*, QPaintDevice::PaintDeviceMetric);
    using QRubberBand_InitPainter_Callback = void (*)(const QRubberBand*, QPainter*);
    using QRubberBand_Redirected_Callback = QPaintDevice* (*)(const QRubberBand*, QPoint*);
    using QRubberBand_SharedPainter_Callback = QPainter* (*)();
    using QRubberBand_InputMethodEvent_Callback = void (*)(QRubberBand*, QInputMethodEvent*);
    using QRubberBand_InputMethodQuery_Callback = QVariant (*)(const QRubberBand*, Qt::InputMethodQuery);
    using QRubberBand_FocusNextPrevChild_Callback = bool (*)(QRubberBand*, bool);
    using QRubberBand_EventFilter_Callback = bool (*)(QRubberBand*, QObject*, QEvent*);
    using QRubberBand_TimerEvent_Callback = void (*)(QRubberBand*, QTimerEvent*);
    using QRubberBand_ChildEvent_Callback = void (*)(QRubberBand*, QChildEvent*);
    using QRubberBand_CustomEvent_Callback = void (*)(QRubberBand*, QEvent*);
    using QRubberBand_ConnectNotify_Callback = void (*)(QRubberBand*, const QMetaMethod&);
    using QRubberBand_DisconnectNotify_Callback = void (*)(QRubberBand*, const QMetaMethod&);
    using QRubberBand_UpdateMicroFocus_Callback = void (*)();
    using QRubberBand_Create_Callback = void (*)();
    using QRubberBand_Destroy_Callback = void (*)();
    using QRubberBand_FocusNextChild_Callback = bool (*)();
    using QRubberBand_FocusPreviousChild_Callback = bool (*)();
    using QRubberBand_Sender_Callback = QObject* (*)();
    using QRubberBand_SenderSignalIndex_Callback = int (*)();
    using QRubberBand_Receivers_Callback = int (*)(const QRubberBand*, const char*);
    using QRubberBand_IsSignalConnected_Callback = bool (*)(const QRubberBand*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QRubberBand_Metacall_Callback qrubberband_metacall_callback = nullptr;
    QRubberBand_Event_Callback qrubberband_event_callback = nullptr;
    QRubberBand_PaintEvent_Callback qrubberband_paintevent_callback = nullptr;
    QRubberBand_ChangeEvent_Callback qrubberband_changeevent_callback = nullptr;
    QRubberBand_ShowEvent_Callback qrubberband_showevent_callback = nullptr;
    QRubberBand_ResizeEvent_Callback qrubberband_resizeevent_callback = nullptr;
    QRubberBand_MoveEvent_Callback qrubberband_moveevent_callback = nullptr;
    QRubberBand_InitStyleOption_Callback qrubberband_initstyleoption_callback = nullptr;
    QRubberBand_DevType_Callback qrubberband_devtype_callback = nullptr;
    QRubberBand_SetVisible_Callback qrubberband_setvisible_callback = nullptr;
    QRubberBand_SizeHint_Callback qrubberband_sizehint_callback = nullptr;
    QRubberBand_MinimumSizeHint_Callback qrubberband_minimumsizehint_callback = nullptr;
    QRubberBand_HeightForWidth_Callback qrubberband_heightforwidth_callback = nullptr;
    QRubberBand_HasHeightForWidth_Callback qrubberband_hasheightforwidth_callback = nullptr;
    QRubberBand_PaintEngine_Callback qrubberband_paintengine_callback = nullptr;
    QRubberBand_MousePressEvent_Callback qrubberband_mousepressevent_callback = nullptr;
    QRubberBand_MouseReleaseEvent_Callback qrubberband_mousereleaseevent_callback = nullptr;
    QRubberBand_MouseDoubleClickEvent_Callback qrubberband_mousedoubleclickevent_callback = nullptr;
    QRubberBand_MouseMoveEvent_Callback qrubberband_mousemoveevent_callback = nullptr;
    QRubberBand_WheelEvent_Callback qrubberband_wheelevent_callback = nullptr;
    QRubberBand_KeyPressEvent_Callback qrubberband_keypressevent_callback = nullptr;
    QRubberBand_KeyReleaseEvent_Callback qrubberband_keyreleaseevent_callback = nullptr;
    QRubberBand_FocusInEvent_Callback qrubberband_focusinevent_callback = nullptr;
    QRubberBand_FocusOutEvent_Callback qrubberband_focusoutevent_callback = nullptr;
    QRubberBand_EnterEvent_Callback qrubberband_enterevent_callback = nullptr;
    QRubberBand_LeaveEvent_Callback qrubberband_leaveevent_callback = nullptr;
    QRubberBand_CloseEvent_Callback qrubberband_closeevent_callback = nullptr;
    QRubberBand_ContextMenuEvent_Callback qrubberband_contextmenuevent_callback = nullptr;
    QRubberBand_TabletEvent_Callback qrubberband_tabletevent_callback = nullptr;
    QRubberBand_ActionEvent_Callback qrubberband_actionevent_callback = nullptr;
    QRubberBand_DragEnterEvent_Callback qrubberband_dragenterevent_callback = nullptr;
    QRubberBand_DragMoveEvent_Callback qrubberband_dragmoveevent_callback = nullptr;
    QRubberBand_DragLeaveEvent_Callback qrubberband_dragleaveevent_callback = nullptr;
    QRubberBand_DropEvent_Callback qrubberband_dropevent_callback = nullptr;
    QRubberBand_HideEvent_Callback qrubberband_hideevent_callback = nullptr;
    QRubberBand_NativeEvent_Callback qrubberband_nativeevent_callback = nullptr;
    QRubberBand_Metric_Callback qrubberband_metric_callback = nullptr;
    QRubberBand_InitPainter_Callback qrubberband_initpainter_callback = nullptr;
    QRubberBand_Redirected_Callback qrubberband_redirected_callback = nullptr;
    QRubberBand_SharedPainter_Callback qrubberband_sharedpainter_callback = nullptr;
    QRubberBand_InputMethodEvent_Callback qrubberband_inputmethodevent_callback = nullptr;
    QRubberBand_InputMethodQuery_Callback qrubberband_inputmethodquery_callback = nullptr;
    QRubberBand_FocusNextPrevChild_Callback qrubberband_focusnextprevchild_callback = nullptr;
    QRubberBand_EventFilter_Callback qrubberband_eventfilter_callback = nullptr;
    QRubberBand_TimerEvent_Callback qrubberband_timerevent_callback = nullptr;
    QRubberBand_ChildEvent_Callback qrubberband_childevent_callback = nullptr;
    QRubberBand_CustomEvent_Callback qrubberband_customevent_callback = nullptr;
    QRubberBand_ConnectNotify_Callback qrubberband_connectnotify_callback = nullptr;
    QRubberBand_DisconnectNotify_Callback qrubberband_disconnectnotify_callback = nullptr;
    QRubberBand_UpdateMicroFocus_Callback qrubberband_updatemicrofocus_callback = nullptr;
    QRubberBand_Create_Callback qrubberband_create_callback = nullptr;
    QRubberBand_Destroy_Callback qrubberband_destroy_callback = nullptr;
    QRubberBand_FocusNextChild_Callback qrubberband_focusnextchild_callback = nullptr;
    QRubberBand_FocusPreviousChild_Callback qrubberband_focuspreviouschild_callback = nullptr;
    QRubberBand_Sender_Callback qrubberband_sender_callback = nullptr;
    QRubberBand_SenderSignalIndex_Callback qrubberband_sendersignalindex_callback = nullptr;
    QRubberBand_Receivers_Callback qrubberband_receivers_callback = nullptr;
    QRubberBand_IsSignalConnected_Callback qrubberband_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qrubberband_metacall_isbase = false;
    mutable bool qrubberband_event_isbase = false;
    mutable bool qrubberband_paintevent_isbase = false;
    mutable bool qrubberband_changeevent_isbase = false;
    mutable bool qrubberband_showevent_isbase = false;
    mutable bool qrubberband_resizeevent_isbase = false;
    mutable bool qrubberband_moveevent_isbase = false;
    mutable bool qrubberband_initstyleoption_isbase = false;
    mutable bool qrubberband_devtype_isbase = false;
    mutable bool qrubberband_setvisible_isbase = false;
    mutable bool qrubberband_sizehint_isbase = false;
    mutable bool qrubberband_minimumsizehint_isbase = false;
    mutable bool qrubberband_heightforwidth_isbase = false;
    mutable bool qrubberband_hasheightforwidth_isbase = false;
    mutable bool qrubberband_paintengine_isbase = false;
    mutable bool qrubberband_mousepressevent_isbase = false;
    mutable bool qrubberband_mousereleaseevent_isbase = false;
    mutable bool qrubberband_mousedoubleclickevent_isbase = false;
    mutable bool qrubberband_mousemoveevent_isbase = false;
    mutable bool qrubberband_wheelevent_isbase = false;
    mutable bool qrubberband_keypressevent_isbase = false;
    mutable bool qrubberband_keyreleaseevent_isbase = false;
    mutable bool qrubberband_focusinevent_isbase = false;
    mutable bool qrubberband_focusoutevent_isbase = false;
    mutable bool qrubberband_enterevent_isbase = false;
    mutable bool qrubberband_leaveevent_isbase = false;
    mutable bool qrubberband_closeevent_isbase = false;
    mutable bool qrubberband_contextmenuevent_isbase = false;
    mutable bool qrubberband_tabletevent_isbase = false;
    mutable bool qrubberband_actionevent_isbase = false;
    mutable bool qrubberband_dragenterevent_isbase = false;
    mutable bool qrubberband_dragmoveevent_isbase = false;
    mutable bool qrubberband_dragleaveevent_isbase = false;
    mutable bool qrubberband_dropevent_isbase = false;
    mutable bool qrubberband_hideevent_isbase = false;
    mutable bool qrubberband_nativeevent_isbase = false;
    mutable bool qrubberband_metric_isbase = false;
    mutable bool qrubberband_initpainter_isbase = false;
    mutable bool qrubberband_redirected_isbase = false;
    mutable bool qrubberband_sharedpainter_isbase = false;
    mutable bool qrubberband_inputmethodevent_isbase = false;
    mutable bool qrubberband_inputmethodquery_isbase = false;
    mutable bool qrubberband_focusnextprevchild_isbase = false;
    mutable bool qrubberband_eventfilter_isbase = false;
    mutable bool qrubberband_timerevent_isbase = false;
    mutable bool qrubberband_childevent_isbase = false;
    mutable bool qrubberband_customevent_isbase = false;
    mutable bool qrubberband_connectnotify_isbase = false;
    mutable bool qrubberband_disconnectnotify_isbase = false;
    mutable bool qrubberband_updatemicrofocus_isbase = false;
    mutable bool qrubberband_create_isbase = false;
    mutable bool qrubberband_destroy_isbase = false;
    mutable bool qrubberband_focusnextchild_isbase = false;
    mutable bool qrubberband_focuspreviouschild_isbase = false;
    mutable bool qrubberband_sender_isbase = false;
    mutable bool qrubberband_sendersignalindex_isbase = false;
    mutable bool qrubberband_receivers_isbase = false;
    mutable bool qrubberband_issignalconnected_isbase = false;

  public:
    VirtualQRubberBand(QRubberBand::Shape param1) : QRubberBand(param1){};
    VirtualQRubberBand(QRubberBand::Shape param1, QWidget* param2) : QRubberBand(param1, param2){};

    ~VirtualQRubberBand() {
        qrubberband_metacall_callback = nullptr;
        qrubberband_event_callback = nullptr;
        qrubberband_paintevent_callback = nullptr;
        qrubberband_changeevent_callback = nullptr;
        qrubberband_showevent_callback = nullptr;
        qrubberband_resizeevent_callback = nullptr;
        qrubberband_moveevent_callback = nullptr;
        qrubberband_initstyleoption_callback = nullptr;
        qrubberband_devtype_callback = nullptr;
        qrubberband_setvisible_callback = nullptr;
        qrubberband_sizehint_callback = nullptr;
        qrubberband_minimumsizehint_callback = nullptr;
        qrubberband_heightforwidth_callback = nullptr;
        qrubberband_hasheightforwidth_callback = nullptr;
        qrubberband_paintengine_callback = nullptr;
        qrubberband_mousepressevent_callback = nullptr;
        qrubberband_mousereleaseevent_callback = nullptr;
        qrubberband_mousedoubleclickevent_callback = nullptr;
        qrubberband_mousemoveevent_callback = nullptr;
        qrubberband_wheelevent_callback = nullptr;
        qrubberband_keypressevent_callback = nullptr;
        qrubberband_keyreleaseevent_callback = nullptr;
        qrubberband_focusinevent_callback = nullptr;
        qrubberband_focusoutevent_callback = nullptr;
        qrubberband_enterevent_callback = nullptr;
        qrubberband_leaveevent_callback = nullptr;
        qrubberband_closeevent_callback = nullptr;
        qrubberband_contextmenuevent_callback = nullptr;
        qrubberband_tabletevent_callback = nullptr;
        qrubberband_actionevent_callback = nullptr;
        qrubberband_dragenterevent_callback = nullptr;
        qrubberband_dragmoveevent_callback = nullptr;
        qrubberband_dragleaveevent_callback = nullptr;
        qrubberband_dropevent_callback = nullptr;
        qrubberband_hideevent_callback = nullptr;
        qrubberband_nativeevent_callback = nullptr;
        qrubberband_metric_callback = nullptr;
        qrubberband_initpainter_callback = nullptr;
        qrubberband_redirected_callback = nullptr;
        qrubberband_sharedpainter_callback = nullptr;
        qrubberband_inputmethodevent_callback = nullptr;
        qrubberband_inputmethodquery_callback = nullptr;
        qrubberband_focusnextprevchild_callback = nullptr;
        qrubberband_eventfilter_callback = nullptr;
        qrubberband_timerevent_callback = nullptr;
        qrubberband_childevent_callback = nullptr;
        qrubberband_customevent_callback = nullptr;
        qrubberband_connectnotify_callback = nullptr;
        qrubberband_disconnectnotify_callback = nullptr;
        qrubberband_updatemicrofocus_callback = nullptr;
        qrubberband_create_callback = nullptr;
        qrubberband_destroy_callback = nullptr;
        qrubberband_focusnextchild_callback = nullptr;
        qrubberband_focuspreviouschild_callback = nullptr;
        qrubberband_sender_callback = nullptr;
        qrubberband_sendersignalindex_callback = nullptr;
        qrubberband_receivers_callback = nullptr;
        qrubberband_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQRubberBand_Metacall_Callback(QRubberBand_Metacall_Callback cb) { qrubberband_metacall_callback = cb; }
    void setQRubberBand_Event_Callback(QRubberBand_Event_Callback cb) { qrubberband_event_callback = cb; }
    void setQRubberBand_PaintEvent_Callback(QRubberBand_PaintEvent_Callback cb) { qrubberband_paintevent_callback = cb; }
    void setQRubberBand_ChangeEvent_Callback(QRubberBand_ChangeEvent_Callback cb) { qrubberband_changeevent_callback = cb; }
    void setQRubberBand_ShowEvent_Callback(QRubberBand_ShowEvent_Callback cb) { qrubberband_showevent_callback = cb; }
    void setQRubberBand_ResizeEvent_Callback(QRubberBand_ResizeEvent_Callback cb) { qrubberband_resizeevent_callback = cb; }
    void setQRubberBand_MoveEvent_Callback(QRubberBand_MoveEvent_Callback cb) { qrubberband_moveevent_callback = cb; }
    void setQRubberBand_InitStyleOption_Callback(QRubberBand_InitStyleOption_Callback cb) { qrubberband_initstyleoption_callback = cb; }
    void setQRubberBand_DevType_Callback(QRubberBand_DevType_Callback cb) { qrubberband_devtype_callback = cb; }
    void setQRubberBand_SetVisible_Callback(QRubberBand_SetVisible_Callback cb) { qrubberband_setvisible_callback = cb; }
    void setQRubberBand_SizeHint_Callback(QRubberBand_SizeHint_Callback cb) { qrubberband_sizehint_callback = cb; }
    void setQRubberBand_MinimumSizeHint_Callback(QRubberBand_MinimumSizeHint_Callback cb) { qrubberband_minimumsizehint_callback = cb; }
    void setQRubberBand_HeightForWidth_Callback(QRubberBand_HeightForWidth_Callback cb) { qrubberband_heightforwidth_callback = cb; }
    void setQRubberBand_HasHeightForWidth_Callback(QRubberBand_HasHeightForWidth_Callback cb) { qrubberband_hasheightforwidth_callback = cb; }
    void setQRubberBand_PaintEngine_Callback(QRubberBand_PaintEngine_Callback cb) { qrubberband_paintengine_callback = cb; }
    void setQRubberBand_MousePressEvent_Callback(QRubberBand_MousePressEvent_Callback cb) { qrubberband_mousepressevent_callback = cb; }
    void setQRubberBand_MouseReleaseEvent_Callback(QRubberBand_MouseReleaseEvent_Callback cb) { qrubberband_mousereleaseevent_callback = cb; }
    void setQRubberBand_MouseDoubleClickEvent_Callback(QRubberBand_MouseDoubleClickEvent_Callback cb) { qrubberband_mousedoubleclickevent_callback = cb; }
    void setQRubberBand_MouseMoveEvent_Callback(QRubberBand_MouseMoveEvent_Callback cb) { qrubberband_mousemoveevent_callback = cb; }
    void setQRubberBand_WheelEvent_Callback(QRubberBand_WheelEvent_Callback cb) { qrubberband_wheelevent_callback = cb; }
    void setQRubberBand_KeyPressEvent_Callback(QRubberBand_KeyPressEvent_Callback cb) { qrubberband_keypressevent_callback = cb; }
    void setQRubberBand_KeyReleaseEvent_Callback(QRubberBand_KeyReleaseEvent_Callback cb) { qrubberband_keyreleaseevent_callback = cb; }
    void setQRubberBand_FocusInEvent_Callback(QRubberBand_FocusInEvent_Callback cb) { qrubberband_focusinevent_callback = cb; }
    void setQRubberBand_FocusOutEvent_Callback(QRubberBand_FocusOutEvent_Callback cb) { qrubberband_focusoutevent_callback = cb; }
    void setQRubberBand_EnterEvent_Callback(QRubberBand_EnterEvent_Callback cb) { qrubberband_enterevent_callback = cb; }
    void setQRubberBand_LeaveEvent_Callback(QRubberBand_LeaveEvent_Callback cb) { qrubberband_leaveevent_callback = cb; }
    void setQRubberBand_CloseEvent_Callback(QRubberBand_CloseEvent_Callback cb) { qrubberband_closeevent_callback = cb; }
    void setQRubberBand_ContextMenuEvent_Callback(QRubberBand_ContextMenuEvent_Callback cb) { qrubberband_contextmenuevent_callback = cb; }
    void setQRubberBand_TabletEvent_Callback(QRubberBand_TabletEvent_Callback cb) { qrubberband_tabletevent_callback = cb; }
    void setQRubberBand_ActionEvent_Callback(QRubberBand_ActionEvent_Callback cb) { qrubberband_actionevent_callback = cb; }
    void setQRubberBand_DragEnterEvent_Callback(QRubberBand_DragEnterEvent_Callback cb) { qrubberband_dragenterevent_callback = cb; }
    void setQRubberBand_DragMoveEvent_Callback(QRubberBand_DragMoveEvent_Callback cb) { qrubberband_dragmoveevent_callback = cb; }
    void setQRubberBand_DragLeaveEvent_Callback(QRubberBand_DragLeaveEvent_Callback cb) { qrubberband_dragleaveevent_callback = cb; }
    void setQRubberBand_DropEvent_Callback(QRubberBand_DropEvent_Callback cb) { qrubberband_dropevent_callback = cb; }
    void setQRubberBand_HideEvent_Callback(QRubberBand_HideEvent_Callback cb) { qrubberband_hideevent_callback = cb; }
    void setQRubberBand_NativeEvent_Callback(QRubberBand_NativeEvent_Callback cb) { qrubberband_nativeevent_callback = cb; }
    void setQRubberBand_Metric_Callback(QRubberBand_Metric_Callback cb) { qrubberband_metric_callback = cb; }
    void setQRubberBand_InitPainter_Callback(QRubberBand_InitPainter_Callback cb) { qrubberband_initpainter_callback = cb; }
    void setQRubberBand_Redirected_Callback(QRubberBand_Redirected_Callback cb) { qrubberband_redirected_callback = cb; }
    void setQRubberBand_SharedPainter_Callback(QRubberBand_SharedPainter_Callback cb) { qrubberband_sharedpainter_callback = cb; }
    void setQRubberBand_InputMethodEvent_Callback(QRubberBand_InputMethodEvent_Callback cb) { qrubberband_inputmethodevent_callback = cb; }
    void setQRubberBand_InputMethodQuery_Callback(QRubberBand_InputMethodQuery_Callback cb) { qrubberband_inputmethodquery_callback = cb; }
    void setQRubberBand_FocusNextPrevChild_Callback(QRubberBand_FocusNextPrevChild_Callback cb) { qrubberband_focusnextprevchild_callback = cb; }
    void setQRubberBand_EventFilter_Callback(QRubberBand_EventFilter_Callback cb) { qrubberband_eventfilter_callback = cb; }
    void setQRubberBand_TimerEvent_Callback(QRubberBand_TimerEvent_Callback cb) { qrubberband_timerevent_callback = cb; }
    void setQRubberBand_ChildEvent_Callback(QRubberBand_ChildEvent_Callback cb) { qrubberband_childevent_callback = cb; }
    void setQRubberBand_CustomEvent_Callback(QRubberBand_CustomEvent_Callback cb) { qrubberband_customevent_callback = cb; }
    void setQRubberBand_ConnectNotify_Callback(QRubberBand_ConnectNotify_Callback cb) { qrubberband_connectnotify_callback = cb; }
    void setQRubberBand_DisconnectNotify_Callback(QRubberBand_DisconnectNotify_Callback cb) { qrubberband_disconnectnotify_callback = cb; }
    void setQRubberBand_UpdateMicroFocus_Callback(QRubberBand_UpdateMicroFocus_Callback cb) { qrubberband_updatemicrofocus_callback = cb; }
    void setQRubberBand_Create_Callback(QRubberBand_Create_Callback cb) { qrubberband_create_callback = cb; }
    void setQRubberBand_Destroy_Callback(QRubberBand_Destroy_Callback cb) { qrubberband_destroy_callback = cb; }
    void setQRubberBand_FocusNextChild_Callback(QRubberBand_FocusNextChild_Callback cb) { qrubberband_focusnextchild_callback = cb; }
    void setQRubberBand_FocusPreviousChild_Callback(QRubberBand_FocusPreviousChild_Callback cb) { qrubberband_focuspreviouschild_callback = cb; }
    void setQRubberBand_Sender_Callback(QRubberBand_Sender_Callback cb) { qrubberband_sender_callback = cb; }
    void setQRubberBand_SenderSignalIndex_Callback(QRubberBand_SenderSignalIndex_Callback cb) { qrubberband_sendersignalindex_callback = cb; }
    void setQRubberBand_Receivers_Callback(QRubberBand_Receivers_Callback cb) { qrubberband_receivers_callback = cb; }
    void setQRubberBand_IsSignalConnected_Callback(QRubberBand_IsSignalConnected_Callback cb) { qrubberband_issignalconnected_callback = cb; }

    // Base flag setters
    void setQRubberBand_Metacall_IsBase(bool value) const { qrubberband_metacall_isbase = value; }
    void setQRubberBand_Event_IsBase(bool value) const { qrubberband_event_isbase = value; }
    void setQRubberBand_PaintEvent_IsBase(bool value) const { qrubberband_paintevent_isbase = value; }
    void setQRubberBand_ChangeEvent_IsBase(bool value) const { qrubberband_changeevent_isbase = value; }
    void setQRubberBand_ShowEvent_IsBase(bool value) const { qrubberband_showevent_isbase = value; }
    void setQRubberBand_ResizeEvent_IsBase(bool value) const { qrubberband_resizeevent_isbase = value; }
    void setQRubberBand_MoveEvent_IsBase(bool value) const { qrubberband_moveevent_isbase = value; }
    void setQRubberBand_InitStyleOption_IsBase(bool value) const { qrubberband_initstyleoption_isbase = value; }
    void setQRubberBand_DevType_IsBase(bool value) const { qrubberband_devtype_isbase = value; }
    void setQRubberBand_SetVisible_IsBase(bool value) const { qrubberband_setvisible_isbase = value; }
    void setQRubberBand_SizeHint_IsBase(bool value) const { qrubberband_sizehint_isbase = value; }
    void setQRubberBand_MinimumSizeHint_IsBase(bool value) const { qrubberband_minimumsizehint_isbase = value; }
    void setQRubberBand_HeightForWidth_IsBase(bool value) const { qrubberband_heightforwidth_isbase = value; }
    void setQRubberBand_HasHeightForWidth_IsBase(bool value) const { qrubberband_hasheightforwidth_isbase = value; }
    void setQRubberBand_PaintEngine_IsBase(bool value) const { qrubberband_paintengine_isbase = value; }
    void setQRubberBand_MousePressEvent_IsBase(bool value) const { qrubberband_mousepressevent_isbase = value; }
    void setQRubberBand_MouseReleaseEvent_IsBase(bool value) const { qrubberband_mousereleaseevent_isbase = value; }
    void setQRubberBand_MouseDoubleClickEvent_IsBase(bool value) const { qrubberband_mousedoubleclickevent_isbase = value; }
    void setQRubberBand_MouseMoveEvent_IsBase(bool value) const { qrubberband_mousemoveevent_isbase = value; }
    void setQRubberBand_WheelEvent_IsBase(bool value) const { qrubberband_wheelevent_isbase = value; }
    void setQRubberBand_KeyPressEvent_IsBase(bool value) const { qrubberband_keypressevent_isbase = value; }
    void setQRubberBand_KeyReleaseEvent_IsBase(bool value) const { qrubberband_keyreleaseevent_isbase = value; }
    void setQRubberBand_FocusInEvent_IsBase(bool value) const { qrubberband_focusinevent_isbase = value; }
    void setQRubberBand_FocusOutEvent_IsBase(bool value) const { qrubberband_focusoutevent_isbase = value; }
    void setQRubberBand_EnterEvent_IsBase(bool value) const { qrubberband_enterevent_isbase = value; }
    void setQRubberBand_LeaveEvent_IsBase(bool value) const { qrubberband_leaveevent_isbase = value; }
    void setQRubberBand_CloseEvent_IsBase(bool value) const { qrubberband_closeevent_isbase = value; }
    void setQRubberBand_ContextMenuEvent_IsBase(bool value) const { qrubberband_contextmenuevent_isbase = value; }
    void setQRubberBand_TabletEvent_IsBase(bool value) const { qrubberband_tabletevent_isbase = value; }
    void setQRubberBand_ActionEvent_IsBase(bool value) const { qrubberband_actionevent_isbase = value; }
    void setQRubberBand_DragEnterEvent_IsBase(bool value) const { qrubberband_dragenterevent_isbase = value; }
    void setQRubberBand_DragMoveEvent_IsBase(bool value) const { qrubberband_dragmoveevent_isbase = value; }
    void setQRubberBand_DragLeaveEvent_IsBase(bool value) const { qrubberband_dragleaveevent_isbase = value; }
    void setQRubberBand_DropEvent_IsBase(bool value) const { qrubberband_dropevent_isbase = value; }
    void setQRubberBand_HideEvent_IsBase(bool value) const { qrubberband_hideevent_isbase = value; }
    void setQRubberBand_NativeEvent_IsBase(bool value) const { qrubberband_nativeevent_isbase = value; }
    void setQRubberBand_Metric_IsBase(bool value) const { qrubberband_metric_isbase = value; }
    void setQRubberBand_InitPainter_IsBase(bool value) const { qrubberband_initpainter_isbase = value; }
    void setQRubberBand_Redirected_IsBase(bool value) const { qrubberband_redirected_isbase = value; }
    void setQRubberBand_SharedPainter_IsBase(bool value) const { qrubberband_sharedpainter_isbase = value; }
    void setQRubberBand_InputMethodEvent_IsBase(bool value) const { qrubberband_inputmethodevent_isbase = value; }
    void setQRubberBand_InputMethodQuery_IsBase(bool value) const { qrubberband_inputmethodquery_isbase = value; }
    void setQRubberBand_FocusNextPrevChild_IsBase(bool value) const { qrubberband_focusnextprevchild_isbase = value; }
    void setQRubberBand_EventFilter_IsBase(bool value) const { qrubberband_eventfilter_isbase = value; }
    void setQRubberBand_TimerEvent_IsBase(bool value) const { qrubberband_timerevent_isbase = value; }
    void setQRubberBand_ChildEvent_IsBase(bool value) const { qrubberband_childevent_isbase = value; }
    void setQRubberBand_CustomEvent_IsBase(bool value) const { qrubberband_customevent_isbase = value; }
    void setQRubberBand_ConnectNotify_IsBase(bool value) const { qrubberband_connectnotify_isbase = value; }
    void setQRubberBand_DisconnectNotify_IsBase(bool value) const { qrubberband_disconnectnotify_isbase = value; }
    void setQRubberBand_UpdateMicroFocus_IsBase(bool value) const { qrubberband_updatemicrofocus_isbase = value; }
    void setQRubberBand_Create_IsBase(bool value) const { qrubberband_create_isbase = value; }
    void setQRubberBand_Destroy_IsBase(bool value) const { qrubberband_destroy_isbase = value; }
    void setQRubberBand_FocusNextChild_IsBase(bool value) const { qrubberband_focusnextchild_isbase = value; }
    void setQRubberBand_FocusPreviousChild_IsBase(bool value) const { qrubberband_focuspreviouschild_isbase = value; }
    void setQRubberBand_Sender_IsBase(bool value) const { qrubberband_sender_isbase = value; }
    void setQRubberBand_SenderSignalIndex_IsBase(bool value) const { qrubberband_sendersignalindex_isbase = value; }
    void setQRubberBand_Receivers_IsBase(bool value) const { qrubberband_receivers_isbase = value; }
    void setQRubberBand_IsSignalConnected_IsBase(bool value) const { qrubberband_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qrubberband_metacall_isbase) {
            qrubberband_metacall_isbase = false;
            return QRubberBand::qt_metacall(param1, param2, param3);
        } else if (qrubberband_metacall_callback != nullptr) {
            return qrubberband_metacall_callback(this, param1, param2, param3);
        } else {
            return QRubberBand::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qrubberband_event_isbase) {
            qrubberband_event_isbase = false;
            return QRubberBand::event(e);
        } else if (qrubberband_event_callback != nullptr) {
            return qrubberband_event_callback(this, e);
        } else {
            return QRubberBand::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qrubberband_paintevent_isbase) {
            qrubberband_paintevent_isbase = false;
            QRubberBand::paintEvent(param1);
        } else if (qrubberband_paintevent_callback != nullptr) {
            qrubberband_paintevent_callback(this, param1);
        } else {
            QRubberBand::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qrubberband_changeevent_isbase) {
            qrubberband_changeevent_isbase = false;
            QRubberBand::changeEvent(param1);
        } else if (qrubberband_changeevent_callback != nullptr) {
            qrubberband_changeevent_callback(this, param1);
        } else {
            QRubberBand::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qrubberband_showevent_isbase) {
            qrubberband_showevent_isbase = false;
            QRubberBand::showEvent(param1);
        } else if (qrubberband_showevent_callback != nullptr) {
            qrubberband_showevent_callback(this, param1);
        } else {
            QRubberBand::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qrubberband_resizeevent_isbase) {
            qrubberband_resizeevent_isbase = false;
            QRubberBand::resizeEvent(param1);
        } else if (qrubberband_resizeevent_callback != nullptr) {
            qrubberband_resizeevent_callback(this, param1);
        } else {
            QRubberBand::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* param1) override {
        if (qrubberband_moveevent_isbase) {
            qrubberband_moveevent_isbase = false;
            QRubberBand::moveEvent(param1);
        } else if (qrubberband_moveevent_callback != nullptr) {
            qrubberband_moveevent_callback(this, param1);
        } else {
            QRubberBand::moveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionRubberBand* option) const override {
        if (qrubberband_initstyleoption_isbase) {
            qrubberband_initstyleoption_isbase = false;
            QRubberBand::initStyleOption(option);
        } else if (qrubberband_initstyleoption_callback != nullptr) {
            qrubberband_initstyleoption_callback(this, option);
        } else {
            QRubberBand::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qrubberband_devtype_isbase) {
            qrubberband_devtype_isbase = false;
            return QRubberBand::devType();
        } else if (qrubberband_devtype_callback != nullptr) {
            return qrubberband_devtype_callback();
        } else {
            return QRubberBand::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qrubberband_setvisible_isbase) {
            qrubberband_setvisible_isbase = false;
            QRubberBand::setVisible(visible);
        } else if (qrubberband_setvisible_callback != nullptr) {
            qrubberband_setvisible_callback(this, visible);
        } else {
            QRubberBand::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qrubberband_sizehint_isbase) {
            qrubberband_sizehint_isbase = false;
            return QRubberBand::sizeHint();
        } else if (qrubberband_sizehint_callback != nullptr) {
            return qrubberband_sizehint_callback();
        } else {
            return QRubberBand::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qrubberband_minimumsizehint_isbase) {
            qrubberband_minimumsizehint_isbase = false;
            return QRubberBand::minimumSizeHint();
        } else if (qrubberband_minimumsizehint_callback != nullptr) {
            return qrubberband_minimumsizehint_callback();
        } else {
            return QRubberBand::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qrubberband_heightforwidth_isbase) {
            qrubberband_heightforwidth_isbase = false;
            return QRubberBand::heightForWidth(param1);
        } else if (qrubberband_heightforwidth_callback != nullptr) {
            return qrubberband_heightforwidth_callback(this, param1);
        } else {
            return QRubberBand::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qrubberband_hasheightforwidth_isbase) {
            qrubberband_hasheightforwidth_isbase = false;
            return QRubberBand::hasHeightForWidth();
        } else if (qrubberband_hasheightforwidth_callback != nullptr) {
            return qrubberband_hasheightforwidth_callback();
        } else {
            return QRubberBand::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qrubberband_paintengine_isbase) {
            qrubberband_paintengine_isbase = false;
            return QRubberBand::paintEngine();
        } else if (qrubberband_paintengine_callback != nullptr) {
            return qrubberband_paintengine_callback();
        } else {
            return QRubberBand::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qrubberband_mousepressevent_isbase) {
            qrubberband_mousepressevent_isbase = false;
            QRubberBand::mousePressEvent(event);
        } else if (qrubberband_mousepressevent_callback != nullptr) {
            qrubberband_mousepressevent_callback(this, event);
        } else {
            QRubberBand::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qrubberband_mousereleaseevent_isbase) {
            qrubberband_mousereleaseevent_isbase = false;
            QRubberBand::mouseReleaseEvent(event);
        } else if (qrubberband_mousereleaseevent_callback != nullptr) {
            qrubberband_mousereleaseevent_callback(this, event);
        } else {
            QRubberBand::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qrubberband_mousedoubleclickevent_isbase) {
            qrubberband_mousedoubleclickevent_isbase = false;
            QRubberBand::mouseDoubleClickEvent(event);
        } else if (qrubberband_mousedoubleclickevent_callback != nullptr) {
            qrubberband_mousedoubleclickevent_callback(this, event);
        } else {
            QRubberBand::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qrubberband_mousemoveevent_isbase) {
            qrubberband_mousemoveevent_isbase = false;
            QRubberBand::mouseMoveEvent(event);
        } else if (qrubberband_mousemoveevent_callback != nullptr) {
            qrubberband_mousemoveevent_callback(this, event);
        } else {
            QRubberBand::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qrubberband_wheelevent_isbase) {
            qrubberband_wheelevent_isbase = false;
            QRubberBand::wheelEvent(event);
        } else if (qrubberband_wheelevent_callback != nullptr) {
            qrubberband_wheelevent_callback(this, event);
        } else {
            QRubberBand::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qrubberband_keypressevent_isbase) {
            qrubberband_keypressevent_isbase = false;
            QRubberBand::keyPressEvent(event);
        } else if (qrubberband_keypressevent_callback != nullptr) {
            qrubberband_keypressevent_callback(this, event);
        } else {
            QRubberBand::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qrubberband_keyreleaseevent_isbase) {
            qrubberband_keyreleaseevent_isbase = false;
            QRubberBand::keyReleaseEvent(event);
        } else if (qrubberband_keyreleaseevent_callback != nullptr) {
            qrubberband_keyreleaseevent_callback(this, event);
        } else {
            QRubberBand::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qrubberband_focusinevent_isbase) {
            qrubberband_focusinevent_isbase = false;
            QRubberBand::focusInEvent(event);
        } else if (qrubberband_focusinevent_callback != nullptr) {
            qrubberband_focusinevent_callback(this, event);
        } else {
            QRubberBand::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qrubberband_focusoutevent_isbase) {
            qrubberband_focusoutevent_isbase = false;
            QRubberBand::focusOutEvent(event);
        } else if (qrubberband_focusoutevent_callback != nullptr) {
            qrubberband_focusoutevent_callback(this, event);
        } else {
            QRubberBand::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qrubberband_enterevent_isbase) {
            qrubberband_enterevent_isbase = false;
            QRubberBand::enterEvent(event);
        } else if (qrubberband_enterevent_callback != nullptr) {
            qrubberband_enterevent_callback(this, event);
        } else {
            QRubberBand::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qrubberband_leaveevent_isbase) {
            qrubberband_leaveevent_isbase = false;
            QRubberBand::leaveEvent(event);
        } else if (qrubberband_leaveevent_callback != nullptr) {
            qrubberband_leaveevent_callback(this, event);
        } else {
            QRubberBand::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qrubberband_closeevent_isbase) {
            qrubberband_closeevent_isbase = false;
            QRubberBand::closeEvent(event);
        } else if (qrubberband_closeevent_callback != nullptr) {
            qrubberband_closeevent_callback(this, event);
        } else {
            QRubberBand::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qrubberband_contextmenuevent_isbase) {
            qrubberband_contextmenuevent_isbase = false;
            QRubberBand::contextMenuEvent(event);
        } else if (qrubberband_contextmenuevent_callback != nullptr) {
            qrubberband_contextmenuevent_callback(this, event);
        } else {
            QRubberBand::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qrubberband_tabletevent_isbase) {
            qrubberband_tabletevent_isbase = false;
            QRubberBand::tabletEvent(event);
        } else if (qrubberband_tabletevent_callback != nullptr) {
            qrubberband_tabletevent_callback(this, event);
        } else {
            QRubberBand::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qrubberband_actionevent_isbase) {
            qrubberband_actionevent_isbase = false;
            QRubberBand::actionEvent(event);
        } else if (qrubberband_actionevent_callback != nullptr) {
            qrubberband_actionevent_callback(this, event);
        } else {
            QRubberBand::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qrubberband_dragenterevent_isbase) {
            qrubberband_dragenterevent_isbase = false;
            QRubberBand::dragEnterEvent(event);
        } else if (qrubberband_dragenterevent_callback != nullptr) {
            qrubberband_dragenterevent_callback(this, event);
        } else {
            QRubberBand::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qrubberband_dragmoveevent_isbase) {
            qrubberband_dragmoveevent_isbase = false;
            QRubberBand::dragMoveEvent(event);
        } else if (qrubberband_dragmoveevent_callback != nullptr) {
            qrubberband_dragmoveevent_callback(this, event);
        } else {
            QRubberBand::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qrubberband_dragleaveevent_isbase) {
            qrubberband_dragleaveevent_isbase = false;
            QRubberBand::dragLeaveEvent(event);
        } else if (qrubberband_dragleaveevent_callback != nullptr) {
            qrubberband_dragleaveevent_callback(this, event);
        } else {
            QRubberBand::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qrubberband_dropevent_isbase) {
            qrubberband_dropevent_isbase = false;
            QRubberBand::dropEvent(event);
        } else if (qrubberband_dropevent_callback != nullptr) {
            qrubberband_dropevent_callback(this, event);
        } else {
            QRubberBand::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qrubberband_hideevent_isbase) {
            qrubberband_hideevent_isbase = false;
            QRubberBand::hideEvent(event);
        } else if (qrubberband_hideevent_callback != nullptr) {
            qrubberband_hideevent_callback(this, event);
        } else {
            QRubberBand::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qrubberband_nativeevent_isbase) {
            qrubberband_nativeevent_isbase = false;
            return QRubberBand::nativeEvent(eventType, message, result);
        } else if (qrubberband_nativeevent_callback != nullptr) {
            return qrubberband_nativeevent_callback(this, eventType, message, result);
        } else {
            return QRubberBand::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qrubberband_metric_isbase) {
            qrubberband_metric_isbase = false;
            return QRubberBand::metric(param1);
        } else if (qrubberband_metric_callback != nullptr) {
            return qrubberband_metric_callback(this, param1);
        } else {
            return QRubberBand::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qrubberband_initpainter_isbase) {
            qrubberband_initpainter_isbase = false;
            QRubberBand::initPainter(painter);
        } else if (qrubberband_initpainter_callback != nullptr) {
            qrubberband_initpainter_callback(this, painter);
        } else {
            QRubberBand::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qrubberband_redirected_isbase) {
            qrubberband_redirected_isbase = false;
            return QRubberBand::redirected(offset);
        } else if (qrubberband_redirected_callback != nullptr) {
            return qrubberband_redirected_callback(this, offset);
        } else {
            return QRubberBand::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qrubberband_sharedpainter_isbase) {
            qrubberband_sharedpainter_isbase = false;
            return QRubberBand::sharedPainter();
        } else if (qrubberband_sharedpainter_callback != nullptr) {
            return qrubberband_sharedpainter_callback();
        } else {
            return QRubberBand::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qrubberband_inputmethodevent_isbase) {
            qrubberband_inputmethodevent_isbase = false;
            QRubberBand::inputMethodEvent(param1);
        } else if (qrubberband_inputmethodevent_callback != nullptr) {
            qrubberband_inputmethodevent_callback(this, param1);
        } else {
            QRubberBand::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qrubberband_inputmethodquery_isbase) {
            qrubberband_inputmethodquery_isbase = false;
            return QRubberBand::inputMethodQuery(param1);
        } else if (qrubberband_inputmethodquery_callback != nullptr) {
            return qrubberband_inputmethodquery_callback(this, param1);
        } else {
            return QRubberBand::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qrubberband_focusnextprevchild_isbase) {
            qrubberband_focusnextprevchild_isbase = false;
            return QRubberBand::focusNextPrevChild(next);
        } else if (qrubberband_focusnextprevchild_callback != nullptr) {
            return qrubberband_focusnextprevchild_callback(this, next);
        } else {
            return QRubberBand::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qrubberband_eventfilter_isbase) {
            qrubberband_eventfilter_isbase = false;
            return QRubberBand::eventFilter(watched, event);
        } else if (qrubberband_eventfilter_callback != nullptr) {
            return qrubberband_eventfilter_callback(this, watched, event);
        } else {
            return QRubberBand::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qrubberband_timerevent_isbase) {
            qrubberband_timerevent_isbase = false;
            QRubberBand::timerEvent(event);
        } else if (qrubberband_timerevent_callback != nullptr) {
            qrubberband_timerevent_callback(this, event);
        } else {
            QRubberBand::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qrubberband_childevent_isbase) {
            qrubberband_childevent_isbase = false;
            QRubberBand::childEvent(event);
        } else if (qrubberband_childevent_callback != nullptr) {
            qrubberband_childevent_callback(this, event);
        } else {
            QRubberBand::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qrubberband_customevent_isbase) {
            qrubberband_customevent_isbase = false;
            QRubberBand::customEvent(event);
        } else if (qrubberband_customevent_callback != nullptr) {
            qrubberband_customevent_callback(this, event);
        } else {
            QRubberBand::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qrubberband_connectnotify_isbase) {
            qrubberband_connectnotify_isbase = false;
            QRubberBand::connectNotify(signal);
        } else if (qrubberband_connectnotify_callback != nullptr) {
            qrubberband_connectnotify_callback(this, signal);
        } else {
            QRubberBand::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qrubberband_disconnectnotify_isbase) {
            qrubberband_disconnectnotify_isbase = false;
            QRubberBand::disconnectNotify(signal);
        } else if (qrubberband_disconnectnotify_callback != nullptr) {
            qrubberband_disconnectnotify_callback(this, signal);
        } else {
            QRubberBand::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qrubberband_updatemicrofocus_isbase) {
            qrubberband_updatemicrofocus_isbase = false;
            QRubberBand::updateMicroFocus();
        } else if (qrubberband_updatemicrofocus_callback != nullptr) {
            qrubberband_updatemicrofocus_callback();
        } else {
            QRubberBand::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qrubberband_create_isbase) {
            qrubberband_create_isbase = false;
            QRubberBand::create();
        } else if (qrubberband_create_callback != nullptr) {
            qrubberband_create_callback();
        } else {
            QRubberBand::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qrubberband_destroy_isbase) {
            qrubberband_destroy_isbase = false;
            QRubberBand::destroy();
        } else if (qrubberband_destroy_callback != nullptr) {
            qrubberband_destroy_callback();
        } else {
            QRubberBand::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qrubberband_focusnextchild_isbase) {
            qrubberband_focusnextchild_isbase = false;
            return QRubberBand::focusNextChild();
        } else if (qrubberband_focusnextchild_callback != nullptr) {
            return qrubberband_focusnextchild_callback();
        } else {
            return QRubberBand::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qrubberband_focuspreviouschild_isbase) {
            qrubberband_focuspreviouschild_isbase = false;
            return QRubberBand::focusPreviousChild();
        } else if (qrubberband_focuspreviouschild_callback != nullptr) {
            return qrubberband_focuspreviouschild_callback();
        } else {
            return QRubberBand::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qrubberband_sender_isbase) {
            qrubberband_sender_isbase = false;
            return QRubberBand::sender();
        } else if (qrubberband_sender_callback != nullptr) {
            return qrubberband_sender_callback();
        } else {
            return QRubberBand::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qrubberband_sendersignalindex_isbase) {
            qrubberband_sendersignalindex_isbase = false;
            return QRubberBand::senderSignalIndex();
        } else if (qrubberband_sendersignalindex_callback != nullptr) {
            return qrubberband_sendersignalindex_callback();
        } else {
            return QRubberBand::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qrubberband_receivers_isbase) {
            qrubberband_receivers_isbase = false;
            return QRubberBand::receivers(signal);
        } else if (qrubberband_receivers_callback != nullptr) {
            return qrubberband_receivers_callback(this, signal);
        } else {
            return QRubberBand::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qrubberband_issignalconnected_isbase) {
            qrubberband_issignalconnected_isbase = false;
            return QRubberBand::isSignalConnected(signal);
        } else if (qrubberband_issignalconnected_callback != nullptr) {
            return qrubberband_issignalconnected_callback(this, signal);
        } else {
            return QRubberBand::isSignalConnected(signal);
        }
    }
};

#endif

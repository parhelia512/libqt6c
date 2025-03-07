#pragma once
#ifndef SRCC_LIBVIRTUALQSPLITTER_H
#define SRCC_LIBVIRTUALQSPLITTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSplitter so that we can call protected methods
class VirtualQSplitter : public QSplitter {

  public:
    // Virtual class public types (including callbacks)
    using QSplitter_Metacall_Callback = int (*)(QSplitter*, QMetaObject::Call, int, void**);
    using QSplitter_SizeHint_Callback = QSize (*)();
    using QSplitter_MinimumSizeHint_Callback = QSize (*)();
    using QSplitter_CreateHandle_Callback = QSplitterHandle* (*)();
    using QSplitter_ChildEvent_Callback = void (*)(QSplitter*, QChildEvent*);
    using QSplitter_Event_Callback = bool (*)(QSplitter*, QEvent*);
    using QSplitter_ResizeEvent_Callback = void (*)(QSplitter*, QResizeEvent*);
    using QSplitter_ChangeEvent_Callback = void (*)(QSplitter*, QEvent*);
    using QSplitter_PaintEvent_Callback = void (*)(QSplitter*, QPaintEvent*);
    using QSplitter_InitStyleOption_Callback = void (*)(const QSplitter*, QStyleOptionFrame*);
    using QSplitter_DevType_Callback = int (*)();
    using QSplitter_SetVisible_Callback = void (*)(QSplitter*, bool);
    using QSplitter_HeightForWidth_Callback = int (*)(const QSplitter*, int);
    using QSplitter_HasHeightForWidth_Callback = bool (*)();
    using QSplitter_PaintEngine_Callback = QPaintEngine* (*)();
    using QSplitter_MousePressEvent_Callback = void (*)(QSplitter*, QMouseEvent*);
    using QSplitter_MouseReleaseEvent_Callback = void (*)(QSplitter*, QMouseEvent*);
    using QSplitter_MouseDoubleClickEvent_Callback = void (*)(QSplitter*, QMouseEvent*);
    using QSplitter_MouseMoveEvent_Callback = void (*)(QSplitter*, QMouseEvent*);
    using QSplitter_WheelEvent_Callback = void (*)(QSplitter*, QWheelEvent*);
    using QSplitter_KeyPressEvent_Callback = void (*)(QSplitter*, QKeyEvent*);
    using QSplitter_KeyReleaseEvent_Callback = void (*)(QSplitter*, QKeyEvent*);
    using QSplitter_FocusInEvent_Callback = void (*)(QSplitter*, QFocusEvent*);
    using QSplitter_FocusOutEvent_Callback = void (*)(QSplitter*, QFocusEvent*);
    using QSplitter_EnterEvent_Callback = void (*)(QSplitter*, QEnterEvent*);
    using QSplitter_LeaveEvent_Callback = void (*)(QSplitter*, QEvent*);
    using QSplitter_MoveEvent_Callback = void (*)(QSplitter*, QMoveEvent*);
    using QSplitter_CloseEvent_Callback = void (*)(QSplitter*, QCloseEvent*);
    using QSplitter_ContextMenuEvent_Callback = void (*)(QSplitter*, QContextMenuEvent*);
    using QSplitter_TabletEvent_Callback = void (*)(QSplitter*, QTabletEvent*);
    using QSplitter_ActionEvent_Callback = void (*)(QSplitter*, QActionEvent*);
    using QSplitter_DragEnterEvent_Callback = void (*)(QSplitter*, QDragEnterEvent*);
    using QSplitter_DragMoveEvent_Callback = void (*)(QSplitter*, QDragMoveEvent*);
    using QSplitter_DragLeaveEvent_Callback = void (*)(QSplitter*, QDragLeaveEvent*);
    using QSplitter_DropEvent_Callback = void (*)(QSplitter*, QDropEvent*);
    using QSplitter_ShowEvent_Callback = void (*)(QSplitter*, QShowEvent*);
    using QSplitter_HideEvent_Callback = void (*)(QSplitter*, QHideEvent*);
    using QSplitter_NativeEvent_Callback = bool (*)(QSplitter*, const QByteArray&, void*, qintptr*);
    using QSplitter_Metric_Callback = int (*)(const QSplitter*, QPaintDevice::PaintDeviceMetric);
    using QSplitter_InitPainter_Callback = void (*)(const QSplitter*, QPainter*);
    using QSplitter_Redirected_Callback = QPaintDevice* (*)(const QSplitter*, QPoint*);
    using QSplitter_SharedPainter_Callback = QPainter* (*)();
    using QSplitter_InputMethodEvent_Callback = void (*)(QSplitter*, QInputMethodEvent*);
    using QSplitter_InputMethodQuery_Callback = QVariant (*)(const QSplitter*, Qt::InputMethodQuery);
    using QSplitter_FocusNextPrevChild_Callback = bool (*)(QSplitter*, bool);
    using QSplitter_EventFilter_Callback = bool (*)(QSplitter*, QObject*, QEvent*);
    using QSplitter_TimerEvent_Callback = void (*)(QSplitter*, QTimerEvent*);
    using QSplitter_CustomEvent_Callback = void (*)(QSplitter*, QEvent*);
    using QSplitter_ConnectNotify_Callback = void (*)(QSplitter*, const QMetaMethod&);
    using QSplitter_DisconnectNotify_Callback = void (*)(QSplitter*, const QMetaMethod&);
    using QSplitter_MoveSplitter_Callback = void (*)(QSplitter*, int, int);
    using QSplitter_SetRubberBand_Callback = void (*)(QSplitter*, int);
    using QSplitter_ClosestLegalPosition_Callback = int (*)(QSplitter*, int, int);
    using QSplitter_DrawFrame_Callback = void (*)(QSplitter*, QPainter*);
    using QSplitter_UpdateMicroFocus_Callback = void (*)();
    using QSplitter_Create_Callback = void (*)();
    using QSplitter_Destroy_Callback = void (*)();
    using QSplitter_FocusNextChild_Callback = bool (*)();
    using QSplitter_FocusPreviousChild_Callback = bool (*)();
    using QSplitter_Sender_Callback = QObject* (*)();
    using QSplitter_SenderSignalIndex_Callback = int (*)();
    using QSplitter_Receivers_Callback = int (*)(const QSplitter*, const char*);
    using QSplitter_IsSignalConnected_Callback = bool (*)(const QSplitter*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QSplitter_Metacall_Callback qsplitter_metacall_callback = nullptr;
    QSplitter_SizeHint_Callback qsplitter_sizehint_callback = nullptr;
    QSplitter_MinimumSizeHint_Callback qsplitter_minimumsizehint_callback = nullptr;
    QSplitter_CreateHandle_Callback qsplitter_createhandle_callback = nullptr;
    QSplitter_ChildEvent_Callback qsplitter_childevent_callback = nullptr;
    QSplitter_Event_Callback qsplitter_event_callback = nullptr;
    QSplitter_ResizeEvent_Callback qsplitter_resizeevent_callback = nullptr;
    QSplitter_ChangeEvent_Callback qsplitter_changeevent_callback = nullptr;
    QSplitter_PaintEvent_Callback qsplitter_paintevent_callback = nullptr;
    QSplitter_InitStyleOption_Callback qsplitter_initstyleoption_callback = nullptr;
    QSplitter_DevType_Callback qsplitter_devtype_callback = nullptr;
    QSplitter_SetVisible_Callback qsplitter_setvisible_callback = nullptr;
    QSplitter_HeightForWidth_Callback qsplitter_heightforwidth_callback = nullptr;
    QSplitter_HasHeightForWidth_Callback qsplitter_hasheightforwidth_callback = nullptr;
    QSplitter_PaintEngine_Callback qsplitter_paintengine_callback = nullptr;
    QSplitter_MousePressEvent_Callback qsplitter_mousepressevent_callback = nullptr;
    QSplitter_MouseReleaseEvent_Callback qsplitter_mousereleaseevent_callback = nullptr;
    QSplitter_MouseDoubleClickEvent_Callback qsplitter_mousedoubleclickevent_callback = nullptr;
    QSplitter_MouseMoveEvent_Callback qsplitter_mousemoveevent_callback = nullptr;
    QSplitter_WheelEvent_Callback qsplitter_wheelevent_callback = nullptr;
    QSplitter_KeyPressEvent_Callback qsplitter_keypressevent_callback = nullptr;
    QSplitter_KeyReleaseEvent_Callback qsplitter_keyreleaseevent_callback = nullptr;
    QSplitter_FocusInEvent_Callback qsplitter_focusinevent_callback = nullptr;
    QSplitter_FocusOutEvent_Callback qsplitter_focusoutevent_callback = nullptr;
    QSplitter_EnterEvent_Callback qsplitter_enterevent_callback = nullptr;
    QSplitter_LeaveEvent_Callback qsplitter_leaveevent_callback = nullptr;
    QSplitter_MoveEvent_Callback qsplitter_moveevent_callback = nullptr;
    QSplitter_CloseEvent_Callback qsplitter_closeevent_callback = nullptr;
    QSplitter_ContextMenuEvent_Callback qsplitter_contextmenuevent_callback = nullptr;
    QSplitter_TabletEvent_Callback qsplitter_tabletevent_callback = nullptr;
    QSplitter_ActionEvent_Callback qsplitter_actionevent_callback = nullptr;
    QSplitter_DragEnterEvent_Callback qsplitter_dragenterevent_callback = nullptr;
    QSplitter_DragMoveEvent_Callback qsplitter_dragmoveevent_callback = nullptr;
    QSplitter_DragLeaveEvent_Callback qsplitter_dragleaveevent_callback = nullptr;
    QSplitter_DropEvent_Callback qsplitter_dropevent_callback = nullptr;
    QSplitter_ShowEvent_Callback qsplitter_showevent_callback = nullptr;
    QSplitter_HideEvent_Callback qsplitter_hideevent_callback = nullptr;
    QSplitter_NativeEvent_Callback qsplitter_nativeevent_callback = nullptr;
    QSplitter_Metric_Callback qsplitter_metric_callback = nullptr;
    QSplitter_InitPainter_Callback qsplitter_initpainter_callback = nullptr;
    QSplitter_Redirected_Callback qsplitter_redirected_callback = nullptr;
    QSplitter_SharedPainter_Callback qsplitter_sharedpainter_callback = nullptr;
    QSplitter_InputMethodEvent_Callback qsplitter_inputmethodevent_callback = nullptr;
    QSplitter_InputMethodQuery_Callback qsplitter_inputmethodquery_callback = nullptr;
    QSplitter_FocusNextPrevChild_Callback qsplitter_focusnextprevchild_callback = nullptr;
    QSplitter_EventFilter_Callback qsplitter_eventfilter_callback = nullptr;
    QSplitter_TimerEvent_Callback qsplitter_timerevent_callback = nullptr;
    QSplitter_CustomEvent_Callback qsplitter_customevent_callback = nullptr;
    QSplitter_ConnectNotify_Callback qsplitter_connectnotify_callback = nullptr;
    QSplitter_DisconnectNotify_Callback qsplitter_disconnectnotify_callback = nullptr;
    QSplitter_MoveSplitter_Callback qsplitter_movesplitter_callback = nullptr;
    QSplitter_SetRubberBand_Callback qsplitter_setrubberband_callback = nullptr;
    QSplitter_ClosestLegalPosition_Callback qsplitter_closestlegalposition_callback = nullptr;
    QSplitter_DrawFrame_Callback qsplitter_drawframe_callback = nullptr;
    QSplitter_UpdateMicroFocus_Callback qsplitter_updatemicrofocus_callback = nullptr;
    QSplitter_Create_Callback qsplitter_create_callback = nullptr;
    QSplitter_Destroy_Callback qsplitter_destroy_callback = nullptr;
    QSplitter_FocusNextChild_Callback qsplitter_focusnextchild_callback = nullptr;
    QSplitter_FocusPreviousChild_Callback qsplitter_focuspreviouschild_callback = nullptr;
    QSplitter_Sender_Callback qsplitter_sender_callback = nullptr;
    QSplitter_SenderSignalIndex_Callback qsplitter_sendersignalindex_callback = nullptr;
    QSplitter_Receivers_Callback qsplitter_receivers_callback = nullptr;
    QSplitter_IsSignalConnected_Callback qsplitter_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsplitter_metacall_isbase = false;
    mutable bool qsplitter_sizehint_isbase = false;
    mutable bool qsplitter_minimumsizehint_isbase = false;
    mutable bool qsplitter_createhandle_isbase = false;
    mutable bool qsplitter_childevent_isbase = false;
    mutable bool qsplitter_event_isbase = false;
    mutable bool qsplitter_resizeevent_isbase = false;
    mutable bool qsplitter_changeevent_isbase = false;
    mutable bool qsplitter_paintevent_isbase = false;
    mutable bool qsplitter_initstyleoption_isbase = false;
    mutable bool qsplitter_devtype_isbase = false;
    mutable bool qsplitter_setvisible_isbase = false;
    mutable bool qsplitter_heightforwidth_isbase = false;
    mutable bool qsplitter_hasheightforwidth_isbase = false;
    mutable bool qsplitter_paintengine_isbase = false;
    mutable bool qsplitter_mousepressevent_isbase = false;
    mutable bool qsplitter_mousereleaseevent_isbase = false;
    mutable bool qsplitter_mousedoubleclickevent_isbase = false;
    mutable bool qsplitter_mousemoveevent_isbase = false;
    mutable bool qsplitter_wheelevent_isbase = false;
    mutable bool qsplitter_keypressevent_isbase = false;
    mutable bool qsplitter_keyreleaseevent_isbase = false;
    mutable bool qsplitter_focusinevent_isbase = false;
    mutable bool qsplitter_focusoutevent_isbase = false;
    mutable bool qsplitter_enterevent_isbase = false;
    mutable bool qsplitter_leaveevent_isbase = false;
    mutable bool qsplitter_moveevent_isbase = false;
    mutable bool qsplitter_closeevent_isbase = false;
    mutable bool qsplitter_contextmenuevent_isbase = false;
    mutable bool qsplitter_tabletevent_isbase = false;
    mutable bool qsplitter_actionevent_isbase = false;
    mutable bool qsplitter_dragenterevent_isbase = false;
    mutable bool qsplitter_dragmoveevent_isbase = false;
    mutable bool qsplitter_dragleaveevent_isbase = false;
    mutable bool qsplitter_dropevent_isbase = false;
    mutable bool qsplitter_showevent_isbase = false;
    mutable bool qsplitter_hideevent_isbase = false;
    mutable bool qsplitter_nativeevent_isbase = false;
    mutable bool qsplitter_metric_isbase = false;
    mutable bool qsplitter_initpainter_isbase = false;
    mutable bool qsplitter_redirected_isbase = false;
    mutable bool qsplitter_sharedpainter_isbase = false;
    mutable bool qsplitter_inputmethodevent_isbase = false;
    mutable bool qsplitter_inputmethodquery_isbase = false;
    mutable bool qsplitter_focusnextprevchild_isbase = false;
    mutable bool qsplitter_eventfilter_isbase = false;
    mutable bool qsplitter_timerevent_isbase = false;
    mutable bool qsplitter_customevent_isbase = false;
    mutable bool qsplitter_connectnotify_isbase = false;
    mutable bool qsplitter_disconnectnotify_isbase = false;
    mutable bool qsplitter_movesplitter_isbase = false;
    mutable bool qsplitter_setrubberband_isbase = false;
    mutable bool qsplitter_closestlegalposition_isbase = false;
    mutable bool qsplitter_drawframe_isbase = false;
    mutable bool qsplitter_updatemicrofocus_isbase = false;
    mutable bool qsplitter_create_isbase = false;
    mutable bool qsplitter_destroy_isbase = false;
    mutable bool qsplitter_focusnextchild_isbase = false;
    mutable bool qsplitter_focuspreviouschild_isbase = false;
    mutable bool qsplitter_sender_isbase = false;
    mutable bool qsplitter_sendersignalindex_isbase = false;
    mutable bool qsplitter_receivers_isbase = false;
    mutable bool qsplitter_issignalconnected_isbase = false;

  public:
    VirtualQSplitter(QWidget* parent) : QSplitter(parent){};
    VirtualQSplitter() : QSplitter(){};
    VirtualQSplitter(Qt::Orientation param1) : QSplitter(param1){};
    VirtualQSplitter(Qt::Orientation param1, QWidget* parent) : QSplitter(param1, parent){};

    ~VirtualQSplitter() {
        qsplitter_metacall_callback = nullptr;
        qsplitter_sizehint_callback = nullptr;
        qsplitter_minimumsizehint_callback = nullptr;
        qsplitter_createhandle_callback = nullptr;
        qsplitter_childevent_callback = nullptr;
        qsplitter_event_callback = nullptr;
        qsplitter_resizeevent_callback = nullptr;
        qsplitter_changeevent_callback = nullptr;
        qsplitter_paintevent_callback = nullptr;
        qsplitter_initstyleoption_callback = nullptr;
        qsplitter_devtype_callback = nullptr;
        qsplitter_setvisible_callback = nullptr;
        qsplitter_heightforwidth_callback = nullptr;
        qsplitter_hasheightforwidth_callback = nullptr;
        qsplitter_paintengine_callback = nullptr;
        qsplitter_mousepressevent_callback = nullptr;
        qsplitter_mousereleaseevent_callback = nullptr;
        qsplitter_mousedoubleclickevent_callback = nullptr;
        qsplitter_mousemoveevent_callback = nullptr;
        qsplitter_wheelevent_callback = nullptr;
        qsplitter_keypressevent_callback = nullptr;
        qsplitter_keyreleaseevent_callback = nullptr;
        qsplitter_focusinevent_callback = nullptr;
        qsplitter_focusoutevent_callback = nullptr;
        qsplitter_enterevent_callback = nullptr;
        qsplitter_leaveevent_callback = nullptr;
        qsplitter_moveevent_callback = nullptr;
        qsplitter_closeevent_callback = nullptr;
        qsplitter_contextmenuevent_callback = nullptr;
        qsplitter_tabletevent_callback = nullptr;
        qsplitter_actionevent_callback = nullptr;
        qsplitter_dragenterevent_callback = nullptr;
        qsplitter_dragmoveevent_callback = nullptr;
        qsplitter_dragleaveevent_callback = nullptr;
        qsplitter_dropevent_callback = nullptr;
        qsplitter_showevent_callback = nullptr;
        qsplitter_hideevent_callback = nullptr;
        qsplitter_nativeevent_callback = nullptr;
        qsplitter_metric_callback = nullptr;
        qsplitter_initpainter_callback = nullptr;
        qsplitter_redirected_callback = nullptr;
        qsplitter_sharedpainter_callback = nullptr;
        qsplitter_inputmethodevent_callback = nullptr;
        qsplitter_inputmethodquery_callback = nullptr;
        qsplitter_focusnextprevchild_callback = nullptr;
        qsplitter_eventfilter_callback = nullptr;
        qsplitter_timerevent_callback = nullptr;
        qsplitter_customevent_callback = nullptr;
        qsplitter_connectnotify_callback = nullptr;
        qsplitter_disconnectnotify_callback = nullptr;
        qsplitter_movesplitter_callback = nullptr;
        qsplitter_setrubberband_callback = nullptr;
        qsplitter_closestlegalposition_callback = nullptr;
        qsplitter_drawframe_callback = nullptr;
        qsplitter_updatemicrofocus_callback = nullptr;
        qsplitter_create_callback = nullptr;
        qsplitter_destroy_callback = nullptr;
        qsplitter_focusnextchild_callback = nullptr;
        qsplitter_focuspreviouschild_callback = nullptr;
        qsplitter_sender_callback = nullptr;
        qsplitter_sendersignalindex_callback = nullptr;
        qsplitter_receivers_callback = nullptr;
        qsplitter_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQSplitter_Metacall_Callback(QSplitter_Metacall_Callback cb) { qsplitter_metacall_callback = cb; }
    void setQSplitter_SizeHint_Callback(QSplitter_SizeHint_Callback cb) { qsplitter_sizehint_callback = cb; }
    void setQSplitter_MinimumSizeHint_Callback(QSplitter_MinimumSizeHint_Callback cb) { qsplitter_minimumsizehint_callback = cb; }
    void setQSplitter_CreateHandle_Callback(QSplitter_CreateHandle_Callback cb) { qsplitter_createhandle_callback = cb; }
    void setQSplitter_ChildEvent_Callback(QSplitter_ChildEvent_Callback cb) { qsplitter_childevent_callback = cb; }
    void setQSplitter_Event_Callback(QSplitter_Event_Callback cb) { qsplitter_event_callback = cb; }
    void setQSplitter_ResizeEvent_Callback(QSplitter_ResizeEvent_Callback cb) { qsplitter_resizeevent_callback = cb; }
    void setQSplitter_ChangeEvent_Callback(QSplitter_ChangeEvent_Callback cb) { qsplitter_changeevent_callback = cb; }
    void setQSplitter_PaintEvent_Callback(QSplitter_PaintEvent_Callback cb) { qsplitter_paintevent_callback = cb; }
    void setQSplitter_InitStyleOption_Callback(QSplitter_InitStyleOption_Callback cb) { qsplitter_initstyleoption_callback = cb; }
    void setQSplitter_DevType_Callback(QSplitter_DevType_Callback cb) { qsplitter_devtype_callback = cb; }
    void setQSplitter_SetVisible_Callback(QSplitter_SetVisible_Callback cb) { qsplitter_setvisible_callback = cb; }
    void setQSplitter_HeightForWidth_Callback(QSplitter_HeightForWidth_Callback cb) { qsplitter_heightforwidth_callback = cb; }
    void setQSplitter_HasHeightForWidth_Callback(QSplitter_HasHeightForWidth_Callback cb) { qsplitter_hasheightforwidth_callback = cb; }
    void setQSplitter_PaintEngine_Callback(QSplitter_PaintEngine_Callback cb) { qsplitter_paintengine_callback = cb; }
    void setQSplitter_MousePressEvent_Callback(QSplitter_MousePressEvent_Callback cb) { qsplitter_mousepressevent_callback = cb; }
    void setQSplitter_MouseReleaseEvent_Callback(QSplitter_MouseReleaseEvent_Callback cb) { qsplitter_mousereleaseevent_callback = cb; }
    void setQSplitter_MouseDoubleClickEvent_Callback(QSplitter_MouseDoubleClickEvent_Callback cb) { qsplitter_mousedoubleclickevent_callback = cb; }
    void setQSplitter_MouseMoveEvent_Callback(QSplitter_MouseMoveEvent_Callback cb) { qsplitter_mousemoveevent_callback = cb; }
    void setQSplitter_WheelEvent_Callback(QSplitter_WheelEvent_Callback cb) { qsplitter_wheelevent_callback = cb; }
    void setQSplitter_KeyPressEvent_Callback(QSplitter_KeyPressEvent_Callback cb) { qsplitter_keypressevent_callback = cb; }
    void setQSplitter_KeyReleaseEvent_Callback(QSplitter_KeyReleaseEvent_Callback cb) { qsplitter_keyreleaseevent_callback = cb; }
    void setQSplitter_FocusInEvent_Callback(QSplitter_FocusInEvent_Callback cb) { qsplitter_focusinevent_callback = cb; }
    void setQSplitter_FocusOutEvent_Callback(QSplitter_FocusOutEvent_Callback cb) { qsplitter_focusoutevent_callback = cb; }
    void setQSplitter_EnterEvent_Callback(QSplitter_EnterEvent_Callback cb) { qsplitter_enterevent_callback = cb; }
    void setQSplitter_LeaveEvent_Callback(QSplitter_LeaveEvent_Callback cb) { qsplitter_leaveevent_callback = cb; }
    void setQSplitter_MoveEvent_Callback(QSplitter_MoveEvent_Callback cb) { qsplitter_moveevent_callback = cb; }
    void setQSplitter_CloseEvent_Callback(QSplitter_CloseEvent_Callback cb) { qsplitter_closeevent_callback = cb; }
    void setQSplitter_ContextMenuEvent_Callback(QSplitter_ContextMenuEvent_Callback cb) { qsplitter_contextmenuevent_callback = cb; }
    void setQSplitter_TabletEvent_Callback(QSplitter_TabletEvent_Callback cb) { qsplitter_tabletevent_callback = cb; }
    void setQSplitter_ActionEvent_Callback(QSplitter_ActionEvent_Callback cb) { qsplitter_actionevent_callback = cb; }
    void setQSplitter_DragEnterEvent_Callback(QSplitter_DragEnterEvent_Callback cb) { qsplitter_dragenterevent_callback = cb; }
    void setQSplitter_DragMoveEvent_Callback(QSplitter_DragMoveEvent_Callback cb) { qsplitter_dragmoveevent_callback = cb; }
    void setQSplitter_DragLeaveEvent_Callback(QSplitter_DragLeaveEvent_Callback cb) { qsplitter_dragleaveevent_callback = cb; }
    void setQSplitter_DropEvent_Callback(QSplitter_DropEvent_Callback cb) { qsplitter_dropevent_callback = cb; }
    void setQSplitter_ShowEvent_Callback(QSplitter_ShowEvent_Callback cb) { qsplitter_showevent_callback = cb; }
    void setQSplitter_HideEvent_Callback(QSplitter_HideEvent_Callback cb) { qsplitter_hideevent_callback = cb; }
    void setQSplitter_NativeEvent_Callback(QSplitter_NativeEvent_Callback cb) { qsplitter_nativeevent_callback = cb; }
    void setQSplitter_Metric_Callback(QSplitter_Metric_Callback cb) { qsplitter_metric_callback = cb; }
    void setQSplitter_InitPainter_Callback(QSplitter_InitPainter_Callback cb) { qsplitter_initpainter_callback = cb; }
    void setQSplitter_Redirected_Callback(QSplitter_Redirected_Callback cb) { qsplitter_redirected_callback = cb; }
    void setQSplitter_SharedPainter_Callback(QSplitter_SharedPainter_Callback cb) { qsplitter_sharedpainter_callback = cb; }
    void setQSplitter_InputMethodEvent_Callback(QSplitter_InputMethodEvent_Callback cb) { qsplitter_inputmethodevent_callback = cb; }
    void setQSplitter_InputMethodQuery_Callback(QSplitter_InputMethodQuery_Callback cb) { qsplitter_inputmethodquery_callback = cb; }
    void setQSplitter_FocusNextPrevChild_Callback(QSplitter_FocusNextPrevChild_Callback cb) { qsplitter_focusnextprevchild_callback = cb; }
    void setQSplitter_EventFilter_Callback(QSplitter_EventFilter_Callback cb) { qsplitter_eventfilter_callback = cb; }
    void setQSplitter_TimerEvent_Callback(QSplitter_TimerEvent_Callback cb) { qsplitter_timerevent_callback = cb; }
    void setQSplitter_CustomEvent_Callback(QSplitter_CustomEvent_Callback cb) { qsplitter_customevent_callback = cb; }
    void setQSplitter_ConnectNotify_Callback(QSplitter_ConnectNotify_Callback cb) { qsplitter_connectnotify_callback = cb; }
    void setQSplitter_DisconnectNotify_Callback(QSplitter_DisconnectNotify_Callback cb) { qsplitter_disconnectnotify_callback = cb; }
    void setQSplitter_MoveSplitter_Callback(QSplitter_MoveSplitter_Callback cb) { qsplitter_movesplitter_callback = cb; }
    void setQSplitter_SetRubberBand_Callback(QSplitter_SetRubberBand_Callback cb) { qsplitter_setrubberband_callback = cb; }
    void setQSplitter_ClosestLegalPosition_Callback(QSplitter_ClosestLegalPosition_Callback cb) { qsplitter_closestlegalposition_callback = cb; }
    void setQSplitter_DrawFrame_Callback(QSplitter_DrawFrame_Callback cb) { qsplitter_drawframe_callback = cb; }
    void setQSplitter_UpdateMicroFocus_Callback(QSplitter_UpdateMicroFocus_Callback cb) { qsplitter_updatemicrofocus_callback = cb; }
    void setQSplitter_Create_Callback(QSplitter_Create_Callback cb) { qsplitter_create_callback = cb; }
    void setQSplitter_Destroy_Callback(QSplitter_Destroy_Callback cb) { qsplitter_destroy_callback = cb; }
    void setQSplitter_FocusNextChild_Callback(QSplitter_FocusNextChild_Callback cb) { qsplitter_focusnextchild_callback = cb; }
    void setQSplitter_FocusPreviousChild_Callback(QSplitter_FocusPreviousChild_Callback cb) { qsplitter_focuspreviouschild_callback = cb; }
    void setQSplitter_Sender_Callback(QSplitter_Sender_Callback cb) { qsplitter_sender_callback = cb; }
    void setQSplitter_SenderSignalIndex_Callback(QSplitter_SenderSignalIndex_Callback cb) { qsplitter_sendersignalindex_callback = cb; }
    void setQSplitter_Receivers_Callback(QSplitter_Receivers_Callback cb) { qsplitter_receivers_callback = cb; }
    void setQSplitter_IsSignalConnected_Callback(QSplitter_IsSignalConnected_Callback cb) { qsplitter_issignalconnected_callback = cb; }

    // Base flag setters
    void setQSplitter_Metacall_IsBase(bool value) const { qsplitter_metacall_isbase = value; }
    void setQSplitter_SizeHint_IsBase(bool value) const { qsplitter_sizehint_isbase = value; }
    void setQSplitter_MinimumSizeHint_IsBase(bool value) const { qsplitter_minimumsizehint_isbase = value; }
    void setQSplitter_CreateHandle_IsBase(bool value) const { qsplitter_createhandle_isbase = value; }
    void setQSplitter_ChildEvent_IsBase(bool value) const { qsplitter_childevent_isbase = value; }
    void setQSplitter_Event_IsBase(bool value) const { qsplitter_event_isbase = value; }
    void setQSplitter_ResizeEvent_IsBase(bool value) const { qsplitter_resizeevent_isbase = value; }
    void setQSplitter_ChangeEvent_IsBase(bool value) const { qsplitter_changeevent_isbase = value; }
    void setQSplitter_PaintEvent_IsBase(bool value) const { qsplitter_paintevent_isbase = value; }
    void setQSplitter_InitStyleOption_IsBase(bool value) const { qsplitter_initstyleoption_isbase = value; }
    void setQSplitter_DevType_IsBase(bool value) const { qsplitter_devtype_isbase = value; }
    void setQSplitter_SetVisible_IsBase(bool value) const { qsplitter_setvisible_isbase = value; }
    void setQSplitter_HeightForWidth_IsBase(bool value) const { qsplitter_heightforwidth_isbase = value; }
    void setQSplitter_HasHeightForWidth_IsBase(bool value) const { qsplitter_hasheightforwidth_isbase = value; }
    void setQSplitter_PaintEngine_IsBase(bool value) const { qsplitter_paintengine_isbase = value; }
    void setQSplitter_MousePressEvent_IsBase(bool value) const { qsplitter_mousepressevent_isbase = value; }
    void setQSplitter_MouseReleaseEvent_IsBase(bool value) const { qsplitter_mousereleaseevent_isbase = value; }
    void setQSplitter_MouseDoubleClickEvent_IsBase(bool value) const { qsplitter_mousedoubleclickevent_isbase = value; }
    void setQSplitter_MouseMoveEvent_IsBase(bool value) const { qsplitter_mousemoveevent_isbase = value; }
    void setQSplitter_WheelEvent_IsBase(bool value) const { qsplitter_wheelevent_isbase = value; }
    void setQSplitter_KeyPressEvent_IsBase(bool value) const { qsplitter_keypressevent_isbase = value; }
    void setQSplitter_KeyReleaseEvent_IsBase(bool value) const { qsplitter_keyreleaseevent_isbase = value; }
    void setQSplitter_FocusInEvent_IsBase(bool value) const { qsplitter_focusinevent_isbase = value; }
    void setQSplitter_FocusOutEvent_IsBase(bool value) const { qsplitter_focusoutevent_isbase = value; }
    void setQSplitter_EnterEvent_IsBase(bool value) const { qsplitter_enterevent_isbase = value; }
    void setQSplitter_LeaveEvent_IsBase(bool value) const { qsplitter_leaveevent_isbase = value; }
    void setQSplitter_MoveEvent_IsBase(bool value) const { qsplitter_moveevent_isbase = value; }
    void setQSplitter_CloseEvent_IsBase(bool value) const { qsplitter_closeevent_isbase = value; }
    void setQSplitter_ContextMenuEvent_IsBase(bool value) const { qsplitter_contextmenuevent_isbase = value; }
    void setQSplitter_TabletEvent_IsBase(bool value) const { qsplitter_tabletevent_isbase = value; }
    void setQSplitter_ActionEvent_IsBase(bool value) const { qsplitter_actionevent_isbase = value; }
    void setQSplitter_DragEnterEvent_IsBase(bool value) const { qsplitter_dragenterevent_isbase = value; }
    void setQSplitter_DragMoveEvent_IsBase(bool value) const { qsplitter_dragmoveevent_isbase = value; }
    void setQSplitter_DragLeaveEvent_IsBase(bool value) const { qsplitter_dragleaveevent_isbase = value; }
    void setQSplitter_DropEvent_IsBase(bool value) const { qsplitter_dropevent_isbase = value; }
    void setQSplitter_ShowEvent_IsBase(bool value) const { qsplitter_showevent_isbase = value; }
    void setQSplitter_HideEvent_IsBase(bool value) const { qsplitter_hideevent_isbase = value; }
    void setQSplitter_NativeEvent_IsBase(bool value) const { qsplitter_nativeevent_isbase = value; }
    void setQSplitter_Metric_IsBase(bool value) const { qsplitter_metric_isbase = value; }
    void setQSplitter_InitPainter_IsBase(bool value) const { qsplitter_initpainter_isbase = value; }
    void setQSplitter_Redirected_IsBase(bool value) const { qsplitter_redirected_isbase = value; }
    void setQSplitter_SharedPainter_IsBase(bool value) const { qsplitter_sharedpainter_isbase = value; }
    void setQSplitter_InputMethodEvent_IsBase(bool value) const { qsplitter_inputmethodevent_isbase = value; }
    void setQSplitter_InputMethodQuery_IsBase(bool value) const { qsplitter_inputmethodquery_isbase = value; }
    void setQSplitter_FocusNextPrevChild_IsBase(bool value) const { qsplitter_focusnextprevchild_isbase = value; }
    void setQSplitter_EventFilter_IsBase(bool value) const { qsplitter_eventfilter_isbase = value; }
    void setQSplitter_TimerEvent_IsBase(bool value) const { qsplitter_timerevent_isbase = value; }
    void setQSplitter_CustomEvent_IsBase(bool value) const { qsplitter_customevent_isbase = value; }
    void setQSplitter_ConnectNotify_IsBase(bool value) const { qsplitter_connectnotify_isbase = value; }
    void setQSplitter_DisconnectNotify_IsBase(bool value) const { qsplitter_disconnectnotify_isbase = value; }
    void setQSplitter_MoveSplitter_IsBase(bool value) const { qsplitter_movesplitter_isbase = value; }
    void setQSplitter_SetRubberBand_IsBase(bool value) const { qsplitter_setrubberband_isbase = value; }
    void setQSplitter_ClosestLegalPosition_IsBase(bool value) const { qsplitter_closestlegalposition_isbase = value; }
    void setQSplitter_DrawFrame_IsBase(bool value) const { qsplitter_drawframe_isbase = value; }
    void setQSplitter_UpdateMicroFocus_IsBase(bool value) const { qsplitter_updatemicrofocus_isbase = value; }
    void setQSplitter_Create_IsBase(bool value) const { qsplitter_create_isbase = value; }
    void setQSplitter_Destroy_IsBase(bool value) const { qsplitter_destroy_isbase = value; }
    void setQSplitter_FocusNextChild_IsBase(bool value) const { qsplitter_focusnextchild_isbase = value; }
    void setQSplitter_FocusPreviousChild_IsBase(bool value) const { qsplitter_focuspreviouschild_isbase = value; }
    void setQSplitter_Sender_IsBase(bool value) const { qsplitter_sender_isbase = value; }
    void setQSplitter_SenderSignalIndex_IsBase(bool value) const { qsplitter_sendersignalindex_isbase = value; }
    void setQSplitter_Receivers_IsBase(bool value) const { qsplitter_receivers_isbase = value; }
    void setQSplitter_IsSignalConnected_IsBase(bool value) const { qsplitter_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsplitter_metacall_isbase) {
            qsplitter_metacall_isbase = false;
            return QSplitter::qt_metacall(param1, param2, param3);
        } else if (qsplitter_metacall_callback != nullptr) {
            return qsplitter_metacall_callback(this, param1, param2, param3);
        } else {
            return QSplitter::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qsplitter_sizehint_isbase) {
            qsplitter_sizehint_isbase = false;
            return QSplitter::sizeHint();
        } else if (qsplitter_sizehint_callback != nullptr) {
            return qsplitter_sizehint_callback();
        } else {
            return QSplitter::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qsplitter_minimumsizehint_isbase) {
            qsplitter_minimumsizehint_isbase = false;
            return QSplitter::minimumSizeHint();
        } else if (qsplitter_minimumsizehint_callback != nullptr) {
            return qsplitter_minimumsizehint_callback();
        } else {
            return QSplitter::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSplitterHandle* createHandle() override {
        if (qsplitter_createhandle_isbase) {
            qsplitter_createhandle_isbase = false;
            return QSplitter::createHandle();
        } else if (qsplitter_createhandle_callback != nullptr) {
            return qsplitter_createhandle_callback();
        } else {
            return QSplitter::createHandle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* param1) override {
        if (qsplitter_childevent_isbase) {
            qsplitter_childevent_isbase = false;
            QSplitter::childEvent(param1);
        } else if (qsplitter_childevent_callback != nullptr) {
            qsplitter_childevent_callback(this, param1);
        } else {
            QSplitter::childEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qsplitter_event_isbase) {
            qsplitter_event_isbase = false;
            return QSplitter::event(param1);
        } else if (qsplitter_event_callback != nullptr) {
            return qsplitter_event_callback(this, param1);
        } else {
            return QSplitter::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qsplitter_resizeevent_isbase) {
            qsplitter_resizeevent_isbase = false;
            QSplitter::resizeEvent(param1);
        } else if (qsplitter_resizeevent_callback != nullptr) {
            qsplitter_resizeevent_callback(this, param1);
        } else {
            QSplitter::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qsplitter_changeevent_isbase) {
            qsplitter_changeevent_isbase = false;
            QSplitter::changeEvent(param1);
        } else if (qsplitter_changeevent_callback != nullptr) {
            qsplitter_changeevent_callback(this, param1);
        } else {
            QSplitter::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qsplitter_paintevent_isbase) {
            qsplitter_paintevent_isbase = false;
            QSplitter::paintEvent(param1);
        } else if (qsplitter_paintevent_callback != nullptr) {
            qsplitter_paintevent_callback(this, param1);
        } else {
            QSplitter::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qsplitter_initstyleoption_isbase) {
            qsplitter_initstyleoption_isbase = false;
            QSplitter::initStyleOption(option);
        } else if (qsplitter_initstyleoption_callback != nullptr) {
            qsplitter_initstyleoption_callback(this, option);
        } else {
            QSplitter::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qsplitter_devtype_isbase) {
            qsplitter_devtype_isbase = false;
            return QSplitter::devType();
        } else if (qsplitter_devtype_callback != nullptr) {
            return qsplitter_devtype_callback();
        } else {
            return QSplitter::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qsplitter_setvisible_isbase) {
            qsplitter_setvisible_isbase = false;
            QSplitter::setVisible(visible);
        } else if (qsplitter_setvisible_callback != nullptr) {
            qsplitter_setvisible_callback(this, visible);
        } else {
            QSplitter::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qsplitter_heightforwidth_isbase) {
            qsplitter_heightforwidth_isbase = false;
            return QSplitter::heightForWidth(param1);
        } else if (qsplitter_heightforwidth_callback != nullptr) {
            return qsplitter_heightforwidth_callback(this, param1);
        } else {
            return QSplitter::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qsplitter_hasheightforwidth_isbase) {
            qsplitter_hasheightforwidth_isbase = false;
            return QSplitter::hasHeightForWidth();
        } else if (qsplitter_hasheightforwidth_callback != nullptr) {
            return qsplitter_hasheightforwidth_callback();
        } else {
            return QSplitter::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qsplitter_paintengine_isbase) {
            qsplitter_paintengine_isbase = false;
            return QSplitter::paintEngine();
        } else if (qsplitter_paintengine_callback != nullptr) {
            return qsplitter_paintengine_callback();
        } else {
            return QSplitter::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qsplitter_mousepressevent_isbase) {
            qsplitter_mousepressevent_isbase = false;
            QSplitter::mousePressEvent(event);
        } else if (qsplitter_mousepressevent_callback != nullptr) {
            qsplitter_mousepressevent_callback(this, event);
        } else {
            QSplitter::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qsplitter_mousereleaseevent_isbase) {
            qsplitter_mousereleaseevent_isbase = false;
            QSplitter::mouseReleaseEvent(event);
        } else if (qsplitter_mousereleaseevent_callback != nullptr) {
            qsplitter_mousereleaseevent_callback(this, event);
        } else {
            QSplitter::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qsplitter_mousedoubleclickevent_isbase) {
            qsplitter_mousedoubleclickevent_isbase = false;
            QSplitter::mouseDoubleClickEvent(event);
        } else if (qsplitter_mousedoubleclickevent_callback != nullptr) {
            qsplitter_mousedoubleclickevent_callback(this, event);
        } else {
            QSplitter::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qsplitter_mousemoveevent_isbase) {
            qsplitter_mousemoveevent_isbase = false;
            QSplitter::mouseMoveEvent(event);
        } else if (qsplitter_mousemoveevent_callback != nullptr) {
            qsplitter_mousemoveevent_callback(this, event);
        } else {
            QSplitter::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qsplitter_wheelevent_isbase) {
            qsplitter_wheelevent_isbase = false;
            QSplitter::wheelEvent(event);
        } else if (qsplitter_wheelevent_callback != nullptr) {
            qsplitter_wheelevent_callback(this, event);
        } else {
            QSplitter::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qsplitter_keypressevent_isbase) {
            qsplitter_keypressevent_isbase = false;
            QSplitter::keyPressEvent(event);
        } else if (qsplitter_keypressevent_callback != nullptr) {
            qsplitter_keypressevent_callback(this, event);
        } else {
            QSplitter::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qsplitter_keyreleaseevent_isbase) {
            qsplitter_keyreleaseevent_isbase = false;
            QSplitter::keyReleaseEvent(event);
        } else if (qsplitter_keyreleaseevent_callback != nullptr) {
            qsplitter_keyreleaseevent_callback(this, event);
        } else {
            QSplitter::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qsplitter_focusinevent_isbase) {
            qsplitter_focusinevent_isbase = false;
            QSplitter::focusInEvent(event);
        } else if (qsplitter_focusinevent_callback != nullptr) {
            qsplitter_focusinevent_callback(this, event);
        } else {
            QSplitter::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qsplitter_focusoutevent_isbase) {
            qsplitter_focusoutevent_isbase = false;
            QSplitter::focusOutEvent(event);
        } else if (qsplitter_focusoutevent_callback != nullptr) {
            qsplitter_focusoutevent_callback(this, event);
        } else {
            QSplitter::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qsplitter_enterevent_isbase) {
            qsplitter_enterevent_isbase = false;
            QSplitter::enterEvent(event);
        } else if (qsplitter_enterevent_callback != nullptr) {
            qsplitter_enterevent_callback(this, event);
        } else {
            QSplitter::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qsplitter_leaveevent_isbase) {
            qsplitter_leaveevent_isbase = false;
            QSplitter::leaveEvent(event);
        } else if (qsplitter_leaveevent_callback != nullptr) {
            qsplitter_leaveevent_callback(this, event);
        } else {
            QSplitter::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qsplitter_moveevent_isbase) {
            qsplitter_moveevent_isbase = false;
            QSplitter::moveEvent(event);
        } else if (qsplitter_moveevent_callback != nullptr) {
            qsplitter_moveevent_callback(this, event);
        } else {
            QSplitter::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qsplitter_closeevent_isbase) {
            qsplitter_closeevent_isbase = false;
            QSplitter::closeEvent(event);
        } else if (qsplitter_closeevent_callback != nullptr) {
            qsplitter_closeevent_callback(this, event);
        } else {
            QSplitter::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qsplitter_contextmenuevent_isbase) {
            qsplitter_contextmenuevent_isbase = false;
            QSplitter::contextMenuEvent(event);
        } else if (qsplitter_contextmenuevent_callback != nullptr) {
            qsplitter_contextmenuevent_callback(this, event);
        } else {
            QSplitter::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qsplitter_tabletevent_isbase) {
            qsplitter_tabletevent_isbase = false;
            QSplitter::tabletEvent(event);
        } else if (qsplitter_tabletevent_callback != nullptr) {
            qsplitter_tabletevent_callback(this, event);
        } else {
            QSplitter::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qsplitter_actionevent_isbase) {
            qsplitter_actionevent_isbase = false;
            QSplitter::actionEvent(event);
        } else if (qsplitter_actionevent_callback != nullptr) {
            qsplitter_actionevent_callback(this, event);
        } else {
            QSplitter::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qsplitter_dragenterevent_isbase) {
            qsplitter_dragenterevent_isbase = false;
            QSplitter::dragEnterEvent(event);
        } else if (qsplitter_dragenterevent_callback != nullptr) {
            qsplitter_dragenterevent_callback(this, event);
        } else {
            QSplitter::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qsplitter_dragmoveevent_isbase) {
            qsplitter_dragmoveevent_isbase = false;
            QSplitter::dragMoveEvent(event);
        } else if (qsplitter_dragmoveevent_callback != nullptr) {
            qsplitter_dragmoveevent_callback(this, event);
        } else {
            QSplitter::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qsplitter_dragleaveevent_isbase) {
            qsplitter_dragleaveevent_isbase = false;
            QSplitter::dragLeaveEvent(event);
        } else if (qsplitter_dragleaveevent_callback != nullptr) {
            qsplitter_dragleaveevent_callback(this, event);
        } else {
            QSplitter::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qsplitter_dropevent_isbase) {
            qsplitter_dropevent_isbase = false;
            QSplitter::dropEvent(event);
        } else if (qsplitter_dropevent_callback != nullptr) {
            qsplitter_dropevent_callback(this, event);
        } else {
            QSplitter::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qsplitter_showevent_isbase) {
            qsplitter_showevent_isbase = false;
            QSplitter::showEvent(event);
        } else if (qsplitter_showevent_callback != nullptr) {
            qsplitter_showevent_callback(this, event);
        } else {
            QSplitter::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qsplitter_hideevent_isbase) {
            qsplitter_hideevent_isbase = false;
            QSplitter::hideEvent(event);
        } else if (qsplitter_hideevent_callback != nullptr) {
            qsplitter_hideevent_callback(this, event);
        } else {
            QSplitter::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qsplitter_nativeevent_isbase) {
            qsplitter_nativeevent_isbase = false;
            return QSplitter::nativeEvent(eventType, message, result);
        } else if (qsplitter_nativeevent_callback != nullptr) {
            return qsplitter_nativeevent_callback(this, eventType, message, result);
        } else {
            return QSplitter::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qsplitter_metric_isbase) {
            qsplitter_metric_isbase = false;
            return QSplitter::metric(param1);
        } else if (qsplitter_metric_callback != nullptr) {
            return qsplitter_metric_callback(this, param1);
        } else {
            return QSplitter::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qsplitter_initpainter_isbase) {
            qsplitter_initpainter_isbase = false;
            QSplitter::initPainter(painter);
        } else if (qsplitter_initpainter_callback != nullptr) {
            qsplitter_initpainter_callback(this, painter);
        } else {
            QSplitter::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qsplitter_redirected_isbase) {
            qsplitter_redirected_isbase = false;
            return QSplitter::redirected(offset);
        } else if (qsplitter_redirected_callback != nullptr) {
            return qsplitter_redirected_callback(this, offset);
        } else {
            return QSplitter::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qsplitter_sharedpainter_isbase) {
            qsplitter_sharedpainter_isbase = false;
            return QSplitter::sharedPainter();
        } else if (qsplitter_sharedpainter_callback != nullptr) {
            return qsplitter_sharedpainter_callback();
        } else {
            return QSplitter::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qsplitter_inputmethodevent_isbase) {
            qsplitter_inputmethodevent_isbase = false;
            QSplitter::inputMethodEvent(param1);
        } else if (qsplitter_inputmethodevent_callback != nullptr) {
            qsplitter_inputmethodevent_callback(this, param1);
        } else {
            QSplitter::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qsplitter_inputmethodquery_isbase) {
            qsplitter_inputmethodquery_isbase = false;
            return QSplitter::inputMethodQuery(param1);
        } else if (qsplitter_inputmethodquery_callback != nullptr) {
            return qsplitter_inputmethodquery_callback(this, param1);
        } else {
            return QSplitter::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qsplitter_focusnextprevchild_isbase) {
            qsplitter_focusnextprevchild_isbase = false;
            return QSplitter::focusNextPrevChild(next);
        } else if (qsplitter_focusnextprevchild_callback != nullptr) {
            return qsplitter_focusnextprevchild_callback(this, next);
        } else {
            return QSplitter::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsplitter_eventfilter_isbase) {
            qsplitter_eventfilter_isbase = false;
            return QSplitter::eventFilter(watched, event);
        } else if (qsplitter_eventfilter_callback != nullptr) {
            return qsplitter_eventfilter_callback(this, watched, event);
        } else {
            return QSplitter::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsplitter_timerevent_isbase) {
            qsplitter_timerevent_isbase = false;
            QSplitter::timerEvent(event);
        } else if (qsplitter_timerevent_callback != nullptr) {
            qsplitter_timerevent_callback(this, event);
        } else {
            QSplitter::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsplitter_customevent_isbase) {
            qsplitter_customevent_isbase = false;
            QSplitter::customEvent(event);
        } else if (qsplitter_customevent_callback != nullptr) {
            qsplitter_customevent_callback(this, event);
        } else {
            QSplitter::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsplitter_connectnotify_isbase) {
            qsplitter_connectnotify_isbase = false;
            QSplitter::connectNotify(signal);
        } else if (qsplitter_connectnotify_callback != nullptr) {
            qsplitter_connectnotify_callback(this, signal);
        } else {
            QSplitter::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsplitter_disconnectnotify_isbase) {
            qsplitter_disconnectnotify_isbase = false;
            QSplitter::disconnectNotify(signal);
        } else if (qsplitter_disconnectnotify_callback != nullptr) {
            qsplitter_disconnectnotify_callback(this, signal);
        } else {
            QSplitter::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void moveSplitter(int pos, int index) {
        if (qsplitter_movesplitter_isbase) {
            qsplitter_movesplitter_isbase = false;
            QSplitter::moveSplitter(pos, index);
        } else if (qsplitter_movesplitter_callback != nullptr) {
            qsplitter_movesplitter_callback(this, pos, index);
        } else {
            QSplitter::moveSplitter(pos, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setRubberBand(int position) {
        if (qsplitter_setrubberband_isbase) {
            qsplitter_setrubberband_isbase = false;
            QSplitter::setRubberBand(position);
        } else if (qsplitter_setrubberband_callback != nullptr) {
            qsplitter_setrubberband_callback(this, position);
        } else {
            QSplitter::setRubberBand(position);
        }
    }

    // Virtual method for C ABI access and custom callback
    int closestLegalPosition(int param1, int param2) {
        if (qsplitter_closestlegalposition_isbase) {
            qsplitter_closestlegalposition_isbase = false;
            return QSplitter::closestLegalPosition(param1, param2);
        } else if (qsplitter_closestlegalposition_callback != nullptr) {
            return qsplitter_closestlegalposition_callback(this, param1, param2);
        } else {
            return QSplitter::closestLegalPosition(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qsplitter_drawframe_isbase) {
            qsplitter_drawframe_isbase = false;
            QSplitter::drawFrame(param1);
        } else if (qsplitter_drawframe_callback != nullptr) {
            qsplitter_drawframe_callback(this, param1);
        } else {
            QSplitter::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qsplitter_updatemicrofocus_isbase) {
            qsplitter_updatemicrofocus_isbase = false;
            QSplitter::updateMicroFocus();
        } else if (qsplitter_updatemicrofocus_callback != nullptr) {
            qsplitter_updatemicrofocus_callback();
        } else {
            QSplitter::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qsplitter_create_isbase) {
            qsplitter_create_isbase = false;
            QSplitter::create();
        } else if (qsplitter_create_callback != nullptr) {
            qsplitter_create_callback();
        } else {
            QSplitter::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qsplitter_destroy_isbase) {
            qsplitter_destroy_isbase = false;
            QSplitter::destroy();
        } else if (qsplitter_destroy_callback != nullptr) {
            qsplitter_destroy_callback();
        } else {
            QSplitter::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qsplitter_focusnextchild_isbase) {
            qsplitter_focusnextchild_isbase = false;
            return QSplitter::focusNextChild();
        } else if (qsplitter_focusnextchild_callback != nullptr) {
            return qsplitter_focusnextchild_callback();
        } else {
            return QSplitter::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qsplitter_focuspreviouschild_isbase) {
            qsplitter_focuspreviouschild_isbase = false;
            return QSplitter::focusPreviousChild();
        } else if (qsplitter_focuspreviouschild_callback != nullptr) {
            return qsplitter_focuspreviouschild_callback();
        } else {
            return QSplitter::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsplitter_sender_isbase) {
            qsplitter_sender_isbase = false;
            return QSplitter::sender();
        } else if (qsplitter_sender_callback != nullptr) {
            return qsplitter_sender_callback();
        } else {
            return QSplitter::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsplitter_sendersignalindex_isbase) {
            qsplitter_sendersignalindex_isbase = false;
            return QSplitter::senderSignalIndex();
        } else if (qsplitter_sendersignalindex_callback != nullptr) {
            return qsplitter_sendersignalindex_callback();
        } else {
            return QSplitter::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsplitter_receivers_isbase) {
            qsplitter_receivers_isbase = false;
            return QSplitter::receivers(signal);
        } else if (qsplitter_receivers_callback != nullptr) {
            return qsplitter_receivers_callback(this, signal);
        } else {
            return QSplitter::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsplitter_issignalconnected_isbase) {
            qsplitter_issignalconnected_isbase = false;
            return QSplitter::isSignalConnected(signal);
        } else if (qsplitter_issignalconnected_callback != nullptr) {
            return qsplitter_issignalconnected_callback(this, signal);
        } else {
            return QSplitter::isSignalConnected(signal);
        }
    }
};

// This class is a subclass of QSplitterHandle so that we can call protected methods
class VirtualQSplitterHandle : public QSplitterHandle {

  public:
    // Virtual class public types (including callbacks)
    using QSplitterHandle_Metacall_Callback = int (*)(QSplitterHandle*, QMetaObject::Call, int, void**);
    using QSplitterHandle_SizeHint_Callback = QSize (*)();
    using QSplitterHandle_PaintEvent_Callback = void (*)(QSplitterHandle*, QPaintEvent*);
    using QSplitterHandle_MouseMoveEvent_Callback = void (*)(QSplitterHandle*, QMouseEvent*);
    using QSplitterHandle_MousePressEvent_Callback = void (*)(QSplitterHandle*, QMouseEvent*);
    using QSplitterHandle_MouseReleaseEvent_Callback = void (*)(QSplitterHandle*, QMouseEvent*);
    using QSplitterHandle_ResizeEvent_Callback = void (*)(QSplitterHandle*, QResizeEvent*);
    using QSplitterHandle_Event_Callback = bool (*)(QSplitterHandle*, QEvent*);
    using QSplitterHandle_DevType_Callback = int (*)();
    using QSplitterHandle_SetVisible_Callback = void (*)(QSplitterHandle*, bool);
    using QSplitterHandle_MinimumSizeHint_Callback = QSize (*)();
    using QSplitterHandle_HeightForWidth_Callback = int (*)(const QSplitterHandle*, int);
    using QSplitterHandle_HasHeightForWidth_Callback = bool (*)();
    using QSplitterHandle_PaintEngine_Callback = QPaintEngine* (*)();
    using QSplitterHandle_MouseDoubleClickEvent_Callback = void (*)(QSplitterHandle*, QMouseEvent*);
    using QSplitterHandle_WheelEvent_Callback = void (*)(QSplitterHandle*, QWheelEvent*);
    using QSplitterHandle_KeyPressEvent_Callback = void (*)(QSplitterHandle*, QKeyEvent*);
    using QSplitterHandle_KeyReleaseEvent_Callback = void (*)(QSplitterHandle*, QKeyEvent*);
    using QSplitterHandle_FocusInEvent_Callback = void (*)(QSplitterHandle*, QFocusEvent*);
    using QSplitterHandle_FocusOutEvent_Callback = void (*)(QSplitterHandle*, QFocusEvent*);
    using QSplitterHandle_EnterEvent_Callback = void (*)(QSplitterHandle*, QEnterEvent*);
    using QSplitterHandle_LeaveEvent_Callback = void (*)(QSplitterHandle*, QEvent*);
    using QSplitterHandle_MoveEvent_Callback = void (*)(QSplitterHandle*, QMoveEvent*);
    using QSplitterHandle_CloseEvent_Callback = void (*)(QSplitterHandle*, QCloseEvent*);
    using QSplitterHandle_ContextMenuEvent_Callback = void (*)(QSplitterHandle*, QContextMenuEvent*);
    using QSplitterHandle_TabletEvent_Callback = void (*)(QSplitterHandle*, QTabletEvent*);
    using QSplitterHandle_ActionEvent_Callback = void (*)(QSplitterHandle*, QActionEvent*);
    using QSplitterHandle_DragEnterEvent_Callback = void (*)(QSplitterHandle*, QDragEnterEvent*);
    using QSplitterHandle_DragMoveEvent_Callback = void (*)(QSplitterHandle*, QDragMoveEvent*);
    using QSplitterHandle_DragLeaveEvent_Callback = void (*)(QSplitterHandle*, QDragLeaveEvent*);
    using QSplitterHandle_DropEvent_Callback = void (*)(QSplitterHandle*, QDropEvent*);
    using QSplitterHandle_ShowEvent_Callback = void (*)(QSplitterHandle*, QShowEvent*);
    using QSplitterHandle_HideEvent_Callback = void (*)(QSplitterHandle*, QHideEvent*);
    using QSplitterHandle_NativeEvent_Callback = bool (*)(QSplitterHandle*, const QByteArray&, void*, qintptr*);
    using QSplitterHandle_ChangeEvent_Callback = void (*)(QSplitterHandle*, QEvent*);
    using QSplitterHandle_Metric_Callback = int (*)(const QSplitterHandle*, QPaintDevice::PaintDeviceMetric);
    using QSplitterHandle_InitPainter_Callback = void (*)(const QSplitterHandle*, QPainter*);
    using QSplitterHandle_Redirected_Callback = QPaintDevice* (*)(const QSplitterHandle*, QPoint*);
    using QSplitterHandle_SharedPainter_Callback = QPainter* (*)();
    using QSplitterHandle_InputMethodEvent_Callback = void (*)(QSplitterHandle*, QInputMethodEvent*);
    using QSplitterHandle_InputMethodQuery_Callback = QVariant (*)(const QSplitterHandle*, Qt::InputMethodQuery);
    using QSplitterHandle_FocusNextPrevChild_Callback = bool (*)(QSplitterHandle*, bool);
    using QSplitterHandle_EventFilter_Callback = bool (*)(QSplitterHandle*, QObject*, QEvent*);
    using QSplitterHandle_TimerEvent_Callback = void (*)(QSplitterHandle*, QTimerEvent*);
    using QSplitterHandle_ChildEvent_Callback = void (*)(QSplitterHandle*, QChildEvent*);
    using QSplitterHandle_CustomEvent_Callback = void (*)(QSplitterHandle*, QEvent*);
    using QSplitterHandle_ConnectNotify_Callback = void (*)(QSplitterHandle*, const QMetaMethod&);
    using QSplitterHandle_DisconnectNotify_Callback = void (*)(QSplitterHandle*, const QMetaMethod&);
    using QSplitterHandle_MoveSplitter_Callback = void (*)(QSplitterHandle*, int);
    using QSplitterHandle_ClosestLegalPosition_Callback = int (*)(QSplitterHandle*, int);
    using QSplitterHandle_UpdateMicroFocus_Callback = void (*)();
    using QSplitterHandle_Create_Callback = void (*)();
    using QSplitterHandle_Destroy_Callback = void (*)();
    using QSplitterHandle_FocusNextChild_Callback = bool (*)();
    using QSplitterHandle_FocusPreviousChild_Callback = bool (*)();
    using QSplitterHandle_Sender_Callback = QObject* (*)();
    using QSplitterHandle_SenderSignalIndex_Callback = int (*)();
    using QSplitterHandle_Receivers_Callback = int (*)(const QSplitterHandle*, const char*);
    using QSplitterHandle_IsSignalConnected_Callback = bool (*)(const QSplitterHandle*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QSplitterHandle_Metacall_Callback qsplitterhandle_metacall_callback = nullptr;
    QSplitterHandle_SizeHint_Callback qsplitterhandle_sizehint_callback = nullptr;
    QSplitterHandle_PaintEvent_Callback qsplitterhandle_paintevent_callback = nullptr;
    QSplitterHandle_MouseMoveEvent_Callback qsplitterhandle_mousemoveevent_callback = nullptr;
    QSplitterHandle_MousePressEvent_Callback qsplitterhandle_mousepressevent_callback = nullptr;
    QSplitterHandle_MouseReleaseEvent_Callback qsplitterhandle_mousereleaseevent_callback = nullptr;
    QSplitterHandle_ResizeEvent_Callback qsplitterhandle_resizeevent_callback = nullptr;
    QSplitterHandle_Event_Callback qsplitterhandle_event_callback = nullptr;
    QSplitterHandle_DevType_Callback qsplitterhandle_devtype_callback = nullptr;
    QSplitterHandle_SetVisible_Callback qsplitterhandle_setvisible_callback = nullptr;
    QSplitterHandle_MinimumSizeHint_Callback qsplitterhandle_minimumsizehint_callback = nullptr;
    QSplitterHandle_HeightForWidth_Callback qsplitterhandle_heightforwidth_callback = nullptr;
    QSplitterHandle_HasHeightForWidth_Callback qsplitterhandle_hasheightforwidth_callback = nullptr;
    QSplitterHandle_PaintEngine_Callback qsplitterhandle_paintengine_callback = nullptr;
    QSplitterHandle_MouseDoubleClickEvent_Callback qsplitterhandle_mousedoubleclickevent_callback = nullptr;
    QSplitterHandle_WheelEvent_Callback qsplitterhandle_wheelevent_callback = nullptr;
    QSplitterHandle_KeyPressEvent_Callback qsplitterhandle_keypressevent_callback = nullptr;
    QSplitterHandle_KeyReleaseEvent_Callback qsplitterhandle_keyreleaseevent_callback = nullptr;
    QSplitterHandle_FocusInEvent_Callback qsplitterhandle_focusinevent_callback = nullptr;
    QSplitterHandle_FocusOutEvent_Callback qsplitterhandle_focusoutevent_callback = nullptr;
    QSplitterHandle_EnterEvent_Callback qsplitterhandle_enterevent_callback = nullptr;
    QSplitterHandle_LeaveEvent_Callback qsplitterhandle_leaveevent_callback = nullptr;
    QSplitterHandle_MoveEvent_Callback qsplitterhandle_moveevent_callback = nullptr;
    QSplitterHandle_CloseEvent_Callback qsplitterhandle_closeevent_callback = nullptr;
    QSplitterHandle_ContextMenuEvent_Callback qsplitterhandle_contextmenuevent_callback = nullptr;
    QSplitterHandle_TabletEvent_Callback qsplitterhandle_tabletevent_callback = nullptr;
    QSplitterHandle_ActionEvent_Callback qsplitterhandle_actionevent_callback = nullptr;
    QSplitterHandle_DragEnterEvent_Callback qsplitterhandle_dragenterevent_callback = nullptr;
    QSplitterHandle_DragMoveEvent_Callback qsplitterhandle_dragmoveevent_callback = nullptr;
    QSplitterHandle_DragLeaveEvent_Callback qsplitterhandle_dragleaveevent_callback = nullptr;
    QSplitterHandle_DropEvent_Callback qsplitterhandle_dropevent_callback = nullptr;
    QSplitterHandle_ShowEvent_Callback qsplitterhandle_showevent_callback = nullptr;
    QSplitterHandle_HideEvent_Callback qsplitterhandle_hideevent_callback = nullptr;
    QSplitterHandle_NativeEvent_Callback qsplitterhandle_nativeevent_callback = nullptr;
    QSplitterHandle_ChangeEvent_Callback qsplitterhandle_changeevent_callback = nullptr;
    QSplitterHandle_Metric_Callback qsplitterhandle_metric_callback = nullptr;
    QSplitterHandle_InitPainter_Callback qsplitterhandle_initpainter_callback = nullptr;
    QSplitterHandle_Redirected_Callback qsplitterhandle_redirected_callback = nullptr;
    QSplitterHandle_SharedPainter_Callback qsplitterhandle_sharedpainter_callback = nullptr;
    QSplitterHandle_InputMethodEvent_Callback qsplitterhandle_inputmethodevent_callback = nullptr;
    QSplitterHandle_InputMethodQuery_Callback qsplitterhandle_inputmethodquery_callback = nullptr;
    QSplitterHandle_FocusNextPrevChild_Callback qsplitterhandle_focusnextprevchild_callback = nullptr;
    QSplitterHandle_EventFilter_Callback qsplitterhandle_eventfilter_callback = nullptr;
    QSplitterHandle_TimerEvent_Callback qsplitterhandle_timerevent_callback = nullptr;
    QSplitterHandle_ChildEvent_Callback qsplitterhandle_childevent_callback = nullptr;
    QSplitterHandle_CustomEvent_Callback qsplitterhandle_customevent_callback = nullptr;
    QSplitterHandle_ConnectNotify_Callback qsplitterhandle_connectnotify_callback = nullptr;
    QSplitterHandle_DisconnectNotify_Callback qsplitterhandle_disconnectnotify_callback = nullptr;
    QSplitterHandle_MoveSplitter_Callback qsplitterhandle_movesplitter_callback = nullptr;
    QSplitterHandle_ClosestLegalPosition_Callback qsplitterhandle_closestlegalposition_callback = nullptr;
    QSplitterHandle_UpdateMicroFocus_Callback qsplitterhandle_updatemicrofocus_callback = nullptr;
    QSplitterHandle_Create_Callback qsplitterhandle_create_callback = nullptr;
    QSplitterHandle_Destroy_Callback qsplitterhandle_destroy_callback = nullptr;
    QSplitterHandle_FocusNextChild_Callback qsplitterhandle_focusnextchild_callback = nullptr;
    QSplitterHandle_FocusPreviousChild_Callback qsplitterhandle_focuspreviouschild_callback = nullptr;
    QSplitterHandle_Sender_Callback qsplitterhandle_sender_callback = nullptr;
    QSplitterHandle_SenderSignalIndex_Callback qsplitterhandle_sendersignalindex_callback = nullptr;
    QSplitterHandle_Receivers_Callback qsplitterhandle_receivers_callback = nullptr;
    QSplitterHandle_IsSignalConnected_Callback qsplitterhandle_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsplitterhandle_metacall_isbase = false;
    mutable bool qsplitterhandle_sizehint_isbase = false;
    mutable bool qsplitterhandle_paintevent_isbase = false;
    mutable bool qsplitterhandle_mousemoveevent_isbase = false;
    mutable bool qsplitterhandle_mousepressevent_isbase = false;
    mutable bool qsplitterhandle_mousereleaseevent_isbase = false;
    mutable bool qsplitterhandle_resizeevent_isbase = false;
    mutable bool qsplitterhandle_event_isbase = false;
    mutable bool qsplitterhandle_devtype_isbase = false;
    mutable bool qsplitterhandle_setvisible_isbase = false;
    mutable bool qsplitterhandle_minimumsizehint_isbase = false;
    mutable bool qsplitterhandle_heightforwidth_isbase = false;
    mutable bool qsplitterhandle_hasheightforwidth_isbase = false;
    mutable bool qsplitterhandle_paintengine_isbase = false;
    mutable bool qsplitterhandle_mousedoubleclickevent_isbase = false;
    mutable bool qsplitterhandle_wheelevent_isbase = false;
    mutable bool qsplitterhandle_keypressevent_isbase = false;
    mutable bool qsplitterhandle_keyreleaseevent_isbase = false;
    mutable bool qsplitterhandle_focusinevent_isbase = false;
    mutable bool qsplitterhandle_focusoutevent_isbase = false;
    mutable bool qsplitterhandle_enterevent_isbase = false;
    mutable bool qsplitterhandle_leaveevent_isbase = false;
    mutable bool qsplitterhandle_moveevent_isbase = false;
    mutable bool qsplitterhandle_closeevent_isbase = false;
    mutable bool qsplitterhandle_contextmenuevent_isbase = false;
    mutable bool qsplitterhandle_tabletevent_isbase = false;
    mutable bool qsplitterhandle_actionevent_isbase = false;
    mutable bool qsplitterhandle_dragenterevent_isbase = false;
    mutable bool qsplitterhandle_dragmoveevent_isbase = false;
    mutable bool qsplitterhandle_dragleaveevent_isbase = false;
    mutable bool qsplitterhandle_dropevent_isbase = false;
    mutable bool qsplitterhandle_showevent_isbase = false;
    mutable bool qsplitterhandle_hideevent_isbase = false;
    mutable bool qsplitterhandle_nativeevent_isbase = false;
    mutable bool qsplitterhandle_changeevent_isbase = false;
    mutable bool qsplitterhandle_metric_isbase = false;
    mutable bool qsplitterhandle_initpainter_isbase = false;
    mutable bool qsplitterhandle_redirected_isbase = false;
    mutable bool qsplitterhandle_sharedpainter_isbase = false;
    mutable bool qsplitterhandle_inputmethodevent_isbase = false;
    mutable bool qsplitterhandle_inputmethodquery_isbase = false;
    mutable bool qsplitterhandle_focusnextprevchild_isbase = false;
    mutable bool qsplitterhandle_eventfilter_isbase = false;
    mutable bool qsplitterhandle_timerevent_isbase = false;
    mutable bool qsplitterhandle_childevent_isbase = false;
    mutable bool qsplitterhandle_customevent_isbase = false;
    mutable bool qsplitterhandle_connectnotify_isbase = false;
    mutable bool qsplitterhandle_disconnectnotify_isbase = false;
    mutable bool qsplitterhandle_movesplitter_isbase = false;
    mutable bool qsplitterhandle_closestlegalposition_isbase = false;
    mutable bool qsplitterhandle_updatemicrofocus_isbase = false;
    mutable bool qsplitterhandle_create_isbase = false;
    mutable bool qsplitterhandle_destroy_isbase = false;
    mutable bool qsplitterhandle_focusnextchild_isbase = false;
    mutable bool qsplitterhandle_focuspreviouschild_isbase = false;
    mutable bool qsplitterhandle_sender_isbase = false;
    mutable bool qsplitterhandle_sendersignalindex_isbase = false;
    mutable bool qsplitterhandle_receivers_isbase = false;
    mutable bool qsplitterhandle_issignalconnected_isbase = false;

  public:
    VirtualQSplitterHandle(Qt::Orientation o, QSplitter* parent) : QSplitterHandle(o, parent){};

    ~VirtualQSplitterHandle() {
        qsplitterhandle_metacall_callback = nullptr;
        qsplitterhandle_sizehint_callback = nullptr;
        qsplitterhandle_paintevent_callback = nullptr;
        qsplitterhandle_mousemoveevent_callback = nullptr;
        qsplitterhandle_mousepressevent_callback = nullptr;
        qsplitterhandle_mousereleaseevent_callback = nullptr;
        qsplitterhandle_resizeevent_callback = nullptr;
        qsplitterhandle_event_callback = nullptr;
        qsplitterhandle_devtype_callback = nullptr;
        qsplitterhandle_setvisible_callback = nullptr;
        qsplitterhandle_minimumsizehint_callback = nullptr;
        qsplitterhandle_heightforwidth_callback = nullptr;
        qsplitterhandle_hasheightforwidth_callback = nullptr;
        qsplitterhandle_paintengine_callback = nullptr;
        qsplitterhandle_mousedoubleclickevent_callback = nullptr;
        qsplitterhandle_wheelevent_callback = nullptr;
        qsplitterhandle_keypressevent_callback = nullptr;
        qsplitterhandle_keyreleaseevent_callback = nullptr;
        qsplitterhandle_focusinevent_callback = nullptr;
        qsplitterhandle_focusoutevent_callback = nullptr;
        qsplitterhandle_enterevent_callback = nullptr;
        qsplitterhandle_leaveevent_callback = nullptr;
        qsplitterhandle_moveevent_callback = nullptr;
        qsplitterhandle_closeevent_callback = nullptr;
        qsplitterhandle_contextmenuevent_callback = nullptr;
        qsplitterhandle_tabletevent_callback = nullptr;
        qsplitterhandle_actionevent_callback = nullptr;
        qsplitterhandle_dragenterevent_callback = nullptr;
        qsplitterhandle_dragmoveevent_callback = nullptr;
        qsplitterhandle_dragleaveevent_callback = nullptr;
        qsplitterhandle_dropevent_callback = nullptr;
        qsplitterhandle_showevent_callback = nullptr;
        qsplitterhandle_hideevent_callback = nullptr;
        qsplitterhandle_nativeevent_callback = nullptr;
        qsplitterhandle_changeevent_callback = nullptr;
        qsplitterhandle_metric_callback = nullptr;
        qsplitterhandle_initpainter_callback = nullptr;
        qsplitterhandle_redirected_callback = nullptr;
        qsplitterhandle_sharedpainter_callback = nullptr;
        qsplitterhandle_inputmethodevent_callback = nullptr;
        qsplitterhandle_inputmethodquery_callback = nullptr;
        qsplitterhandle_focusnextprevchild_callback = nullptr;
        qsplitterhandle_eventfilter_callback = nullptr;
        qsplitterhandle_timerevent_callback = nullptr;
        qsplitterhandle_childevent_callback = nullptr;
        qsplitterhandle_customevent_callback = nullptr;
        qsplitterhandle_connectnotify_callback = nullptr;
        qsplitterhandle_disconnectnotify_callback = nullptr;
        qsplitterhandle_movesplitter_callback = nullptr;
        qsplitterhandle_closestlegalposition_callback = nullptr;
        qsplitterhandle_updatemicrofocus_callback = nullptr;
        qsplitterhandle_create_callback = nullptr;
        qsplitterhandle_destroy_callback = nullptr;
        qsplitterhandle_focusnextchild_callback = nullptr;
        qsplitterhandle_focuspreviouschild_callback = nullptr;
        qsplitterhandle_sender_callback = nullptr;
        qsplitterhandle_sendersignalindex_callback = nullptr;
        qsplitterhandle_receivers_callback = nullptr;
        qsplitterhandle_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQSplitterHandle_Metacall_Callback(QSplitterHandle_Metacall_Callback cb) { qsplitterhandle_metacall_callback = cb; }
    void setQSplitterHandle_SizeHint_Callback(QSplitterHandle_SizeHint_Callback cb) { qsplitterhandle_sizehint_callback = cb; }
    void setQSplitterHandle_PaintEvent_Callback(QSplitterHandle_PaintEvent_Callback cb) { qsplitterhandle_paintevent_callback = cb; }
    void setQSplitterHandle_MouseMoveEvent_Callback(QSplitterHandle_MouseMoveEvent_Callback cb) { qsplitterhandle_mousemoveevent_callback = cb; }
    void setQSplitterHandle_MousePressEvent_Callback(QSplitterHandle_MousePressEvent_Callback cb) { qsplitterhandle_mousepressevent_callback = cb; }
    void setQSplitterHandle_MouseReleaseEvent_Callback(QSplitterHandle_MouseReleaseEvent_Callback cb) { qsplitterhandle_mousereleaseevent_callback = cb; }
    void setQSplitterHandle_ResizeEvent_Callback(QSplitterHandle_ResizeEvent_Callback cb) { qsplitterhandle_resizeevent_callback = cb; }
    void setQSplitterHandle_Event_Callback(QSplitterHandle_Event_Callback cb) { qsplitterhandle_event_callback = cb; }
    void setQSplitterHandle_DevType_Callback(QSplitterHandle_DevType_Callback cb) { qsplitterhandle_devtype_callback = cb; }
    void setQSplitterHandle_SetVisible_Callback(QSplitterHandle_SetVisible_Callback cb) { qsplitterhandle_setvisible_callback = cb; }
    void setQSplitterHandle_MinimumSizeHint_Callback(QSplitterHandle_MinimumSizeHint_Callback cb) { qsplitterhandle_minimumsizehint_callback = cb; }
    void setQSplitterHandle_HeightForWidth_Callback(QSplitterHandle_HeightForWidth_Callback cb) { qsplitterhandle_heightforwidth_callback = cb; }
    void setQSplitterHandle_HasHeightForWidth_Callback(QSplitterHandle_HasHeightForWidth_Callback cb) { qsplitterhandle_hasheightforwidth_callback = cb; }
    void setQSplitterHandle_PaintEngine_Callback(QSplitterHandle_PaintEngine_Callback cb) { qsplitterhandle_paintengine_callback = cb; }
    void setQSplitterHandle_MouseDoubleClickEvent_Callback(QSplitterHandle_MouseDoubleClickEvent_Callback cb) { qsplitterhandle_mousedoubleclickevent_callback = cb; }
    void setQSplitterHandle_WheelEvent_Callback(QSplitterHandle_WheelEvent_Callback cb) { qsplitterhandle_wheelevent_callback = cb; }
    void setQSplitterHandle_KeyPressEvent_Callback(QSplitterHandle_KeyPressEvent_Callback cb) { qsplitterhandle_keypressevent_callback = cb; }
    void setQSplitterHandle_KeyReleaseEvent_Callback(QSplitterHandle_KeyReleaseEvent_Callback cb) { qsplitterhandle_keyreleaseevent_callback = cb; }
    void setQSplitterHandle_FocusInEvent_Callback(QSplitterHandle_FocusInEvent_Callback cb) { qsplitterhandle_focusinevent_callback = cb; }
    void setQSplitterHandle_FocusOutEvent_Callback(QSplitterHandle_FocusOutEvent_Callback cb) { qsplitterhandle_focusoutevent_callback = cb; }
    void setQSplitterHandle_EnterEvent_Callback(QSplitterHandle_EnterEvent_Callback cb) { qsplitterhandle_enterevent_callback = cb; }
    void setQSplitterHandle_LeaveEvent_Callback(QSplitterHandle_LeaveEvent_Callback cb) { qsplitterhandle_leaveevent_callback = cb; }
    void setQSplitterHandle_MoveEvent_Callback(QSplitterHandle_MoveEvent_Callback cb) { qsplitterhandle_moveevent_callback = cb; }
    void setQSplitterHandle_CloseEvent_Callback(QSplitterHandle_CloseEvent_Callback cb) { qsplitterhandle_closeevent_callback = cb; }
    void setQSplitterHandle_ContextMenuEvent_Callback(QSplitterHandle_ContextMenuEvent_Callback cb) { qsplitterhandle_contextmenuevent_callback = cb; }
    void setQSplitterHandle_TabletEvent_Callback(QSplitterHandle_TabletEvent_Callback cb) { qsplitterhandle_tabletevent_callback = cb; }
    void setQSplitterHandle_ActionEvent_Callback(QSplitterHandle_ActionEvent_Callback cb) { qsplitterhandle_actionevent_callback = cb; }
    void setQSplitterHandle_DragEnterEvent_Callback(QSplitterHandle_DragEnterEvent_Callback cb) { qsplitterhandle_dragenterevent_callback = cb; }
    void setQSplitterHandle_DragMoveEvent_Callback(QSplitterHandle_DragMoveEvent_Callback cb) { qsplitterhandle_dragmoveevent_callback = cb; }
    void setQSplitterHandle_DragLeaveEvent_Callback(QSplitterHandle_DragLeaveEvent_Callback cb) { qsplitterhandle_dragleaveevent_callback = cb; }
    void setQSplitterHandle_DropEvent_Callback(QSplitterHandle_DropEvent_Callback cb) { qsplitterhandle_dropevent_callback = cb; }
    void setQSplitterHandle_ShowEvent_Callback(QSplitterHandle_ShowEvent_Callback cb) { qsplitterhandle_showevent_callback = cb; }
    void setQSplitterHandle_HideEvent_Callback(QSplitterHandle_HideEvent_Callback cb) { qsplitterhandle_hideevent_callback = cb; }
    void setQSplitterHandle_NativeEvent_Callback(QSplitterHandle_NativeEvent_Callback cb) { qsplitterhandle_nativeevent_callback = cb; }
    void setQSplitterHandle_ChangeEvent_Callback(QSplitterHandle_ChangeEvent_Callback cb) { qsplitterhandle_changeevent_callback = cb; }
    void setQSplitterHandle_Metric_Callback(QSplitterHandle_Metric_Callback cb) { qsplitterhandle_metric_callback = cb; }
    void setQSplitterHandle_InitPainter_Callback(QSplitterHandle_InitPainter_Callback cb) { qsplitterhandle_initpainter_callback = cb; }
    void setQSplitterHandle_Redirected_Callback(QSplitterHandle_Redirected_Callback cb) { qsplitterhandle_redirected_callback = cb; }
    void setQSplitterHandle_SharedPainter_Callback(QSplitterHandle_SharedPainter_Callback cb) { qsplitterhandle_sharedpainter_callback = cb; }
    void setQSplitterHandle_InputMethodEvent_Callback(QSplitterHandle_InputMethodEvent_Callback cb) { qsplitterhandle_inputmethodevent_callback = cb; }
    void setQSplitterHandle_InputMethodQuery_Callback(QSplitterHandle_InputMethodQuery_Callback cb) { qsplitterhandle_inputmethodquery_callback = cb; }
    void setQSplitterHandle_FocusNextPrevChild_Callback(QSplitterHandle_FocusNextPrevChild_Callback cb) { qsplitterhandle_focusnextprevchild_callback = cb; }
    void setQSplitterHandle_EventFilter_Callback(QSplitterHandle_EventFilter_Callback cb) { qsplitterhandle_eventfilter_callback = cb; }
    void setQSplitterHandle_TimerEvent_Callback(QSplitterHandle_TimerEvent_Callback cb) { qsplitterhandle_timerevent_callback = cb; }
    void setQSplitterHandle_ChildEvent_Callback(QSplitterHandle_ChildEvent_Callback cb) { qsplitterhandle_childevent_callback = cb; }
    void setQSplitterHandle_CustomEvent_Callback(QSplitterHandle_CustomEvent_Callback cb) { qsplitterhandle_customevent_callback = cb; }
    void setQSplitterHandle_ConnectNotify_Callback(QSplitterHandle_ConnectNotify_Callback cb) { qsplitterhandle_connectnotify_callback = cb; }
    void setQSplitterHandle_DisconnectNotify_Callback(QSplitterHandle_DisconnectNotify_Callback cb) { qsplitterhandle_disconnectnotify_callback = cb; }
    void setQSplitterHandle_MoveSplitter_Callback(QSplitterHandle_MoveSplitter_Callback cb) { qsplitterhandle_movesplitter_callback = cb; }
    void setQSplitterHandle_ClosestLegalPosition_Callback(QSplitterHandle_ClosestLegalPosition_Callback cb) { qsplitterhandle_closestlegalposition_callback = cb; }
    void setQSplitterHandle_UpdateMicroFocus_Callback(QSplitterHandle_UpdateMicroFocus_Callback cb) { qsplitterhandle_updatemicrofocus_callback = cb; }
    void setQSplitterHandle_Create_Callback(QSplitterHandle_Create_Callback cb) { qsplitterhandle_create_callback = cb; }
    void setQSplitterHandle_Destroy_Callback(QSplitterHandle_Destroy_Callback cb) { qsplitterhandle_destroy_callback = cb; }
    void setQSplitterHandle_FocusNextChild_Callback(QSplitterHandle_FocusNextChild_Callback cb) { qsplitterhandle_focusnextchild_callback = cb; }
    void setQSplitterHandle_FocusPreviousChild_Callback(QSplitterHandle_FocusPreviousChild_Callback cb) { qsplitterhandle_focuspreviouschild_callback = cb; }
    void setQSplitterHandle_Sender_Callback(QSplitterHandle_Sender_Callback cb) { qsplitterhandle_sender_callback = cb; }
    void setQSplitterHandle_SenderSignalIndex_Callback(QSplitterHandle_SenderSignalIndex_Callback cb) { qsplitterhandle_sendersignalindex_callback = cb; }
    void setQSplitterHandle_Receivers_Callback(QSplitterHandle_Receivers_Callback cb) { qsplitterhandle_receivers_callback = cb; }
    void setQSplitterHandle_IsSignalConnected_Callback(QSplitterHandle_IsSignalConnected_Callback cb) { qsplitterhandle_issignalconnected_callback = cb; }

    // Base flag setters
    void setQSplitterHandle_Metacall_IsBase(bool value) const { qsplitterhandle_metacall_isbase = value; }
    void setQSplitterHandle_SizeHint_IsBase(bool value) const { qsplitterhandle_sizehint_isbase = value; }
    void setQSplitterHandle_PaintEvent_IsBase(bool value) const { qsplitterhandle_paintevent_isbase = value; }
    void setQSplitterHandle_MouseMoveEvent_IsBase(bool value) const { qsplitterhandle_mousemoveevent_isbase = value; }
    void setQSplitterHandle_MousePressEvent_IsBase(bool value) const { qsplitterhandle_mousepressevent_isbase = value; }
    void setQSplitterHandle_MouseReleaseEvent_IsBase(bool value) const { qsplitterhandle_mousereleaseevent_isbase = value; }
    void setQSplitterHandle_ResizeEvent_IsBase(bool value) const { qsplitterhandle_resizeevent_isbase = value; }
    void setQSplitterHandle_Event_IsBase(bool value) const { qsplitterhandle_event_isbase = value; }
    void setQSplitterHandle_DevType_IsBase(bool value) const { qsplitterhandle_devtype_isbase = value; }
    void setQSplitterHandle_SetVisible_IsBase(bool value) const { qsplitterhandle_setvisible_isbase = value; }
    void setQSplitterHandle_MinimumSizeHint_IsBase(bool value) const { qsplitterhandle_minimumsizehint_isbase = value; }
    void setQSplitterHandle_HeightForWidth_IsBase(bool value) const { qsplitterhandle_heightforwidth_isbase = value; }
    void setQSplitterHandle_HasHeightForWidth_IsBase(bool value) const { qsplitterhandle_hasheightforwidth_isbase = value; }
    void setQSplitterHandle_PaintEngine_IsBase(bool value) const { qsplitterhandle_paintengine_isbase = value; }
    void setQSplitterHandle_MouseDoubleClickEvent_IsBase(bool value) const { qsplitterhandle_mousedoubleclickevent_isbase = value; }
    void setQSplitterHandle_WheelEvent_IsBase(bool value) const { qsplitterhandle_wheelevent_isbase = value; }
    void setQSplitterHandle_KeyPressEvent_IsBase(bool value) const { qsplitterhandle_keypressevent_isbase = value; }
    void setQSplitterHandle_KeyReleaseEvent_IsBase(bool value) const { qsplitterhandle_keyreleaseevent_isbase = value; }
    void setQSplitterHandle_FocusInEvent_IsBase(bool value) const { qsplitterhandle_focusinevent_isbase = value; }
    void setQSplitterHandle_FocusOutEvent_IsBase(bool value) const { qsplitterhandle_focusoutevent_isbase = value; }
    void setQSplitterHandle_EnterEvent_IsBase(bool value) const { qsplitterhandle_enterevent_isbase = value; }
    void setQSplitterHandle_LeaveEvent_IsBase(bool value) const { qsplitterhandle_leaveevent_isbase = value; }
    void setQSplitterHandle_MoveEvent_IsBase(bool value) const { qsplitterhandle_moveevent_isbase = value; }
    void setQSplitterHandle_CloseEvent_IsBase(bool value) const { qsplitterhandle_closeevent_isbase = value; }
    void setQSplitterHandle_ContextMenuEvent_IsBase(bool value) const { qsplitterhandle_contextmenuevent_isbase = value; }
    void setQSplitterHandle_TabletEvent_IsBase(bool value) const { qsplitterhandle_tabletevent_isbase = value; }
    void setQSplitterHandle_ActionEvent_IsBase(bool value) const { qsplitterhandle_actionevent_isbase = value; }
    void setQSplitterHandle_DragEnterEvent_IsBase(bool value) const { qsplitterhandle_dragenterevent_isbase = value; }
    void setQSplitterHandle_DragMoveEvent_IsBase(bool value) const { qsplitterhandle_dragmoveevent_isbase = value; }
    void setQSplitterHandle_DragLeaveEvent_IsBase(bool value) const { qsplitterhandle_dragleaveevent_isbase = value; }
    void setQSplitterHandle_DropEvent_IsBase(bool value) const { qsplitterhandle_dropevent_isbase = value; }
    void setQSplitterHandle_ShowEvent_IsBase(bool value) const { qsplitterhandle_showevent_isbase = value; }
    void setQSplitterHandle_HideEvent_IsBase(bool value) const { qsplitterhandle_hideevent_isbase = value; }
    void setQSplitterHandle_NativeEvent_IsBase(bool value) const { qsplitterhandle_nativeevent_isbase = value; }
    void setQSplitterHandle_ChangeEvent_IsBase(bool value) const { qsplitterhandle_changeevent_isbase = value; }
    void setQSplitterHandle_Metric_IsBase(bool value) const { qsplitterhandle_metric_isbase = value; }
    void setQSplitterHandle_InitPainter_IsBase(bool value) const { qsplitterhandle_initpainter_isbase = value; }
    void setQSplitterHandle_Redirected_IsBase(bool value) const { qsplitterhandle_redirected_isbase = value; }
    void setQSplitterHandle_SharedPainter_IsBase(bool value) const { qsplitterhandle_sharedpainter_isbase = value; }
    void setQSplitterHandle_InputMethodEvent_IsBase(bool value) const { qsplitterhandle_inputmethodevent_isbase = value; }
    void setQSplitterHandle_InputMethodQuery_IsBase(bool value) const { qsplitterhandle_inputmethodquery_isbase = value; }
    void setQSplitterHandle_FocusNextPrevChild_IsBase(bool value) const { qsplitterhandle_focusnextprevchild_isbase = value; }
    void setQSplitterHandle_EventFilter_IsBase(bool value) const { qsplitterhandle_eventfilter_isbase = value; }
    void setQSplitterHandle_TimerEvent_IsBase(bool value) const { qsplitterhandle_timerevent_isbase = value; }
    void setQSplitterHandle_ChildEvent_IsBase(bool value) const { qsplitterhandle_childevent_isbase = value; }
    void setQSplitterHandle_CustomEvent_IsBase(bool value) const { qsplitterhandle_customevent_isbase = value; }
    void setQSplitterHandle_ConnectNotify_IsBase(bool value) const { qsplitterhandle_connectnotify_isbase = value; }
    void setQSplitterHandle_DisconnectNotify_IsBase(bool value) const { qsplitterhandle_disconnectnotify_isbase = value; }
    void setQSplitterHandle_MoveSplitter_IsBase(bool value) const { qsplitterhandle_movesplitter_isbase = value; }
    void setQSplitterHandle_ClosestLegalPosition_IsBase(bool value) const { qsplitterhandle_closestlegalposition_isbase = value; }
    void setQSplitterHandle_UpdateMicroFocus_IsBase(bool value) const { qsplitterhandle_updatemicrofocus_isbase = value; }
    void setQSplitterHandle_Create_IsBase(bool value) const { qsplitterhandle_create_isbase = value; }
    void setQSplitterHandle_Destroy_IsBase(bool value) const { qsplitterhandle_destroy_isbase = value; }
    void setQSplitterHandle_FocusNextChild_IsBase(bool value) const { qsplitterhandle_focusnextchild_isbase = value; }
    void setQSplitterHandle_FocusPreviousChild_IsBase(bool value) const { qsplitterhandle_focuspreviouschild_isbase = value; }
    void setQSplitterHandle_Sender_IsBase(bool value) const { qsplitterhandle_sender_isbase = value; }
    void setQSplitterHandle_SenderSignalIndex_IsBase(bool value) const { qsplitterhandle_sendersignalindex_isbase = value; }
    void setQSplitterHandle_Receivers_IsBase(bool value) const { qsplitterhandle_receivers_isbase = value; }
    void setQSplitterHandle_IsSignalConnected_IsBase(bool value) const { qsplitterhandle_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsplitterhandle_metacall_isbase) {
            qsplitterhandle_metacall_isbase = false;
            return QSplitterHandle::qt_metacall(param1, param2, param3);
        } else if (qsplitterhandle_metacall_callback != nullptr) {
            return qsplitterhandle_metacall_callback(this, param1, param2, param3);
        } else {
            return QSplitterHandle::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qsplitterhandle_sizehint_isbase) {
            qsplitterhandle_sizehint_isbase = false;
            return QSplitterHandle::sizeHint();
        } else if (qsplitterhandle_sizehint_callback != nullptr) {
            return qsplitterhandle_sizehint_callback();
        } else {
            return QSplitterHandle::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qsplitterhandle_paintevent_isbase) {
            qsplitterhandle_paintevent_isbase = false;
            QSplitterHandle::paintEvent(param1);
        } else if (qsplitterhandle_paintevent_callback != nullptr) {
            qsplitterhandle_paintevent_callback(this, param1);
        } else {
            QSplitterHandle::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qsplitterhandle_mousemoveevent_isbase) {
            qsplitterhandle_mousemoveevent_isbase = false;
            QSplitterHandle::mouseMoveEvent(param1);
        } else if (qsplitterhandle_mousemoveevent_callback != nullptr) {
            qsplitterhandle_mousemoveevent_callback(this, param1);
        } else {
            QSplitterHandle::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qsplitterhandle_mousepressevent_isbase) {
            qsplitterhandle_mousepressevent_isbase = false;
            QSplitterHandle::mousePressEvent(param1);
        } else if (qsplitterhandle_mousepressevent_callback != nullptr) {
            qsplitterhandle_mousepressevent_callback(this, param1);
        } else {
            QSplitterHandle::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qsplitterhandle_mousereleaseevent_isbase) {
            qsplitterhandle_mousereleaseevent_isbase = false;
            QSplitterHandle::mouseReleaseEvent(param1);
        } else if (qsplitterhandle_mousereleaseevent_callback != nullptr) {
            qsplitterhandle_mousereleaseevent_callback(this, param1);
        } else {
            QSplitterHandle::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qsplitterhandle_resizeevent_isbase) {
            qsplitterhandle_resizeevent_isbase = false;
            QSplitterHandle::resizeEvent(param1);
        } else if (qsplitterhandle_resizeevent_callback != nullptr) {
            qsplitterhandle_resizeevent_callback(this, param1);
        } else {
            QSplitterHandle::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qsplitterhandle_event_isbase) {
            qsplitterhandle_event_isbase = false;
            return QSplitterHandle::event(param1);
        } else if (qsplitterhandle_event_callback != nullptr) {
            return qsplitterhandle_event_callback(this, param1);
        } else {
            return QSplitterHandle::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qsplitterhandle_devtype_isbase) {
            qsplitterhandle_devtype_isbase = false;
            return QSplitterHandle::devType();
        } else if (qsplitterhandle_devtype_callback != nullptr) {
            return qsplitterhandle_devtype_callback();
        } else {
            return QSplitterHandle::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qsplitterhandle_setvisible_isbase) {
            qsplitterhandle_setvisible_isbase = false;
            QSplitterHandle::setVisible(visible);
        } else if (qsplitterhandle_setvisible_callback != nullptr) {
            qsplitterhandle_setvisible_callback(this, visible);
        } else {
            QSplitterHandle::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qsplitterhandle_minimumsizehint_isbase) {
            qsplitterhandle_minimumsizehint_isbase = false;
            return QSplitterHandle::minimumSizeHint();
        } else if (qsplitterhandle_minimumsizehint_callback != nullptr) {
            return qsplitterhandle_minimumsizehint_callback();
        } else {
            return QSplitterHandle::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qsplitterhandle_heightforwidth_isbase) {
            qsplitterhandle_heightforwidth_isbase = false;
            return QSplitterHandle::heightForWidth(param1);
        } else if (qsplitterhandle_heightforwidth_callback != nullptr) {
            return qsplitterhandle_heightforwidth_callback(this, param1);
        } else {
            return QSplitterHandle::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qsplitterhandle_hasheightforwidth_isbase) {
            qsplitterhandle_hasheightforwidth_isbase = false;
            return QSplitterHandle::hasHeightForWidth();
        } else if (qsplitterhandle_hasheightforwidth_callback != nullptr) {
            return qsplitterhandle_hasheightforwidth_callback();
        } else {
            return QSplitterHandle::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qsplitterhandle_paintengine_isbase) {
            qsplitterhandle_paintengine_isbase = false;
            return QSplitterHandle::paintEngine();
        } else if (qsplitterhandle_paintengine_callback != nullptr) {
            return qsplitterhandle_paintengine_callback();
        } else {
            return QSplitterHandle::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qsplitterhandle_mousedoubleclickevent_isbase) {
            qsplitterhandle_mousedoubleclickevent_isbase = false;
            QSplitterHandle::mouseDoubleClickEvent(event);
        } else if (qsplitterhandle_mousedoubleclickevent_callback != nullptr) {
            qsplitterhandle_mousedoubleclickevent_callback(this, event);
        } else {
            QSplitterHandle::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qsplitterhandle_wheelevent_isbase) {
            qsplitterhandle_wheelevent_isbase = false;
            QSplitterHandle::wheelEvent(event);
        } else if (qsplitterhandle_wheelevent_callback != nullptr) {
            qsplitterhandle_wheelevent_callback(this, event);
        } else {
            QSplitterHandle::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qsplitterhandle_keypressevent_isbase) {
            qsplitterhandle_keypressevent_isbase = false;
            QSplitterHandle::keyPressEvent(event);
        } else if (qsplitterhandle_keypressevent_callback != nullptr) {
            qsplitterhandle_keypressevent_callback(this, event);
        } else {
            QSplitterHandle::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qsplitterhandle_keyreleaseevent_isbase) {
            qsplitterhandle_keyreleaseevent_isbase = false;
            QSplitterHandle::keyReleaseEvent(event);
        } else if (qsplitterhandle_keyreleaseevent_callback != nullptr) {
            qsplitterhandle_keyreleaseevent_callback(this, event);
        } else {
            QSplitterHandle::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qsplitterhandle_focusinevent_isbase) {
            qsplitterhandle_focusinevent_isbase = false;
            QSplitterHandle::focusInEvent(event);
        } else if (qsplitterhandle_focusinevent_callback != nullptr) {
            qsplitterhandle_focusinevent_callback(this, event);
        } else {
            QSplitterHandle::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qsplitterhandle_focusoutevent_isbase) {
            qsplitterhandle_focusoutevent_isbase = false;
            QSplitterHandle::focusOutEvent(event);
        } else if (qsplitterhandle_focusoutevent_callback != nullptr) {
            qsplitterhandle_focusoutevent_callback(this, event);
        } else {
            QSplitterHandle::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qsplitterhandle_enterevent_isbase) {
            qsplitterhandle_enterevent_isbase = false;
            QSplitterHandle::enterEvent(event);
        } else if (qsplitterhandle_enterevent_callback != nullptr) {
            qsplitterhandle_enterevent_callback(this, event);
        } else {
            QSplitterHandle::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qsplitterhandle_leaveevent_isbase) {
            qsplitterhandle_leaveevent_isbase = false;
            QSplitterHandle::leaveEvent(event);
        } else if (qsplitterhandle_leaveevent_callback != nullptr) {
            qsplitterhandle_leaveevent_callback(this, event);
        } else {
            QSplitterHandle::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qsplitterhandle_moveevent_isbase) {
            qsplitterhandle_moveevent_isbase = false;
            QSplitterHandle::moveEvent(event);
        } else if (qsplitterhandle_moveevent_callback != nullptr) {
            qsplitterhandle_moveevent_callback(this, event);
        } else {
            QSplitterHandle::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qsplitterhandle_closeevent_isbase) {
            qsplitterhandle_closeevent_isbase = false;
            QSplitterHandle::closeEvent(event);
        } else if (qsplitterhandle_closeevent_callback != nullptr) {
            qsplitterhandle_closeevent_callback(this, event);
        } else {
            QSplitterHandle::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qsplitterhandle_contextmenuevent_isbase) {
            qsplitterhandle_contextmenuevent_isbase = false;
            QSplitterHandle::contextMenuEvent(event);
        } else if (qsplitterhandle_contextmenuevent_callback != nullptr) {
            qsplitterhandle_contextmenuevent_callback(this, event);
        } else {
            QSplitterHandle::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qsplitterhandle_tabletevent_isbase) {
            qsplitterhandle_tabletevent_isbase = false;
            QSplitterHandle::tabletEvent(event);
        } else if (qsplitterhandle_tabletevent_callback != nullptr) {
            qsplitterhandle_tabletevent_callback(this, event);
        } else {
            QSplitterHandle::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qsplitterhandle_actionevent_isbase) {
            qsplitterhandle_actionevent_isbase = false;
            QSplitterHandle::actionEvent(event);
        } else if (qsplitterhandle_actionevent_callback != nullptr) {
            qsplitterhandle_actionevent_callback(this, event);
        } else {
            QSplitterHandle::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qsplitterhandle_dragenterevent_isbase) {
            qsplitterhandle_dragenterevent_isbase = false;
            QSplitterHandle::dragEnterEvent(event);
        } else if (qsplitterhandle_dragenterevent_callback != nullptr) {
            qsplitterhandle_dragenterevent_callback(this, event);
        } else {
            QSplitterHandle::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qsplitterhandle_dragmoveevent_isbase) {
            qsplitterhandle_dragmoveevent_isbase = false;
            QSplitterHandle::dragMoveEvent(event);
        } else if (qsplitterhandle_dragmoveevent_callback != nullptr) {
            qsplitterhandle_dragmoveevent_callback(this, event);
        } else {
            QSplitterHandle::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qsplitterhandle_dragleaveevent_isbase) {
            qsplitterhandle_dragleaveevent_isbase = false;
            QSplitterHandle::dragLeaveEvent(event);
        } else if (qsplitterhandle_dragleaveevent_callback != nullptr) {
            qsplitterhandle_dragleaveevent_callback(this, event);
        } else {
            QSplitterHandle::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qsplitterhandle_dropevent_isbase) {
            qsplitterhandle_dropevent_isbase = false;
            QSplitterHandle::dropEvent(event);
        } else if (qsplitterhandle_dropevent_callback != nullptr) {
            qsplitterhandle_dropevent_callback(this, event);
        } else {
            QSplitterHandle::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qsplitterhandle_showevent_isbase) {
            qsplitterhandle_showevent_isbase = false;
            QSplitterHandle::showEvent(event);
        } else if (qsplitterhandle_showevent_callback != nullptr) {
            qsplitterhandle_showevent_callback(this, event);
        } else {
            QSplitterHandle::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qsplitterhandle_hideevent_isbase) {
            qsplitterhandle_hideevent_isbase = false;
            QSplitterHandle::hideEvent(event);
        } else if (qsplitterhandle_hideevent_callback != nullptr) {
            qsplitterhandle_hideevent_callback(this, event);
        } else {
            QSplitterHandle::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qsplitterhandle_nativeevent_isbase) {
            qsplitterhandle_nativeevent_isbase = false;
            return QSplitterHandle::nativeEvent(eventType, message, result);
        } else if (qsplitterhandle_nativeevent_callback != nullptr) {
            return qsplitterhandle_nativeevent_callback(this, eventType, message, result);
        } else {
            return QSplitterHandle::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qsplitterhandle_changeevent_isbase) {
            qsplitterhandle_changeevent_isbase = false;
            QSplitterHandle::changeEvent(param1);
        } else if (qsplitterhandle_changeevent_callback != nullptr) {
            qsplitterhandle_changeevent_callback(this, param1);
        } else {
            QSplitterHandle::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qsplitterhandle_metric_isbase) {
            qsplitterhandle_metric_isbase = false;
            return QSplitterHandle::metric(param1);
        } else if (qsplitterhandle_metric_callback != nullptr) {
            return qsplitterhandle_metric_callback(this, param1);
        } else {
            return QSplitterHandle::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qsplitterhandle_initpainter_isbase) {
            qsplitterhandle_initpainter_isbase = false;
            QSplitterHandle::initPainter(painter);
        } else if (qsplitterhandle_initpainter_callback != nullptr) {
            qsplitterhandle_initpainter_callback(this, painter);
        } else {
            QSplitterHandle::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qsplitterhandle_redirected_isbase) {
            qsplitterhandle_redirected_isbase = false;
            return QSplitterHandle::redirected(offset);
        } else if (qsplitterhandle_redirected_callback != nullptr) {
            return qsplitterhandle_redirected_callback(this, offset);
        } else {
            return QSplitterHandle::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qsplitterhandle_sharedpainter_isbase) {
            qsplitterhandle_sharedpainter_isbase = false;
            return QSplitterHandle::sharedPainter();
        } else if (qsplitterhandle_sharedpainter_callback != nullptr) {
            return qsplitterhandle_sharedpainter_callback();
        } else {
            return QSplitterHandle::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qsplitterhandle_inputmethodevent_isbase) {
            qsplitterhandle_inputmethodevent_isbase = false;
            QSplitterHandle::inputMethodEvent(param1);
        } else if (qsplitterhandle_inputmethodevent_callback != nullptr) {
            qsplitterhandle_inputmethodevent_callback(this, param1);
        } else {
            QSplitterHandle::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qsplitterhandle_inputmethodquery_isbase) {
            qsplitterhandle_inputmethodquery_isbase = false;
            return QSplitterHandle::inputMethodQuery(param1);
        } else if (qsplitterhandle_inputmethodquery_callback != nullptr) {
            return qsplitterhandle_inputmethodquery_callback(this, param1);
        } else {
            return QSplitterHandle::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qsplitterhandle_focusnextprevchild_isbase) {
            qsplitterhandle_focusnextprevchild_isbase = false;
            return QSplitterHandle::focusNextPrevChild(next);
        } else if (qsplitterhandle_focusnextprevchild_callback != nullptr) {
            return qsplitterhandle_focusnextprevchild_callback(this, next);
        } else {
            return QSplitterHandle::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsplitterhandle_eventfilter_isbase) {
            qsplitterhandle_eventfilter_isbase = false;
            return QSplitterHandle::eventFilter(watched, event);
        } else if (qsplitterhandle_eventfilter_callback != nullptr) {
            return qsplitterhandle_eventfilter_callback(this, watched, event);
        } else {
            return QSplitterHandle::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsplitterhandle_timerevent_isbase) {
            qsplitterhandle_timerevent_isbase = false;
            QSplitterHandle::timerEvent(event);
        } else if (qsplitterhandle_timerevent_callback != nullptr) {
            qsplitterhandle_timerevent_callback(this, event);
        } else {
            QSplitterHandle::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsplitterhandle_childevent_isbase) {
            qsplitterhandle_childevent_isbase = false;
            QSplitterHandle::childEvent(event);
        } else if (qsplitterhandle_childevent_callback != nullptr) {
            qsplitterhandle_childevent_callback(this, event);
        } else {
            QSplitterHandle::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsplitterhandle_customevent_isbase) {
            qsplitterhandle_customevent_isbase = false;
            QSplitterHandle::customEvent(event);
        } else if (qsplitterhandle_customevent_callback != nullptr) {
            qsplitterhandle_customevent_callback(this, event);
        } else {
            QSplitterHandle::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsplitterhandle_connectnotify_isbase) {
            qsplitterhandle_connectnotify_isbase = false;
            QSplitterHandle::connectNotify(signal);
        } else if (qsplitterhandle_connectnotify_callback != nullptr) {
            qsplitterhandle_connectnotify_callback(this, signal);
        } else {
            QSplitterHandle::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsplitterhandle_disconnectnotify_isbase) {
            qsplitterhandle_disconnectnotify_isbase = false;
            QSplitterHandle::disconnectNotify(signal);
        } else if (qsplitterhandle_disconnectnotify_callback != nullptr) {
            qsplitterhandle_disconnectnotify_callback(this, signal);
        } else {
            QSplitterHandle::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void moveSplitter(int p) {
        if (qsplitterhandle_movesplitter_isbase) {
            qsplitterhandle_movesplitter_isbase = false;
            QSplitterHandle::moveSplitter(p);
        } else if (qsplitterhandle_movesplitter_callback != nullptr) {
            qsplitterhandle_movesplitter_callback(this, p);
        } else {
            QSplitterHandle::moveSplitter(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    int closestLegalPosition(int p) {
        if (qsplitterhandle_closestlegalposition_isbase) {
            qsplitterhandle_closestlegalposition_isbase = false;
            return QSplitterHandle::closestLegalPosition(p);
        } else if (qsplitterhandle_closestlegalposition_callback != nullptr) {
            return qsplitterhandle_closestlegalposition_callback(this, p);
        } else {
            return QSplitterHandle::closestLegalPosition(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qsplitterhandle_updatemicrofocus_isbase) {
            qsplitterhandle_updatemicrofocus_isbase = false;
            QSplitterHandle::updateMicroFocus();
        } else if (qsplitterhandle_updatemicrofocus_callback != nullptr) {
            qsplitterhandle_updatemicrofocus_callback();
        } else {
            QSplitterHandle::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qsplitterhandle_create_isbase) {
            qsplitterhandle_create_isbase = false;
            QSplitterHandle::create();
        } else if (qsplitterhandle_create_callback != nullptr) {
            qsplitterhandle_create_callback();
        } else {
            QSplitterHandle::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qsplitterhandle_destroy_isbase) {
            qsplitterhandle_destroy_isbase = false;
            QSplitterHandle::destroy();
        } else if (qsplitterhandle_destroy_callback != nullptr) {
            qsplitterhandle_destroy_callback();
        } else {
            QSplitterHandle::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qsplitterhandle_focusnextchild_isbase) {
            qsplitterhandle_focusnextchild_isbase = false;
            return QSplitterHandle::focusNextChild();
        } else if (qsplitterhandle_focusnextchild_callback != nullptr) {
            return qsplitterhandle_focusnextchild_callback();
        } else {
            return QSplitterHandle::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qsplitterhandle_focuspreviouschild_isbase) {
            qsplitterhandle_focuspreviouschild_isbase = false;
            return QSplitterHandle::focusPreviousChild();
        } else if (qsplitterhandle_focuspreviouschild_callback != nullptr) {
            return qsplitterhandle_focuspreviouschild_callback();
        } else {
            return QSplitterHandle::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsplitterhandle_sender_isbase) {
            qsplitterhandle_sender_isbase = false;
            return QSplitterHandle::sender();
        } else if (qsplitterhandle_sender_callback != nullptr) {
            return qsplitterhandle_sender_callback();
        } else {
            return QSplitterHandle::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsplitterhandle_sendersignalindex_isbase) {
            qsplitterhandle_sendersignalindex_isbase = false;
            return QSplitterHandle::senderSignalIndex();
        } else if (qsplitterhandle_sendersignalindex_callback != nullptr) {
            return qsplitterhandle_sendersignalindex_callback();
        } else {
            return QSplitterHandle::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsplitterhandle_receivers_isbase) {
            qsplitterhandle_receivers_isbase = false;
            return QSplitterHandle::receivers(signal);
        } else if (qsplitterhandle_receivers_callback != nullptr) {
            return qsplitterhandle_receivers_callback(this, signal);
        } else {
            return QSplitterHandle::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsplitterhandle_issignalconnected_isbase) {
            qsplitterhandle_issignalconnected_isbase = false;
            return QSplitterHandle::isSignalConnected(signal);
        } else if (qsplitterhandle_issignalconnected_callback != nullptr) {
            return qsplitterhandle_issignalconnected_callback(this, signal);
        } else {
            return QSplitterHandle::isSignalConnected(signal);
        }
    }
};

#endif

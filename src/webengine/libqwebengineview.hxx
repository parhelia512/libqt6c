#pragma once
#ifndef SRC_WEBENGINEC_LIBVIRTUALQWEBENGINEVIEW_H
#define SRC_WEBENGINEC_LIBVIRTUALQWEBENGINEVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWebEngineView so that we can call protected methods
class VirtualQWebEngineView : public QWebEngineView {

  public:
    // Virtual class public types (including callbacks)
    using QWebEngineView_Metacall_Callback = int (*)(QWebEngineView*, QMetaObject::Call, int, void**);
    using QWebEngineView_SizeHint_Callback = QSize (*)();
    using QWebEngineView_CreateWindow_Callback = QWebEngineView* (*)(QWebEngineView*, QWebEnginePage::WebWindowType);
    using QWebEngineView_ContextMenuEvent_Callback = void (*)(QWebEngineView*, QContextMenuEvent*);
    using QWebEngineView_Event_Callback = bool (*)(QWebEngineView*, QEvent*);
    using QWebEngineView_ShowEvent_Callback = void (*)(QWebEngineView*, QShowEvent*);
    using QWebEngineView_HideEvent_Callback = void (*)(QWebEngineView*, QHideEvent*);
    using QWebEngineView_CloseEvent_Callback = void (*)(QWebEngineView*, QCloseEvent*);
    using QWebEngineView_DragEnterEvent_Callback = void (*)(QWebEngineView*, QDragEnterEvent*);
    using QWebEngineView_DragLeaveEvent_Callback = void (*)(QWebEngineView*, QDragLeaveEvent*);
    using QWebEngineView_DragMoveEvent_Callback = void (*)(QWebEngineView*, QDragMoveEvent*);
    using QWebEngineView_DropEvent_Callback = void (*)(QWebEngineView*, QDropEvent*);
    using QWebEngineView_DevType_Callback = int (*)();
    using QWebEngineView_SetVisible_Callback = void (*)(QWebEngineView*, bool);
    using QWebEngineView_MinimumSizeHint_Callback = QSize (*)();
    using QWebEngineView_HeightForWidth_Callback = int (*)(const QWebEngineView*, int);
    using QWebEngineView_HasHeightForWidth_Callback = bool (*)();
    using QWebEngineView_PaintEngine_Callback = QPaintEngine* (*)();
    using QWebEngineView_MousePressEvent_Callback = void (*)(QWebEngineView*, QMouseEvent*);
    using QWebEngineView_MouseReleaseEvent_Callback = void (*)(QWebEngineView*, QMouseEvent*);
    using QWebEngineView_MouseDoubleClickEvent_Callback = void (*)(QWebEngineView*, QMouseEvent*);
    using QWebEngineView_MouseMoveEvent_Callback = void (*)(QWebEngineView*, QMouseEvent*);
    using QWebEngineView_WheelEvent_Callback = void (*)(QWebEngineView*, QWheelEvent*);
    using QWebEngineView_KeyPressEvent_Callback = void (*)(QWebEngineView*, QKeyEvent*);
    using QWebEngineView_KeyReleaseEvent_Callback = void (*)(QWebEngineView*, QKeyEvent*);
    using QWebEngineView_FocusInEvent_Callback = void (*)(QWebEngineView*, QFocusEvent*);
    using QWebEngineView_FocusOutEvent_Callback = void (*)(QWebEngineView*, QFocusEvent*);
    using QWebEngineView_EnterEvent_Callback = void (*)(QWebEngineView*, QEnterEvent*);
    using QWebEngineView_LeaveEvent_Callback = void (*)(QWebEngineView*, QEvent*);
    using QWebEngineView_PaintEvent_Callback = void (*)(QWebEngineView*, QPaintEvent*);
    using QWebEngineView_MoveEvent_Callback = void (*)(QWebEngineView*, QMoveEvent*);
    using QWebEngineView_ResizeEvent_Callback = void (*)(QWebEngineView*, QResizeEvent*);
    using QWebEngineView_TabletEvent_Callback = void (*)(QWebEngineView*, QTabletEvent*);
    using QWebEngineView_ActionEvent_Callback = void (*)(QWebEngineView*, QActionEvent*);
    using QWebEngineView_NativeEvent_Callback = bool (*)(QWebEngineView*, const QByteArray&, void*, qintptr*);
    using QWebEngineView_ChangeEvent_Callback = void (*)(QWebEngineView*, QEvent*);
    using QWebEngineView_Metric_Callback = int (*)(const QWebEngineView*, QPaintDevice::PaintDeviceMetric);
    using QWebEngineView_InitPainter_Callback = void (*)(const QWebEngineView*, QPainter*);
    using QWebEngineView_Redirected_Callback = QPaintDevice* (*)(const QWebEngineView*, QPoint*);
    using QWebEngineView_SharedPainter_Callback = QPainter* (*)();
    using QWebEngineView_InputMethodEvent_Callback = void (*)(QWebEngineView*, QInputMethodEvent*);
    using QWebEngineView_InputMethodQuery_Callback = QVariant (*)(const QWebEngineView*, Qt::InputMethodQuery);
    using QWebEngineView_FocusNextPrevChild_Callback = bool (*)(QWebEngineView*, bool);
    using QWebEngineView_EventFilter_Callback = bool (*)(QWebEngineView*, QObject*, QEvent*);
    using QWebEngineView_TimerEvent_Callback = void (*)(QWebEngineView*, QTimerEvent*);
    using QWebEngineView_ChildEvent_Callback = void (*)(QWebEngineView*, QChildEvent*);
    using QWebEngineView_CustomEvent_Callback = void (*)(QWebEngineView*, QEvent*);
    using QWebEngineView_ConnectNotify_Callback = void (*)(QWebEngineView*, const QMetaMethod&);
    using QWebEngineView_DisconnectNotify_Callback = void (*)(QWebEngineView*, const QMetaMethod&);
    using QWebEngineView_UpdateMicroFocus_Callback = void (*)();
    using QWebEngineView_Create_Callback = void (*)();
    using QWebEngineView_Destroy_Callback = void (*)();
    using QWebEngineView_FocusNextChild_Callback = bool (*)();
    using QWebEngineView_FocusPreviousChild_Callback = bool (*)();
    using QWebEngineView_Sender_Callback = QObject* (*)();
    using QWebEngineView_SenderSignalIndex_Callback = int (*)();
    using QWebEngineView_Receivers_Callback = int (*)(const QWebEngineView*, const char*);
    using QWebEngineView_IsSignalConnected_Callback = bool (*)(const QWebEngineView*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QWebEngineView_Metacall_Callback qwebengineview_metacall_callback = nullptr;
    QWebEngineView_SizeHint_Callback qwebengineview_sizehint_callback = nullptr;
    QWebEngineView_CreateWindow_Callback qwebengineview_createwindow_callback = nullptr;
    QWebEngineView_ContextMenuEvent_Callback qwebengineview_contextmenuevent_callback = nullptr;
    QWebEngineView_Event_Callback qwebengineview_event_callback = nullptr;
    QWebEngineView_ShowEvent_Callback qwebengineview_showevent_callback = nullptr;
    QWebEngineView_HideEvent_Callback qwebengineview_hideevent_callback = nullptr;
    QWebEngineView_CloseEvent_Callback qwebengineview_closeevent_callback = nullptr;
    QWebEngineView_DragEnterEvent_Callback qwebengineview_dragenterevent_callback = nullptr;
    QWebEngineView_DragLeaveEvent_Callback qwebengineview_dragleaveevent_callback = nullptr;
    QWebEngineView_DragMoveEvent_Callback qwebengineview_dragmoveevent_callback = nullptr;
    QWebEngineView_DropEvent_Callback qwebengineview_dropevent_callback = nullptr;
    QWebEngineView_DevType_Callback qwebengineview_devtype_callback = nullptr;
    QWebEngineView_SetVisible_Callback qwebengineview_setvisible_callback = nullptr;
    QWebEngineView_MinimumSizeHint_Callback qwebengineview_minimumsizehint_callback = nullptr;
    QWebEngineView_HeightForWidth_Callback qwebengineview_heightforwidth_callback = nullptr;
    QWebEngineView_HasHeightForWidth_Callback qwebengineview_hasheightforwidth_callback = nullptr;
    QWebEngineView_PaintEngine_Callback qwebengineview_paintengine_callback = nullptr;
    QWebEngineView_MousePressEvent_Callback qwebengineview_mousepressevent_callback = nullptr;
    QWebEngineView_MouseReleaseEvent_Callback qwebengineview_mousereleaseevent_callback = nullptr;
    QWebEngineView_MouseDoubleClickEvent_Callback qwebengineview_mousedoubleclickevent_callback = nullptr;
    QWebEngineView_MouseMoveEvent_Callback qwebengineview_mousemoveevent_callback = nullptr;
    QWebEngineView_WheelEvent_Callback qwebengineview_wheelevent_callback = nullptr;
    QWebEngineView_KeyPressEvent_Callback qwebengineview_keypressevent_callback = nullptr;
    QWebEngineView_KeyReleaseEvent_Callback qwebengineview_keyreleaseevent_callback = nullptr;
    QWebEngineView_FocusInEvent_Callback qwebengineview_focusinevent_callback = nullptr;
    QWebEngineView_FocusOutEvent_Callback qwebengineview_focusoutevent_callback = nullptr;
    QWebEngineView_EnterEvent_Callback qwebengineview_enterevent_callback = nullptr;
    QWebEngineView_LeaveEvent_Callback qwebengineview_leaveevent_callback = nullptr;
    QWebEngineView_PaintEvent_Callback qwebengineview_paintevent_callback = nullptr;
    QWebEngineView_MoveEvent_Callback qwebengineview_moveevent_callback = nullptr;
    QWebEngineView_ResizeEvent_Callback qwebengineview_resizeevent_callback = nullptr;
    QWebEngineView_TabletEvent_Callback qwebengineview_tabletevent_callback = nullptr;
    QWebEngineView_ActionEvent_Callback qwebengineview_actionevent_callback = nullptr;
    QWebEngineView_NativeEvent_Callback qwebengineview_nativeevent_callback = nullptr;
    QWebEngineView_ChangeEvent_Callback qwebengineview_changeevent_callback = nullptr;
    QWebEngineView_Metric_Callback qwebengineview_metric_callback = nullptr;
    QWebEngineView_InitPainter_Callback qwebengineview_initpainter_callback = nullptr;
    QWebEngineView_Redirected_Callback qwebengineview_redirected_callback = nullptr;
    QWebEngineView_SharedPainter_Callback qwebengineview_sharedpainter_callback = nullptr;
    QWebEngineView_InputMethodEvent_Callback qwebengineview_inputmethodevent_callback = nullptr;
    QWebEngineView_InputMethodQuery_Callback qwebengineview_inputmethodquery_callback = nullptr;
    QWebEngineView_FocusNextPrevChild_Callback qwebengineview_focusnextprevchild_callback = nullptr;
    QWebEngineView_EventFilter_Callback qwebengineview_eventfilter_callback = nullptr;
    QWebEngineView_TimerEvent_Callback qwebengineview_timerevent_callback = nullptr;
    QWebEngineView_ChildEvent_Callback qwebengineview_childevent_callback = nullptr;
    QWebEngineView_CustomEvent_Callback qwebengineview_customevent_callback = nullptr;
    QWebEngineView_ConnectNotify_Callback qwebengineview_connectnotify_callback = nullptr;
    QWebEngineView_DisconnectNotify_Callback qwebengineview_disconnectnotify_callback = nullptr;
    QWebEngineView_UpdateMicroFocus_Callback qwebengineview_updatemicrofocus_callback = nullptr;
    QWebEngineView_Create_Callback qwebengineview_create_callback = nullptr;
    QWebEngineView_Destroy_Callback qwebengineview_destroy_callback = nullptr;
    QWebEngineView_FocusNextChild_Callback qwebengineview_focusnextchild_callback = nullptr;
    QWebEngineView_FocusPreviousChild_Callback qwebengineview_focuspreviouschild_callback = nullptr;
    QWebEngineView_Sender_Callback qwebengineview_sender_callback = nullptr;
    QWebEngineView_SenderSignalIndex_Callback qwebengineview_sendersignalindex_callback = nullptr;
    QWebEngineView_Receivers_Callback qwebengineview_receivers_callback = nullptr;
    QWebEngineView_IsSignalConnected_Callback qwebengineview_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qwebengineview_metacall_isbase = false;
    mutable bool qwebengineview_sizehint_isbase = false;
    mutable bool qwebengineview_createwindow_isbase = false;
    mutable bool qwebengineview_contextmenuevent_isbase = false;
    mutable bool qwebengineview_event_isbase = false;
    mutable bool qwebengineview_showevent_isbase = false;
    mutable bool qwebengineview_hideevent_isbase = false;
    mutable bool qwebengineview_closeevent_isbase = false;
    mutable bool qwebengineview_dragenterevent_isbase = false;
    mutable bool qwebengineview_dragleaveevent_isbase = false;
    mutable bool qwebengineview_dragmoveevent_isbase = false;
    mutable bool qwebengineview_dropevent_isbase = false;
    mutable bool qwebengineview_devtype_isbase = false;
    mutable bool qwebengineview_setvisible_isbase = false;
    mutable bool qwebengineview_minimumsizehint_isbase = false;
    mutable bool qwebengineview_heightforwidth_isbase = false;
    mutable bool qwebengineview_hasheightforwidth_isbase = false;
    mutable bool qwebengineview_paintengine_isbase = false;
    mutable bool qwebengineview_mousepressevent_isbase = false;
    mutable bool qwebengineview_mousereleaseevent_isbase = false;
    mutable bool qwebengineview_mousedoubleclickevent_isbase = false;
    mutable bool qwebengineview_mousemoveevent_isbase = false;
    mutable bool qwebengineview_wheelevent_isbase = false;
    mutable bool qwebengineview_keypressevent_isbase = false;
    mutable bool qwebengineview_keyreleaseevent_isbase = false;
    mutable bool qwebengineview_focusinevent_isbase = false;
    mutable bool qwebengineview_focusoutevent_isbase = false;
    mutable bool qwebengineview_enterevent_isbase = false;
    mutable bool qwebengineview_leaveevent_isbase = false;
    mutable bool qwebengineview_paintevent_isbase = false;
    mutable bool qwebengineview_moveevent_isbase = false;
    mutable bool qwebengineview_resizeevent_isbase = false;
    mutable bool qwebengineview_tabletevent_isbase = false;
    mutable bool qwebengineview_actionevent_isbase = false;
    mutable bool qwebengineview_nativeevent_isbase = false;
    mutable bool qwebengineview_changeevent_isbase = false;
    mutable bool qwebengineview_metric_isbase = false;
    mutable bool qwebengineview_initpainter_isbase = false;
    mutable bool qwebengineview_redirected_isbase = false;
    mutable bool qwebengineview_sharedpainter_isbase = false;
    mutable bool qwebengineview_inputmethodevent_isbase = false;
    mutable bool qwebengineview_inputmethodquery_isbase = false;
    mutable bool qwebengineview_focusnextprevchild_isbase = false;
    mutable bool qwebengineview_eventfilter_isbase = false;
    mutable bool qwebengineview_timerevent_isbase = false;
    mutable bool qwebengineview_childevent_isbase = false;
    mutable bool qwebengineview_customevent_isbase = false;
    mutable bool qwebengineview_connectnotify_isbase = false;
    mutable bool qwebengineview_disconnectnotify_isbase = false;
    mutable bool qwebengineview_updatemicrofocus_isbase = false;
    mutable bool qwebengineview_create_isbase = false;
    mutable bool qwebengineview_destroy_isbase = false;
    mutable bool qwebengineview_focusnextchild_isbase = false;
    mutable bool qwebengineview_focuspreviouschild_isbase = false;
    mutable bool qwebengineview_sender_isbase = false;
    mutable bool qwebengineview_sendersignalindex_isbase = false;
    mutable bool qwebengineview_receivers_isbase = false;
    mutable bool qwebengineview_issignalconnected_isbase = false;

  public:
    VirtualQWebEngineView(QWidget* parent) : QWebEngineView(parent){};
    VirtualQWebEngineView() : QWebEngineView(){};
    VirtualQWebEngineView(QWebEngineProfile* profile) : QWebEngineView(profile){};
    VirtualQWebEngineView(QWebEnginePage* page) : QWebEngineView(page){};
    VirtualQWebEngineView(QWebEngineProfile* profile, QWidget* parent) : QWebEngineView(profile, parent){};
    VirtualQWebEngineView(QWebEnginePage* page, QWidget* parent) : QWebEngineView(page, parent){};

    ~VirtualQWebEngineView() {
        qwebengineview_metacall_callback = nullptr;
        qwebengineview_sizehint_callback = nullptr;
        qwebengineview_createwindow_callback = nullptr;
        qwebengineview_contextmenuevent_callback = nullptr;
        qwebengineview_event_callback = nullptr;
        qwebengineview_showevent_callback = nullptr;
        qwebengineview_hideevent_callback = nullptr;
        qwebengineview_closeevent_callback = nullptr;
        qwebengineview_dragenterevent_callback = nullptr;
        qwebengineview_dragleaveevent_callback = nullptr;
        qwebengineview_dragmoveevent_callback = nullptr;
        qwebengineview_dropevent_callback = nullptr;
        qwebengineview_devtype_callback = nullptr;
        qwebengineview_setvisible_callback = nullptr;
        qwebengineview_minimumsizehint_callback = nullptr;
        qwebengineview_heightforwidth_callback = nullptr;
        qwebengineview_hasheightforwidth_callback = nullptr;
        qwebengineview_paintengine_callback = nullptr;
        qwebengineview_mousepressevent_callback = nullptr;
        qwebengineview_mousereleaseevent_callback = nullptr;
        qwebengineview_mousedoubleclickevent_callback = nullptr;
        qwebengineview_mousemoveevent_callback = nullptr;
        qwebengineview_wheelevent_callback = nullptr;
        qwebengineview_keypressevent_callback = nullptr;
        qwebengineview_keyreleaseevent_callback = nullptr;
        qwebengineview_focusinevent_callback = nullptr;
        qwebengineview_focusoutevent_callback = nullptr;
        qwebengineview_enterevent_callback = nullptr;
        qwebengineview_leaveevent_callback = nullptr;
        qwebengineview_paintevent_callback = nullptr;
        qwebengineview_moveevent_callback = nullptr;
        qwebengineview_resizeevent_callback = nullptr;
        qwebengineview_tabletevent_callback = nullptr;
        qwebengineview_actionevent_callback = nullptr;
        qwebengineview_nativeevent_callback = nullptr;
        qwebengineview_changeevent_callback = nullptr;
        qwebengineview_metric_callback = nullptr;
        qwebengineview_initpainter_callback = nullptr;
        qwebengineview_redirected_callback = nullptr;
        qwebengineview_sharedpainter_callback = nullptr;
        qwebengineview_inputmethodevent_callback = nullptr;
        qwebengineview_inputmethodquery_callback = nullptr;
        qwebengineview_focusnextprevchild_callback = nullptr;
        qwebengineview_eventfilter_callback = nullptr;
        qwebengineview_timerevent_callback = nullptr;
        qwebengineview_childevent_callback = nullptr;
        qwebengineview_customevent_callback = nullptr;
        qwebengineview_connectnotify_callback = nullptr;
        qwebengineview_disconnectnotify_callback = nullptr;
        qwebengineview_updatemicrofocus_callback = nullptr;
        qwebengineview_create_callback = nullptr;
        qwebengineview_destroy_callback = nullptr;
        qwebengineview_focusnextchild_callback = nullptr;
        qwebengineview_focuspreviouschild_callback = nullptr;
        qwebengineview_sender_callback = nullptr;
        qwebengineview_sendersignalindex_callback = nullptr;
        qwebengineview_receivers_callback = nullptr;
        qwebengineview_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQWebEngineView_Metacall_Callback(QWebEngineView_Metacall_Callback cb) { qwebengineview_metacall_callback = cb; }
    void setQWebEngineView_SizeHint_Callback(QWebEngineView_SizeHint_Callback cb) { qwebengineview_sizehint_callback = cb; }
    void setQWebEngineView_CreateWindow_Callback(QWebEngineView_CreateWindow_Callback cb) { qwebengineview_createwindow_callback = cb; }
    void setQWebEngineView_ContextMenuEvent_Callback(QWebEngineView_ContextMenuEvent_Callback cb) { qwebengineview_contextmenuevent_callback = cb; }
    void setQWebEngineView_Event_Callback(QWebEngineView_Event_Callback cb) { qwebengineview_event_callback = cb; }
    void setQWebEngineView_ShowEvent_Callback(QWebEngineView_ShowEvent_Callback cb) { qwebengineview_showevent_callback = cb; }
    void setQWebEngineView_HideEvent_Callback(QWebEngineView_HideEvent_Callback cb) { qwebengineview_hideevent_callback = cb; }
    void setQWebEngineView_CloseEvent_Callback(QWebEngineView_CloseEvent_Callback cb) { qwebengineview_closeevent_callback = cb; }
    void setQWebEngineView_DragEnterEvent_Callback(QWebEngineView_DragEnterEvent_Callback cb) { qwebengineview_dragenterevent_callback = cb; }
    void setQWebEngineView_DragLeaveEvent_Callback(QWebEngineView_DragLeaveEvent_Callback cb) { qwebengineview_dragleaveevent_callback = cb; }
    void setQWebEngineView_DragMoveEvent_Callback(QWebEngineView_DragMoveEvent_Callback cb) { qwebengineview_dragmoveevent_callback = cb; }
    void setQWebEngineView_DropEvent_Callback(QWebEngineView_DropEvent_Callback cb) { qwebengineview_dropevent_callback = cb; }
    void setQWebEngineView_DevType_Callback(QWebEngineView_DevType_Callback cb) { qwebengineview_devtype_callback = cb; }
    void setQWebEngineView_SetVisible_Callback(QWebEngineView_SetVisible_Callback cb) { qwebengineview_setvisible_callback = cb; }
    void setQWebEngineView_MinimumSizeHint_Callback(QWebEngineView_MinimumSizeHint_Callback cb) { qwebengineview_minimumsizehint_callback = cb; }
    void setQWebEngineView_HeightForWidth_Callback(QWebEngineView_HeightForWidth_Callback cb) { qwebengineview_heightforwidth_callback = cb; }
    void setQWebEngineView_HasHeightForWidth_Callback(QWebEngineView_HasHeightForWidth_Callback cb) { qwebengineview_hasheightforwidth_callback = cb; }
    void setQWebEngineView_PaintEngine_Callback(QWebEngineView_PaintEngine_Callback cb) { qwebengineview_paintengine_callback = cb; }
    void setQWebEngineView_MousePressEvent_Callback(QWebEngineView_MousePressEvent_Callback cb) { qwebengineview_mousepressevent_callback = cb; }
    void setQWebEngineView_MouseReleaseEvent_Callback(QWebEngineView_MouseReleaseEvent_Callback cb) { qwebengineview_mousereleaseevent_callback = cb; }
    void setQWebEngineView_MouseDoubleClickEvent_Callback(QWebEngineView_MouseDoubleClickEvent_Callback cb) { qwebengineview_mousedoubleclickevent_callback = cb; }
    void setQWebEngineView_MouseMoveEvent_Callback(QWebEngineView_MouseMoveEvent_Callback cb) { qwebengineview_mousemoveevent_callback = cb; }
    void setQWebEngineView_WheelEvent_Callback(QWebEngineView_WheelEvent_Callback cb) { qwebengineview_wheelevent_callback = cb; }
    void setQWebEngineView_KeyPressEvent_Callback(QWebEngineView_KeyPressEvent_Callback cb) { qwebengineview_keypressevent_callback = cb; }
    void setQWebEngineView_KeyReleaseEvent_Callback(QWebEngineView_KeyReleaseEvent_Callback cb) { qwebengineview_keyreleaseevent_callback = cb; }
    void setQWebEngineView_FocusInEvent_Callback(QWebEngineView_FocusInEvent_Callback cb) { qwebengineview_focusinevent_callback = cb; }
    void setQWebEngineView_FocusOutEvent_Callback(QWebEngineView_FocusOutEvent_Callback cb) { qwebengineview_focusoutevent_callback = cb; }
    void setQWebEngineView_EnterEvent_Callback(QWebEngineView_EnterEvent_Callback cb) { qwebengineview_enterevent_callback = cb; }
    void setQWebEngineView_LeaveEvent_Callback(QWebEngineView_LeaveEvent_Callback cb) { qwebengineview_leaveevent_callback = cb; }
    void setQWebEngineView_PaintEvent_Callback(QWebEngineView_PaintEvent_Callback cb) { qwebengineview_paintevent_callback = cb; }
    void setQWebEngineView_MoveEvent_Callback(QWebEngineView_MoveEvent_Callback cb) { qwebengineview_moveevent_callback = cb; }
    void setQWebEngineView_ResizeEvent_Callback(QWebEngineView_ResizeEvent_Callback cb) { qwebengineview_resizeevent_callback = cb; }
    void setQWebEngineView_TabletEvent_Callback(QWebEngineView_TabletEvent_Callback cb) { qwebengineview_tabletevent_callback = cb; }
    void setQWebEngineView_ActionEvent_Callback(QWebEngineView_ActionEvent_Callback cb) { qwebengineview_actionevent_callback = cb; }
    void setQWebEngineView_NativeEvent_Callback(QWebEngineView_NativeEvent_Callback cb) { qwebengineview_nativeevent_callback = cb; }
    void setQWebEngineView_ChangeEvent_Callback(QWebEngineView_ChangeEvent_Callback cb) { qwebengineview_changeevent_callback = cb; }
    void setQWebEngineView_Metric_Callback(QWebEngineView_Metric_Callback cb) { qwebengineview_metric_callback = cb; }
    void setQWebEngineView_InitPainter_Callback(QWebEngineView_InitPainter_Callback cb) { qwebengineview_initpainter_callback = cb; }
    void setQWebEngineView_Redirected_Callback(QWebEngineView_Redirected_Callback cb) { qwebengineview_redirected_callback = cb; }
    void setQWebEngineView_SharedPainter_Callback(QWebEngineView_SharedPainter_Callback cb) { qwebengineview_sharedpainter_callback = cb; }
    void setQWebEngineView_InputMethodEvent_Callback(QWebEngineView_InputMethodEvent_Callback cb) { qwebengineview_inputmethodevent_callback = cb; }
    void setQWebEngineView_InputMethodQuery_Callback(QWebEngineView_InputMethodQuery_Callback cb) { qwebengineview_inputmethodquery_callback = cb; }
    void setQWebEngineView_FocusNextPrevChild_Callback(QWebEngineView_FocusNextPrevChild_Callback cb) { qwebengineview_focusnextprevchild_callback = cb; }
    void setQWebEngineView_EventFilter_Callback(QWebEngineView_EventFilter_Callback cb) { qwebengineview_eventfilter_callback = cb; }
    void setQWebEngineView_TimerEvent_Callback(QWebEngineView_TimerEvent_Callback cb) { qwebengineview_timerevent_callback = cb; }
    void setQWebEngineView_ChildEvent_Callback(QWebEngineView_ChildEvent_Callback cb) { qwebengineview_childevent_callback = cb; }
    void setQWebEngineView_CustomEvent_Callback(QWebEngineView_CustomEvent_Callback cb) { qwebengineview_customevent_callback = cb; }
    void setQWebEngineView_ConnectNotify_Callback(QWebEngineView_ConnectNotify_Callback cb) { qwebengineview_connectnotify_callback = cb; }
    void setQWebEngineView_DisconnectNotify_Callback(QWebEngineView_DisconnectNotify_Callback cb) { qwebengineview_disconnectnotify_callback = cb; }
    void setQWebEngineView_UpdateMicroFocus_Callback(QWebEngineView_UpdateMicroFocus_Callback cb) { qwebengineview_updatemicrofocus_callback = cb; }
    void setQWebEngineView_Create_Callback(QWebEngineView_Create_Callback cb) { qwebengineview_create_callback = cb; }
    void setQWebEngineView_Destroy_Callback(QWebEngineView_Destroy_Callback cb) { qwebengineview_destroy_callback = cb; }
    void setQWebEngineView_FocusNextChild_Callback(QWebEngineView_FocusNextChild_Callback cb) { qwebengineview_focusnextchild_callback = cb; }
    void setQWebEngineView_FocusPreviousChild_Callback(QWebEngineView_FocusPreviousChild_Callback cb) { qwebengineview_focuspreviouschild_callback = cb; }
    void setQWebEngineView_Sender_Callback(QWebEngineView_Sender_Callback cb) { qwebengineview_sender_callback = cb; }
    void setQWebEngineView_SenderSignalIndex_Callback(QWebEngineView_SenderSignalIndex_Callback cb) { qwebengineview_sendersignalindex_callback = cb; }
    void setQWebEngineView_Receivers_Callback(QWebEngineView_Receivers_Callback cb) { qwebengineview_receivers_callback = cb; }
    void setQWebEngineView_IsSignalConnected_Callback(QWebEngineView_IsSignalConnected_Callback cb) { qwebengineview_issignalconnected_callback = cb; }

    // Base flag setters
    void setQWebEngineView_Metacall_IsBase(bool value) const { qwebengineview_metacall_isbase = value; }
    void setQWebEngineView_SizeHint_IsBase(bool value) const { qwebengineview_sizehint_isbase = value; }
    void setQWebEngineView_CreateWindow_IsBase(bool value) const { qwebengineview_createwindow_isbase = value; }
    void setQWebEngineView_ContextMenuEvent_IsBase(bool value) const { qwebengineview_contextmenuevent_isbase = value; }
    void setQWebEngineView_Event_IsBase(bool value) const { qwebengineview_event_isbase = value; }
    void setQWebEngineView_ShowEvent_IsBase(bool value) const { qwebengineview_showevent_isbase = value; }
    void setQWebEngineView_HideEvent_IsBase(bool value) const { qwebengineview_hideevent_isbase = value; }
    void setQWebEngineView_CloseEvent_IsBase(bool value) const { qwebengineview_closeevent_isbase = value; }
    void setQWebEngineView_DragEnterEvent_IsBase(bool value) const { qwebengineview_dragenterevent_isbase = value; }
    void setQWebEngineView_DragLeaveEvent_IsBase(bool value) const { qwebengineview_dragleaveevent_isbase = value; }
    void setQWebEngineView_DragMoveEvent_IsBase(bool value) const { qwebengineview_dragmoveevent_isbase = value; }
    void setQWebEngineView_DropEvent_IsBase(bool value) const { qwebengineview_dropevent_isbase = value; }
    void setQWebEngineView_DevType_IsBase(bool value) const { qwebengineview_devtype_isbase = value; }
    void setQWebEngineView_SetVisible_IsBase(bool value) const { qwebengineview_setvisible_isbase = value; }
    void setQWebEngineView_MinimumSizeHint_IsBase(bool value) const { qwebengineview_minimumsizehint_isbase = value; }
    void setQWebEngineView_HeightForWidth_IsBase(bool value) const { qwebengineview_heightforwidth_isbase = value; }
    void setQWebEngineView_HasHeightForWidth_IsBase(bool value) const { qwebengineview_hasheightforwidth_isbase = value; }
    void setQWebEngineView_PaintEngine_IsBase(bool value) const { qwebengineview_paintengine_isbase = value; }
    void setQWebEngineView_MousePressEvent_IsBase(bool value) const { qwebengineview_mousepressevent_isbase = value; }
    void setQWebEngineView_MouseReleaseEvent_IsBase(bool value) const { qwebengineview_mousereleaseevent_isbase = value; }
    void setQWebEngineView_MouseDoubleClickEvent_IsBase(bool value) const { qwebengineview_mousedoubleclickevent_isbase = value; }
    void setQWebEngineView_MouseMoveEvent_IsBase(bool value) const { qwebengineview_mousemoveevent_isbase = value; }
    void setQWebEngineView_WheelEvent_IsBase(bool value) const { qwebengineview_wheelevent_isbase = value; }
    void setQWebEngineView_KeyPressEvent_IsBase(bool value) const { qwebengineview_keypressevent_isbase = value; }
    void setQWebEngineView_KeyReleaseEvent_IsBase(bool value) const { qwebengineview_keyreleaseevent_isbase = value; }
    void setQWebEngineView_FocusInEvent_IsBase(bool value) const { qwebengineview_focusinevent_isbase = value; }
    void setQWebEngineView_FocusOutEvent_IsBase(bool value) const { qwebengineview_focusoutevent_isbase = value; }
    void setQWebEngineView_EnterEvent_IsBase(bool value) const { qwebengineview_enterevent_isbase = value; }
    void setQWebEngineView_LeaveEvent_IsBase(bool value) const { qwebengineview_leaveevent_isbase = value; }
    void setQWebEngineView_PaintEvent_IsBase(bool value) const { qwebengineview_paintevent_isbase = value; }
    void setQWebEngineView_MoveEvent_IsBase(bool value) const { qwebengineview_moveevent_isbase = value; }
    void setQWebEngineView_ResizeEvent_IsBase(bool value) const { qwebengineview_resizeevent_isbase = value; }
    void setQWebEngineView_TabletEvent_IsBase(bool value) const { qwebengineview_tabletevent_isbase = value; }
    void setQWebEngineView_ActionEvent_IsBase(bool value) const { qwebengineview_actionevent_isbase = value; }
    void setQWebEngineView_NativeEvent_IsBase(bool value) const { qwebengineview_nativeevent_isbase = value; }
    void setQWebEngineView_ChangeEvent_IsBase(bool value) const { qwebengineview_changeevent_isbase = value; }
    void setQWebEngineView_Metric_IsBase(bool value) const { qwebengineview_metric_isbase = value; }
    void setQWebEngineView_InitPainter_IsBase(bool value) const { qwebengineview_initpainter_isbase = value; }
    void setQWebEngineView_Redirected_IsBase(bool value) const { qwebengineview_redirected_isbase = value; }
    void setQWebEngineView_SharedPainter_IsBase(bool value) const { qwebengineview_sharedpainter_isbase = value; }
    void setQWebEngineView_InputMethodEvent_IsBase(bool value) const { qwebengineview_inputmethodevent_isbase = value; }
    void setQWebEngineView_InputMethodQuery_IsBase(bool value) const { qwebengineview_inputmethodquery_isbase = value; }
    void setQWebEngineView_FocusNextPrevChild_IsBase(bool value) const { qwebengineview_focusnextprevchild_isbase = value; }
    void setQWebEngineView_EventFilter_IsBase(bool value) const { qwebengineview_eventfilter_isbase = value; }
    void setQWebEngineView_TimerEvent_IsBase(bool value) const { qwebengineview_timerevent_isbase = value; }
    void setQWebEngineView_ChildEvent_IsBase(bool value) const { qwebengineview_childevent_isbase = value; }
    void setQWebEngineView_CustomEvent_IsBase(bool value) const { qwebengineview_customevent_isbase = value; }
    void setQWebEngineView_ConnectNotify_IsBase(bool value) const { qwebengineview_connectnotify_isbase = value; }
    void setQWebEngineView_DisconnectNotify_IsBase(bool value) const { qwebengineview_disconnectnotify_isbase = value; }
    void setQWebEngineView_UpdateMicroFocus_IsBase(bool value) const { qwebengineview_updatemicrofocus_isbase = value; }
    void setQWebEngineView_Create_IsBase(bool value) const { qwebengineview_create_isbase = value; }
    void setQWebEngineView_Destroy_IsBase(bool value) const { qwebengineview_destroy_isbase = value; }
    void setQWebEngineView_FocusNextChild_IsBase(bool value) const { qwebengineview_focusnextchild_isbase = value; }
    void setQWebEngineView_FocusPreviousChild_IsBase(bool value) const { qwebengineview_focuspreviouschild_isbase = value; }
    void setQWebEngineView_Sender_IsBase(bool value) const { qwebengineview_sender_isbase = value; }
    void setQWebEngineView_SenderSignalIndex_IsBase(bool value) const { qwebengineview_sendersignalindex_isbase = value; }
    void setQWebEngineView_Receivers_IsBase(bool value) const { qwebengineview_receivers_isbase = value; }
    void setQWebEngineView_IsSignalConnected_IsBase(bool value) const { qwebengineview_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwebengineview_metacall_isbase) {
            qwebengineview_metacall_isbase = false;
            return QWebEngineView::qt_metacall(param1, param2, param3);
        } else if (qwebengineview_metacall_callback != nullptr) {
            return qwebengineview_metacall_callback(this, param1, param2, param3);
        } else {
            return QWebEngineView::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qwebengineview_sizehint_isbase) {
            qwebengineview_sizehint_isbase = false;
            return QWebEngineView::sizeHint();
        } else if (qwebengineview_sizehint_callback != nullptr) {
            return qwebengineview_sizehint_callback();
        } else {
            return QWebEngineView::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWebEngineView* createWindow(QWebEnginePage::WebWindowType typeVal) override {
        if (qwebengineview_createwindow_isbase) {
            qwebengineview_createwindow_isbase = false;
            return QWebEngineView::createWindow(typeVal);
        } else if (qwebengineview_createwindow_callback != nullptr) {
            return qwebengineview_createwindow_callback(this, typeVal);
        } else {
            return QWebEngineView::createWindow(typeVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qwebengineview_contextmenuevent_isbase) {
            qwebengineview_contextmenuevent_isbase = false;
            QWebEngineView::contextMenuEvent(param1);
        } else if (qwebengineview_contextmenuevent_callback != nullptr) {
            qwebengineview_contextmenuevent_callback(this, param1);
        } else {
            QWebEngineView::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qwebengineview_event_isbase) {
            qwebengineview_event_isbase = false;
            return QWebEngineView::event(param1);
        } else if (qwebengineview_event_callback != nullptr) {
            return qwebengineview_event_callback(this, param1);
        } else {
            return QWebEngineView::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qwebengineview_showevent_isbase) {
            qwebengineview_showevent_isbase = false;
            QWebEngineView::showEvent(param1);
        } else if (qwebengineview_showevent_callback != nullptr) {
            qwebengineview_showevent_callback(this, param1);
        } else {
            QWebEngineView::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (qwebengineview_hideevent_isbase) {
            qwebengineview_hideevent_isbase = false;
            QWebEngineView::hideEvent(param1);
        } else if (qwebengineview_hideevent_callback != nullptr) {
            qwebengineview_hideevent_callback(this, param1);
        } else {
            QWebEngineView::hideEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qwebengineview_closeevent_isbase) {
            qwebengineview_closeevent_isbase = false;
            QWebEngineView::closeEvent(param1);
        } else if (qwebengineview_closeevent_callback != nullptr) {
            qwebengineview_closeevent_callback(this, param1);
        } else {
            QWebEngineView::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (qwebengineview_dragenterevent_isbase) {
            qwebengineview_dragenterevent_isbase = false;
            QWebEngineView::dragEnterEvent(e);
        } else if (qwebengineview_dragenterevent_callback != nullptr) {
            qwebengineview_dragenterevent_callback(this, e);
        } else {
            QWebEngineView::dragEnterEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qwebengineview_dragleaveevent_isbase) {
            qwebengineview_dragleaveevent_isbase = false;
            QWebEngineView::dragLeaveEvent(e);
        } else if (qwebengineview_dragleaveevent_callback != nullptr) {
            qwebengineview_dragleaveevent_callback(this, e);
        } else {
            QWebEngineView::dragLeaveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qwebengineview_dragmoveevent_isbase) {
            qwebengineview_dragmoveevent_isbase = false;
            QWebEngineView::dragMoveEvent(e);
        } else if (qwebengineview_dragmoveevent_callback != nullptr) {
            qwebengineview_dragmoveevent_callback(this, e);
        } else {
            QWebEngineView::dragMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (qwebengineview_dropevent_isbase) {
            qwebengineview_dropevent_isbase = false;
            QWebEngineView::dropEvent(e);
        } else if (qwebengineview_dropevent_callback != nullptr) {
            qwebengineview_dropevent_callback(this, e);
        } else {
            QWebEngineView::dropEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qwebengineview_devtype_isbase) {
            qwebengineview_devtype_isbase = false;
            return QWebEngineView::devType();
        } else if (qwebengineview_devtype_callback != nullptr) {
            return qwebengineview_devtype_callback();
        } else {
            return QWebEngineView::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qwebengineview_setvisible_isbase) {
            qwebengineview_setvisible_isbase = false;
            QWebEngineView::setVisible(visible);
        } else if (qwebengineview_setvisible_callback != nullptr) {
            qwebengineview_setvisible_callback(this, visible);
        } else {
            QWebEngineView::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qwebengineview_minimumsizehint_isbase) {
            qwebengineview_minimumsizehint_isbase = false;
            return QWebEngineView::minimumSizeHint();
        } else if (qwebengineview_minimumsizehint_callback != nullptr) {
            return qwebengineview_minimumsizehint_callback();
        } else {
            return QWebEngineView::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qwebengineview_heightforwidth_isbase) {
            qwebengineview_heightforwidth_isbase = false;
            return QWebEngineView::heightForWidth(param1);
        } else if (qwebengineview_heightforwidth_callback != nullptr) {
            return qwebengineview_heightforwidth_callback(this, param1);
        } else {
            return QWebEngineView::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qwebengineview_hasheightforwidth_isbase) {
            qwebengineview_hasheightforwidth_isbase = false;
            return QWebEngineView::hasHeightForWidth();
        } else if (qwebengineview_hasheightforwidth_callback != nullptr) {
            return qwebengineview_hasheightforwidth_callback();
        } else {
            return QWebEngineView::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qwebengineview_paintengine_isbase) {
            qwebengineview_paintengine_isbase = false;
            return QWebEngineView::paintEngine();
        } else if (qwebengineview_paintengine_callback != nullptr) {
            return qwebengineview_paintengine_callback();
        } else {
            return QWebEngineView::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qwebengineview_mousepressevent_isbase) {
            qwebengineview_mousepressevent_isbase = false;
            QWebEngineView::mousePressEvent(event);
        } else if (qwebengineview_mousepressevent_callback != nullptr) {
            qwebengineview_mousepressevent_callback(this, event);
        } else {
            QWebEngineView::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qwebengineview_mousereleaseevent_isbase) {
            qwebengineview_mousereleaseevent_isbase = false;
            QWebEngineView::mouseReleaseEvent(event);
        } else if (qwebengineview_mousereleaseevent_callback != nullptr) {
            qwebengineview_mousereleaseevent_callback(this, event);
        } else {
            QWebEngineView::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qwebengineview_mousedoubleclickevent_isbase) {
            qwebengineview_mousedoubleclickevent_isbase = false;
            QWebEngineView::mouseDoubleClickEvent(event);
        } else if (qwebengineview_mousedoubleclickevent_callback != nullptr) {
            qwebengineview_mousedoubleclickevent_callback(this, event);
        } else {
            QWebEngineView::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qwebengineview_mousemoveevent_isbase) {
            qwebengineview_mousemoveevent_isbase = false;
            QWebEngineView::mouseMoveEvent(event);
        } else if (qwebengineview_mousemoveevent_callback != nullptr) {
            qwebengineview_mousemoveevent_callback(this, event);
        } else {
            QWebEngineView::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qwebengineview_wheelevent_isbase) {
            qwebengineview_wheelevent_isbase = false;
            QWebEngineView::wheelEvent(event);
        } else if (qwebengineview_wheelevent_callback != nullptr) {
            qwebengineview_wheelevent_callback(this, event);
        } else {
            QWebEngineView::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qwebengineview_keypressevent_isbase) {
            qwebengineview_keypressevent_isbase = false;
            QWebEngineView::keyPressEvent(event);
        } else if (qwebengineview_keypressevent_callback != nullptr) {
            qwebengineview_keypressevent_callback(this, event);
        } else {
            QWebEngineView::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qwebengineview_keyreleaseevent_isbase) {
            qwebengineview_keyreleaseevent_isbase = false;
            QWebEngineView::keyReleaseEvent(event);
        } else if (qwebengineview_keyreleaseevent_callback != nullptr) {
            qwebengineview_keyreleaseevent_callback(this, event);
        } else {
            QWebEngineView::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qwebengineview_focusinevent_isbase) {
            qwebengineview_focusinevent_isbase = false;
            QWebEngineView::focusInEvent(event);
        } else if (qwebengineview_focusinevent_callback != nullptr) {
            qwebengineview_focusinevent_callback(this, event);
        } else {
            QWebEngineView::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qwebengineview_focusoutevent_isbase) {
            qwebengineview_focusoutevent_isbase = false;
            QWebEngineView::focusOutEvent(event);
        } else if (qwebengineview_focusoutevent_callback != nullptr) {
            qwebengineview_focusoutevent_callback(this, event);
        } else {
            QWebEngineView::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qwebengineview_enterevent_isbase) {
            qwebengineview_enterevent_isbase = false;
            QWebEngineView::enterEvent(event);
        } else if (qwebengineview_enterevent_callback != nullptr) {
            qwebengineview_enterevent_callback(this, event);
        } else {
            QWebEngineView::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qwebengineview_leaveevent_isbase) {
            qwebengineview_leaveevent_isbase = false;
            QWebEngineView::leaveEvent(event);
        } else if (qwebengineview_leaveevent_callback != nullptr) {
            qwebengineview_leaveevent_callback(this, event);
        } else {
            QWebEngineView::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qwebengineview_paintevent_isbase) {
            qwebengineview_paintevent_isbase = false;
            QWebEngineView::paintEvent(event);
        } else if (qwebengineview_paintevent_callback != nullptr) {
            qwebengineview_paintevent_callback(this, event);
        } else {
            QWebEngineView::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qwebengineview_moveevent_isbase) {
            qwebengineview_moveevent_isbase = false;
            QWebEngineView::moveEvent(event);
        } else if (qwebengineview_moveevent_callback != nullptr) {
            qwebengineview_moveevent_callback(this, event);
        } else {
            QWebEngineView::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qwebengineview_resizeevent_isbase) {
            qwebengineview_resizeevent_isbase = false;
            QWebEngineView::resizeEvent(event);
        } else if (qwebengineview_resizeevent_callback != nullptr) {
            qwebengineview_resizeevent_callback(this, event);
        } else {
            QWebEngineView::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qwebengineview_tabletevent_isbase) {
            qwebengineview_tabletevent_isbase = false;
            QWebEngineView::tabletEvent(event);
        } else if (qwebengineview_tabletevent_callback != nullptr) {
            qwebengineview_tabletevent_callback(this, event);
        } else {
            QWebEngineView::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qwebengineview_actionevent_isbase) {
            qwebengineview_actionevent_isbase = false;
            QWebEngineView::actionEvent(event);
        } else if (qwebengineview_actionevent_callback != nullptr) {
            qwebengineview_actionevent_callback(this, event);
        } else {
            QWebEngineView::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qwebengineview_nativeevent_isbase) {
            qwebengineview_nativeevent_isbase = false;
            return QWebEngineView::nativeEvent(eventType, message, result);
        } else if (qwebengineview_nativeevent_callback != nullptr) {
            return qwebengineview_nativeevent_callback(this, eventType, message, result);
        } else {
            return QWebEngineView::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qwebengineview_changeevent_isbase) {
            qwebengineview_changeevent_isbase = false;
            QWebEngineView::changeEvent(param1);
        } else if (qwebengineview_changeevent_callback != nullptr) {
            qwebengineview_changeevent_callback(this, param1);
        } else {
            QWebEngineView::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qwebengineview_metric_isbase) {
            qwebengineview_metric_isbase = false;
            return QWebEngineView::metric(param1);
        } else if (qwebengineview_metric_callback != nullptr) {
            return qwebengineview_metric_callback(this, param1);
        } else {
            return QWebEngineView::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qwebengineview_initpainter_isbase) {
            qwebengineview_initpainter_isbase = false;
            QWebEngineView::initPainter(painter);
        } else if (qwebengineview_initpainter_callback != nullptr) {
            qwebengineview_initpainter_callback(this, painter);
        } else {
            QWebEngineView::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qwebengineview_redirected_isbase) {
            qwebengineview_redirected_isbase = false;
            return QWebEngineView::redirected(offset);
        } else if (qwebengineview_redirected_callback != nullptr) {
            return qwebengineview_redirected_callback(this, offset);
        } else {
            return QWebEngineView::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qwebengineview_sharedpainter_isbase) {
            qwebengineview_sharedpainter_isbase = false;
            return QWebEngineView::sharedPainter();
        } else if (qwebengineview_sharedpainter_callback != nullptr) {
            return qwebengineview_sharedpainter_callback();
        } else {
            return QWebEngineView::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qwebengineview_inputmethodevent_isbase) {
            qwebengineview_inputmethodevent_isbase = false;
            QWebEngineView::inputMethodEvent(param1);
        } else if (qwebengineview_inputmethodevent_callback != nullptr) {
            qwebengineview_inputmethodevent_callback(this, param1);
        } else {
            QWebEngineView::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qwebengineview_inputmethodquery_isbase) {
            qwebengineview_inputmethodquery_isbase = false;
            return QWebEngineView::inputMethodQuery(param1);
        } else if (qwebengineview_inputmethodquery_callback != nullptr) {
            return qwebengineview_inputmethodquery_callback(this, param1);
        } else {
            return QWebEngineView::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qwebengineview_focusnextprevchild_isbase) {
            qwebengineview_focusnextprevchild_isbase = false;
            return QWebEngineView::focusNextPrevChild(next);
        } else if (qwebengineview_focusnextprevchild_callback != nullptr) {
            return qwebengineview_focusnextprevchild_callback(this, next);
        } else {
            return QWebEngineView::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwebengineview_eventfilter_isbase) {
            qwebengineview_eventfilter_isbase = false;
            return QWebEngineView::eventFilter(watched, event);
        } else if (qwebengineview_eventfilter_callback != nullptr) {
            return qwebengineview_eventfilter_callback(this, watched, event);
        } else {
            return QWebEngineView::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwebengineview_timerevent_isbase) {
            qwebengineview_timerevent_isbase = false;
            QWebEngineView::timerEvent(event);
        } else if (qwebengineview_timerevent_callback != nullptr) {
            qwebengineview_timerevent_callback(this, event);
        } else {
            QWebEngineView::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwebengineview_childevent_isbase) {
            qwebengineview_childevent_isbase = false;
            QWebEngineView::childEvent(event);
        } else if (qwebengineview_childevent_callback != nullptr) {
            qwebengineview_childevent_callback(this, event);
        } else {
            QWebEngineView::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwebengineview_customevent_isbase) {
            qwebengineview_customevent_isbase = false;
            QWebEngineView::customEvent(event);
        } else if (qwebengineview_customevent_callback != nullptr) {
            qwebengineview_customevent_callback(this, event);
        } else {
            QWebEngineView::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwebengineview_connectnotify_isbase) {
            qwebengineview_connectnotify_isbase = false;
            QWebEngineView::connectNotify(signal);
        } else if (qwebengineview_connectnotify_callback != nullptr) {
            qwebengineview_connectnotify_callback(this, signal);
        } else {
            QWebEngineView::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwebengineview_disconnectnotify_isbase) {
            qwebengineview_disconnectnotify_isbase = false;
            QWebEngineView::disconnectNotify(signal);
        } else if (qwebengineview_disconnectnotify_callback != nullptr) {
            qwebengineview_disconnectnotify_callback(this, signal);
        } else {
            QWebEngineView::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qwebengineview_updatemicrofocus_isbase) {
            qwebengineview_updatemicrofocus_isbase = false;
            QWebEngineView::updateMicroFocus();
        } else if (qwebengineview_updatemicrofocus_callback != nullptr) {
            qwebengineview_updatemicrofocus_callback();
        } else {
            QWebEngineView::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qwebengineview_create_isbase) {
            qwebengineview_create_isbase = false;
            QWebEngineView::create();
        } else if (qwebengineview_create_callback != nullptr) {
            qwebengineview_create_callback();
        } else {
            QWebEngineView::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qwebengineview_destroy_isbase) {
            qwebengineview_destroy_isbase = false;
            QWebEngineView::destroy();
        } else if (qwebengineview_destroy_callback != nullptr) {
            qwebengineview_destroy_callback();
        } else {
            QWebEngineView::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qwebengineview_focusnextchild_isbase) {
            qwebengineview_focusnextchild_isbase = false;
            return QWebEngineView::focusNextChild();
        } else if (qwebengineview_focusnextchild_callback != nullptr) {
            return qwebengineview_focusnextchild_callback();
        } else {
            return QWebEngineView::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qwebengineview_focuspreviouschild_isbase) {
            qwebengineview_focuspreviouschild_isbase = false;
            return QWebEngineView::focusPreviousChild();
        } else if (qwebengineview_focuspreviouschild_callback != nullptr) {
            return qwebengineview_focuspreviouschild_callback();
        } else {
            return QWebEngineView::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qwebengineview_sender_isbase) {
            qwebengineview_sender_isbase = false;
            return QWebEngineView::sender();
        } else if (qwebengineview_sender_callback != nullptr) {
            return qwebengineview_sender_callback();
        } else {
            return QWebEngineView::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qwebengineview_sendersignalindex_isbase) {
            qwebengineview_sendersignalindex_isbase = false;
            return QWebEngineView::senderSignalIndex();
        } else if (qwebengineview_sendersignalindex_callback != nullptr) {
            return qwebengineview_sendersignalindex_callback();
        } else {
            return QWebEngineView::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qwebengineview_receivers_isbase) {
            qwebengineview_receivers_isbase = false;
            return QWebEngineView::receivers(signal);
        } else if (qwebengineview_receivers_callback != nullptr) {
            return qwebengineview_receivers_callback(this, signal);
        } else {
            return QWebEngineView::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qwebengineview_issignalconnected_isbase) {
            qwebengineview_issignalconnected_isbase = false;
            return QWebEngineView::isSignalConnected(signal);
        } else if (qwebengineview_issignalconnected_callback != nullptr) {
            return qwebengineview_issignalconnected_callback(this, signal);
        } else {
            return QWebEngineView::isSignalConnected(signal);
        }
    }
};

#endif

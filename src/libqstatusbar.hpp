#pragma once
#ifndef SRCC_LIBQSTATUSBAR_HPP
#define SRCC_LIBQSTATUSBAR_HPP

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStatusBar QStatusBar;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QStatusBar* QStatusBar_new(QWidget* parent);
QStatusBar* QStatusBar_new2();
QMetaObject* QStatusBar_MetaObject(const QStatusBar* self);
void* QStatusBar_Metacast(QStatusBar* self, const char* param1);
int QStatusBar_Metacall(QStatusBar* self, int param1, int param2, void** param3);
void QStatusBar_OnMetacall(QStatusBar* self, intptr_t slot);
int QStatusBar_QBaseMetacall(QStatusBar* self, int param1, int param2, void** param3);
libqt_string QStatusBar_Tr(const char* s);
void QStatusBar_AddWidget(QStatusBar* self, QWidget* widget);
int QStatusBar_InsertWidget(QStatusBar* self, int index, QWidget* widget);
void QStatusBar_AddPermanentWidget(QStatusBar* self, QWidget* widget);
int QStatusBar_InsertPermanentWidget(QStatusBar* self, int index, QWidget* widget);
void QStatusBar_RemoveWidget(QStatusBar* self, QWidget* widget);
void QStatusBar_SetSizeGripEnabled(QStatusBar* self, bool sizeGripEnabled);
bool QStatusBar_IsSizeGripEnabled(const QStatusBar* self);
libqt_string QStatusBar_CurrentMessage(const QStatusBar* self);
void QStatusBar_ShowMessage(QStatusBar* self, const libqt_string text);
void QStatusBar_ClearMessage(QStatusBar* self);
void QStatusBar_MessageChanged(QStatusBar* self, const libqt_string text);
void QStatusBar_Connect_MessageChanged(QStatusBar* self, intptr_t slot);
void QStatusBar_ShowEvent(QStatusBar* self, QShowEvent* param1);
void QStatusBar_OnShowEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseShowEvent(QStatusBar* self, QShowEvent* param1);
void QStatusBar_PaintEvent(QStatusBar* self, QPaintEvent* param1);
void QStatusBar_OnPaintEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBasePaintEvent(QStatusBar* self, QPaintEvent* param1);
void QStatusBar_ResizeEvent(QStatusBar* self, QResizeEvent* param1);
void QStatusBar_OnResizeEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseResizeEvent(QStatusBar* self, QResizeEvent* param1);
bool QStatusBar_Event(QStatusBar* self, QEvent* param1);
void QStatusBar_OnEvent(QStatusBar* self, intptr_t slot);
bool QStatusBar_QBaseEvent(QStatusBar* self, QEvent* param1);
libqt_string QStatusBar_Tr2(const char* s, const char* c);
libqt_string QStatusBar_Tr3(const char* s, const char* c, int n);
void QStatusBar_AddWidget2(QStatusBar* self, QWidget* widget, int stretch);
int QStatusBar_InsertWidget3(QStatusBar* self, int index, QWidget* widget, int stretch);
void QStatusBar_AddPermanentWidget2(QStatusBar* self, QWidget* widget, int stretch);
int QStatusBar_InsertPermanentWidget3(QStatusBar* self, int index, QWidget* widget, int stretch);
void QStatusBar_ShowMessage2(QStatusBar* self, const libqt_string text, int timeout);
int QStatusBar_DevType(const QStatusBar* self);
void QStatusBar_OnDevType(const QStatusBar* self, intptr_t slot);
int QStatusBar_QBaseDevType(const QStatusBar* self);
void QStatusBar_SetVisible(QStatusBar* self, bool visible);
void QStatusBar_OnSetVisible(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseSetVisible(QStatusBar* self, bool visible);
QSize* QStatusBar_SizeHint(const QStatusBar* self);
void QStatusBar_OnSizeHint(const QStatusBar* self, intptr_t slot);
QSize* QStatusBar_QBaseSizeHint(const QStatusBar* self);
QSize* QStatusBar_MinimumSizeHint(const QStatusBar* self);
void QStatusBar_OnMinimumSizeHint(const QStatusBar* self, intptr_t slot);
QSize* QStatusBar_QBaseMinimumSizeHint(const QStatusBar* self);
int QStatusBar_HeightForWidth(const QStatusBar* self, int param1);
void QStatusBar_OnHeightForWidth(const QStatusBar* self, intptr_t slot);
int QStatusBar_QBaseHeightForWidth(const QStatusBar* self, int param1);
bool QStatusBar_HasHeightForWidth(const QStatusBar* self);
void QStatusBar_OnHasHeightForWidth(const QStatusBar* self, intptr_t slot);
bool QStatusBar_QBaseHasHeightForWidth(const QStatusBar* self);
QPaintEngine* QStatusBar_PaintEngine(const QStatusBar* self);
void QStatusBar_OnPaintEngine(const QStatusBar* self, intptr_t slot);
QPaintEngine* QStatusBar_QBasePaintEngine(const QStatusBar* self);
void QStatusBar_MousePressEvent(QStatusBar* self, QMouseEvent* event);
void QStatusBar_OnMousePressEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseMousePressEvent(QStatusBar* self, QMouseEvent* event);
void QStatusBar_MouseReleaseEvent(QStatusBar* self, QMouseEvent* event);
void QStatusBar_OnMouseReleaseEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseMouseReleaseEvent(QStatusBar* self, QMouseEvent* event);
void QStatusBar_MouseDoubleClickEvent(QStatusBar* self, QMouseEvent* event);
void QStatusBar_OnMouseDoubleClickEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseMouseDoubleClickEvent(QStatusBar* self, QMouseEvent* event);
void QStatusBar_MouseMoveEvent(QStatusBar* self, QMouseEvent* event);
void QStatusBar_OnMouseMoveEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseMouseMoveEvent(QStatusBar* self, QMouseEvent* event);
void QStatusBar_WheelEvent(QStatusBar* self, QWheelEvent* event);
void QStatusBar_OnWheelEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseWheelEvent(QStatusBar* self, QWheelEvent* event);
void QStatusBar_KeyPressEvent(QStatusBar* self, QKeyEvent* event);
void QStatusBar_OnKeyPressEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseKeyPressEvent(QStatusBar* self, QKeyEvent* event);
void QStatusBar_KeyReleaseEvent(QStatusBar* self, QKeyEvent* event);
void QStatusBar_OnKeyReleaseEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseKeyReleaseEvent(QStatusBar* self, QKeyEvent* event);
void QStatusBar_FocusInEvent(QStatusBar* self, QFocusEvent* event);
void QStatusBar_OnFocusInEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseFocusInEvent(QStatusBar* self, QFocusEvent* event);
void QStatusBar_FocusOutEvent(QStatusBar* self, QFocusEvent* event);
void QStatusBar_OnFocusOutEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseFocusOutEvent(QStatusBar* self, QFocusEvent* event);
void QStatusBar_EnterEvent(QStatusBar* self, QEnterEvent* event);
void QStatusBar_OnEnterEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseEnterEvent(QStatusBar* self, QEnterEvent* event);
void QStatusBar_LeaveEvent(QStatusBar* self, QEvent* event);
void QStatusBar_OnLeaveEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseLeaveEvent(QStatusBar* self, QEvent* event);
void QStatusBar_MoveEvent(QStatusBar* self, QMoveEvent* event);
void QStatusBar_OnMoveEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseMoveEvent(QStatusBar* self, QMoveEvent* event);
void QStatusBar_CloseEvent(QStatusBar* self, QCloseEvent* event);
void QStatusBar_OnCloseEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseCloseEvent(QStatusBar* self, QCloseEvent* event);
void QStatusBar_ContextMenuEvent(QStatusBar* self, QContextMenuEvent* event);
void QStatusBar_OnContextMenuEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseContextMenuEvent(QStatusBar* self, QContextMenuEvent* event);
void QStatusBar_TabletEvent(QStatusBar* self, QTabletEvent* event);
void QStatusBar_OnTabletEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseTabletEvent(QStatusBar* self, QTabletEvent* event);
void QStatusBar_ActionEvent(QStatusBar* self, QActionEvent* event);
void QStatusBar_OnActionEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseActionEvent(QStatusBar* self, QActionEvent* event);
void QStatusBar_DragEnterEvent(QStatusBar* self, QDragEnterEvent* event);
void QStatusBar_OnDragEnterEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseDragEnterEvent(QStatusBar* self, QDragEnterEvent* event);
void QStatusBar_DragMoveEvent(QStatusBar* self, QDragMoveEvent* event);
void QStatusBar_OnDragMoveEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseDragMoveEvent(QStatusBar* self, QDragMoveEvent* event);
void QStatusBar_DragLeaveEvent(QStatusBar* self, QDragLeaveEvent* event);
void QStatusBar_OnDragLeaveEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseDragLeaveEvent(QStatusBar* self, QDragLeaveEvent* event);
void QStatusBar_DropEvent(QStatusBar* self, QDropEvent* event);
void QStatusBar_OnDropEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseDropEvent(QStatusBar* self, QDropEvent* event);
void QStatusBar_HideEvent(QStatusBar* self, QHideEvent* event);
void QStatusBar_OnHideEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseHideEvent(QStatusBar* self, QHideEvent* event);
bool QStatusBar_NativeEvent(QStatusBar* self, const libqt_string eventType, void* message, intptr_t* result);
void QStatusBar_OnNativeEvent(QStatusBar* self, intptr_t slot);
bool QStatusBar_QBaseNativeEvent(QStatusBar* self, const libqt_string eventType, void* message, intptr_t* result);
void QStatusBar_ChangeEvent(QStatusBar* self, QEvent* param1);
void QStatusBar_OnChangeEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseChangeEvent(QStatusBar* self, QEvent* param1);
int QStatusBar_Metric(const QStatusBar* self, int param1);
void QStatusBar_OnMetric(const QStatusBar* self, intptr_t slot);
int QStatusBar_QBaseMetric(const QStatusBar* self, int param1);
void QStatusBar_InitPainter(const QStatusBar* self, QPainter* painter);
void QStatusBar_OnInitPainter(const QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseInitPainter(const QStatusBar* self, QPainter* painter);
QPaintDevice* QStatusBar_Redirected(const QStatusBar* self, QPoint* offset);
void QStatusBar_OnRedirected(const QStatusBar* self, intptr_t slot);
QPaintDevice* QStatusBar_QBaseRedirected(const QStatusBar* self, QPoint* offset);
QPainter* QStatusBar_SharedPainter(const QStatusBar* self);
void QStatusBar_OnSharedPainter(const QStatusBar* self, intptr_t slot);
QPainter* QStatusBar_QBaseSharedPainter(const QStatusBar* self);
void QStatusBar_InputMethodEvent(QStatusBar* self, QInputMethodEvent* param1);
void QStatusBar_OnInputMethodEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseInputMethodEvent(QStatusBar* self, QInputMethodEvent* param1);
QVariant* QStatusBar_InputMethodQuery(const QStatusBar* self, int param1);
void QStatusBar_OnInputMethodQuery(const QStatusBar* self, intptr_t slot);
QVariant* QStatusBar_QBaseInputMethodQuery(const QStatusBar* self, int param1);
bool QStatusBar_FocusNextPrevChild(QStatusBar* self, bool next);
void QStatusBar_OnFocusNextPrevChild(QStatusBar* self, intptr_t slot);
bool QStatusBar_QBaseFocusNextPrevChild(QStatusBar* self, bool next);
bool QStatusBar_EventFilter(QStatusBar* self, QObject* watched, QEvent* event);
void QStatusBar_OnEventFilter(QStatusBar* self, intptr_t slot);
bool QStatusBar_QBaseEventFilter(QStatusBar* self, QObject* watched, QEvent* event);
void QStatusBar_TimerEvent(QStatusBar* self, QTimerEvent* event);
void QStatusBar_OnTimerEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseTimerEvent(QStatusBar* self, QTimerEvent* event);
void QStatusBar_ChildEvent(QStatusBar* self, QChildEvent* event);
void QStatusBar_OnChildEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseChildEvent(QStatusBar* self, QChildEvent* event);
void QStatusBar_CustomEvent(QStatusBar* self, QEvent* event);
void QStatusBar_OnCustomEvent(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseCustomEvent(QStatusBar* self, QEvent* event);
void QStatusBar_ConnectNotify(QStatusBar* self, const QMetaMethod* signal);
void QStatusBar_OnConnectNotify(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseConnectNotify(QStatusBar* self, const QMetaMethod* signal);
void QStatusBar_DisconnectNotify(QStatusBar* self, const QMetaMethod* signal);
void QStatusBar_OnDisconnectNotify(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseDisconnectNotify(QStatusBar* self, const QMetaMethod* signal);
void QStatusBar_Reformat(QStatusBar* self);
void QStatusBar_OnReformat(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseReformat(QStatusBar* self);
void QStatusBar_HideOrShow(QStatusBar* self);
void QStatusBar_OnHideOrShow(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseHideOrShow(QStatusBar* self);
void QStatusBar_UpdateMicroFocus(QStatusBar* self);
void QStatusBar_OnUpdateMicroFocus(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseUpdateMicroFocus(QStatusBar* self);
void QStatusBar_Create(QStatusBar* self);
void QStatusBar_OnCreate(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseCreate(QStatusBar* self);
void QStatusBar_Destroy(QStatusBar* self);
void QStatusBar_OnDestroy(QStatusBar* self, intptr_t slot);
void QStatusBar_QBaseDestroy(QStatusBar* self);
bool QStatusBar_FocusNextChild(QStatusBar* self);
void QStatusBar_OnFocusNextChild(QStatusBar* self, intptr_t slot);
bool QStatusBar_QBaseFocusNextChild(QStatusBar* self);
bool QStatusBar_FocusPreviousChild(QStatusBar* self);
void QStatusBar_OnFocusPreviousChild(QStatusBar* self, intptr_t slot);
bool QStatusBar_QBaseFocusPreviousChild(QStatusBar* self);
QObject* QStatusBar_Sender(const QStatusBar* self);
void QStatusBar_OnSender(const QStatusBar* self, intptr_t slot);
QObject* QStatusBar_QBaseSender(const QStatusBar* self);
int QStatusBar_SenderSignalIndex(const QStatusBar* self);
void QStatusBar_OnSenderSignalIndex(const QStatusBar* self, intptr_t slot);
int QStatusBar_QBaseSenderSignalIndex(const QStatusBar* self);
int QStatusBar_Receivers(const QStatusBar* self, const char* signal);
void QStatusBar_OnReceivers(const QStatusBar* self, intptr_t slot);
int QStatusBar_QBaseReceivers(const QStatusBar* self, const char* signal);
bool QStatusBar_IsSignalConnected(const QStatusBar* self, const QMetaMethod* signal);
void QStatusBar_OnIsSignalConnected(const QStatusBar* self, intptr_t slot);
bool QStatusBar_QBaseIsSignalConnected(const QStatusBar* self, const QMetaMethod* signal);
double QStatusBar_GetDecodedMetricF(const QStatusBar* self, int metricA, int metricB);
void QStatusBar_OnGetDecodedMetricF(const QStatusBar* self, intptr_t slot);
double QStatusBar_QBaseGetDecodedMetricF(const QStatusBar* self, int metricA, int metricB);
void QStatusBar_Delete(QStatusBar* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif

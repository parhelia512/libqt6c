#pragma once
#ifndef SRCC_LIBQTEXTBROWSER_HPP
#define SRCC_LIBQTEXTBROWSER_HPP

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
typedef struct QAbstractScrollArea QAbstractScrollArea;
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
typedef struct QFrame QFrame;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMargins QMargins;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
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
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTextBrowser QTextBrowser;
typedef struct QTextCursor QTextCursor;
typedef struct QTextEdit QTextEdit;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QTextBrowser* QTextBrowser_new(QWidget* parent);
QTextBrowser* QTextBrowser_new2();
QMetaObject* QTextBrowser_MetaObject(const QTextBrowser* self);
void* QTextBrowser_Metacast(QTextBrowser* self, const char* param1);
int QTextBrowser_Metacall(QTextBrowser* self, int param1, int param2, void** param3);
void QTextBrowser_OnMetacall(QTextBrowser* self, intptr_t slot);
int QTextBrowser_QBaseMetacall(QTextBrowser* self, int param1, int param2, void** param3);
libqt_string QTextBrowser_Tr(const char* s);
QUrl* QTextBrowser_Source(const QTextBrowser* self);
int QTextBrowser_SourceType(const QTextBrowser* self);
libqt_list /* of libqt_string */ QTextBrowser_SearchPaths(const QTextBrowser* self);
void QTextBrowser_SetSearchPaths(QTextBrowser* self, const libqt_list /* of libqt_string */ paths);
QVariant* QTextBrowser_LoadResource(QTextBrowser* self, int typeVal, const QUrl* name);
void QTextBrowser_OnLoadResource(QTextBrowser* self, intptr_t slot);
QVariant* QTextBrowser_QBaseLoadResource(QTextBrowser* self, int typeVal, const QUrl* name);
bool QTextBrowser_IsBackwardAvailable(const QTextBrowser* self);
bool QTextBrowser_IsForwardAvailable(const QTextBrowser* self);
void QTextBrowser_ClearHistory(QTextBrowser* self);
libqt_string QTextBrowser_HistoryTitle(const QTextBrowser* self, int param1);
QUrl* QTextBrowser_HistoryUrl(const QTextBrowser* self, int param1);
int QTextBrowser_BackwardHistoryCount(const QTextBrowser* self);
int QTextBrowser_ForwardHistoryCount(const QTextBrowser* self);
bool QTextBrowser_OpenExternalLinks(const QTextBrowser* self);
void QTextBrowser_SetOpenExternalLinks(QTextBrowser* self, bool open);
bool QTextBrowser_OpenLinks(const QTextBrowser* self);
void QTextBrowser_SetOpenLinks(QTextBrowser* self, bool open);
void QTextBrowser_SetSource(QTextBrowser* self, const QUrl* name);
void QTextBrowser_Backward(QTextBrowser* self);
void QTextBrowser_OnBackward(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseBackward(QTextBrowser* self);
void QTextBrowser_Forward(QTextBrowser* self);
void QTextBrowser_OnForward(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseForward(QTextBrowser* self);
void QTextBrowser_Home(QTextBrowser* self);
void QTextBrowser_OnHome(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseHome(QTextBrowser* self);
void QTextBrowser_Reload(QTextBrowser* self);
void QTextBrowser_OnReload(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseReload(QTextBrowser* self);
void QTextBrowser_BackwardAvailable(QTextBrowser* self, bool param1);
void QTextBrowser_Connect_BackwardAvailable(QTextBrowser* self, intptr_t slot);
void QTextBrowser_ForwardAvailable(QTextBrowser* self, bool param1);
void QTextBrowser_Connect_ForwardAvailable(QTextBrowser* self, intptr_t slot);
void QTextBrowser_HistoryChanged(QTextBrowser* self);
void QTextBrowser_Connect_HistoryChanged(QTextBrowser* self, intptr_t slot);
void QTextBrowser_SourceChanged(QTextBrowser* self, const QUrl* param1);
void QTextBrowser_Connect_SourceChanged(QTextBrowser* self, intptr_t slot);
void QTextBrowser_Highlighted(QTextBrowser* self, const QUrl* param1);
void QTextBrowser_Connect_Highlighted(QTextBrowser* self, intptr_t slot);
void QTextBrowser_AnchorClicked(QTextBrowser* self, const QUrl* param1);
void QTextBrowser_Connect_AnchorClicked(QTextBrowser* self, intptr_t slot);
bool QTextBrowser_Event(QTextBrowser* self, QEvent* e);
void QTextBrowser_OnEvent(QTextBrowser* self, intptr_t slot);
bool QTextBrowser_QBaseEvent(QTextBrowser* self, QEvent* e);
void QTextBrowser_KeyPressEvent(QTextBrowser* self, QKeyEvent* ev);
void QTextBrowser_OnKeyPressEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseKeyPressEvent(QTextBrowser* self, QKeyEvent* ev);
void QTextBrowser_MouseMoveEvent(QTextBrowser* self, QMouseEvent* ev);
void QTextBrowser_OnMouseMoveEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseMouseMoveEvent(QTextBrowser* self, QMouseEvent* ev);
void QTextBrowser_MousePressEvent(QTextBrowser* self, QMouseEvent* ev);
void QTextBrowser_OnMousePressEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseMousePressEvent(QTextBrowser* self, QMouseEvent* ev);
void QTextBrowser_MouseReleaseEvent(QTextBrowser* self, QMouseEvent* ev);
void QTextBrowser_OnMouseReleaseEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseMouseReleaseEvent(QTextBrowser* self, QMouseEvent* ev);
void QTextBrowser_FocusOutEvent(QTextBrowser* self, QFocusEvent* ev);
void QTextBrowser_OnFocusOutEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseFocusOutEvent(QTextBrowser* self, QFocusEvent* ev);
bool QTextBrowser_FocusNextPrevChild(QTextBrowser* self, bool next);
void QTextBrowser_OnFocusNextPrevChild(QTextBrowser* self, intptr_t slot);
bool QTextBrowser_QBaseFocusNextPrevChild(QTextBrowser* self, bool next);
void QTextBrowser_PaintEvent(QTextBrowser* self, QPaintEvent* e);
void QTextBrowser_OnPaintEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBasePaintEvent(QTextBrowser* self, QPaintEvent* e);
void QTextBrowser_DoSetSource(QTextBrowser* self, const QUrl* name, int typeVal);
void QTextBrowser_OnDoSetSource(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseDoSetSource(QTextBrowser* self, const QUrl* name, int typeVal);
libqt_string QTextBrowser_Tr2(const char* s, const char* c);
libqt_string QTextBrowser_Tr3(const char* s, const char* c, int n);
void QTextBrowser_SetSource2(QTextBrowser* self, const QUrl* name, int typeVal);
QVariant* QTextBrowser_InputMethodQuery(const QTextBrowser* self, int property);
void QTextBrowser_OnInputMethodQuery(const QTextBrowser* self, intptr_t slot);
QVariant* QTextBrowser_QBaseInputMethodQuery(const QTextBrowser* self, int property);
void QTextBrowser_TimerEvent(QTextBrowser* self, QTimerEvent* e);
void QTextBrowser_OnTimerEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseTimerEvent(QTextBrowser* self, QTimerEvent* e);
void QTextBrowser_KeyReleaseEvent(QTextBrowser* self, QKeyEvent* e);
void QTextBrowser_OnKeyReleaseEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseKeyReleaseEvent(QTextBrowser* self, QKeyEvent* e);
void QTextBrowser_ResizeEvent(QTextBrowser* self, QResizeEvent* e);
void QTextBrowser_OnResizeEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseResizeEvent(QTextBrowser* self, QResizeEvent* e);
void QTextBrowser_MouseDoubleClickEvent(QTextBrowser* self, QMouseEvent* e);
void QTextBrowser_OnMouseDoubleClickEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseMouseDoubleClickEvent(QTextBrowser* self, QMouseEvent* e);
void QTextBrowser_ContextMenuEvent(QTextBrowser* self, QContextMenuEvent* e);
void QTextBrowser_OnContextMenuEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseContextMenuEvent(QTextBrowser* self, QContextMenuEvent* e);
void QTextBrowser_DragEnterEvent(QTextBrowser* self, QDragEnterEvent* e);
void QTextBrowser_OnDragEnterEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseDragEnterEvent(QTextBrowser* self, QDragEnterEvent* e);
void QTextBrowser_DragLeaveEvent(QTextBrowser* self, QDragLeaveEvent* e);
void QTextBrowser_OnDragLeaveEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseDragLeaveEvent(QTextBrowser* self, QDragLeaveEvent* e);
void QTextBrowser_DragMoveEvent(QTextBrowser* self, QDragMoveEvent* e);
void QTextBrowser_OnDragMoveEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseDragMoveEvent(QTextBrowser* self, QDragMoveEvent* e);
void QTextBrowser_DropEvent(QTextBrowser* self, QDropEvent* e);
void QTextBrowser_OnDropEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseDropEvent(QTextBrowser* self, QDropEvent* e);
void QTextBrowser_FocusInEvent(QTextBrowser* self, QFocusEvent* e);
void QTextBrowser_OnFocusInEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseFocusInEvent(QTextBrowser* self, QFocusEvent* e);
void QTextBrowser_ShowEvent(QTextBrowser* self, QShowEvent* param1);
void QTextBrowser_OnShowEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseShowEvent(QTextBrowser* self, QShowEvent* param1);
void QTextBrowser_ChangeEvent(QTextBrowser* self, QEvent* e);
void QTextBrowser_OnChangeEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseChangeEvent(QTextBrowser* self, QEvent* e);
void QTextBrowser_WheelEvent(QTextBrowser* self, QWheelEvent* e);
void QTextBrowser_OnWheelEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseWheelEvent(QTextBrowser* self, QWheelEvent* e);
QMimeData* QTextBrowser_CreateMimeDataFromSelection(const QTextBrowser* self);
void QTextBrowser_OnCreateMimeDataFromSelection(const QTextBrowser* self, intptr_t slot);
QMimeData* QTextBrowser_QBaseCreateMimeDataFromSelection(const QTextBrowser* self);
bool QTextBrowser_CanInsertFromMimeData(const QTextBrowser* self, const QMimeData* source);
void QTextBrowser_OnCanInsertFromMimeData(const QTextBrowser* self, intptr_t slot);
bool QTextBrowser_QBaseCanInsertFromMimeData(const QTextBrowser* self, const QMimeData* source);
void QTextBrowser_InsertFromMimeData(QTextBrowser* self, const QMimeData* source);
void QTextBrowser_OnInsertFromMimeData(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseInsertFromMimeData(QTextBrowser* self, const QMimeData* source);
void QTextBrowser_InputMethodEvent(QTextBrowser* self, QInputMethodEvent* param1);
void QTextBrowser_OnInputMethodEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseInputMethodEvent(QTextBrowser* self, QInputMethodEvent* param1);
void QTextBrowser_ScrollContentsBy(QTextBrowser* self, int dx, int dy);
void QTextBrowser_OnScrollContentsBy(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseScrollContentsBy(QTextBrowser* self, int dx, int dy);
void QTextBrowser_DoSetTextCursor(QTextBrowser* self, const QTextCursor* cursor);
void QTextBrowser_OnDoSetTextCursor(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseDoSetTextCursor(QTextBrowser* self, const QTextCursor* cursor);
QSize* QTextBrowser_MinimumSizeHint(const QTextBrowser* self);
void QTextBrowser_OnMinimumSizeHint(const QTextBrowser* self, intptr_t slot);
QSize* QTextBrowser_QBaseMinimumSizeHint(const QTextBrowser* self);
QSize* QTextBrowser_SizeHint(const QTextBrowser* self);
void QTextBrowser_OnSizeHint(const QTextBrowser* self, intptr_t slot);
QSize* QTextBrowser_QBaseSizeHint(const QTextBrowser* self);
void QTextBrowser_SetupViewport(QTextBrowser* self, QWidget* viewport);
void QTextBrowser_OnSetupViewport(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseSetupViewport(QTextBrowser* self, QWidget* viewport);
bool QTextBrowser_EventFilter(QTextBrowser* self, QObject* param1, QEvent* param2);
void QTextBrowser_OnEventFilter(QTextBrowser* self, intptr_t slot);
bool QTextBrowser_QBaseEventFilter(QTextBrowser* self, QObject* param1, QEvent* param2);
bool QTextBrowser_ViewportEvent(QTextBrowser* self, QEvent* param1);
void QTextBrowser_OnViewportEvent(QTextBrowser* self, intptr_t slot);
bool QTextBrowser_QBaseViewportEvent(QTextBrowser* self, QEvent* param1);
QSize* QTextBrowser_ViewportSizeHint(const QTextBrowser* self);
void QTextBrowser_OnViewportSizeHint(const QTextBrowser* self, intptr_t slot);
QSize* QTextBrowser_QBaseViewportSizeHint(const QTextBrowser* self);
void QTextBrowser_InitStyleOption(const QTextBrowser* self, QStyleOptionFrame* option);
void QTextBrowser_OnInitStyleOption(const QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseInitStyleOption(const QTextBrowser* self, QStyleOptionFrame* option);
int QTextBrowser_DevType(const QTextBrowser* self);
void QTextBrowser_OnDevType(const QTextBrowser* self, intptr_t slot);
int QTextBrowser_QBaseDevType(const QTextBrowser* self);
void QTextBrowser_SetVisible(QTextBrowser* self, bool visible);
void QTextBrowser_OnSetVisible(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseSetVisible(QTextBrowser* self, bool visible);
int QTextBrowser_HeightForWidth(const QTextBrowser* self, int param1);
void QTextBrowser_OnHeightForWidth(const QTextBrowser* self, intptr_t slot);
int QTextBrowser_QBaseHeightForWidth(const QTextBrowser* self, int param1);
bool QTextBrowser_HasHeightForWidth(const QTextBrowser* self);
void QTextBrowser_OnHasHeightForWidth(const QTextBrowser* self, intptr_t slot);
bool QTextBrowser_QBaseHasHeightForWidth(const QTextBrowser* self);
QPaintEngine* QTextBrowser_PaintEngine(const QTextBrowser* self);
void QTextBrowser_OnPaintEngine(const QTextBrowser* self, intptr_t slot);
QPaintEngine* QTextBrowser_QBasePaintEngine(const QTextBrowser* self);
void QTextBrowser_EnterEvent(QTextBrowser* self, QEnterEvent* event);
void QTextBrowser_OnEnterEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseEnterEvent(QTextBrowser* self, QEnterEvent* event);
void QTextBrowser_LeaveEvent(QTextBrowser* self, QEvent* event);
void QTextBrowser_OnLeaveEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseLeaveEvent(QTextBrowser* self, QEvent* event);
void QTextBrowser_MoveEvent(QTextBrowser* self, QMoveEvent* event);
void QTextBrowser_OnMoveEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseMoveEvent(QTextBrowser* self, QMoveEvent* event);
void QTextBrowser_CloseEvent(QTextBrowser* self, QCloseEvent* event);
void QTextBrowser_OnCloseEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseCloseEvent(QTextBrowser* self, QCloseEvent* event);
void QTextBrowser_TabletEvent(QTextBrowser* self, QTabletEvent* event);
void QTextBrowser_OnTabletEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseTabletEvent(QTextBrowser* self, QTabletEvent* event);
void QTextBrowser_ActionEvent(QTextBrowser* self, QActionEvent* event);
void QTextBrowser_OnActionEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseActionEvent(QTextBrowser* self, QActionEvent* event);
void QTextBrowser_HideEvent(QTextBrowser* self, QHideEvent* event);
void QTextBrowser_OnHideEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseHideEvent(QTextBrowser* self, QHideEvent* event);
bool QTextBrowser_NativeEvent(QTextBrowser* self, const libqt_string eventType, void* message, intptr_t* result);
void QTextBrowser_OnNativeEvent(QTextBrowser* self, intptr_t slot);
bool QTextBrowser_QBaseNativeEvent(QTextBrowser* self, const libqt_string eventType, void* message, intptr_t* result);
int QTextBrowser_Metric(const QTextBrowser* self, int param1);
void QTextBrowser_OnMetric(const QTextBrowser* self, intptr_t slot);
int QTextBrowser_QBaseMetric(const QTextBrowser* self, int param1);
void QTextBrowser_InitPainter(const QTextBrowser* self, QPainter* painter);
void QTextBrowser_OnInitPainter(const QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseInitPainter(const QTextBrowser* self, QPainter* painter);
QPaintDevice* QTextBrowser_Redirected(const QTextBrowser* self, QPoint* offset);
void QTextBrowser_OnRedirected(const QTextBrowser* self, intptr_t slot);
QPaintDevice* QTextBrowser_QBaseRedirected(const QTextBrowser* self, QPoint* offset);
QPainter* QTextBrowser_SharedPainter(const QTextBrowser* self);
void QTextBrowser_OnSharedPainter(const QTextBrowser* self, intptr_t slot);
QPainter* QTextBrowser_QBaseSharedPainter(const QTextBrowser* self);
void QTextBrowser_ChildEvent(QTextBrowser* self, QChildEvent* event);
void QTextBrowser_OnChildEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseChildEvent(QTextBrowser* self, QChildEvent* event);
void QTextBrowser_CustomEvent(QTextBrowser* self, QEvent* event);
void QTextBrowser_OnCustomEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseCustomEvent(QTextBrowser* self, QEvent* event);
void QTextBrowser_ConnectNotify(QTextBrowser* self, const QMetaMethod* signal);
void QTextBrowser_OnConnectNotify(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseConnectNotify(QTextBrowser* self, const QMetaMethod* signal);
void QTextBrowser_DisconnectNotify(QTextBrowser* self, const QMetaMethod* signal);
void QTextBrowser_OnDisconnectNotify(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseDisconnectNotify(QTextBrowser* self, const QMetaMethod* signal);
void QTextBrowser_ZoomInF(QTextBrowser* self, float range);
void QTextBrowser_OnZoomInF(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseZoomInF(QTextBrowser* self, float range);
void QTextBrowser_SetViewportMargins(QTextBrowser* self, int left, int top, int right, int bottom);
void QTextBrowser_OnSetViewportMargins(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseSetViewportMargins(QTextBrowser* self, int left, int top, int right, int bottom);
QMargins* QTextBrowser_ViewportMargins(const QTextBrowser* self);
void QTextBrowser_OnViewportMargins(const QTextBrowser* self, intptr_t slot);
QMargins* QTextBrowser_QBaseViewportMargins(const QTextBrowser* self);
void QTextBrowser_DrawFrame(QTextBrowser* self, QPainter* param1);
void QTextBrowser_OnDrawFrame(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseDrawFrame(QTextBrowser* self, QPainter* param1);
void QTextBrowser_UpdateMicroFocus(QTextBrowser* self);
void QTextBrowser_OnUpdateMicroFocus(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseUpdateMicroFocus(QTextBrowser* self);
void QTextBrowser_Create(QTextBrowser* self);
void QTextBrowser_OnCreate(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseCreate(QTextBrowser* self);
void QTextBrowser_Destroy(QTextBrowser* self);
void QTextBrowser_OnDestroy(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseDestroy(QTextBrowser* self);
bool QTextBrowser_FocusNextChild(QTextBrowser* self);
void QTextBrowser_OnFocusNextChild(QTextBrowser* self, intptr_t slot);
bool QTextBrowser_QBaseFocusNextChild(QTextBrowser* self);
bool QTextBrowser_FocusPreviousChild(QTextBrowser* self);
void QTextBrowser_OnFocusPreviousChild(QTextBrowser* self, intptr_t slot);
bool QTextBrowser_QBaseFocusPreviousChild(QTextBrowser* self);
QObject* QTextBrowser_Sender(const QTextBrowser* self);
void QTextBrowser_OnSender(const QTextBrowser* self, intptr_t slot);
QObject* QTextBrowser_QBaseSender(const QTextBrowser* self);
int QTextBrowser_SenderSignalIndex(const QTextBrowser* self);
void QTextBrowser_OnSenderSignalIndex(const QTextBrowser* self, intptr_t slot);
int QTextBrowser_QBaseSenderSignalIndex(const QTextBrowser* self);
int QTextBrowser_Receivers(const QTextBrowser* self, const char* signal);
void QTextBrowser_OnReceivers(const QTextBrowser* self, intptr_t slot);
int QTextBrowser_QBaseReceivers(const QTextBrowser* self, const char* signal);
bool QTextBrowser_IsSignalConnected(const QTextBrowser* self, const QMetaMethod* signal);
void QTextBrowser_OnIsSignalConnected(const QTextBrowser* self, intptr_t slot);
bool QTextBrowser_QBaseIsSignalConnected(const QTextBrowser* self, const QMetaMethod* signal);
double QTextBrowser_GetDecodedMetricF(const QTextBrowser* self, int metricA, int metricB);
void QTextBrowser_OnGetDecodedMetricF(const QTextBrowser* self, intptr_t slot);
double QTextBrowser_QBaseGetDecodedMetricF(const QTextBrowser* self, int metricA, int metricB);
void QTextBrowser_Delete(QTextBrowser* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif

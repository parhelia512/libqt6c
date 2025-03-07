#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCISCINTILLA_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCISCINTILLA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciScintilla so that we can call protected methods
class VirtualQsciScintilla : public QsciScintilla {

  public:
    // Virtual class public types (including callbacks)
    using QsciScintilla_Metacall_Callback = int (*)(QsciScintilla*, QMetaObject::Call, int, void**);
    using QsciScintilla_ApiContext_Callback = QStringList (*)(QsciScintilla*, int, int&, int&);
    using QsciScintilla_FindFirst_Callback = bool (*)(QsciScintilla*, const QString&, bool, bool, bool, bool, bool, int, int, bool, bool, bool);
    using QsciScintilla_FindFirstInSelection_Callback = bool (*)(QsciScintilla*, const QString&, bool, bool, bool, bool, bool, bool, bool);
    using QsciScintilla_FindNext_Callback = bool (*)();
    using QsciScintilla_Recolor_Callback = void (*)(QsciScintilla*, int, int);
    using QsciScintilla_Replace_Callback = void (*)(QsciScintilla*, const QString&);
    using QsciScintilla_Append_Callback = void (*)(QsciScintilla*, const QString&);
    using QsciScintilla_AutoCompleteFromAll_Callback = void (*)();
    using QsciScintilla_AutoCompleteFromAPIs_Callback = void (*)();
    using QsciScintilla_AutoCompleteFromDocument_Callback = void (*)();
    using QsciScintilla_CallTip_Callback = void (*)();
    using QsciScintilla_Clear_Callback = void (*)();
    using QsciScintilla_Copy_Callback = void (*)();
    using QsciScintilla_Cut_Callback = void (*)();
    using QsciScintilla_EnsureCursorVisible_Callback = void (*)();
    using QsciScintilla_EnsureLineVisible_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_FoldAll_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_FoldLine_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_Indent_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_Insert_Callback = void (*)(QsciScintilla*, const QString&);
    using QsciScintilla_InsertAt_Callback = void (*)(QsciScintilla*, const QString&, int, int);
    using QsciScintilla_MoveToMatchingBrace_Callback = void (*)();
    using QsciScintilla_Paste_Callback = void (*)();
    using QsciScintilla_Redo_Callback = void (*)();
    using QsciScintilla_RemoveSelectedText_Callback = void (*)();
    using QsciScintilla_ReplaceSelectedText_Callback = void (*)(QsciScintilla*, const QString&);
    using QsciScintilla_ResetSelectionBackgroundColor_Callback = void (*)();
    using QsciScintilla_ResetSelectionForegroundColor_Callback = void (*)();
    using QsciScintilla_SelectAll_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SelectToMatchingBrace_Callback = void (*)();
    using QsciScintilla_SetAutoCompletionCaseSensitivity_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetAutoCompletionReplaceWord_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetAutoCompletionShowSingle_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetAutoCompletionSource_Callback = void (*)(QsciScintilla*, QsciScintilla::AutoCompletionSource);
    using QsciScintilla_SetAutoCompletionThreshold_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_SetAutoCompletionUseSingle_Callback = void (*)(QsciScintilla*, QsciScintilla::AutoCompletionUseSingle);
    using QsciScintilla_SetAutoIndent_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetBraceMatching_Callback = void (*)(QsciScintilla*, QsciScintilla::BraceMatch);
    using QsciScintilla_SetBackspaceUnindents_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetCaretForegroundColor_Callback = void (*)(QsciScintilla*, const QColor&);
    using QsciScintilla_SetCaretLineBackgroundColor_Callback = void (*)(QsciScintilla*, const QColor&);
    using QsciScintilla_SetCaretLineFrameWidth_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_SetCaretLineVisible_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetCaretWidth_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_SetColor_Callback = void (*)(QsciScintilla*, const QColor&);
    using QsciScintilla_SetCursorPosition_Callback = void (*)(QsciScintilla*, int, int);
    using QsciScintilla_SetEolMode_Callback = void (*)(QsciScintilla*, QsciScintilla::EolMode);
    using QsciScintilla_SetEolVisibility_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetFolding_Callback = void (*)(QsciScintilla*, QsciScintilla::FoldStyle, int);
    using QsciScintilla_SetIndentation_Callback = void (*)(QsciScintilla*, int, int);
    using QsciScintilla_SetIndentationGuides_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetIndentationGuidesBackgroundColor_Callback = void (*)(QsciScintilla*, const QColor&);
    using QsciScintilla_SetIndentationGuidesForegroundColor_Callback = void (*)(QsciScintilla*, const QColor&);
    using QsciScintilla_SetIndentationsUseTabs_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetIndentationWidth_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_SetLexer_Callback = void (*)(QsciScintilla*, QsciLexer*);
    using QsciScintilla_SetMarginsBackgroundColor_Callback = void (*)(QsciScintilla*, const QColor&);
    using QsciScintilla_SetMarginsFont_Callback = void (*)(QsciScintilla*, const QFont&);
    using QsciScintilla_SetMarginsForegroundColor_Callback = void (*)(QsciScintilla*, const QColor&);
    using QsciScintilla_SetMarginLineNumbers_Callback = void (*)(QsciScintilla*, int, bool);
    using QsciScintilla_SetMarginMarkerMask_Callback = void (*)(QsciScintilla*, int, int);
    using QsciScintilla_SetMarginSensitivity_Callback = void (*)(QsciScintilla*, int, bool);
    using QsciScintilla_SetMarginWidth_Callback = void (*)(QsciScintilla*, int, int);
    using QsciScintilla_SetMarginWidth2_Callback = void (*)(QsciScintilla*, int, const QString&);
    using QsciScintilla_SetModified_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetPaper_Callback = void (*)(QsciScintilla*, const QColor&);
    using QsciScintilla_SetReadOnly_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetSelection_Callback = void (*)(QsciScintilla*, int, int, int, int);
    using QsciScintilla_SetSelectionBackgroundColor_Callback = void (*)(QsciScintilla*, const QColor&);
    using QsciScintilla_SetSelectionForegroundColor_Callback = void (*)(QsciScintilla*, const QColor&);
    using QsciScintilla_SetTabIndents_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetTabWidth_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_SetText_Callback = void (*)(QsciScintilla*, const QString&);
    using QsciScintilla_SetUtf8_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetWhitespaceVisibility_Callback = void (*)(QsciScintilla*, QsciScintilla::WhitespaceVisibility);
    using QsciScintilla_SetWrapMode_Callback = void (*)(QsciScintilla*, QsciScintilla::WrapMode);
    using QsciScintilla_Undo_Callback = void (*)();
    using QsciScintilla_Unindent_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_ZoomIn_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_ZoomIn2_Callback = void (*)();
    using QsciScintilla_ZoomOut_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_ZoomOut2_Callback = void (*)();
    using QsciScintilla_ZoomTo_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_Event_Callback = bool (*)(QsciScintilla*, QEvent*);
    using QsciScintilla_ChangeEvent_Callback = void (*)(QsciScintilla*, QEvent*);
    using QsciScintilla_ContextMenuEvent_Callback = void (*)(QsciScintilla*, QContextMenuEvent*);
    using QsciScintilla_WheelEvent_Callback = void (*)(QsciScintilla*, QWheelEvent*);
    using QsciScintilla_CanInsertFromMimeData_Callback = bool (*)(const QsciScintilla*, const QMimeData*);
    using QsciScintilla_FromMimeData_Callback = QByteArray (*)(const QsciScintilla*, const QMimeData*, bool&);
    using QsciScintilla_ToMimeData_Callback = QMimeData* (*)(const QsciScintilla*, const QByteArray&, bool);
    using QsciScintilla_DragEnterEvent_Callback = void (*)(QsciScintilla*, QDragEnterEvent*);
    using QsciScintilla_DragLeaveEvent_Callback = void (*)(QsciScintilla*, QDragLeaveEvent*);
    using QsciScintilla_DragMoveEvent_Callback = void (*)(QsciScintilla*, QDragMoveEvent*);
    using QsciScintilla_DropEvent_Callback = void (*)(QsciScintilla*, QDropEvent*);
    using QsciScintilla_FocusInEvent_Callback = void (*)(QsciScintilla*, QFocusEvent*);
    using QsciScintilla_FocusOutEvent_Callback = void (*)(QsciScintilla*, QFocusEvent*);
    using QsciScintilla_FocusNextPrevChild_Callback = bool (*)(QsciScintilla*, bool);
    using QsciScintilla_KeyPressEvent_Callback = void (*)(QsciScintilla*, QKeyEvent*);
    using QsciScintilla_InputMethodEvent_Callback = void (*)(QsciScintilla*, QInputMethodEvent*);
    using QsciScintilla_MouseDoubleClickEvent_Callback = void (*)(QsciScintilla*, QMouseEvent*);
    using QsciScintilla_MouseMoveEvent_Callback = void (*)(QsciScintilla*, QMouseEvent*);
    using QsciScintilla_MousePressEvent_Callback = void (*)(QsciScintilla*, QMouseEvent*);
    using QsciScintilla_MouseReleaseEvent_Callback = void (*)(QsciScintilla*, QMouseEvent*);
    using QsciScintilla_PaintEvent_Callback = void (*)(QsciScintilla*, QPaintEvent*);
    using QsciScintilla_ResizeEvent_Callback = void (*)(QsciScintilla*, QResizeEvent*);
    using QsciScintilla_ScrollContentsBy_Callback = void (*)(QsciScintilla*, int, int);
    using QsciScintilla_MinimumSizeHint_Callback = QSize (*)();
    using QsciScintilla_SizeHint_Callback = QSize (*)();
    using QsciScintilla_SetupViewport_Callback = void (*)(QsciScintilla*, QWidget*);
    using QsciScintilla_EventFilter_Callback = bool (*)(QsciScintilla*, QObject*, QEvent*);
    using QsciScintilla_ViewportEvent_Callback = bool (*)(QsciScintilla*, QEvent*);
    using QsciScintilla_ViewportSizeHint_Callback = QSize (*)();
    using QsciScintilla_InitStyleOption_Callback = void (*)(const QsciScintilla*, QStyleOptionFrame*);
    using QsciScintilla_DevType_Callback = int (*)();
    using QsciScintilla_SetVisible_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_HeightForWidth_Callback = int (*)(const QsciScintilla*, int);
    using QsciScintilla_HasHeightForWidth_Callback = bool (*)();
    using QsciScintilla_PaintEngine_Callback = QPaintEngine* (*)();
    using QsciScintilla_KeyReleaseEvent_Callback = void (*)(QsciScintilla*, QKeyEvent*);
    using QsciScintilla_EnterEvent_Callback = void (*)(QsciScintilla*, QEnterEvent*);
    using QsciScintilla_LeaveEvent_Callback = void (*)(QsciScintilla*, QEvent*);
    using QsciScintilla_MoveEvent_Callback = void (*)(QsciScintilla*, QMoveEvent*);
    using QsciScintilla_CloseEvent_Callback = void (*)(QsciScintilla*, QCloseEvent*);
    using QsciScintilla_TabletEvent_Callback = void (*)(QsciScintilla*, QTabletEvent*);
    using QsciScintilla_ActionEvent_Callback = void (*)(QsciScintilla*, QActionEvent*);
    using QsciScintilla_ShowEvent_Callback = void (*)(QsciScintilla*, QShowEvent*);
    using QsciScintilla_HideEvent_Callback = void (*)(QsciScintilla*, QHideEvent*);
    using QsciScintilla_NativeEvent_Callback = bool (*)(QsciScintilla*, const QByteArray&, void*, qintptr*);
    using QsciScintilla_Metric_Callback = int (*)(const QsciScintilla*, QPaintDevice::PaintDeviceMetric);
    using QsciScintilla_InitPainter_Callback = void (*)(const QsciScintilla*, QPainter*);
    using QsciScintilla_Redirected_Callback = QPaintDevice* (*)(const QsciScintilla*, QPoint*);
    using QsciScintilla_SharedPainter_Callback = QPainter* (*)();
    using QsciScintilla_TimerEvent_Callback = void (*)(QsciScintilla*, QTimerEvent*);
    using QsciScintilla_ChildEvent_Callback = void (*)(QsciScintilla*, QChildEvent*);
    using QsciScintilla_CustomEvent_Callback = void (*)(QsciScintilla*, QEvent*);
    using QsciScintilla_ConnectNotify_Callback = void (*)(QsciScintilla*, const QMetaMethod&);
    using QsciScintilla_DisconnectNotify_Callback = void (*)(QsciScintilla*, const QMetaMethod&);
    using QsciScintilla_SetScrollBars_Callback = void (*)();
    using QsciScintilla_ContextMenuNeeded_Callback = bool (*)(const QsciScintilla*, int, int);
    using QsciScintilla_SetViewportMargins_Callback = void (*)(QsciScintilla*, int, int, int, int);
    using QsciScintilla_ViewportMargins_Callback = QMargins (*)();
    using QsciScintilla_DrawFrame_Callback = void (*)(QsciScintilla*, QPainter*);
    using QsciScintilla_UpdateMicroFocus_Callback = void (*)();
    using QsciScintilla_Create_Callback = void (*)();
    using QsciScintilla_Destroy_Callback = void (*)();
    using QsciScintilla_FocusNextChild_Callback = bool (*)();
    using QsciScintilla_FocusPreviousChild_Callback = bool (*)();
    using QsciScintilla_Sender_Callback = QObject* (*)();
    using QsciScintilla_SenderSignalIndex_Callback = int (*)();
    using QsciScintilla_Receivers_Callback = int (*)(const QsciScintilla*, const char*);
    using QsciScintilla_IsSignalConnected_Callback = bool (*)(const QsciScintilla*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciScintilla_Metacall_Callback qsciscintilla_metacall_callback = nullptr;
    QsciScintilla_ApiContext_Callback qsciscintilla_apicontext_callback = nullptr;
    QsciScintilla_FindFirst_Callback qsciscintilla_findfirst_callback = nullptr;
    QsciScintilla_FindFirstInSelection_Callback qsciscintilla_findfirstinselection_callback = nullptr;
    QsciScintilla_FindNext_Callback qsciscintilla_findnext_callback = nullptr;
    QsciScintilla_Recolor_Callback qsciscintilla_recolor_callback = nullptr;
    QsciScintilla_Replace_Callback qsciscintilla_replace_callback = nullptr;
    QsciScintilla_Append_Callback qsciscintilla_append_callback = nullptr;
    QsciScintilla_AutoCompleteFromAll_Callback qsciscintilla_autocompletefromall_callback = nullptr;
    QsciScintilla_AutoCompleteFromAPIs_Callback qsciscintilla_autocompletefromapis_callback = nullptr;
    QsciScintilla_AutoCompleteFromDocument_Callback qsciscintilla_autocompletefromdocument_callback = nullptr;
    QsciScintilla_CallTip_Callback qsciscintilla_calltip_callback = nullptr;
    QsciScintilla_Clear_Callback qsciscintilla_clear_callback = nullptr;
    QsciScintilla_Copy_Callback qsciscintilla_copy_callback = nullptr;
    QsciScintilla_Cut_Callback qsciscintilla_cut_callback = nullptr;
    QsciScintilla_EnsureCursorVisible_Callback qsciscintilla_ensurecursorvisible_callback = nullptr;
    QsciScintilla_EnsureLineVisible_Callback qsciscintilla_ensurelinevisible_callback = nullptr;
    QsciScintilla_FoldAll_Callback qsciscintilla_foldall_callback = nullptr;
    QsciScintilla_FoldLine_Callback qsciscintilla_foldline_callback = nullptr;
    QsciScintilla_Indent_Callback qsciscintilla_indent_callback = nullptr;
    QsciScintilla_Insert_Callback qsciscintilla_insert_callback = nullptr;
    QsciScintilla_InsertAt_Callback qsciscintilla_insertat_callback = nullptr;
    QsciScintilla_MoveToMatchingBrace_Callback qsciscintilla_movetomatchingbrace_callback = nullptr;
    QsciScintilla_Paste_Callback qsciscintilla_paste_callback = nullptr;
    QsciScintilla_Redo_Callback qsciscintilla_redo_callback = nullptr;
    QsciScintilla_RemoveSelectedText_Callback qsciscintilla_removeselectedtext_callback = nullptr;
    QsciScintilla_ReplaceSelectedText_Callback qsciscintilla_replaceselectedtext_callback = nullptr;
    QsciScintilla_ResetSelectionBackgroundColor_Callback qsciscintilla_resetselectionbackgroundcolor_callback = nullptr;
    QsciScintilla_ResetSelectionForegroundColor_Callback qsciscintilla_resetselectionforegroundcolor_callback = nullptr;
    QsciScintilla_SelectAll_Callback qsciscintilla_selectall_callback = nullptr;
    QsciScintilla_SelectToMatchingBrace_Callback qsciscintilla_selecttomatchingbrace_callback = nullptr;
    QsciScintilla_SetAutoCompletionCaseSensitivity_Callback qsciscintilla_setautocompletioncasesensitivity_callback = nullptr;
    QsciScintilla_SetAutoCompletionReplaceWord_Callback qsciscintilla_setautocompletionreplaceword_callback = nullptr;
    QsciScintilla_SetAutoCompletionShowSingle_Callback qsciscintilla_setautocompletionshowsingle_callback = nullptr;
    QsciScintilla_SetAutoCompletionSource_Callback qsciscintilla_setautocompletionsource_callback = nullptr;
    QsciScintilla_SetAutoCompletionThreshold_Callback qsciscintilla_setautocompletionthreshold_callback = nullptr;
    QsciScintilla_SetAutoCompletionUseSingle_Callback qsciscintilla_setautocompletionusesingle_callback = nullptr;
    QsciScintilla_SetAutoIndent_Callback qsciscintilla_setautoindent_callback = nullptr;
    QsciScintilla_SetBraceMatching_Callback qsciscintilla_setbracematching_callback = nullptr;
    QsciScintilla_SetBackspaceUnindents_Callback qsciscintilla_setbackspaceunindents_callback = nullptr;
    QsciScintilla_SetCaretForegroundColor_Callback qsciscintilla_setcaretforegroundcolor_callback = nullptr;
    QsciScintilla_SetCaretLineBackgroundColor_Callback qsciscintilla_setcaretlinebackgroundcolor_callback = nullptr;
    QsciScintilla_SetCaretLineFrameWidth_Callback qsciscintilla_setcaretlineframewidth_callback = nullptr;
    QsciScintilla_SetCaretLineVisible_Callback qsciscintilla_setcaretlinevisible_callback = nullptr;
    QsciScintilla_SetCaretWidth_Callback qsciscintilla_setcaretwidth_callback = nullptr;
    QsciScintilla_SetColor_Callback qsciscintilla_setcolor_callback = nullptr;
    QsciScintilla_SetCursorPosition_Callback qsciscintilla_setcursorposition_callback = nullptr;
    QsciScintilla_SetEolMode_Callback qsciscintilla_seteolmode_callback = nullptr;
    QsciScintilla_SetEolVisibility_Callback qsciscintilla_seteolvisibility_callback = nullptr;
    QsciScintilla_SetFolding_Callback qsciscintilla_setfolding_callback = nullptr;
    QsciScintilla_SetIndentation_Callback qsciscintilla_setindentation_callback = nullptr;
    QsciScintilla_SetIndentationGuides_Callback qsciscintilla_setindentationguides_callback = nullptr;
    QsciScintilla_SetIndentationGuidesBackgroundColor_Callback qsciscintilla_setindentationguidesbackgroundcolor_callback = nullptr;
    QsciScintilla_SetIndentationGuidesForegroundColor_Callback qsciscintilla_setindentationguidesforegroundcolor_callback = nullptr;
    QsciScintilla_SetIndentationsUseTabs_Callback qsciscintilla_setindentationsusetabs_callback = nullptr;
    QsciScintilla_SetIndentationWidth_Callback qsciscintilla_setindentationwidth_callback = nullptr;
    QsciScintilla_SetLexer_Callback qsciscintilla_setlexer_callback = nullptr;
    QsciScintilla_SetMarginsBackgroundColor_Callback qsciscintilla_setmarginsbackgroundcolor_callback = nullptr;
    QsciScintilla_SetMarginsFont_Callback qsciscintilla_setmarginsfont_callback = nullptr;
    QsciScintilla_SetMarginsForegroundColor_Callback qsciscintilla_setmarginsforegroundcolor_callback = nullptr;
    QsciScintilla_SetMarginLineNumbers_Callback qsciscintilla_setmarginlinenumbers_callback = nullptr;
    QsciScintilla_SetMarginMarkerMask_Callback qsciscintilla_setmarginmarkermask_callback = nullptr;
    QsciScintilla_SetMarginSensitivity_Callback qsciscintilla_setmarginsensitivity_callback = nullptr;
    QsciScintilla_SetMarginWidth_Callback qsciscintilla_setmarginwidth_callback = nullptr;
    QsciScintilla_SetMarginWidth2_Callback qsciscintilla_setmarginwidth2_callback = nullptr;
    QsciScintilla_SetModified_Callback qsciscintilla_setmodified_callback = nullptr;
    QsciScintilla_SetPaper_Callback qsciscintilla_setpaper_callback = nullptr;
    QsciScintilla_SetReadOnly_Callback qsciscintilla_setreadonly_callback = nullptr;
    QsciScintilla_SetSelection_Callback qsciscintilla_setselection_callback = nullptr;
    QsciScintilla_SetSelectionBackgroundColor_Callback qsciscintilla_setselectionbackgroundcolor_callback = nullptr;
    QsciScintilla_SetSelectionForegroundColor_Callback qsciscintilla_setselectionforegroundcolor_callback = nullptr;
    QsciScintilla_SetTabIndents_Callback qsciscintilla_settabindents_callback = nullptr;
    QsciScintilla_SetTabWidth_Callback qsciscintilla_settabwidth_callback = nullptr;
    QsciScintilla_SetText_Callback qsciscintilla_settext_callback = nullptr;
    QsciScintilla_SetUtf8_Callback qsciscintilla_setutf8_callback = nullptr;
    QsciScintilla_SetWhitespaceVisibility_Callback qsciscintilla_setwhitespacevisibility_callback = nullptr;
    QsciScintilla_SetWrapMode_Callback qsciscintilla_setwrapmode_callback = nullptr;
    QsciScintilla_Undo_Callback qsciscintilla_undo_callback = nullptr;
    QsciScintilla_Unindent_Callback qsciscintilla_unindent_callback = nullptr;
    QsciScintilla_ZoomIn_Callback qsciscintilla_zoomin_callback = nullptr;
    QsciScintilla_ZoomIn2_Callback qsciscintilla_zoomin2_callback = nullptr;
    QsciScintilla_ZoomOut_Callback qsciscintilla_zoomout_callback = nullptr;
    QsciScintilla_ZoomOut2_Callback qsciscintilla_zoomout2_callback = nullptr;
    QsciScintilla_ZoomTo_Callback qsciscintilla_zoomto_callback = nullptr;
    QsciScintilla_Event_Callback qsciscintilla_event_callback = nullptr;
    QsciScintilla_ChangeEvent_Callback qsciscintilla_changeevent_callback = nullptr;
    QsciScintilla_ContextMenuEvent_Callback qsciscintilla_contextmenuevent_callback = nullptr;
    QsciScintilla_WheelEvent_Callback qsciscintilla_wheelevent_callback = nullptr;
    QsciScintilla_CanInsertFromMimeData_Callback qsciscintilla_caninsertfrommimedata_callback = nullptr;
    QsciScintilla_FromMimeData_Callback qsciscintilla_frommimedata_callback = nullptr;
    QsciScintilla_ToMimeData_Callback qsciscintilla_tomimedata_callback = nullptr;
    QsciScintilla_DragEnterEvent_Callback qsciscintilla_dragenterevent_callback = nullptr;
    QsciScintilla_DragLeaveEvent_Callback qsciscintilla_dragleaveevent_callback = nullptr;
    QsciScintilla_DragMoveEvent_Callback qsciscintilla_dragmoveevent_callback = nullptr;
    QsciScintilla_DropEvent_Callback qsciscintilla_dropevent_callback = nullptr;
    QsciScintilla_FocusInEvent_Callback qsciscintilla_focusinevent_callback = nullptr;
    QsciScintilla_FocusOutEvent_Callback qsciscintilla_focusoutevent_callback = nullptr;
    QsciScintilla_FocusNextPrevChild_Callback qsciscintilla_focusnextprevchild_callback = nullptr;
    QsciScintilla_KeyPressEvent_Callback qsciscintilla_keypressevent_callback = nullptr;
    QsciScintilla_InputMethodEvent_Callback qsciscintilla_inputmethodevent_callback = nullptr;
    QsciScintilla_MouseDoubleClickEvent_Callback qsciscintilla_mousedoubleclickevent_callback = nullptr;
    QsciScintilla_MouseMoveEvent_Callback qsciscintilla_mousemoveevent_callback = nullptr;
    QsciScintilla_MousePressEvent_Callback qsciscintilla_mousepressevent_callback = nullptr;
    QsciScintilla_MouseReleaseEvent_Callback qsciscintilla_mousereleaseevent_callback = nullptr;
    QsciScintilla_PaintEvent_Callback qsciscintilla_paintevent_callback = nullptr;
    QsciScintilla_ResizeEvent_Callback qsciscintilla_resizeevent_callback = nullptr;
    QsciScintilla_ScrollContentsBy_Callback qsciscintilla_scrollcontentsby_callback = nullptr;
    QsciScintilla_MinimumSizeHint_Callback qsciscintilla_minimumsizehint_callback = nullptr;
    QsciScintilla_SizeHint_Callback qsciscintilla_sizehint_callback = nullptr;
    QsciScintilla_SetupViewport_Callback qsciscintilla_setupviewport_callback = nullptr;
    QsciScintilla_EventFilter_Callback qsciscintilla_eventfilter_callback = nullptr;
    QsciScintilla_ViewportEvent_Callback qsciscintilla_viewportevent_callback = nullptr;
    QsciScintilla_ViewportSizeHint_Callback qsciscintilla_viewportsizehint_callback = nullptr;
    QsciScintilla_InitStyleOption_Callback qsciscintilla_initstyleoption_callback = nullptr;
    QsciScintilla_DevType_Callback qsciscintilla_devtype_callback = nullptr;
    QsciScintilla_SetVisible_Callback qsciscintilla_setvisible_callback = nullptr;
    QsciScintilla_HeightForWidth_Callback qsciscintilla_heightforwidth_callback = nullptr;
    QsciScintilla_HasHeightForWidth_Callback qsciscintilla_hasheightforwidth_callback = nullptr;
    QsciScintilla_PaintEngine_Callback qsciscintilla_paintengine_callback = nullptr;
    QsciScintilla_KeyReleaseEvent_Callback qsciscintilla_keyreleaseevent_callback = nullptr;
    QsciScintilla_EnterEvent_Callback qsciscintilla_enterevent_callback = nullptr;
    QsciScintilla_LeaveEvent_Callback qsciscintilla_leaveevent_callback = nullptr;
    QsciScintilla_MoveEvent_Callback qsciscintilla_moveevent_callback = nullptr;
    QsciScintilla_CloseEvent_Callback qsciscintilla_closeevent_callback = nullptr;
    QsciScintilla_TabletEvent_Callback qsciscintilla_tabletevent_callback = nullptr;
    QsciScintilla_ActionEvent_Callback qsciscintilla_actionevent_callback = nullptr;
    QsciScintilla_ShowEvent_Callback qsciscintilla_showevent_callback = nullptr;
    QsciScintilla_HideEvent_Callback qsciscintilla_hideevent_callback = nullptr;
    QsciScintilla_NativeEvent_Callback qsciscintilla_nativeevent_callback = nullptr;
    QsciScintilla_Metric_Callback qsciscintilla_metric_callback = nullptr;
    QsciScintilla_InitPainter_Callback qsciscintilla_initpainter_callback = nullptr;
    QsciScintilla_Redirected_Callback qsciscintilla_redirected_callback = nullptr;
    QsciScintilla_SharedPainter_Callback qsciscintilla_sharedpainter_callback = nullptr;
    QsciScintilla_TimerEvent_Callback qsciscintilla_timerevent_callback = nullptr;
    QsciScintilla_ChildEvent_Callback qsciscintilla_childevent_callback = nullptr;
    QsciScintilla_CustomEvent_Callback qsciscintilla_customevent_callback = nullptr;
    QsciScintilla_ConnectNotify_Callback qsciscintilla_connectnotify_callback = nullptr;
    QsciScintilla_DisconnectNotify_Callback qsciscintilla_disconnectnotify_callback = nullptr;
    QsciScintilla_SetScrollBars_Callback qsciscintilla_setscrollbars_callback = nullptr;
    QsciScintilla_ContextMenuNeeded_Callback qsciscintilla_contextmenuneeded_callback = nullptr;
    QsciScintilla_SetViewportMargins_Callback qsciscintilla_setviewportmargins_callback = nullptr;
    QsciScintilla_ViewportMargins_Callback qsciscintilla_viewportmargins_callback = nullptr;
    QsciScintilla_DrawFrame_Callback qsciscintilla_drawframe_callback = nullptr;
    QsciScintilla_UpdateMicroFocus_Callback qsciscintilla_updatemicrofocus_callback = nullptr;
    QsciScintilla_Create_Callback qsciscintilla_create_callback = nullptr;
    QsciScintilla_Destroy_Callback qsciscintilla_destroy_callback = nullptr;
    QsciScintilla_FocusNextChild_Callback qsciscintilla_focusnextchild_callback = nullptr;
    QsciScintilla_FocusPreviousChild_Callback qsciscintilla_focuspreviouschild_callback = nullptr;
    QsciScintilla_Sender_Callback qsciscintilla_sender_callback = nullptr;
    QsciScintilla_SenderSignalIndex_Callback qsciscintilla_sendersignalindex_callback = nullptr;
    QsciScintilla_Receivers_Callback qsciscintilla_receivers_callback = nullptr;
    QsciScintilla_IsSignalConnected_Callback qsciscintilla_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsciscintilla_metacall_isbase = false;
    mutable bool qsciscintilla_apicontext_isbase = false;
    mutable bool qsciscintilla_findfirst_isbase = false;
    mutable bool qsciscintilla_findfirstinselection_isbase = false;
    mutable bool qsciscintilla_findnext_isbase = false;
    mutable bool qsciscintilla_recolor_isbase = false;
    mutable bool qsciscintilla_replace_isbase = false;
    mutable bool qsciscintilla_append_isbase = false;
    mutable bool qsciscintilla_autocompletefromall_isbase = false;
    mutable bool qsciscintilla_autocompletefromapis_isbase = false;
    mutable bool qsciscintilla_autocompletefromdocument_isbase = false;
    mutable bool qsciscintilla_calltip_isbase = false;
    mutable bool qsciscintilla_clear_isbase = false;
    mutable bool qsciscintilla_copy_isbase = false;
    mutable bool qsciscintilla_cut_isbase = false;
    mutable bool qsciscintilla_ensurecursorvisible_isbase = false;
    mutable bool qsciscintilla_ensurelinevisible_isbase = false;
    mutable bool qsciscintilla_foldall_isbase = false;
    mutable bool qsciscintilla_foldline_isbase = false;
    mutable bool qsciscintilla_indent_isbase = false;
    mutable bool qsciscintilla_insert_isbase = false;
    mutable bool qsciscintilla_insertat_isbase = false;
    mutable bool qsciscintilla_movetomatchingbrace_isbase = false;
    mutable bool qsciscintilla_paste_isbase = false;
    mutable bool qsciscintilla_redo_isbase = false;
    mutable bool qsciscintilla_removeselectedtext_isbase = false;
    mutable bool qsciscintilla_replaceselectedtext_isbase = false;
    mutable bool qsciscintilla_resetselectionbackgroundcolor_isbase = false;
    mutable bool qsciscintilla_resetselectionforegroundcolor_isbase = false;
    mutable bool qsciscintilla_selectall_isbase = false;
    mutable bool qsciscintilla_selecttomatchingbrace_isbase = false;
    mutable bool qsciscintilla_setautocompletioncasesensitivity_isbase = false;
    mutable bool qsciscintilla_setautocompletionreplaceword_isbase = false;
    mutable bool qsciscintilla_setautocompletionshowsingle_isbase = false;
    mutable bool qsciscintilla_setautocompletionsource_isbase = false;
    mutable bool qsciscintilla_setautocompletionthreshold_isbase = false;
    mutable bool qsciscintilla_setautocompletionusesingle_isbase = false;
    mutable bool qsciscintilla_setautoindent_isbase = false;
    mutable bool qsciscintilla_setbracematching_isbase = false;
    mutable bool qsciscintilla_setbackspaceunindents_isbase = false;
    mutable bool qsciscintilla_setcaretforegroundcolor_isbase = false;
    mutable bool qsciscintilla_setcaretlinebackgroundcolor_isbase = false;
    mutable bool qsciscintilla_setcaretlineframewidth_isbase = false;
    mutable bool qsciscintilla_setcaretlinevisible_isbase = false;
    mutable bool qsciscintilla_setcaretwidth_isbase = false;
    mutable bool qsciscintilla_setcolor_isbase = false;
    mutable bool qsciscintilla_setcursorposition_isbase = false;
    mutable bool qsciscintilla_seteolmode_isbase = false;
    mutable bool qsciscintilla_seteolvisibility_isbase = false;
    mutable bool qsciscintilla_setfolding_isbase = false;
    mutable bool qsciscintilla_setindentation_isbase = false;
    mutable bool qsciscintilla_setindentationguides_isbase = false;
    mutable bool qsciscintilla_setindentationguidesbackgroundcolor_isbase = false;
    mutable bool qsciscintilla_setindentationguidesforegroundcolor_isbase = false;
    mutable bool qsciscintilla_setindentationsusetabs_isbase = false;
    mutable bool qsciscintilla_setindentationwidth_isbase = false;
    mutable bool qsciscintilla_setlexer_isbase = false;
    mutable bool qsciscintilla_setmarginsbackgroundcolor_isbase = false;
    mutable bool qsciscintilla_setmarginsfont_isbase = false;
    mutable bool qsciscintilla_setmarginsforegroundcolor_isbase = false;
    mutable bool qsciscintilla_setmarginlinenumbers_isbase = false;
    mutable bool qsciscintilla_setmarginmarkermask_isbase = false;
    mutable bool qsciscintilla_setmarginsensitivity_isbase = false;
    mutable bool qsciscintilla_setmarginwidth_isbase = false;
    mutable bool qsciscintilla_setmarginwidth2_isbase = false;
    mutable bool qsciscintilla_setmodified_isbase = false;
    mutable bool qsciscintilla_setpaper_isbase = false;
    mutable bool qsciscintilla_setreadonly_isbase = false;
    mutable bool qsciscintilla_setselection_isbase = false;
    mutable bool qsciscintilla_setselectionbackgroundcolor_isbase = false;
    mutable bool qsciscintilla_setselectionforegroundcolor_isbase = false;
    mutable bool qsciscintilla_settabindents_isbase = false;
    mutable bool qsciscintilla_settabwidth_isbase = false;
    mutable bool qsciscintilla_settext_isbase = false;
    mutable bool qsciscintilla_setutf8_isbase = false;
    mutable bool qsciscintilla_setwhitespacevisibility_isbase = false;
    mutable bool qsciscintilla_setwrapmode_isbase = false;
    mutable bool qsciscintilla_undo_isbase = false;
    mutable bool qsciscintilla_unindent_isbase = false;
    mutable bool qsciscintilla_zoomin_isbase = false;
    mutable bool qsciscintilla_zoomin2_isbase = false;
    mutable bool qsciscintilla_zoomout_isbase = false;
    mutable bool qsciscintilla_zoomout2_isbase = false;
    mutable bool qsciscintilla_zoomto_isbase = false;
    mutable bool qsciscintilla_event_isbase = false;
    mutable bool qsciscintilla_changeevent_isbase = false;
    mutable bool qsciscintilla_contextmenuevent_isbase = false;
    mutable bool qsciscintilla_wheelevent_isbase = false;
    mutable bool qsciscintilla_caninsertfrommimedata_isbase = false;
    mutable bool qsciscintilla_frommimedata_isbase = false;
    mutable bool qsciscintilla_tomimedata_isbase = false;
    mutable bool qsciscintilla_dragenterevent_isbase = false;
    mutable bool qsciscintilla_dragleaveevent_isbase = false;
    mutable bool qsciscintilla_dragmoveevent_isbase = false;
    mutable bool qsciscintilla_dropevent_isbase = false;
    mutable bool qsciscintilla_focusinevent_isbase = false;
    mutable bool qsciscintilla_focusoutevent_isbase = false;
    mutable bool qsciscintilla_focusnextprevchild_isbase = false;
    mutable bool qsciscintilla_keypressevent_isbase = false;
    mutable bool qsciscintilla_inputmethodevent_isbase = false;
    mutable bool qsciscintilla_mousedoubleclickevent_isbase = false;
    mutable bool qsciscintilla_mousemoveevent_isbase = false;
    mutable bool qsciscintilla_mousepressevent_isbase = false;
    mutable bool qsciscintilla_mousereleaseevent_isbase = false;
    mutable bool qsciscintilla_paintevent_isbase = false;
    mutable bool qsciscintilla_resizeevent_isbase = false;
    mutable bool qsciscintilla_scrollcontentsby_isbase = false;
    mutable bool qsciscintilla_minimumsizehint_isbase = false;
    mutable bool qsciscintilla_sizehint_isbase = false;
    mutable bool qsciscintilla_setupviewport_isbase = false;
    mutable bool qsciscintilla_eventfilter_isbase = false;
    mutable bool qsciscintilla_viewportevent_isbase = false;
    mutable bool qsciscintilla_viewportsizehint_isbase = false;
    mutable bool qsciscintilla_initstyleoption_isbase = false;
    mutable bool qsciscintilla_devtype_isbase = false;
    mutable bool qsciscintilla_setvisible_isbase = false;
    mutable bool qsciscintilla_heightforwidth_isbase = false;
    mutable bool qsciscintilla_hasheightforwidth_isbase = false;
    mutable bool qsciscintilla_paintengine_isbase = false;
    mutable bool qsciscintilla_keyreleaseevent_isbase = false;
    mutable bool qsciscintilla_enterevent_isbase = false;
    mutable bool qsciscintilla_leaveevent_isbase = false;
    mutable bool qsciscintilla_moveevent_isbase = false;
    mutable bool qsciscintilla_closeevent_isbase = false;
    mutable bool qsciscintilla_tabletevent_isbase = false;
    mutable bool qsciscintilla_actionevent_isbase = false;
    mutable bool qsciscintilla_showevent_isbase = false;
    mutable bool qsciscintilla_hideevent_isbase = false;
    mutable bool qsciscintilla_nativeevent_isbase = false;
    mutable bool qsciscintilla_metric_isbase = false;
    mutable bool qsciscintilla_initpainter_isbase = false;
    mutable bool qsciscintilla_redirected_isbase = false;
    mutable bool qsciscintilla_sharedpainter_isbase = false;
    mutable bool qsciscintilla_timerevent_isbase = false;
    mutable bool qsciscintilla_childevent_isbase = false;
    mutable bool qsciscintilla_customevent_isbase = false;
    mutable bool qsciscintilla_connectnotify_isbase = false;
    mutable bool qsciscintilla_disconnectnotify_isbase = false;
    mutable bool qsciscintilla_setscrollbars_isbase = false;
    mutable bool qsciscintilla_contextmenuneeded_isbase = false;
    mutable bool qsciscintilla_setviewportmargins_isbase = false;
    mutable bool qsciscintilla_viewportmargins_isbase = false;
    mutable bool qsciscintilla_drawframe_isbase = false;
    mutable bool qsciscintilla_updatemicrofocus_isbase = false;
    mutable bool qsciscintilla_create_isbase = false;
    mutable bool qsciscintilla_destroy_isbase = false;
    mutable bool qsciscintilla_focusnextchild_isbase = false;
    mutable bool qsciscintilla_focuspreviouschild_isbase = false;
    mutable bool qsciscintilla_sender_isbase = false;
    mutable bool qsciscintilla_sendersignalindex_isbase = false;
    mutable bool qsciscintilla_receivers_isbase = false;
    mutable bool qsciscintilla_issignalconnected_isbase = false;

  public:
    VirtualQsciScintilla(QWidget* parent) : QsciScintilla(parent){};
    VirtualQsciScintilla() : QsciScintilla(){};

    ~VirtualQsciScintilla() {
        qsciscintilla_metacall_callback = nullptr;
        qsciscintilla_apicontext_callback = nullptr;
        qsciscintilla_findfirst_callback = nullptr;
        qsciscintilla_findfirstinselection_callback = nullptr;
        qsciscintilla_findnext_callback = nullptr;
        qsciscintilla_recolor_callback = nullptr;
        qsciscintilla_replace_callback = nullptr;
        qsciscintilla_append_callback = nullptr;
        qsciscintilla_autocompletefromall_callback = nullptr;
        qsciscintilla_autocompletefromapis_callback = nullptr;
        qsciscintilla_autocompletefromdocument_callback = nullptr;
        qsciscintilla_calltip_callback = nullptr;
        qsciscintilla_clear_callback = nullptr;
        qsciscintilla_copy_callback = nullptr;
        qsciscintilla_cut_callback = nullptr;
        qsciscintilla_ensurecursorvisible_callback = nullptr;
        qsciscintilla_ensurelinevisible_callback = nullptr;
        qsciscintilla_foldall_callback = nullptr;
        qsciscintilla_foldline_callback = nullptr;
        qsciscintilla_indent_callback = nullptr;
        qsciscintilla_insert_callback = nullptr;
        qsciscintilla_insertat_callback = nullptr;
        qsciscintilla_movetomatchingbrace_callback = nullptr;
        qsciscintilla_paste_callback = nullptr;
        qsciscintilla_redo_callback = nullptr;
        qsciscintilla_removeselectedtext_callback = nullptr;
        qsciscintilla_replaceselectedtext_callback = nullptr;
        qsciscintilla_resetselectionbackgroundcolor_callback = nullptr;
        qsciscintilla_resetselectionforegroundcolor_callback = nullptr;
        qsciscintilla_selectall_callback = nullptr;
        qsciscintilla_selecttomatchingbrace_callback = nullptr;
        qsciscintilla_setautocompletioncasesensitivity_callback = nullptr;
        qsciscintilla_setautocompletionreplaceword_callback = nullptr;
        qsciscintilla_setautocompletionshowsingle_callback = nullptr;
        qsciscintilla_setautocompletionsource_callback = nullptr;
        qsciscintilla_setautocompletionthreshold_callback = nullptr;
        qsciscintilla_setautocompletionusesingle_callback = nullptr;
        qsciscintilla_setautoindent_callback = nullptr;
        qsciscintilla_setbracematching_callback = nullptr;
        qsciscintilla_setbackspaceunindents_callback = nullptr;
        qsciscintilla_setcaretforegroundcolor_callback = nullptr;
        qsciscintilla_setcaretlinebackgroundcolor_callback = nullptr;
        qsciscintilla_setcaretlineframewidth_callback = nullptr;
        qsciscintilla_setcaretlinevisible_callback = nullptr;
        qsciscintilla_setcaretwidth_callback = nullptr;
        qsciscintilla_setcolor_callback = nullptr;
        qsciscintilla_setcursorposition_callback = nullptr;
        qsciscintilla_seteolmode_callback = nullptr;
        qsciscintilla_seteolvisibility_callback = nullptr;
        qsciscintilla_setfolding_callback = nullptr;
        qsciscintilla_setindentation_callback = nullptr;
        qsciscintilla_setindentationguides_callback = nullptr;
        qsciscintilla_setindentationguidesbackgroundcolor_callback = nullptr;
        qsciscintilla_setindentationguidesforegroundcolor_callback = nullptr;
        qsciscintilla_setindentationsusetabs_callback = nullptr;
        qsciscintilla_setindentationwidth_callback = nullptr;
        qsciscintilla_setlexer_callback = nullptr;
        qsciscintilla_setmarginsbackgroundcolor_callback = nullptr;
        qsciscintilla_setmarginsfont_callback = nullptr;
        qsciscintilla_setmarginsforegroundcolor_callback = nullptr;
        qsciscintilla_setmarginlinenumbers_callback = nullptr;
        qsciscintilla_setmarginmarkermask_callback = nullptr;
        qsciscintilla_setmarginsensitivity_callback = nullptr;
        qsciscintilla_setmarginwidth_callback = nullptr;
        qsciscintilla_setmarginwidth2_callback = nullptr;
        qsciscintilla_setmodified_callback = nullptr;
        qsciscintilla_setpaper_callback = nullptr;
        qsciscintilla_setreadonly_callback = nullptr;
        qsciscintilla_setselection_callback = nullptr;
        qsciscintilla_setselectionbackgroundcolor_callback = nullptr;
        qsciscintilla_setselectionforegroundcolor_callback = nullptr;
        qsciscintilla_settabindents_callback = nullptr;
        qsciscintilla_settabwidth_callback = nullptr;
        qsciscintilla_settext_callback = nullptr;
        qsciscintilla_setutf8_callback = nullptr;
        qsciscintilla_setwhitespacevisibility_callback = nullptr;
        qsciscintilla_setwrapmode_callback = nullptr;
        qsciscintilla_undo_callback = nullptr;
        qsciscintilla_unindent_callback = nullptr;
        qsciscintilla_zoomin_callback = nullptr;
        qsciscintilla_zoomin2_callback = nullptr;
        qsciscintilla_zoomout_callback = nullptr;
        qsciscintilla_zoomout2_callback = nullptr;
        qsciscintilla_zoomto_callback = nullptr;
        qsciscintilla_event_callback = nullptr;
        qsciscintilla_changeevent_callback = nullptr;
        qsciscintilla_contextmenuevent_callback = nullptr;
        qsciscintilla_wheelevent_callback = nullptr;
        qsciscintilla_caninsertfrommimedata_callback = nullptr;
        qsciscintilla_frommimedata_callback = nullptr;
        qsciscintilla_tomimedata_callback = nullptr;
        qsciscintilla_dragenterevent_callback = nullptr;
        qsciscintilla_dragleaveevent_callback = nullptr;
        qsciscintilla_dragmoveevent_callback = nullptr;
        qsciscintilla_dropevent_callback = nullptr;
        qsciscintilla_focusinevent_callback = nullptr;
        qsciscintilla_focusoutevent_callback = nullptr;
        qsciscintilla_focusnextprevchild_callback = nullptr;
        qsciscintilla_keypressevent_callback = nullptr;
        qsciscintilla_inputmethodevent_callback = nullptr;
        qsciscintilla_mousedoubleclickevent_callback = nullptr;
        qsciscintilla_mousemoveevent_callback = nullptr;
        qsciscintilla_mousepressevent_callback = nullptr;
        qsciscintilla_mousereleaseevent_callback = nullptr;
        qsciscintilla_paintevent_callback = nullptr;
        qsciscintilla_resizeevent_callback = nullptr;
        qsciscintilla_scrollcontentsby_callback = nullptr;
        qsciscintilla_minimumsizehint_callback = nullptr;
        qsciscintilla_sizehint_callback = nullptr;
        qsciscintilla_setupviewport_callback = nullptr;
        qsciscintilla_eventfilter_callback = nullptr;
        qsciscintilla_viewportevent_callback = nullptr;
        qsciscintilla_viewportsizehint_callback = nullptr;
        qsciscintilla_initstyleoption_callback = nullptr;
        qsciscintilla_devtype_callback = nullptr;
        qsciscintilla_setvisible_callback = nullptr;
        qsciscintilla_heightforwidth_callback = nullptr;
        qsciscintilla_hasheightforwidth_callback = nullptr;
        qsciscintilla_paintengine_callback = nullptr;
        qsciscintilla_keyreleaseevent_callback = nullptr;
        qsciscintilla_enterevent_callback = nullptr;
        qsciscintilla_leaveevent_callback = nullptr;
        qsciscintilla_moveevent_callback = nullptr;
        qsciscintilla_closeevent_callback = nullptr;
        qsciscintilla_tabletevent_callback = nullptr;
        qsciscintilla_actionevent_callback = nullptr;
        qsciscintilla_showevent_callback = nullptr;
        qsciscintilla_hideevent_callback = nullptr;
        qsciscintilla_nativeevent_callback = nullptr;
        qsciscintilla_metric_callback = nullptr;
        qsciscintilla_initpainter_callback = nullptr;
        qsciscintilla_redirected_callback = nullptr;
        qsciscintilla_sharedpainter_callback = nullptr;
        qsciscintilla_timerevent_callback = nullptr;
        qsciscintilla_childevent_callback = nullptr;
        qsciscintilla_customevent_callback = nullptr;
        qsciscintilla_connectnotify_callback = nullptr;
        qsciscintilla_disconnectnotify_callback = nullptr;
        qsciscintilla_setscrollbars_callback = nullptr;
        qsciscintilla_contextmenuneeded_callback = nullptr;
        qsciscintilla_setviewportmargins_callback = nullptr;
        qsciscintilla_viewportmargins_callback = nullptr;
        qsciscintilla_drawframe_callback = nullptr;
        qsciscintilla_updatemicrofocus_callback = nullptr;
        qsciscintilla_create_callback = nullptr;
        qsciscintilla_destroy_callback = nullptr;
        qsciscintilla_focusnextchild_callback = nullptr;
        qsciscintilla_focuspreviouschild_callback = nullptr;
        qsciscintilla_sender_callback = nullptr;
        qsciscintilla_sendersignalindex_callback = nullptr;
        qsciscintilla_receivers_callback = nullptr;
        qsciscintilla_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciScintilla_Metacall_Callback(QsciScintilla_Metacall_Callback cb) { qsciscintilla_metacall_callback = cb; }
    void setQsciScintilla_ApiContext_Callback(QsciScintilla_ApiContext_Callback cb) { qsciscintilla_apicontext_callback = cb; }
    void setQsciScintilla_FindFirst_Callback(QsciScintilla_FindFirst_Callback cb) { qsciscintilla_findfirst_callback = cb; }
    void setQsciScintilla_FindFirstInSelection_Callback(QsciScintilla_FindFirstInSelection_Callback cb) { qsciscintilla_findfirstinselection_callback = cb; }
    void setQsciScintilla_FindNext_Callback(QsciScintilla_FindNext_Callback cb) { qsciscintilla_findnext_callback = cb; }
    void setQsciScintilla_Recolor_Callback(QsciScintilla_Recolor_Callback cb) { qsciscintilla_recolor_callback = cb; }
    void setQsciScintilla_Replace_Callback(QsciScintilla_Replace_Callback cb) { qsciscintilla_replace_callback = cb; }
    void setQsciScintilla_Append_Callback(QsciScintilla_Append_Callback cb) { qsciscintilla_append_callback = cb; }
    void setQsciScintilla_AutoCompleteFromAll_Callback(QsciScintilla_AutoCompleteFromAll_Callback cb) { qsciscintilla_autocompletefromall_callback = cb; }
    void setQsciScintilla_AutoCompleteFromAPIs_Callback(QsciScintilla_AutoCompleteFromAPIs_Callback cb) { qsciscintilla_autocompletefromapis_callback = cb; }
    void setQsciScintilla_AutoCompleteFromDocument_Callback(QsciScintilla_AutoCompleteFromDocument_Callback cb) { qsciscintilla_autocompletefromdocument_callback = cb; }
    void setQsciScintilla_CallTip_Callback(QsciScintilla_CallTip_Callback cb) { qsciscintilla_calltip_callback = cb; }
    void setQsciScintilla_Clear_Callback(QsciScintilla_Clear_Callback cb) { qsciscintilla_clear_callback = cb; }
    void setQsciScintilla_Copy_Callback(QsciScintilla_Copy_Callback cb) { qsciscintilla_copy_callback = cb; }
    void setQsciScintilla_Cut_Callback(QsciScintilla_Cut_Callback cb) { qsciscintilla_cut_callback = cb; }
    void setQsciScintilla_EnsureCursorVisible_Callback(QsciScintilla_EnsureCursorVisible_Callback cb) { qsciscintilla_ensurecursorvisible_callback = cb; }
    void setQsciScintilla_EnsureLineVisible_Callback(QsciScintilla_EnsureLineVisible_Callback cb) { qsciscintilla_ensurelinevisible_callback = cb; }
    void setQsciScintilla_FoldAll_Callback(QsciScintilla_FoldAll_Callback cb) { qsciscintilla_foldall_callback = cb; }
    void setQsciScintilla_FoldLine_Callback(QsciScintilla_FoldLine_Callback cb) { qsciscintilla_foldline_callback = cb; }
    void setQsciScintilla_Indent_Callback(QsciScintilla_Indent_Callback cb) { qsciscintilla_indent_callback = cb; }
    void setQsciScintilla_Insert_Callback(QsciScintilla_Insert_Callback cb) { qsciscintilla_insert_callback = cb; }
    void setQsciScintilla_InsertAt_Callback(QsciScintilla_InsertAt_Callback cb) { qsciscintilla_insertat_callback = cb; }
    void setQsciScintilla_MoveToMatchingBrace_Callback(QsciScintilla_MoveToMatchingBrace_Callback cb) { qsciscintilla_movetomatchingbrace_callback = cb; }
    void setQsciScintilla_Paste_Callback(QsciScintilla_Paste_Callback cb) { qsciscintilla_paste_callback = cb; }
    void setQsciScintilla_Redo_Callback(QsciScintilla_Redo_Callback cb) { qsciscintilla_redo_callback = cb; }
    void setQsciScintilla_RemoveSelectedText_Callback(QsciScintilla_RemoveSelectedText_Callback cb) { qsciscintilla_removeselectedtext_callback = cb; }
    void setQsciScintilla_ReplaceSelectedText_Callback(QsciScintilla_ReplaceSelectedText_Callback cb) { qsciscintilla_replaceselectedtext_callback = cb; }
    void setQsciScintilla_ResetSelectionBackgroundColor_Callback(QsciScintilla_ResetSelectionBackgroundColor_Callback cb) { qsciscintilla_resetselectionbackgroundcolor_callback = cb; }
    void setQsciScintilla_ResetSelectionForegroundColor_Callback(QsciScintilla_ResetSelectionForegroundColor_Callback cb) { qsciscintilla_resetselectionforegroundcolor_callback = cb; }
    void setQsciScintilla_SelectAll_Callback(QsciScintilla_SelectAll_Callback cb) { qsciscintilla_selectall_callback = cb; }
    void setQsciScintilla_SelectToMatchingBrace_Callback(QsciScintilla_SelectToMatchingBrace_Callback cb) { qsciscintilla_selecttomatchingbrace_callback = cb; }
    void setQsciScintilla_SetAutoCompletionCaseSensitivity_Callback(QsciScintilla_SetAutoCompletionCaseSensitivity_Callback cb) { qsciscintilla_setautocompletioncasesensitivity_callback = cb; }
    void setQsciScintilla_SetAutoCompletionReplaceWord_Callback(QsciScintilla_SetAutoCompletionReplaceWord_Callback cb) { qsciscintilla_setautocompletionreplaceword_callback = cb; }
    void setQsciScintilla_SetAutoCompletionShowSingle_Callback(QsciScintilla_SetAutoCompletionShowSingle_Callback cb) { qsciscintilla_setautocompletionshowsingle_callback = cb; }
    void setQsciScintilla_SetAutoCompletionSource_Callback(QsciScintilla_SetAutoCompletionSource_Callback cb) { qsciscintilla_setautocompletionsource_callback = cb; }
    void setQsciScintilla_SetAutoCompletionThreshold_Callback(QsciScintilla_SetAutoCompletionThreshold_Callback cb) { qsciscintilla_setautocompletionthreshold_callback = cb; }
    void setQsciScintilla_SetAutoCompletionUseSingle_Callback(QsciScintilla_SetAutoCompletionUseSingle_Callback cb) { qsciscintilla_setautocompletionusesingle_callback = cb; }
    void setQsciScintilla_SetAutoIndent_Callback(QsciScintilla_SetAutoIndent_Callback cb) { qsciscintilla_setautoindent_callback = cb; }
    void setQsciScintilla_SetBraceMatching_Callback(QsciScintilla_SetBraceMatching_Callback cb) { qsciscintilla_setbracematching_callback = cb; }
    void setQsciScintilla_SetBackspaceUnindents_Callback(QsciScintilla_SetBackspaceUnindents_Callback cb) { qsciscintilla_setbackspaceunindents_callback = cb; }
    void setQsciScintilla_SetCaretForegroundColor_Callback(QsciScintilla_SetCaretForegroundColor_Callback cb) { qsciscintilla_setcaretforegroundcolor_callback = cb; }
    void setQsciScintilla_SetCaretLineBackgroundColor_Callback(QsciScintilla_SetCaretLineBackgroundColor_Callback cb) { qsciscintilla_setcaretlinebackgroundcolor_callback = cb; }
    void setQsciScintilla_SetCaretLineFrameWidth_Callback(QsciScintilla_SetCaretLineFrameWidth_Callback cb) { qsciscintilla_setcaretlineframewidth_callback = cb; }
    void setQsciScintilla_SetCaretLineVisible_Callback(QsciScintilla_SetCaretLineVisible_Callback cb) { qsciscintilla_setcaretlinevisible_callback = cb; }
    void setQsciScintilla_SetCaretWidth_Callback(QsciScintilla_SetCaretWidth_Callback cb) { qsciscintilla_setcaretwidth_callback = cb; }
    void setQsciScintilla_SetColor_Callback(QsciScintilla_SetColor_Callback cb) { qsciscintilla_setcolor_callback = cb; }
    void setQsciScintilla_SetCursorPosition_Callback(QsciScintilla_SetCursorPosition_Callback cb) { qsciscintilla_setcursorposition_callback = cb; }
    void setQsciScintilla_SetEolMode_Callback(QsciScintilla_SetEolMode_Callback cb) { qsciscintilla_seteolmode_callback = cb; }
    void setQsciScintilla_SetEolVisibility_Callback(QsciScintilla_SetEolVisibility_Callback cb) { qsciscintilla_seteolvisibility_callback = cb; }
    void setQsciScintilla_SetFolding_Callback(QsciScintilla_SetFolding_Callback cb) { qsciscintilla_setfolding_callback = cb; }
    void setQsciScintilla_SetIndentation_Callback(QsciScintilla_SetIndentation_Callback cb) { qsciscintilla_setindentation_callback = cb; }
    void setQsciScintilla_SetIndentationGuides_Callback(QsciScintilla_SetIndentationGuides_Callback cb) { qsciscintilla_setindentationguides_callback = cb; }
    void setQsciScintilla_SetIndentationGuidesBackgroundColor_Callback(QsciScintilla_SetIndentationGuidesBackgroundColor_Callback cb) { qsciscintilla_setindentationguidesbackgroundcolor_callback = cb; }
    void setQsciScintilla_SetIndentationGuidesForegroundColor_Callback(QsciScintilla_SetIndentationGuidesForegroundColor_Callback cb) { qsciscintilla_setindentationguidesforegroundcolor_callback = cb; }
    void setQsciScintilla_SetIndentationsUseTabs_Callback(QsciScintilla_SetIndentationsUseTabs_Callback cb) { qsciscintilla_setindentationsusetabs_callback = cb; }
    void setQsciScintilla_SetIndentationWidth_Callback(QsciScintilla_SetIndentationWidth_Callback cb) { qsciscintilla_setindentationwidth_callback = cb; }
    void setQsciScintilla_SetLexer_Callback(QsciScintilla_SetLexer_Callback cb) { qsciscintilla_setlexer_callback = cb; }
    void setQsciScintilla_SetMarginsBackgroundColor_Callback(QsciScintilla_SetMarginsBackgroundColor_Callback cb) { qsciscintilla_setmarginsbackgroundcolor_callback = cb; }
    void setQsciScintilla_SetMarginsFont_Callback(QsciScintilla_SetMarginsFont_Callback cb) { qsciscintilla_setmarginsfont_callback = cb; }
    void setQsciScintilla_SetMarginsForegroundColor_Callback(QsciScintilla_SetMarginsForegroundColor_Callback cb) { qsciscintilla_setmarginsforegroundcolor_callback = cb; }
    void setQsciScintilla_SetMarginLineNumbers_Callback(QsciScintilla_SetMarginLineNumbers_Callback cb) { qsciscintilla_setmarginlinenumbers_callback = cb; }
    void setQsciScintilla_SetMarginMarkerMask_Callback(QsciScintilla_SetMarginMarkerMask_Callback cb) { qsciscintilla_setmarginmarkermask_callback = cb; }
    void setQsciScintilla_SetMarginSensitivity_Callback(QsciScintilla_SetMarginSensitivity_Callback cb) { qsciscintilla_setmarginsensitivity_callback = cb; }
    void setQsciScintilla_SetMarginWidth_Callback(QsciScintilla_SetMarginWidth_Callback cb) { qsciscintilla_setmarginwidth_callback = cb; }
    void setQsciScintilla_SetMarginWidth2_Callback(QsciScintilla_SetMarginWidth2_Callback cb) { qsciscintilla_setmarginwidth2_callback = cb; }
    void setQsciScintilla_SetModified_Callback(QsciScintilla_SetModified_Callback cb) { qsciscintilla_setmodified_callback = cb; }
    void setQsciScintilla_SetPaper_Callback(QsciScintilla_SetPaper_Callback cb) { qsciscintilla_setpaper_callback = cb; }
    void setQsciScintilla_SetReadOnly_Callback(QsciScintilla_SetReadOnly_Callback cb) { qsciscintilla_setreadonly_callback = cb; }
    void setQsciScintilla_SetSelection_Callback(QsciScintilla_SetSelection_Callback cb) { qsciscintilla_setselection_callback = cb; }
    void setQsciScintilla_SetSelectionBackgroundColor_Callback(QsciScintilla_SetSelectionBackgroundColor_Callback cb) { qsciscintilla_setselectionbackgroundcolor_callback = cb; }
    void setQsciScintilla_SetSelectionForegroundColor_Callback(QsciScintilla_SetSelectionForegroundColor_Callback cb) { qsciscintilla_setselectionforegroundcolor_callback = cb; }
    void setQsciScintilla_SetTabIndents_Callback(QsciScintilla_SetTabIndents_Callback cb) { qsciscintilla_settabindents_callback = cb; }
    void setQsciScintilla_SetTabWidth_Callback(QsciScintilla_SetTabWidth_Callback cb) { qsciscintilla_settabwidth_callback = cb; }
    void setQsciScintilla_SetText_Callback(QsciScintilla_SetText_Callback cb) { qsciscintilla_settext_callback = cb; }
    void setQsciScintilla_SetUtf8_Callback(QsciScintilla_SetUtf8_Callback cb) { qsciscintilla_setutf8_callback = cb; }
    void setQsciScintilla_SetWhitespaceVisibility_Callback(QsciScintilla_SetWhitespaceVisibility_Callback cb) { qsciscintilla_setwhitespacevisibility_callback = cb; }
    void setQsciScintilla_SetWrapMode_Callback(QsciScintilla_SetWrapMode_Callback cb) { qsciscintilla_setwrapmode_callback = cb; }
    void setQsciScintilla_Undo_Callback(QsciScintilla_Undo_Callback cb) { qsciscintilla_undo_callback = cb; }
    void setQsciScintilla_Unindent_Callback(QsciScintilla_Unindent_Callback cb) { qsciscintilla_unindent_callback = cb; }
    void setQsciScintilla_ZoomIn_Callback(QsciScintilla_ZoomIn_Callback cb) { qsciscintilla_zoomin_callback = cb; }
    void setQsciScintilla_ZoomIn2_Callback(QsciScintilla_ZoomIn2_Callback cb) { qsciscintilla_zoomin2_callback = cb; }
    void setQsciScintilla_ZoomOut_Callback(QsciScintilla_ZoomOut_Callback cb) { qsciscintilla_zoomout_callback = cb; }
    void setQsciScintilla_ZoomOut2_Callback(QsciScintilla_ZoomOut2_Callback cb) { qsciscintilla_zoomout2_callback = cb; }
    void setQsciScintilla_ZoomTo_Callback(QsciScintilla_ZoomTo_Callback cb) { qsciscintilla_zoomto_callback = cb; }
    void setQsciScintilla_Event_Callback(QsciScintilla_Event_Callback cb) { qsciscintilla_event_callback = cb; }
    void setQsciScintilla_ChangeEvent_Callback(QsciScintilla_ChangeEvent_Callback cb) { qsciscintilla_changeevent_callback = cb; }
    void setQsciScintilla_ContextMenuEvent_Callback(QsciScintilla_ContextMenuEvent_Callback cb) { qsciscintilla_contextmenuevent_callback = cb; }
    void setQsciScintilla_WheelEvent_Callback(QsciScintilla_WheelEvent_Callback cb) { qsciscintilla_wheelevent_callback = cb; }
    void setQsciScintilla_CanInsertFromMimeData_Callback(QsciScintilla_CanInsertFromMimeData_Callback cb) { qsciscintilla_caninsertfrommimedata_callback = cb; }
    void setQsciScintilla_FromMimeData_Callback(QsciScintilla_FromMimeData_Callback cb) { qsciscintilla_frommimedata_callback = cb; }
    void setQsciScintilla_ToMimeData_Callback(QsciScintilla_ToMimeData_Callback cb) { qsciscintilla_tomimedata_callback = cb; }
    void setQsciScintilla_DragEnterEvent_Callback(QsciScintilla_DragEnterEvent_Callback cb) { qsciscintilla_dragenterevent_callback = cb; }
    void setQsciScintilla_DragLeaveEvent_Callback(QsciScintilla_DragLeaveEvent_Callback cb) { qsciscintilla_dragleaveevent_callback = cb; }
    void setQsciScintilla_DragMoveEvent_Callback(QsciScintilla_DragMoveEvent_Callback cb) { qsciscintilla_dragmoveevent_callback = cb; }
    void setQsciScintilla_DropEvent_Callback(QsciScintilla_DropEvent_Callback cb) { qsciscintilla_dropevent_callback = cb; }
    void setQsciScintilla_FocusInEvent_Callback(QsciScintilla_FocusInEvent_Callback cb) { qsciscintilla_focusinevent_callback = cb; }
    void setQsciScintilla_FocusOutEvent_Callback(QsciScintilla_FocusOutEvent_Callback cb) { qsciscintilla_focusoutevent_callback = cb; }
    void setQsciScintilla_FocusNextPrevChild_Callback(QsciScintilla_FocusNextPrevChild_Callback cb) { qsciscintilla_focusnextprevchild_callback = cb; }
    void setQsciScintilla_KeyPressEvent_Callback(QsciScintilla_KeyPressEvent_Callback cb) { qsciscintilla_keypressevent_callback = cb; }
    void setQsciScintilla_InputMethodEvent_Callback(QsciScintilla_InputMethodEvent_Callback cb) { qsciscintilla_inputmethodevent_callback = cb; }
    void setQsciScintilla_MouseDoubleClickEvent_Callback(QsciScintilla_MouseDoubleClickEvent_Callback cb) { qsciscintilla_mousedoubleclickevent_callback = cb; }
    void setQsciScintilla_MouseMoveEvent_Callback(QsciScintilla_MouseMoveEvent_Callback cb) { qsciscintilla_mousemoveevent_callback = cb; }
    void setQsciScintilla_MousePressEvent_Callback(QsciScintilla_MousePressEvent_Callback cb) { qsciscintilla_mousepressevent_callback = cb; }
    void setQsciScintilla_MouseReleaseEvent_Callback(QsciScintilla_MouseReleaseEvent_Callback cb) { qsciscintilla_mousereleaseevent_callback = cb; }
    void setQsciScintilla_PaintEvent_Callback(QsciScintilla_PaintEvent_Callback cb) { qsciscintilla_paintevent_callback = cb; }
    void setQsciScintilla_ResizeEvent_Callback(QsciScintilla_ResizeEvent_Callback cb) { qsciscintilla_resizeevent_callback = cb; }
    void setQsciScintilla_ScrollContentsBy_Callback(QsciScintilla_ScrollContentsBy_Callback cb) { qsciscintilla_scrollcontentsby_callback = cb; }
    void setQsciScintilla_MinimumSizeHint_Callback(QsciScintilla_MinimumSizeHint_Callback cb) { qsciscintilla_minimumsizehint_callback = cb; }
    void setQsciScintilla_SizeHint_Callback(QsciScintilla_SizeHint_Callback cb) { qsciscintilla_sizehint_callback = cb; }
    void setQsciScintilla_SetupViewport_Callback(QsciScintilla_SetupViewport_Callback cb) { qsciscintilla_setupviewport_callback = cb; }
    void setQsciScintilla_EventFilter_Callback(QsciScintilla_EventFilter_Callback cb) { qsciscintilla_eventfilter_callback = cb; }
    void setQsciScintilla_ViewportEvent_Callback(QsciScintilla_ViewportEvent_Callback cb) { qsciscintilla_viewportevent_callback = cb; }
    void setQsciScintilla_ViewportSizeHint_Callback(QsciScintilla_ViewportSizeHint_Callback cb) { qsciscintilla_viewportsizehint_callback = cb; }
    void setQsciScintilla_InitStyleOption_Callback(QsciScintilla_InitStyleOption_Callback cb) { qsciscintilla_initstyleoption_callback = cb; }
    void setQsciScintilla_DevType_Callback(QsciScintilla_DevType_Callback cb) { qsciscintilla_devtype_callback = cb; }
    void setQsciScintilla_SetVisible_Callback(QsciScintilla_SetVisible_Callback cb) { qsciscintilla_setvisible_callback = cb; }
    void setQsciScintilla_HeightForWidth_Callback(QsciScintilla_HeightForWidth_Callback cb) { qsciscintilla_heightforwidth_callback = cb; }
    void setQsciScintilla_HasHeightForWidth_Callback(QsciScintilla_HasHeightForWidth_Callback cb) { qsciscintilla_hasheightforwidth_callback = cb; }
    void setQsciScintilla_PaintEngine_Callback(QsciScintilla_PaintEngine_Callback cb) { qsciscintilla_paintengine_callback = cb; }
    void setQsciScintilla_KeyReleaseEvent_Callback(QsciScintilla_KeyReleaseEvent_Callback cb) { qsciscintilla_keyreleaseevent_callback = cb; }
    void setQsciScintilla_EnterEvent_Callback(QsciScintilla_EnterEvent_Callback cb) { qsciscintilla_enterevent_callback = cb; }
    void setQsciScintilla_LeaveEvent_Callback(QsciScintilla_LeaveEvent_Callback cb) { qsciscintilla_leaveevent_callback = cb; }
    void setQsciScintilla_MoveEvent_Callback(QsciScintilla_MoveEvent_Callback cb) { qsciscintilla_moveevent_callback = cb; }
    void setQsciScintilla_CloseEvent_Callback(QsciScintilla_CloseEvent_Callback cb) { qsciscintilla_closeevent_callback = cb; }
    void setQsciScintilla_TabletEvent_Callback(QsciScintilla_TabletEvent_Callback cb) { qsciscintilla_tabletevent_callback = cb; }
    void setQsciScintilla_ActionEvent_Callback(QsciScintilla_ActionEvent_Callback cb) { qsciscintilla_actionevent_callback = cb; }
    void setQsciScintilla_ShowEvent_Callback(QsciScintilla_ShowEvent_Callback cb) { qsciscintilla_showevent_callback = cb; }
    void setQsciScintilla_HideEvent_Callback(QsciScintilla_HideEvent_Callback cb) { qsciscintilla_hideevent_callback = cb; }
    void setQsciScintilla_NativeEvent_Callback(QsciScintilla_NativeEvent_Callback cb) { qsciscintilla_nativeevent_callback = cb; }
    void setQsciScintilla_Metric_Callback(QsciScintilla_Metric_Callback cb) { qsciscintilla_metric_callback = cb; }
    void setQsciScintilla_InitPainter_Callback(QsciScintilla_InitPainter_Callback cb) { qsciscintilla_initpainter_callback = cb; }
    void setQsciScintilla_Redirected_Callback(QsciScintilla_Redirected_Callback cb) { qsciscintilla_redirected_callback = cb; }
    void setQsciScintilla_SharedPainter_Callback(QsciScintilla_SharedPainter_Callback cb) { qsciscintilla_sharedpainter_callback = cb; }
    void setQsciScintilla_TimerEvent_Callback(QsciScintilla_TimerEvent_Callback cb) { qsciscintilla_timerevent_callback = cb; }
    void setQsciScintilla_ChildEvent_Callback(QsciScintilla_ChildEvent_Callback cb) { qsciscintilla_childevent_callback = cb; }
    void setQsciScintilla_CustomEvent_Callback(QsciScintilla_CustomEvent_Callback cb) { qsciscintilla_customevent_callback = cb; }
    void setQsciScintilla_ConnectNotify_Callback(QsciScintilla_ConnectNotify_Callback cb) { qsciscintilla_connectnotify_callback = cb; }
    void setQsciScintilla_DisconnectNotify_Callback(QsciScintilla_DisconnectNotify_Callback cb) { qsciscintilla_disconnectnotify_callback = cb; }
    void setQsciScintilla_SetScrollBars_Callback(QsciScintilla_SetScrollBars_Callback cb) { qsciscintilla_setscrollbars_callback = cb; }
    void setQsciScintilla_ContextMenuNeeded_Callback(QsciScintilla_ContextMenuNeeded_Callback cb) { qsciscintilla_contextmenuneeded_callback = cb; }
    void setQsciScintilla_SetViewportMargins_Callback(QsciScintilla_SetViewportMargins_Callback cb) { qsciscintilla_setviewportmargins_callback = cb; }
    void setQsciScintilla_ViewportMargins_Callback(QsciScintilla_ViewportMargins_Callback cb) { qsciscintilla_viewportmargins_callback = cb; }
    void setQsciScintilla_DrawFrame_Callback(QsciScintilla_DrawFrame_Callback cb) { qsciscintilla_drawframe_callback = cb; }
    void setQsciScintilla_UpdateMicroFocus_Callback(QsciScintilla_UpdateMicroFocus_Callback cb) { qsciscintilla_updatemicrofocus_callback = cb; }
    void setQsciScintilla_Create_Callback(QsciScintilla_Create_Callback cb) { qsciscintilla_create_callback = cb; }
    void setQsciScintilla_Destroy_Callback(QsciScintilla_Destroy_Callback cb) { qsciscintilla_destroy_callback = cb; }
    void setQsciScintilla_FocusNextChild_Callback(QsciScintilla_FocusNextChild_Callback cb) { qsciscintilla_focusnextchild_callback = cb; }
    void setQsciScintilla_FocusPreviousChild_Callback(QsciScintilla_FocusPreviousChild_Callback cb) { qsciscintilla_focuspreviouschild_callback = cb; }
    void setQsciScintilla_Sender_Callback(QsciScintilla_Sender_Callback cb) { qsciscintilla_sender_callback = cb; }
    void setQsciScintilla_SenderSignalIndex_Callback(QsciScintilla_SenderSignalIndex_Callback cb) { qsciscintilla_sendersignalindex_callback = cb; }
    void setQsciScintilla_Receivers_Callback(QsciScintilla_Receivers_Callback cb) { qsciscintilla_receivers_callback = cb; }
    void setQsciScintilla_IsSignalConnected_Callback(QsciScintilla_IsSignalConnected_Callback cb) { qsciscintilla_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciScintilla_Metacall_IsBase(bool value) const { qsciscintilla_metacall_isbase = value; }
    void setQsciScintilla_ApiContext_IsBase(bool value) const { qsciscintilla_apicontext_isbase = value; }
    void setQsciScintilla_FindFirst_IsBase(bool value) const { qsciscintilla_findfirst_isbase = value; }
    void setQsciScintilla_FindFirstInSelection_IsBase(bool value) const { qsciscintilla_findfirstinselection_isbase = value; }
    void setQsciScintilla_FindNext_IsBase(bool value) const { qsciscintilla_findnext_isbase = value; }
    void setQsciScintilla_Recolor_IsBase(bool value) const { qsciscintilla_recolor_isbase = value; }
    void setQsciScintilla_Replace_IsBase(bool value) const { qsciscintilla_replace_isbase = value; }
    void setQsciScintilla_Append_IsBase(bool value) const { qsciscintilla_append_isbase = value; }
    void setQsciScintilla_AutoCompleteFromAll_IsBase(bool value) const { qsciscintilla_autocompletefromall_isbase = value; }
    void setQsciScintilla_AutoCompleteFromAPIs_IsBase(bool value) const { qsciscintilla_autocompletefromapis_isbase = value; }
    void setQsciScintilla_AutoCompleteFromDocument_IsBase(bool value) const { qsciscintilla_autocompletefromdocument_isbase = value; }
    void setQsciScintilla_CallTip_IsBase(bool value) const { qsciscintilla_calltip_isbase = value; }
    void setQsciScintilla_Clear_IsBase(bool value) const { qsciscintilla_clear_isbase = value; }
    void setQsciScintilla_Copy_IsBase(bool value) const { qsciscintilla_copy_isbase = value; }
    void setQsciScintilla_Cut_IsBase(bool value) const { qsciscintilla_cut_isbase = value; }
    void setQsciScintilla_EnsureCursorVisible_IsBase(bool value) const { qsciscintilla_ensurecursorvisible_isbase = value; }
    void setQsciScintilla_EnsureLineVisible_IsBase(bool value) const { qsciscintilla_ensurelinevisible_isbase = value; }
    void setQsciScintilla_FoldAll_IsBase(bool value) const { qsciscintilla_foldall_isbase = value; }
    void setQsciScintilla_FoldLine_IsBase(bool value) const { qsciscintilla_foldline_isbase = value; }
    void setQsciScintilla_Indent_IsBase(bool value) const { qsciscintilla_indent_isbase = value; }
    void setQsciScintilla_Insert_IsBase(bool value) const { qsciscintilla_insert_isbase = value; }
    void setQsciScintilla_InsertAt_IsBase(bool value) const { qsciscintilla_insertat_isbase = value; }
    void setQsciScintilla_MoveToMatchingBrace_IsBase(bool value) const { qsciscintilla_movetomatchingbrace_isbase = value; }
    void setQsciScintilla_Paste_IsBase(bool value) const { qsciscintilla_paste_isbase = value; }
    void setQsciScintilla_Redo_IsBase(bool value) const { qsciscintilla_redo_isbase = value; }
    void setQsciScintilla_RemoveSelectedText_IsBase(bool value) const { qsciscintilla_removeselectedtext_isbase = value; }
    void setQsciScintilla_ReplaceSelectedText_IsBase(bool value) const { qsciscintilla_replaceselectedtext_isbase = value; }
    void setQsciScintilla_ResetSelectionBackgroundColor_IsBase(bool value) const { qsciscintilla_resetselectionbackgroundcolor_isbase = value; }
    void setQsciScintilla_ResetSelectionForegroundColor_IsBase(bool value) const { qsciscintilla_resetselectionforegroundcolor_isbase = value; }
    void setQsciScintilla_SelectAll_IsBase(bool value) const { qsciscintilla_selectall_isbase = value; }
    void setQsciScintilla_SelectToMatchingBrace_IsBase(bool value) const { qsciscintilla_selecttomatchingbrace_isbase = value; }
    void setQsciScintilla_SetAutoCompletionCaseSensitivity_IsBase(bool value) const { qsciscintilla_setautocompletioncasesensitivity_isbase = value; }
    void setQsciScintilla_SetAutoCompletionReplaceWord_IsBase(bool value) const { qsciscintilla_setautocompletionreplaceword_isbase = value; }
    void setQsciScintilla_SetAutoCompletionShowSingle_IsBase(bool value) const { qsciscintilla_setautocompletionshowsingle_isbase = value; }
    void setQsciScintilla_SetAutoCompletionSource_IsBase(bool value) const { qsciscintilla_setautocompletionsource_isbase = value; }
    void setQsciScintilla_SetAutoCompletionThreshold_IsBase(bool value) const { qsciscintilla_setautocompletionthreshold_isbase = value; }
    void setQsciScintilla_SetAutoCompletionUseSingle_IsBase(bool value) const { qsciscintilla_setautocompletionusesingle_isbase = value; }
    void setQsciScintilla_SetAutoIndent_IsBase(bool value) const { qsciscintilla_setautoindent_isbase = value; }
    void setQsciScintilla_SetBraceMatching_IsBase(bool value) const { qsciscintilla_setbracematching_isbase = value; }
    void setQsciScintilla_SetBackspaceUnindents_IsBase(bool value) const { qsciscintilla_setbackspaceunindents_isbase = value; }
    void setQsciScintilla_SetCaretForegroundColor_IsBase(bool value) const { qsciscintilla_setcaretforegroundcolor_isbase = value; }
    void setQsciScintilla_SetCaretLineBackgroundColor_IsBase(bool value) const { qsciscintilla_setcaretlinebackgroundcolor_isbase = value; }
    void setQsciScintilla_SetCaretLineFrameWidth_IsBase(bool value) const { qsciscintilla_setcaretlineframewidth_isbase = value; }
    void setQsciScintilla_SetCaretLineVisible_IsBase(bool value) const { qsciscintilla_setcaretlinevisible_isbase = value; }
    void setQsciScintilla_SetCaretWidth_IsBase(bool value) const { qsciscintilla_setcaretwidth_isbase = value; }
    void setQsciScintilla_SetColor_IsBase(bool value) const { qsciscintilla_setcolor_isbase = value; }
    void setQsciScintilla_SetCursorPosition_IsBase(bool value) const { qsciscintilla_setcursorposition_isbase = value; }
    void setQsciScintilla_SetEolMode_IsBase(bool value) const { qsciscintilla_seteolmode_isbase = value; }
    void setQsciScintilla_SetEolVisibility_IsBase(bool value) const { qsciscintilla_seteolvisibility_isbase = value; }
    void setQsciScintilla_SetFolding_IsBase(bool value) const { qsciscintilla_setfolding_isbase = value; }
    void setQsciScintilla_SetIndentation_IsBase(bool value) const { qsciscintilla_setindentation_isbase = value; }
    void setQsciScintilla_SetIndentationGuides_IsBase(bool value) const { qsciscintilla_setindentationguides_isbase = value; }
    void setQsciScintilla_SetIndentationGuidesBackgroundColor_IsBase(bool value) const { qsciscintilla_setindentationguidesbackgroundcolor_isbase = value; }
    void setQsciScintilla_SetIndentationGuidesForegroundColor_IsBase(bool value) const { qsciscintilla_setindentationguidesforegroundcolor_isbase = value; }
    void setQsciScintilla_SetIndentationsUseTabs_IsBase(bool value) const { qsciscintilla_setindentationsusetabs_isbase = value; }
    void setQsciScintilla_SetIndentationWidth_IsBase(bool value) const { qsciscintilla_setindentationwidth_isbase = value; }
    void setQsciScintilla_SetLexer_IsBase(bool value) const { qsciscintilla_setlexer_isbase = value; }
    void setQsciScintilla_SetMarginsBackgroundColor_IsBase(bool value) const { qsciscintilla_setmarginsbackgroundcolor_isbase = value; }
    void setQsciScintilla_SetMarginsFont_IsBase(bool value) const { qsciscintilla_setmarginsfont_isbase = value; }
    void setQsciScintilla_SetMarginsForegroundColor_IsBase(bool value) const { qsciscintilla_setmarginsforegroundcolor_isbase = value; }
    void setQsciScintilla_SetMarginLineNumbers_IsBase(bool value) const { qsciscintilla_setmarginlinenumbers_isbase = value; }
    void setQsciScintilla_SetMarginMarkerMask_IsBase(bool value) const { qsciscintilla_setmarginmarkermask_isbase = value; }
    void setQsciScintilla_SetMarginSensitivity_IsBase(bool value) const { qsciscintilla_setmarginsensitivity_isbase = value; }
    void setQsciScintilla_SetMarginWidth_IsBase(bool value) const { qsciscintilla_setmarginwidth_isbase = value; }
    void setQsciScintilla_SetMarginWidth2_IsBase(bool value) const { qsciscintilla_setmarginwidth2_isbase = value; }
    void setQsciScintilla_SetModified_IsBase(bool value) const { qsciscintilla_setmodified_isbase = value; }
    void setQsciScintilla_SetPaper_IsBase(bool value) const { qsciscintilla_setpaper_isbase = value; }
    void setQsciScintilla_SetReadOnly_IsBase(bool value) const { qsciscintilla_setreadonly_isbase = value; }
    void setQsciScintilla_SetSelection_IsBase(bool value) const { qsciscintilla_setselection_isbase = value; }
    void setQsciScintilla_SetSelectionBackgroundColor_IsBase(bool value) const { qsciscintilla_setselectionbackgroundcolor_isbase = value; }
    void setQsciScintilla_SetSelectionForegroundColor_IsBase(bool value) const { qsciscintilla_setselectionforegroundcolor_isbase = value; }
    void setQsciScintilla_SetTabIndents_IsBase(bool value) const { qsciscintilla_settabindents_isbase = value; }
    void setQsciScintilla_SetTabWidth_IsBase(bool value) const { qsciscintilla_settabwidth_isbase = value; }
    void setQsciScintilla_SetText_IsBase(bool value) const { qsciscintilla_settext_isbase = value; }
    void setQsciScintilla_SetUtf8_IsBase(bool value) const { qsciscintilla_setutf8_isbase = value; }
    void setQsciScintilla_SetWhitespaceVisibility_IsBase(bool value) const { qsciscintilla_setwhitespacevisibility_isbase = value; }
    void setQsciScintilla_SetWrapMode_IsBase(bool value) const { qsciscintilla_setwrapmode_isbase = value; }
    void setQsciScintilla_Undo_IsBase(bool value) const { qsciscintilla_undo_isbase = value; }
    void setQsciScintilla_Unindent_IsBase(bool value) const { qsciscintilla_unindent_isbase = value; }
    void setQsciScintilla_ZoomIn_IsBase(bool value) const { qsciscintilla_zoomin_isbase = value; }
    void setQsciScintilla_ZoomIn2_IsBase(bool value) const { qsciscintilla_zoomin2_isbase = value; }
    void setQsciScintilla_ZoomOut_IsBase(bool value) const { qsciscintilla_zoomout_isbase = value; }
    void setQsciScintilla_ZoomOut2_IsBase(bool value) const { qsciscintilla_zoomout2_isbase = value; }
    void setQsciScintilla_ZoomTo_IsBase(bool value) const { qsciscintilla_zoomto_isbase = value; }
    void setQsciScintilla_Event_IsBase(bool value) const { qsciscintilla_event_isbase = value; }
    void setQsciScintilla_ChangeEvent_IsBase(bool value) const { qsciscintilla_changeevent_isbase = value; }
    void setQsciScintilla_ContextMenuEvent_IsBase(bool value) const { qsciscintilla_contextmenuevent_isbase = value; }
    void setQsciScintilla_WheelEvent_IsBase(bool value) const { qsciscintilla_wheelevent_isbase = value; }
    void setQsciScintilla_CanInsertFromMimeData_IsBase(bool value) const { qsciscintilla_caninsertfrommimedata_isbase = value; }
    void setQsciScintilla_FromMimeData_IsBase(bool value) const { qsciscintilla_frommimedata_isbase = value; }
    void setQsciScintilla_ToMimeData_IsBase(bool value) const { qsciscintilla_tomimedata_isbase = value; }
    void setQsciScintilla_DragEnterEvent_IsBase(bool value) const { qsciscintilla_dragenterevent_isbase = value; }
    void setQsciScintilla_DragLeaveEvent_IsBase(bool value) const { qsciscintilla_dragleaveevent_isbase = value; }
    void setQsciScintilla_DragMoveEvent_IsBase(bool value) const { qsciscintilla_dragmoveevent_isbase = value; }
    void setQsciScintilla_DropEvent_IsBase(bool value) const { qsciscintilla_dropevent_isbase = value; }
    void setQsciScintilla_FocusInEvent_IsBase(bool value) const { qsciscintilla_focusinevent_isbase = value; }
    void setQsciScintilla_FocusOutEvent_IsBase(bool value) const { qsciscintilla_focusoutevent_isbase = value; }
    void setQsciScintilla_FocusNextPrevChild_IsBase(bool value) const { qsciscintilla_focusnextprevchild_isbase = value; }
    void setQsciScintilla_KeyPressEvent_IsBase(bool value) const { qsciscintilla_keypressevent_isbase = value; }
    void setQsciScintilla_InputMethodEvent_IsBase(bool value) const { qsciscintilla_inputmethodevent_isbase = value; }
    void setQsciScintilla_MouseDoubleClickEvent_IsBase(bool value) const { qsciscintilla_mousedoubleclickevent_isbase = value; }
    void setQsciScintilla_MouseMoveEvent_IsBase(bool value) const { qsciscintilla_mousemoveevent_isbase = value; }
    void setQsciScintilla_MousePressEvent_IsBase(bool value) const { qsciscintilla_mousepressevent_isbase = value; }
    void setQsciScintilla_MouseReleaseEvent_IsBase(bool value) const { qsciscintilla_mousereleaseevent_isbase = value; }
    void setQsciScintilla_PaintEvent_IsBase(bool value) const { qsciscintilla_paintevent_isbase = value; }
    void setQsciScintilla_ResizeEvent_IsBase(bool value) const { qsciscintilla_resizeevent_isbase = value; }
    void setQsciScintilla_ScrollContentsBy_IsBase(bool value) const { qsciscintilla_scrollcontentsby_isbase = value; }
    void setQsciScintilla_MinimumSizeHint_IsBase(bool value) const { qsciscintilla_minimumsizehint_isbase = value; }
    void setQsciScintilla_SizeHint_IsBase(bool value) const { qsciscintilla_sizehint_isbase = value; }
    void setQsciScintilla_SetupViewport_IsBase(bool value) const { qsciscintilla_setupviewport_isbase = value; }
    void setQsciScintilla_EventFilter_IsBase(bool value) const { qsciscintilla_eventfilter_isbase = value; }
    void setQsciScintilla_ViewportEvent_IsBase(bool value) const { qsciscintilla_viewportevent_isbase = value; }
    void setQsciScintilla_ViewportSizeHint_IsBase(bool value) const { qsciscintilla_viewportsizehint_isbase = value; }
    void setQsciScintilla_InitStyleOption_IsBase(bool value) const { qsciscintilla_initstyleoption_isbase = value; }
    void setQsciScintilla_DevType_IsBase(bool value) const { qsciscintilla_devtype_isbase = value; }
    void setQsciScintilla_SetVisible_IsBase(bool value) const { qsciscintilla_setvisible_isbase = value; }
    void setQsciScintilla_HeightForWidth_IsBase(bool value) const { qsciscintilla_heightforwidth_isbase = value; }
    void setQsciScintilla_HasHeightForWidth_IsBase(bool value) const { qsciscintilla_hasheightforwidth_isbase = value; }
    void setQsciScintilla_PaintEngine_IsBase(bool value) const { qsciscintilla_paintengine_isbase = value; }
    void setQsciScintilla_KeyReleaseEvent_IsBase(bool value) const { qsciscintilla_keyreleaseevent_isbase = value; }
    void setQsciScintilla_EnterEvent_IsBase(bool value) const { qsciscintilla_enterevent_isbase = value; }
    void setQsciScintilla_LeaveEvent_IsBase(bool value) const { qsciscintilla_leaveevent_isbase = value; }
    void setQsciScintilla_MoveEvent_IsBase(bool value) const { qsciscintilla_moveevent_isbase = value; }
    void setQsciScintilla_CloseEvent_IsBase(bool value) const { qsciscintilla_closeevent_isbase = value; }
    void setQsciScintilla_TabletEvent_IsBase(bool value) const { qsciscintilla_tabletevent_isbase = value; }
    void setQsciScintilla_ActionEvent_IsBase(bool value) const { qsciscintilla_actionevent_isbase = value; }
    void setQsciScintilla_ShowEvent_IsBase(bool value) const { qsciscintilla_showevent_isbase = value; }
    void setQsciScintilla_HideEvent_IsBase(bool value) const { qsciscintilla_hideevent_isbase = value; }
    void setQsciScintilla_NativeEvent_IsBase(bool value) const { qsciscintilla_nativeevent_isbase = value; }
    void setQsciScintilla_Metric_IsBase(bool value) const { qsciscintilla_metric_isbase = value; }
    void setQsciScintilla_InitPainter_IsBase(bool value) const { qsciscintilla_initpainter_isbase = value; }
    void setQsciScintilla_Redirected_IsBase(bool value) const { qsciscintilla_redirected_isbase = value; }
    void setQsciScintilla_SharedPainter_IsBase(bool value) const { qsciscintilla_sharedpainter_isbase = value; }
    void setQsciScintilla_TimerEvent_IsBase(bool value) const { qsciscintilla_timerevent_isbase = value; }
    void setQsciScintilla_ChildEvent_IsBase(bool value) const { qsciscintilla_childevent_isbase = value; }
    void setQsciScintilla_CustomEvent_IsBase(bool value) const { qsciscintilla_customevent_isbase = value; }
    void setQsciScintilla_ConnectNotify_IsBase(bool value) const { qsciscintilla_connectnotify_isbase = value; }
    void setQsciScintilla_DisconnectNotify_IsBase(bool value) const { qsciscintilla_disconnectnotify_isbase = value; }
    void setQsciScintilla_SetScrollBars_IsBase(bool value) const { qsciscintilla_setscrollbars_isbase = value; }
    void setQsciScintilla_ContextMenuNeeded_IsBase(bool value) const { qsciscintilla_contextmenuneeded_isbase = value; }
    void setQsciScintilla_SetViewportMargins_IsBase(bool value) const { qsciscintilla_setviewportmargins_isbase = value; }
    void setQsciScintilla_ViewportMargins_IsBase(bool value) const { qsciscintilla_viewportmargins_isbase = value; }
    void setQsciScintilla_DrawFrame_IsBase(bool value) const { qsciscintilla_drawframe_isbase = value; }
    void setQsciScintilla_UpdateMicroFocus_IsBase(bool value) const { qsciscintilla_updatemicrofocus_isbase = value; }
    void setQsciScintilla_Create_IsBase(bool value) const { qsciscintilla_create_isbase = value; }
    void setQsciScintilla_Destroy_IsBase(bool value) const { qsciscintilla_destroy_isbase = value; }
    void setQsciScintilla_FocusNextChild_IsBase(bool value) const { qsciscintilla_focusnextchild_isbase = value; }
    void setQsciScintilla_FocusPreviousChild_IsBase(bool value) const { qsciscintilla_focuspreviouschild_isbase = value; }
    void setQsciScintilla_Sender_IsBase(bool value) const { qsciscintilla_sender_isbase = value; }
    void setQsciScintilla_SenderSignalIndex_IsBase(bool value) const { qsciscintilla_sendersignalindex_isbase = value; }
    void setQsciScintilla_Receivers_IsBase(bool value) const { qsciscintilla_receivers_isbase = value; }
    void setQsciScintilla_IsSignalConnected_IsBase(bool value) const { qsciscintilla_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsciscintilla_metacall_isbase) {
            qsciscintilla_metacall_isbase = false;
            return QsciScintilla::qt_metacall(param1, param2, param3);
        } else if (qsciscintilla_metacall_callback != nullptr) {
            return qsciscintilla_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciScintilla::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList apiContext(int pos, int& context_start, int& last_word_start) override {
        if (qsciscintilla_apicontext_isbase) {
            qsciscintilla_apicontext_isbase = false;
            return QsciScintilla::apiContext(pos, context_start, last_word_start);
        } else if (qsciscintilla_apicontext_callback != nullptr) {
            return qsciscintilla_apicontext_callback(this, pos, context_start, last_word_start);
        } else {
            return QsciScintilla::apiContext(pos, context_start, last_word_start);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool findFirst(const QString& expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11) override {
        if (qsciscintilla_findfirst_isbase) {
            qsciscintilla_findfirst_isbase = false;
            return QsciScintilla::findFirst(expr, re, cs, wo, wrap, forward, line, index, show, posix, cxx11);
        } else if (qsciscintilla_findfirst_callback != nullptr) {
            return qsciscintilla_findfirst_callback(this, expr, re, cs, wo, wrap, forward, line, index, show, posix, cxx11);
        } else {
            return QsciScintilla::findFirst(expr, re, cs, wo, wrap, forward, line, index, show, posix, cxx11);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool findFirstInSelection(const QString& expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11) override {
        if (qsciscintilla_findfirstinselection_isbase) {
            qsciscintilla_findfirstinselection_isbase = false;
            return QsciScintilla::findFirstInSelection(expr, re, cs, wo, forward, show, posix, cxx11);
        } else if (qsciscintilla_findfirstinselection_callback != nullptr) {
            return qsciscintilla_findfirstinselection_callback(this, expr, re, cs, wo, forward, show, posix, cxx11);
        } else {
            return QsciScintilla::findFirstInSelection(expr, re, cs, wo, forward, show, posix, cxx11);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool findNext() override {
        if (qsciscintilla_findnext_isbase) {
            qsciscintilla_findnext_isbase = false;
            return QsciScintilla::findNext();
        } else if (qsciscintilla_findnext_callback != nullptr) {
            return qsciscintilla_findnext_callback();
        } else {
            return QsciScintilla::findNext();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void recolor(int start, int end) override {
        if (qsciscintilla_recolor_isbase) {
            qsciscintilla_recolor_isbase = false;
            QsciScintilla::recolor(start, end);
        } else if (qsciscintilla_recolor_callback != nullptr) {
            qsciscintilla_recolor_callback(this, start, end);
        } else {
            QsciScintilla::recolor(start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void replace(const QString& replaceStr) override {
        if (qsciscintilla_replace_isbase) {
            qsciscintilla_replace_isbase = false;
            QsciScintilla::replace(replaceStr);
        } else if (qsciscintilla_replace_callback != nullptr) {
            qsciscintilla_replace_callback(this, replaceStr);
        } else {
            QsciScintilla::replace(replaceStr);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void append(const QString& text) override {
        if (qsciscintilla_append_isbase) {
            qsciscintilla_append_isbase = false;
            QsciScintilla::append(text);
        } else if (qsciscintilla_append_callback != nullptr) {
            qsciscintilla_append_callback(this, text);
        } else {
            QsciScintilla::append(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void autoCompleteFromAll() override {
        if (qsciscintilla_autocompletefromall_isbase) {
            qsciscintilla_autocompletefromall_isbase = false;
            QsciScintilla::autoCompleteFromAll();
        } else if (qsciscintilla_autocompletefromall_callback != nullptr) {
            qsciscintilla_autocompletefromall_callback();
        } else {
            QsciScintilla::autoCompleteFromAll();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void autoCompleteFromAPIs() override {
        if (qsciscintilla_autocompletefromapis_isbase) {
            qsciscintilla_autocompletefromapis_isbase = false;
            QsciScintilla::autoCompleteFromAPIs();
        } else if (qsciscintilla_autocompletefromapis_callback != nullptr) {
            qsciscintilla_autocompletefromapis_callback();
        } else {
            QsciScintilla::autoCompleteFromAPIs();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void autoCompleteFromDocument() override {
        if (qsciscintilla_autocompletefromdocument_isbase) {
            qsciscintilla_autocompletefromdocument_isbase = false;
            QsciScintilla::autoCompleteFromDocument();
        } else if (qsciscintilla_autocompletefromdocument_callback != nullptr) {
            qsciscintilla_autocompletefromdocument_callback();
        } else {
            QsciScintilla::autoCompleteFromDocument();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void callTip() override {
        if (qsciscintilla_calltip_isbase) {
            qsciscintilla_calltip_isbase = false;
            QsciScintilla::callTip();
        } else if (qsciscintilla_calltip_callback != nullptr) {
            qsciscintilla_calltip_callback();
        } else {
            QsciScintilla::callTip();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qsciscintilla_clear_isbase) {
            qsciscintilla_clear_isbase = false;
            QsciScintilla::clear();
        } else if (qsciscintilla_clear_callback != nullptr) {
            qsciscintilla_clear_callback();
        } else {
            QsciScintilla::clear();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void copy() override {
        if (qsciscintilla_copy_isbase) {
            qsciscintilla_copy_isbase = false;
            QsciScintilla::copy();
        } else if (qsciscintilla_copy_callback != nullptr) {
            qsciscintilla_copy_callback();
        } else {
            QsciScintilla::copy();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void cut() override {
        if (qsciscintilla_cut_isbase) {
            qsciscintilla_cut_isbase = false;
            QsciScintilla::cut();
        } else if (qsciscintilla_cut_callback != nullptr) {
            qsciscintilla_cut_callback();
        } else {
            QsciScintilla::cut();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void ensureCursorVisible() override {
        if (qsciscintilla_ensurecursorvisible_isbase) {
            qsciscintilla_ensurecursorvisible_isbase = false;
            QsciScintilla::ensureCursorVisible();
        } else if (qsciscintilla_ensurecursorvisible_callback != nullptr) {
            qsciscintilla_ensurecursorvisible_callback();
        } else {
            QsciScintilla::ensureCursorVisible();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void ensureLineVisible(int line) override {
        if (qsciscintilla_ensurelinevisible_isbase) {
            qsciscintilla_ensurelinevisible_isbase = false;
            QsciScintilla::ensureLineVisible(line);
        } else if (qsciscintilla_ensurelinevisible_callback != nullptr) {
            qsciscintilla_ensurelinevisible_callback(this, line);
        } else {
            QsciScintilla::ensureLineVisible(line);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void foldAll(bool children) override {
        if (qsciscintilla_foldall_isbase) {
            qsciscintilla_foldall_isbase = false;
            QsciScintilla::foldAll(children);
        } else if (qsciscintilla_foldall_callback != nullptr) {
            qsciscintilla_foldall_callback(this, children);
        } else {
            QsciScintilla::foldAll(children);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void foldLine(int line) override {
        if (qsciscintilla_foldline_isbase) {
            qsciscintilla_foldline_isbase = false;
            QsciScintilla::foldLine(line);
        } else if (qsciscintilla_foldline_callback != nullptr) {
            qsciscintilla_foldline_callback(this, line);
        } else {
            QsciScintilla::foldLine(line);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void indent(int line) override {
        if (qsciscintilla_indent_isbase) {
            qsciscintilla_indent_isbase = false;
            QsciScintilla::indent(line);
        } else if (qsciscintilla_indent_callback != nullptr) {
            qsciscintilla_indent_callback(this, line);
        } else {
            QsciScintilla::indent(line);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void insert(const QString& text) override {
        if (qsciscintilla_insert_isbase) {
            qsciscintilla_insert_isbase = false;
            QsciScintilla::insert(text);
        } else if (qsciscintilla_insert_callback != nullptr) {
            qsciscintilla_insert_callback(this, text);
        } else {
            QsciScintilla::insert(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertAt(const QString& text, int line, int index) override {
        if (qsciscintilla_insertat_isbase) {
            qsciscintilla_insertat_isbase = false;
            QsciScintilla::insertAt(text, line, index);
        } else if (qsciscintilla_insertat_callback != nullptr) {
            qsciscintilla_insertat_callback(this, text, line, index);
        } else {
            QsciScintilla::insertAt(text, line, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveToMatchingBrace() override {
        if (qsciscintilla_movetomatchingbrace_isbase) {
            qsciscintilla_movetomatchingbrace_isbase = false;
            QsciScintilla::moveToMatchingBrace();
        } else if (qsciscintilla_movetomatchingbrace_callback != nullptr) {
            qsciscintilla_movetomatchingbrace_callback();
        } else {
            QsciScintilla::moveToMatchingBrace();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paste() override {
        if (qsciscintilla_paste_isbase) {
            qsciscintilla_paste_isbase = false;
            QsciScintilla::paste();
        } else if (qsciscintilla_paste_callback != nullptr) {
            qsciscintilla_paste_callback();
        } else {
            QsciScintilla::paste();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void redo() override {
        if (qsciscintilla_redo_isbase) {
            qsciscintilla_redo_isbase = false;
            QsciScintilla::redo();
        } else if (qsciscintilla_redo_callback != nullptr) {
            qsciscintilla_redo_callback();
        } else {
            QsciScintilla::redo();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeSelectedText() override {
        if (qsciscintilla_removeselectedtext_isbase) {
            qsciscintilla_removeselectedtext_isbase = false;
            QsciScintilla::removeSelectedText();
        } else if (qsciscintilla_removeselectedtext_callback != nullptr) {
            qsciscintilla_removeselectedtext_callback();
        } else {
            QsciScintilla::removeSelectedText();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void replaceSelectedText(const QString& text) override {
        if (qsciscintilla_replaceselectedtext_isbase) {
            qsciscintilla_replaceselectedtext_isbase = false;
            QsciScintilla::replaceSelectedText(text);
        } else if (qsciscintilla_replaceselectedtext_callback != nullptr) {
            qsciscintilla_replaceselectedtext_callback(this, text);
        } else {
            QsciScintilla::replaceSelectedText(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetSelectionBackgroundColor() override {
        if (qsciscintilla_resetselectionbackgroundcolor_isbase) {
            qsciscintilla_resetselectionbackgroundcolor_isbase = false;
            QsciScintilla::resetSelectionBackgroundColor();
        } else if (qsciscintilla_resetselectionbackgroundcolor_callback != nullptr) {
            qsciscintilla_resetselectionbackgroundcolor_callback();
        } else {
            QsciScintilla::resetSelectionBackgroundColor();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetSelectionForegroundColor() override {
        if (qsciscintilla_resetselectionforegroundcolor_isbase) {
            qsciscintilla_resetselectionforegroundcolor_isbase = false;
            QsciScintilla::resetSelectionForegroundColor();
        } else if (qsciscintilla_resetselectionforegroundcolor_callback != nullptr) {
            qsciscintilla_resetselectionforegroundcolor_callback();
        } else {
            QsciScintilla::resetSelectionForegroundColor();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll(bool selectVal) override {
        if (qsciscintilla_selectall_isbase) {
            qsciscintilla_selectall_isbase = false;
            QsciScintilla::selectAll(selectVal);
        } else if (qsciscintilla_selectall_callback != nullptr) {
            qsciscintilla_selectall_callback(this, selectVal);
        } else {
            QsciScintilla::selectAll(selectVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectToMatchingBrace() override {
        if (qsciscintilla_selecttomatchingbrace_isbase) {
            qsciscintilla_selecttomatchingbrace_isbase = false;
            QsciScintilla::selectToMatchingBrace();
        } else if (qsciscintilla_selecttomatchingbrace_callback != nullptr) {
            qsciscintilla_selecttomatchingbrace_callback();
        } else {
            QsciScintilla::selectToMatchingBrace();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoCompletionCaseSensitivity(bool cs) override {
        if (qsciscintilla_setautocompletioncasesensitivity_isbase) {
            qsciscintilla_setautocompletioncasesensitivity_isbase = false;
            QsciScintilla::setAutoCompletionCaseSensitivity(cs);
        } else if (qsciscintilla_setautocompletioncasesensitivity_callback != nullptr) {
            qsciscintilla_setautocompletioncasesensitivity_callback(this, cs);
        } else {
            QsciScintilla::setAutoCompletionCaseSensitivity(cs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoCompletionReplaceWord(bool replace) override {
        if (qsciscintilla_setautocompletionreplaceword_isbase) {
            qsciscintilla_setautocompletionreplaceword_isbase = false;
            QsciScintilla::setAutoCompletionReplaceWord(replace);
        } else if (qsciscintilla_setautocompletionreplaceword_callback != nullptr) {
            qsciscintilla_setautocompletionreplaceword_callback(this, replace);
        } else {
            QsciScintilla::setAutoCompletionReplaceWord(replace);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoCompletionShowSingle(bool single) override {
        if (qsciscintilla_setautocompletionshowsingle_isbase) {
            qsciscintilla_setautocompletionshowsingle_isbase = false;
            QsciScintilla::setAutoCompletionShowSingle(single);
        } else if (qsciscintilla_setautocompletionshowsingle_callback != nullptr) {
            qsciscintilla_setautocompletionshowsingle_callback(this, single);
        } else {
            QsciScintilla::setAutoCompletionShowSingle(single);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoCompletionSource(QsciScintilla::AutoCompletionSource source) override {
        if (qsciscintilla_setautocompletionsource_isbase) {
            qsciscintilla_setautocompletionsource_isbase = false;
            QsciScintilla::setAutoCompletionSource(source);
        } else if (qsciscintilla_setautocompletionsource_callback != nullptr) {
            qsciscintilla_setautocompletionsource_callback(this, source);
        } else {
            QsciScintilla::setAutoCompletionSource(source);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoCompletionThreshold(int thresh) override {
        if (qsciscintilla_setautocompletionthreshold_isbase) {
            qsciscintilla_setautocompletionthreshold_isbase = false;
            QsciScintilla::setAutoCompletionThreshold(thresh);
        } else if (qsciscintilla_setautocompletionthreshold_callback != nullptr) {
            qsciscintilla_setautocompletionthreshold_callback(this, thresh);
        } else {
            QsciScintilla::setAutoCompletionThreshold(thresh);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoCompletionUseSingle(QsciScintilla::AutoCompletionUseSingle single) override {
        if (qsciscintilla_setautocompletionusesingle_isbase) {
            qsciscintilla_setautocompletionusesingle_isbase = false;
            QsciScintilla::setAutoCompletionUseSingle(single);
        } else if (qsciscintilla_setautocompletionusesingle_callback != nullptr) {
            qsciscintilla_setautocompletionusesingle_callback(this, single);
        } else {
            QsciScintilla::setAutoCompletionUseSingle(single);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndent(bool autoindent) override {
        if (qsciscintilla_setautoindent_isbase) {
            qsciscintilla_setautoindent_isbase = false;
            QsciScintilla::setAutoIndent(autoindent);
        } else if (qsciscintilla_setautoindent_callback != nullptr) {
            qsciscintilla_setautoindent_callback(this, autoindent);
        } else {
            QsciScintilla::setAutoIndent(autoindent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBraceMatching(QsciScintilla::BraceMatch bm) override {
        if (qsciscintilla_setbracematching_isbase) {
            qsciscintilla_setbracematching_isbase = false;
            QsciScintilla::setBraceMatching(bm);
        } else if (qsciscintilla_setbracematching_callback != nullptr) {
            qsciscintilla_setbracematching_callback(this, bm);
        } else {
            QsciScintilla::setBraceMatching(bm);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBackspaceUnindents(bool unindent) override {
        if (qsciscintilla_setbackspaceunindents_isbase) {
            qsciscintilla_setbackspaceunindents_isbase = false;
            QsciScintilla::setBackspaceUnindents(unindent);
        } else if (qsciscintilla_setbackspaceunindents_callback != nullptr) {
            qsciscintilla_setbackspaceunindents_callback(this, unindent);
        } else {
            QsciScintilla::setBackspaceUnindents(unindent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCaretForegroundColor(const QColor& col) override {
        if (qsciscintilla_setcaretforegroundcolor_isbase) {
            qsciscintilla_setcaretforegroundcolor_isbase = false;
            QsciScintilla::setCaretForegroundColor(col);
        } else if (qsciscintilla_setcaretforegroundcolor_callback != nullptr) {
            qsciscintilla_setcaretforegroundcolor_callback(this, col);
        } else {
            QsciScintilla::setCaretForegroundColor(col);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCaretLineBackgroundColor(const QColor& col) override {
        if (qsciscintilla_setcaretlinebackgroundcolor_isbase) {
            qsciscintilla_setcaretlinebackgroundcolor_isbase = false;
            QsciScintilla::setCaretLineBackgroundColor(col);
        } else if (qsciscintilla_setcaretlinebackgroundcolor_callback != nullptr) {
            qsciscintilla_setcaretlinebackgroundcolor_callback(this, col);
        } else {
            QsciScintilla::setCaretLineBackgroundColor(col);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCaretLineFrameWidth(int width) override {
        if (qsciscintilla_setcaretlineframewidth_isbase) {
            qsciscintilla_setcaretlineframewidth_isbase = false;
            QsciScintilla::setCaretLineFrameWidth(width);
        } else if (qsciscintilla_setcaretlineframewidth_callback != nullptr) {
            qsciscintilla_setcaretlineframewidth_callback(this, width);
        } else {
            QsciScintilla::setCaretLineFrameWidth(width);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCaretLineVisible(bool enable) override {
        if (qsciscintilla_setcaretlinevisible_isbase) {
            qsciscintilla_setcaretlinevisible_isbase = false;
            QsciScintilla::setCaretLineVisible(enable);
        } else if (qsciscintilla_setcaretlinevisible_callback != nullptr) {
            qsciscintilla_setcaretlinevisible_callback(this, enable);
        } else {
            QsciScintilla::setCaretLineVisible(enable);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCaretWidth(int width) override {
        if (qsciscintilla_setcaretwidth_isbase) {
            qsciscintilla_setcaretwidth_isbase = false;
            QsciScintilla::setCaretWidth(width);
        } else if (qsciscintilla_setcaretwidth_callback != nullptr) {
            qsciscintilla_setcaretwidth_callback(this, width);
        } else {
            QsciScintilla::setCaretWidth(width);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c) override {
        if (qsciscintilla_setcolor_isbase) {
            qsciscintilla_setcolor_isbase = false;
            QsciScintilla::setColor(c);
        } else if (qsciscintilla_setcolor_callback != nullptr) {
            qsciscintilla_setcolor_callback(this, c);
        } else {
            QsciScintilla::setColor(c);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCursorPosition(int line, int index) override {
        if (qsciscintilla_setcursorposition_isbase) {
            qsciscintilla_setcursorposition_isbase = false;
            QsciScintilla::setCursorPosition(line, index);
        } else if (qsciscintilla_setcursorposition_callback != nullptr) {
            qsciscintilla_setcursorposition_callback(this, line, index);
        } else {
            QsciScintilla::setCursorPosition(line, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolMode(QsciScintilla::EolMode mode) override {
        if (qsciscintilla_seteolmode_isbase) {
            qsciscintilla_seteolmode_isbase = false;
            QsciScintilla::setEolMode(mode);
        } else if (qsciscintilla_seteolmode_callback != nullptr) {
            qsciscintilla_seteolmode_callback(this, mode);
        } else {
            QsciScintilla::setEolMode(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolVisibility(bool visible) override {
        if (qsciscintilla_seteolvisibility_isbase) {
            qsciscintilla_seteolvisibility_isbase = false;
            QsciScintilla::setEolVisibility(visible);
        } else if (qsciscintilla_seteolvisibility_callback != nullptr) {
            qsciscintilla_seteolvisibility_callback(this, visible);
        } else {
            QsciScintilla::setEolVisibility(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFolding(QsciScintilla::FoldStyle fold, int margin) override {
        if (qsciscintilla_setfolding_isbase) {
            qsciscintilla_setfolding_isbase = false;
            QsciScintilla::setFolding(fold, margin);
        } else if (qsciscintilla_setfolding_callback != nullptr) {
            qsciscintilla_setfolding_callback(this, fold, margin);
        } else {
            QsciScintilla::setFolding(fold, margin);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIndentation(int line, int indentation) override {
        if (qsciscintilla_setindentation_isbase) {
            qsciscintilla_setindentation_isbase = false;
            QsciScintilla::setIndentation(line, indentation);
        } else if (qsciscintilla_setindentation_callback != nullptr) {
            qsciscintilla_setindentation_callback(this, line, indentation);
        } else {
            QsciScintilla::setIndentation(line, indentation);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIndentationGuides(bool enable) override {
        if (qsciscintilla_setindentationguides_isbase) {
            qsciscintilla_setindentationguides_isbase = false;
            QsciScintilla::setIndentationGuides(enable);
        } else if (qsciscintilla_setindentationguides_callback != nullptr) {
            qsciscintilla_setindentationguides_callback(this, enable);
        } else {
            QsciScintilla::setIndentationGuides(enable);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIndentationGuidesBackgroundColor(const QColor& col) override {
        if (qsciscintilla_setindentationguidesbackgroundcolor_isbase) {
            qsciscintilla_setindentationguidesbackgroundcolor_isbase = false;
            QsciScintilla::setIndentationGuidesBackgroundColor(col);
        } else if (qsciscintilla_setindentationguidesbackgroundcolor_callback != nullptr) {
            qsciscintilla_setindentationguidesbackgroundcolor_callback(this, col);
        } else {
            QsciScintilla::setIndentationGuidesBackgroundColor(col);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIndentationGuidesForegroundColor(const QColor& col) override {
        if (qsciscintilla_setindentationguidesforegroundcolor_isbase) {
            qsciscintilla_setindentationguidesforegroundcolor_isbase = false;
            QsciScintilla::setIndentationGuidesForegroundColor(col);
        } else if (qsciscintilla_setindentationguidesforegroundcolor_callback != nullptr) {
            qsciscintilla_setindentationguidesforegroundcolor_callback(this, col);
        } else {
            QsciScintilla::setIndentationGuidesForegroundColor(col);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIndentationsUseTabs(bool tabs) override {
        if (qsciscintilla_setindentationsusetabs_isbase) {
            qsciscintilla_setindentationsusetabs_isbase = false;
            QsciScintilla::setIndentationsUseTabs(tabs);
        } else if (qsciscintilla_setindentationsusetabs_callback != nullptr) {
            qsciscintilla_setindentationsusetabs_callback(this, tabs);
        } else {
            QsciScintilla::setIndentationsUseTabs(tabs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIndentationWidth(int width) override {
        if (qsciscintilla_setindentationwidth_isbase) {
            qsciscintilla_setindentationwidth_isbase = false;
            QsciScintilla::setIndentationWidth(width);
        } else if (qsciscintilla_setindentationwidth_callback != nullptr) {
            qsciscintilla_setindentationwidth_callback(this, width);
        } else {
            QsciScintilla::setIndentationWidth(width);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLexer(QsciLexer* lexer) override {
        if (qsciscintilla_setlexer_isbase) {
            qsciscintilla_setlexer_isbase = false;
            QsciScintilla::setLexer(lexer);
        } else if (qsciscintilla_setlexer_callback != nullptr) {
            qsciscintilla_setlexer_callback(this, lexer);
        } else {
            QsciScintilla::setLexer(lexer);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMarginsBackgroundColor(const QColor& col) override {
        if (qsciscintilla_setmarginsbackgroundcolor_isbase) {
            qsciscintilla_setmarginsbackgroundcolor_isbase = false;
            QsciScintilla::setMarginsBackgroundColor(col);
        } else if (qsciscintilla_setmarginsbackgroundcolor_callback != nullptr) {
            qsciscintilla_setmarginsbackgroundcolor_callback(this, col);
        } else {
            QsciScintilla::setMarginsBackgroundColor(col);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMarginsFont(const QFont& f) override {
        if (qsciscintilla_setmarginsfont_isbase) {
            qsciscintilla_setmarginsfont_isbase = false;
            QsciScintilla::setMarginsFont(f);
        } else if (qsciscintilla_setmarginsfont_callback != nullptr) {
            qsciscintilla_setmarginsfont_callback(this, f);
        } else {
            QsciScintilla::setMarginsFont(f);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMarginsForegroundColor(const QColor& col) override {
        if (qsciscintilla_setmarginsforegroundcolor_isbase) {
            qsciscintilla_setmarginsforegroundcolor_isbase = false;
            QsciScintilla::setMarginsForegroundColor(col);
        } else if (qsciscintilla_setmarginsforegroundcolor_callback != nullptr) {
            qsciscintilla_setmarginsforegroundcolor_callback(this, col);
        } else {
            QsciScintilla::setMarginsForegroundColor(col);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMarginLineNumbers(int margin, bool lnrs) override {
        if (qsciscintilla_setmarginlinenumbers_isbase) {
            qsciscintilla_setmarginlinenumbers_isbase = false;
            QsciScintilla::setMarginLineNumbers(margin, lnrs);
        } else if (qsciscintilla_setmarginlinenumbers_callback != nullptr) {
            qsciscintilla_setmarginlinenumbers_callback(this, margin, lnrs);
        } else {
            QsciScintilla::setMarginLineNumbers(margin, lnrs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMarginMarkerMask(int margin, int mask) override {
        if (qsciscintilla_setmarginmarkermask_isbase) {
            qsciscintilla_setmarginmarkermask_isbase = false;
            QsciScintilla::setMarginMarkerMask(margin, mask);
        } else if (qsciscintilla_setmarginmarkermask_callback != nullptr) {
            qsciscintilla_setmarginmarkermask_callback(this, margin, mask);
        } else {
            QsciScintilla::setMarginMarkerMask(margin, mask);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMarginSensitivity(int margin, bool sens) override {
        if (qsciscintilla_setmarginsensitivity_isbase) {
            qsciscintilla_setmarginsensitivity_isbase = false;
            QsciScintilla::setMarginSensitivity(margin, sens);
        } else if (qsciscintilla_setmarginsensitivity_callback != nullptr) {
            qsciscintilla_setmarginsensitivity_callback(this, margin, sens);
        } else {
            QsciScintilla::setMarginSensitivity(margin, sens);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMarginWidth(int margin, int width) override {
        if (qsciscintilla_setmarginwidth_isbase) {
            qsciscintilla_setmarginwidth_isbase = false;
            QsciScintilla::setMarginWidth(margin, width);
        } else if (qsciscintilla_setmarginwidth_callback != nullptr) {
            qsciscintilla_setmarginwidth_callback(this, margin, width);
        } else {
            QsciScintilla::setMarginWidth(margin, width);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMarginWidth(int margin, const QString& s) override {
        if (qsciscintilla_setmarginwidth2_isbase) {
            qsciscintilla_setmarginwidth2_isbase = false;
            QsciScintilla::setMarginWidth(margin, s);
        } else if (qsciscintilla_setmarginwidth2_callback != nullptr) {
            qsciscintilla_setmarginwidth2_callback(this, margin, s);
        } else {
            QsciScintilla::setMarginWidth(margin, s);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModified(bool m) override {
        if (qsciscintilla_setmodified_isbase) {
            qsciscintilla_setmodified_isbase = false;
            QsciScintilla::setModified(m);
        } else if (qsciscintilla_setmodified_callback != nullptr) {
            qsciscintilla_setmodified_callback(this, m);
        } else {
            QsciScintilla::setModified(m);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c) override {
        if (qsciscintilla_setpaper_isbase) {
            qsciscintilla_setpaper_isbase = false;
            QsciScintilla::setPaper(c);
        } else if (qsciscintilla_setpaper_callback != nullptr) {
            qsciscintilla_setpaper_callback(this, c);
        } else {
            QsciScintilla::setPaper(c);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadOnly(bool ro) override {
        if (qsciscintilla_setreadonly_isbase) {
            qsciscintilla_setreadonly_isbase = false;
            QsciScintilla::setReadOnly(ro);
        } else if (qsciscintilla_setreadonly_callback != nullptr) {
            qsciscintilla_setreadonly_callback(this, ro);
        } else {
            QsciScintilla::setReadOnly(ro);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(int lineFrom, int indexFrom, int lineTo, int indexTo) override {
        if (qsciscintilla_setselection_isbase) {
            qsciscintilla_setselection_isbase = false;
            QsciScintilla::setSelection(lineFrom, indexFrom, lineTo, indexTo);
        } else if (qsciscintilla_setselection_callback != nullptr) {
            qsciscintilla_setselection_callback(this, lineFrom, indexFrom, lineTo, indexTo);
        } else {
            QsciScintilla::setSelection(lineFrom, indexFrom, lineTo, indexTo);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionBackgroundColor(const QColor& col) override {
        if (qsciscintilla_setselectionbackgroundcolor_isbase) {
            qsciscintilla_setselectionbackgroundcolor_isbase = false;
            QsciScintilla::setSelectionBackgroundColor(col);
        } else if (qsciscintilla_setselectionbackgroundcolor_callback != nullptr) {
            qsciscintilla_setselectionbackgroundcolor_callback(this, col);
        } else {
            QsciScintilla::setSelectionBackgroundColor(col);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionForegroundColor(const QColor& col) override {
        if (qsciscintilla_setselectionforegroundcolor_isbase) {
            qsciscintilla_setselectionforegroundcolor_isbase = false;
            QsciScintilla::setSelectionForegroundColor(col);
        } else if (qsciscintilla_setselectionforegroundcolor_callback != nullptr) {
            qsciscintilla_setselectionforegroundcolor_callback(this, col);
        } else {
            QsciScintilla::setSelectionForegroundColor(col);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTabIndents(bool indent) override {
        if (qsciscintilla_settabindents_isbase) {
            qsciscintilla_settabindents_isbase = false;
            QsciScintilla::setTabIndents(indent);
        } else if (qsciscintilla_settabindents_callback != nullptr) {
            qsciscintilla_settabindents_callback(this, indent);
        } else {
            QsciScintilla::setTabIndents(indent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTabWidth(int width) override {
        if (qsciscintilla_settabwidth_isbase) {
            qsciscintilla_settabwidth_isbase = false;
            QsciScintilla::setTabWidth(width);
        } else if (qsciscintilla_settabwidth_callback != nullptr) {
            qsciscintilla_settabwidth_callback(this, width);
        } else {
            QsciScintilla::setTabWidth(width);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setText(const QString& text) override {
        if (qsciscintilla_settext_isbase) {
            qsciscintilla_settext_isbase = false;
            QsciScintilla::setText(text);
        } else if (qsciscintilla_settext_callback != nullptr) {
            qsciscintilla_settext_callback(this, text);
        } else {
            QsciScintilla::setText(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setUtf8(bool cp) override {
        if (qsciscintilla_setutf8_isbase) {
            qsciscintilla_setutf8_isbase = false;
            QsciScintilla::setUtf8(cp);
        } else if (qsciscintilla_setutf8_callback != nullptr) {
            qsciscintilla_setutf8_callback(this, cp);
        } else {
            QsciScintilla::setUtf8(cp);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWhitespaceVisibility(QsciScintilla::WhitespaceVisibility mode) override {
        if (qsciscintilla_setwhitespacevisibility_isbase) {
            qsciscintilla_setwhitespacevisibility_isbase = false;
            QsciScintilla::setWhitespaceVisibility(mode);
        } else if (qsciscintilla_setwhitespacevisibility_callback != nullptr) {
            qsciscintilla_setwhitespacevisibility_callback(this, mode);
        } else {
            QsciScintilla::setWhitespaceVisibility(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWrapMode(QsciScintilla::WrapMode mode) override {
        if (qsciscintilla_setwrapmode_isbase) {
            qsciscintilla_setwrapmode_isbase = false;
            QsciScintilla::setWrapMode(mode);
        } else if (qsciscintilla_setwrapmode_callback != nullptr) {
            qsciscintilla_setwrapmode_callback(this, mode);
        } else {
            QsciScintilla::setWrapMode(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void undo() override {
        if (qsciscintilla_undo_isbase) {
            qsciscintilla_undo_isbase = false;
            QsciScintilla::undo();
        } else if (qsciscintilla_undo_callback != nullptr) {
            qsciscintilla_undo_callback();
        } else {
            QsciScintilla::undo();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void unindent(int line) override {
        if (qsciscintilla_unindent_isbase) {
            qsciscintilla_unindent_isbase = false;
            QsciScintilla::unindent(line);
        } else if (qsciscintilla_unindent_callback != nullptr) {
            qsciscintilla_unindent_callback(this, line);
        } else {
            QsciScintilla::unindent(line);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void zoomIn(int range) override {
        if (qsciscintilla_zoomin_isbase) {
            qsciscintilla_zoomin_isbase = false;
            QsciScintilla::zoomIn(range);
        } else if (qsciscintilla_zoomin_callback != nullptr) {
            qsciscintilla_zoomin_callback(this, range);
        } else {
            QsciScintilla::zoomIn(range);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void zoomIn() override {
        if (qsciscintilla_zoomin2_isbase) {
            qsciscintilla_zoomin2_isbase = false;
            QsciScintilla::zoomIn();
        } else if (qsciscintilla_zoomin2_callback != nullptr) {
            qsciscintilla_zoomin2_callback();
        } else {
            QsciScintilla::zoomIn();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void zoomOut(int range) override {
        if (qsciscintilla_zoomout_isbase) {
            qsciscintilla_zoomout_isbase = false;
            QsciScintilla::zoomOut(range);
        } else if (qsciscintilla_zoomout_callback != nullptr) {
            qsciscintilla_zoomout_callback(this, range);
        } else {
            QsciScintilla::zoomOut(range);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void zoomOut() override {
        if (qsciscintilla_zoomout2_isbase) {
            qsciscintilla_zoomout2_isbase = false;
            QsciScintilla::zoomOut();
        } else if (qsciscintilla_zoomout2_callback != nullptr) {
            qsciscintilla_zoomout2_callback();
        } else {
            QsciScintilla::zoomOut();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void zoomTo(int size) override {
        if (qsciscintilla_zoomto_isbase) {
            qsciscintilla_zoomto_isbase = false;
            QsciScintilla::zoomTo(size);
        } else if (qsciscintilla_zoomto_callback != nullptr) {
            qsciscintilla_zoomto_callback(this, size);
        } else {
            QsciScintilla::zoomTo(size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qsciscintilla_event_isbase) {
            qsciscintilla_event_isbase = false;
            return QsciScintilla::event(e);
        } else if (qsciscintilla_event_callback != nullptr) {
            return qsciscintilla_event_callback(this, e);
        } else {
            return QsciScintilla::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qsciscintilla_changeevent_isbase) {
            qsciscintilla_changeevent_isbase = false;
            QsciScintilla::changeEvent(e);
        } else if (qsciscintilla_changeevent_callback != nullptr) {
            qsciscintilla_changeevent_callback(this, e);
        } else {
            QsciScintilla::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (qsciscintilla_contextmenuevent_isbase) {
            qsciscintilla_contextmenuevent_isbase = false;
            QsciScintilla::contextMenuEvent(e);
        } else if (qsciscintilla_contextmenuevent_callback != nullptr) {
            qsciscintilla_contextmenuevent_callback(this, e);
        } else {
            QsciScintilla::contextMenuEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qsciscintilla_wheelevent_isbase) {
            qsciscintilla_wheelevent_isbase = false;
            QsciScintilla::wheelEvent(e);
        } else if (qsciscintilla_wheelevent_callback != nullptr) {
            qsciscintilla_wheelevent_callback(this, e);
        } else {
            QsciScintilla::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (qsciscintilla_caninsertfrommimedata_isbase) {
            qsciscintilla_caninsertfrommimedata_isbase = false;
            return QsciScintilla::canInsertFromMimeData(source);
        } else if (qsciscintilla_caninsertfrommimedata_callback != nullptr) {
            return qsciscintilla_caninsertfrommimedata_callback(this, source);
        } else {
            return QsciScintilla::canInsertFromMimeData(source);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QByteArray fromMimeData(const QMimeData* source, bool& rectangular) const override {
        if (qsciscintilla_frommimedata_isbase) {
            qsciscintilla_frommimedata_isbase = false;
            return QsciScintilla::fromMimeData(source, rectangular);
        } else if (qsciscintilla_frommimedata_callback != nullptr) {
            return qsciscintilla_frommimedata_callback(this, source, rectangular);
        } else {
            return QsciScintilla::fromMimeData(source, rectangular);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* toMimeData(const QByteArray& text, bool rectangular) const override {
        if (qsciscintilla_tomimedata_isbase) {
            qsciscintilla_tomimedata_isbase = false;
            return QsciScintilla::toMimeData(text, rectangular);
        } else if (qsciscintilla_tomimedata_callback != nullptr) {
            return qsciscintilla_tomimedata_callback(this, text, rectangular);
        } else {
            return QsciScintilla::toMimeData(text, rectangular);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (qsciscintilla_dragenterevent_isbase) {
            qsciscintilla_dragenterevent_isbase = false;
            QsciScintilla::dragEnterEvent(e);
        } else if (qsciscintilla_dragenterevent_callback != nullptr) {
            qsciscintilla_dragenterevent_callback(this, e);
        } else {
            QsciScintilla::dragEnterEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qsciscintilla_dragleaveevent_isbase) {
            qsciscintilla_dragleaveevent_isbase = false;
            QsciScintilla::dragLeaveEvent(e);
        } else if (qsciscintilla_dragleaveevent_callback != nullptr) {
            qsciscintilla_dragleaveevent_callback(this, e);
        } else {
            QsciScintilla::dragLeaveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qsciscintilla_dragmoveevent_isbase) {
            qsciscintilla_dragmoveevent_isbase = false;
            QsciScintilla::dragMoveEvent(e);
        } else if (qsciscintilla_dragmoveevent_callback != nullptr) {
            qsciscintilla_dragmoveevent_callback(this, e);
        } else {
            QsciScintilla::dragMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (qsciscintilla_dropevent_isbase) {
            qsciscintilla_dropevent_isbase = false;
            QsciScintilla::dropEvent(e);
        } else if (qsciscintilla_dropevent_callback != nullptr) {
            qsciscintilla_dropevent_callback(this, e);
        } else {
            QsciScintilla::dropEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qsciscintilla_focusinevent_isbase) {
            qsciscintilla_focusinevent_isbase = false;
            QsciScintilla::focusInEvent(e);
        } else if (qsciscintilla_focusinevent_callback != nullptr) {
            qsciscintilla_focusinevent_callback(this, e);
        } else {
            QsciScintilla::focusInEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qsciscintilla_focusoutevent_isbase) {
            qsciscintilla_focusoutevent_isbase = false;
            QsciScintilla::focusOutEvent(e);
        } else if (qsciscintilla_focusoutevent_callback != nullptr) {
            qsciscintilla_focusoutevent_callback(this, e);
        } else {
            QsciScintilla::focusOutEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qsciscintilla_focusnextprevchild_isbase) {
            qsciscintilla_focusnextprevchild_isbase = false;
            return QsciScintilla::focusNextPrevChild(next);
        } else if (qsciscintilla_focusnextprevchild_callback != nullptr) {
            return qsciscintilla_focusnextprevchild_callback(this, next);
        } else {
            return QsciScintilla::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qsciscintilla_keypressevent_isbase) {
            qsciscintilla_keypressevent_isbase = false;
            QsciScintilla::keyPressEvent(e);
        } else if (qsciscintilla_keypressevent_callback != nullptr) {
            qsciscintilla_keypressevent_callback(this, e);
        } else {
            QsciScintilla::keyPressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qsciscintilla_inputmethodevent_isbase) {
            qsciscintilla_inputmethodevent_isbase = false;
            QsciScintilla::inputMethodEvent(event);
        } else if (qsciscintilla_inputmethodevent_callback != nullptr) {
            qsciscintilla_inputmethodevent_callback(this, event);
        } else {
            QsciScintilla::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (qsciscintilla_mousedoubleclickevent_isbase) {
            qsciscintilla_mousedoubleclickevent_isbase = false;
            QsciScintilla::mouseDoubleClickEvent(e);
        } else if (qsciscintilla_mousedoubleclickevent_callback != nullptr) {
            qsciscintilla_mousedoubleclickevent_callback(this, e);
        } else {
            QsciScintilla::mouseDoubleClickEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qsciscintilla_mousemoveevent_isbase) {
            qsciscintilla_mousemoveevent_isbase = false;
            QsciScintilla::mouseMoveEvent(e);
        } else if (qsciscintilla_mousemoveevent_callback != nullptr) {
            qsciscintilla_mousemoveevent_callback(this, e);
        } else {
            QsciScintilla::mouseMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qsciscintilla_mousepressevent_isbase) {
            qsciscintilla_mousepressevent_isbase = false;
            QsciScintilla::mousePressEvent(e);
        } else if (qsciscintilla_mousepressevent_callback != nullptr) {
            qsciscintilla_mousepressevent_callback(this, e);
        } else {
            QsciScintilla::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qsciscintilla_mousereleaseevent_isbase) {
            qsciscintilla_mousereleaseevent_isbase = false;
            QsciScintilla::mouseReleaseEvent(e);
        } else if (qsciscintilla_mousereleaseevent_callback != nullptr) {
            qsciscintilla_mousereleaseevent_callback(this, e);
        } else {
            QsciScintilla::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qsciscintilla_paintevent_isbase) {
            qsciscintilla_paintevent_isbase = false;
            QsciScintilla::paintEvent(e);
        } else if (qsciscintilla_paintevent_callback != nullptr) {
            qsciscintilla_paintevent_callback(this, e);
        } else {
            QsciScintilla::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qsciscintilla_resizeevent_isbase) {
            qsciscintilla_resizeevent_isbase = false;
            QsciScintilla::resizeEvent(e);
        } else if (qsciscintilla_resizeevent_callback != nullptr) {
            qsciscintilla_resizeevent_callback(this, e);
        } else {
            QsciScintilla::resizeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qsciscintilla_scrollcontentsby_isbase) {
            qsciscintilla_scrollcontentsby_isbase = false;
            QsciScintilla::scrollContentsBy(dx, dy);
        } else if (qsciscintilla_scrollcontentsby_callback != nullptr) {
            qsciscintilla_scrollcontentsby_callback(this, dx, dy);
        } else {
            QsciScintilla::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qsciscintilla_minimumsizehint_isbase) {
            qsciscintilla_minimumsizehint_isbase = false;
            return QsciScintilla::minimumSizeHint();
        } else if (qsciscintilla_minimumsizehint_callback != nullptr) {
            return qsciscintilla_minimumsizehint_callback();
        } else {
            return QsciScintilla::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qsciscintilla_sizehint_isbase) {
            qsciscintilla_sizehint_isbase = false;
            return QsciScintilla::sizeHint();
        } else if (qsciscintilla_sizehint_callback != nullptr) {
            return qsciscintilla_sizehint_callback();
        } else {
            return QsciScintilla::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qsciscintilla_setupviewport_isbase) {
            qsciscintilla_setupviewport_isbase = false;
            QsciScintilla::setupViewport(viewport);
        } else if (qsciscintilla_setupviewport_callback != nullptr) {
            qsciscintilla_setupviewport_callback(this, viewport);
        } else {
            QsciScintilla::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qsciscintilla_eventfilter_isbase) {
            qsciscintilla_eventfilter_isbase = false;
            return QsciScintilla::eventFilter(param1, param2);
        } else if (qsciscintilla_eventfilter_callback != nullptr) {
            return qsciscintilla_eventfilter_callback(this, param1, param2);
        } else {
            return QsciScintilla::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (qsciscintilla_viewportevent_isbase) {
            qsciscintilla_viewportevent_isbase = false;
            return QsciScintilla::viewportEvent(param1);
        } else if (qsciscintilla_viewportevent_callback != nullptr) {
            return qsciscintilla_viewportevent_callback(this, param1);
        } else {
            return QsciScintilla::viewportEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qsciscintilla_viewportsizehint_isbase) {
            qsciscintilla_viewportsizehint_isbase = false;
            return QsciScintilla::viewportSizeHint();
        } else if (qsciscintilla_viewportsizehint_callback != nullptr) {
            return qsciscintilla_viewportsizehint_callback();
        } else {
            return QsciScintilla::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qsciscintilla_initstyleoption_isbase) {
            qsciscintilla_initstyleoption_isbase = false;
            QsciScintilla::initStyleOption(option);
        } else if (qsciscintilla_initstyleoption_callback != nullptr) {
            qsciscintilla_initstyleoption_callback(this, option);
        } else {
            QsciScintilla::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qsciscintilla_devtype_isbase) {
            qsciscintilla_devtype_isbase = false;
            return QsciScintilla::devType();
        } else if (qsciscintilla_devtype_callback != nullptr) {
            return qsciscintilla_devtype_callback();
        } else {
            return QsciScintilla::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qsciscintilla_setvisible_isbase) {
            qsciscintilla_setvisible_isbase = false;
            QsciScintilla::setVisible(visible);
        } else if (qsciscintilla_setvisible_callback != nullptr) {
            qsciscintilla_setvisible_callback(this, visible);
        } else {
            QsciScintilla::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qsciscintilla_heightforwidth_isbase) {
            qsciscintilla_heightforwidth_isbase = false;
            return QsciScintilla::heightForWidth(param1);
        } else if (qsciscintilla_heightforwidth_callback != nullptr) {
            return qsciscintilla_heightforwidth_callback(this, param1);
        } else {
            return QsciScintilla::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qsciscintilla_hasheightforwidth_isbase) {
            qsciscintilla_hasheightforwidth_isbase = false;
            return QsciScintilla::hasHeightForWidth();
        } else if (qsciscintilla_hasheightforwidth_callback != nullptr) {
            return qsciscintilla_hasheightforwidth_callback();
        } else {
            return QsciScintilla::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qsciscintilla_paintengine_isbase) {
            qsciscintilla_paintengine_isbase = false;
            return QsciScintilla::paintEngine();
        } else if (qsciscintilla_paintengine_callback != nullptr) {
            return qsciscintilla_paintengine_callback();
        } else {
            return QsciScintilla::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qsciscintilla_keyreleaseevent_isbase) {
            qsciscintilla_keyreleaseevent_isbase = false;
            QsciScintilla::keyReleaseEvent(event);
        } else if (qsciscintilla_keyreleaseevent_callback != nullptr) {
            qsciscintilla_keyreleaseevent_callback(this, event);
        } else {
            QsciScintilla::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qsciscintilla_enterevent_isbase) {
            qsciscintilla_enterevent_isbase = false;
            QsciScintilla::enterEvent(event);
        } else if (qsciscintilla_enterevent_callback != nullptr) {
            qsciscintilla_enterevent_callback(this, event);
        } else {
            QsciScintilla::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qsciscintilla_leaveevent_isbase) {
            qsciscintilla_leaveevent_isbase = false;
            QsciScintilla::leaveEvent(event);
        } else if (qsciscintilla_leaveevent_callback != nullptr) {
            qsciscintilla_leaveevent_callback(this, event);
        } else {
            QsciScintilla::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qsciscintilla_moveevent_isbase) {
            qsciscintilla_moveevent_isbase = false;
            QsciScintilla::moveEvent(event);
        } else if (qsciscintilla_moveevent_callback != nullptr) {
            qsciscintilla_moveevent_callback(this, event);
        } else {
            QsciScintilla::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qsciscintilla_closeevent_isbase) {
            qsciscintilla_closeevent_isbase = false;
            QsciScintilla::closeEvent(event);
        } else if (qsciscintilla_closeevent_callback != nullptr) {
            qsciscintilla_closeevent_callback(this, event);
        } else {
            QsciScintilla::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qsciscintilla_tabletevent_isbase) {
            qsciscintilla_tabletevent_isbase = false;
            QsciScintilla::tabletEvent(event);
        } else if (qsciscintilla_tabletevent_callback != nullptr) {
            qsciscintilla_tabletevent_callback(this, event);
        } else {
            QsciScintilla::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qsciscintilla_actionevent_isbase) {
            qsciscintilla_actionevent_isbase = false;
            QsciScintilla::actionEvent(event);
        } else if (qsciscintilla_actionevent_callback != nullptr) {
            qsciscintilla_actionevent_callback(this, event);
        } else {
            QsciScintilla::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qsciscintilla_showevent_isbase) {
            qsciscintilla_showevent_isbase = false;
            QsciScintilla::showEvent(event);
        } else if (qsciscintilla_showevent_callback != nullptr) {
            qsciscintilla_showevent_callback(this, event);
        } else {
            QsciScintilla::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qsciscintilla_hideevent_isbase) {
            qsciscintilla_hideevent_isbase = false;
            QsciScintilla::hideEvent(event);
        } else if (qsciscintilla_hideevent_callback != nullptr) {
            qsciscintilla_hideevent_callback(this, event);
        } else {
            QsciScintilla::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qsciscintilla_nativeevent_isbase) {
            qsciscintilla_nativeevent_isbase = false;
            return QsciScintilla::nativeEvent(eventType, message, result);
        } else if (qsciscintilla_nativeevent_callback != nullptr) {
            return qsciscintilla_nativeevent_callback(this, eventType, message, result);
        } else {
            return QsciScintilla::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qsciscintilla_metric_isbase) {
            qsciscintilla_metric_isbase = false;
            return QsciScintilla::metric(param1);
        } else if (qsciscintilla_metric_callback != nullptr) {
            return qsciscintilla_metric_callback(this, param1);
        } else {
            return QsciScintilla::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qsciscintilla_initpainter_isbase) {
            qsciscintilla_initpainter_isbase = false;
            QsciScintilla::initPainter(painter);
        } else if (qsciscintilla_initpainter_callback != nullptr) {
            qsciscintilla_initpainter_callback(this, painter);
        } else {
            QsciScintilla::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qsciscintilla_redirected_isbase) {
            qsciscintilla_redirected_isbase = false;
            return QsciScintilla::redirected(offset);
        } else if (qsciscintilla_redirected_callback != nullptr) {
            return qsciscintilla_redirected_callback(this, offset);
        } else {
            return QsciScintilla::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qsciscintilla_sharedpainter_isbase) {
            qsciscintilla_sharedpainter_isbase = false;
            return QsciScintilla::sharedPainter();
        } else if (qsciscintilla_sharedpainter_callback != nullptr) {
            return qsciscintilla_sharedpainter_callback();
        } else {
            return QsciScintilla::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsciscintilla_timerevent_isbase) {
            qsciscintilla_timerevent_isbase = false;
            QsciScintilla::timerEvent(event);
        } else if (qsciscintilla_timerevent_callback != nullptr) {
            qsciscintilla_timerevent_callback(this, event);
        } else {
            QsciScintilla::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsciscintilla_childevent_isbase) {
            qsciscintilla_childevent_isbase = false;
            QsciScintilla::childEvent(event);
        } else if (qsciscintilla_childevent_callback != nullptr) {
            qsciscintilla_childevent_callback(this, event);
        } else {
            QsciScintilla::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsciscintilla_customevent_isbase) {
            qsciscintilla_customevent_isbase = false;
            QsciScintilla::customEvent(event);
        } else if (qsciscintilla_customevent_callback != nullptr) {
            qsciscintilla_customevent_callback(this, event);
        } else {
            QsciScintilla::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsciscintilla_connectnotify_isbase) {
            qsciscintilla_connectnotify_isbase = false;
            QsciScintilla::connectNotify(signal);
        } else if (qsciscintilla_connectnotify_callback != nullptr) {
            qsciscintilla_connectnotify_callback(this, signal);
        } else {
            QsciScintilla::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsciscintilla_disconnectnotify_isbase) {
            qsciscintilla_disconnectnotify_isbase = false;
            QsciScintilla::disconnectNotify(signal);
        } else if (qsciscintilla_disconnectnotify_callback != nullptr) {
            qsciscintilla_disconnectnotify_callback(this, signal);
        } else {
            QsciScintilla::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setScrollBars() {
        if (qsciscintilla_setscrollbars_isbase) {
            qsciscintilla_setscrollbars_isbase = false;
            QsciScintilla::setScrollBars();
        } else if (qsciscintilla_setscrollbars_callback != nullptr) {
            qsciscintilla_setscrollbars_callback();
        } else {
            QsciScintilla::setScrollBars();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool contextMenuNeeded(int x, int y) const {
        if (qsciscintilla_contextmenuneeded_isbase) {
            qsciscintilla_contextmenuneeded_isbase = false;
            return QsciScintilla::contextMenuNeeded(x, y);
        } else if (qsciscintilla_contextmenuneeded_callback != nullptr) {
            return qsciscintilla_contextmenuneeded_callback(this, x, y);
        } else {
            return QsciScintilla::contextMenuNeeded(x, y);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qsciscintilla_setviewportmargins_isbase) {
            qsciscintilla_setviewportmargins_isbase = false;
            QsciScintilla::setViewportMargins(left, top, right, bottom);
        } else if (qsciscintilla_setviewportmargins_callback != nullptr) {
            qsciscintilla_setviewportmargins_callback(this, left, top, right, bottom);
        } else {
            QsciScintilla::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qsciscintilla_viewportmargins_isbase) {
            qsciscintilla_viewportmargins_isbase = false;
            return QsciScintilla::viewportMargins();
        } else if (qsciscintilla_viewportmargins_callback != nullptr) {
            return qsciscintilla_viewportmargins_callback();
        } else {
            return QsciScintilla::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qsciscintilla_drawframe_isbase) {
            qsciscintilla_drawframe_isbase = false;
            QsciScintilla::drawFrame(param1);
        } else if (qsciscintilla_drawframe_callback != nullptr) {
            qsciscintilla_drawframe_callback(this, param1);
        } else {
            QsciScintilla::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qsciscintilla_updatemicrofocus_isbase) {
            qsciscintilla_updatemicrofocus_isbase = false;
            QsciScintilla::updateMicroFocus();
        } else if (qsciscintilla_updatemicrofocus_callback != nullptr) {
            qsciscintilla_updatemicrofocus_callback();
        } else {
            QsciScintilla::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qsciscintilla_create_isbase) {
            qsciscintilla_create_isbase = false;
            QsciScintilla::create();
        } else if (qsciscintilla_create_callback != nullptr) {
            qsciscintilla_create_callback();
        } else {
            QsciScintilla::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qsciscintilla_destroy_isbase) {
            qsciscintilla_destroy_isbase = false;
            QsciScintilla::destroy();
        } else if (qsciscintilla_destroy_callback != nullptr) {
            qsciscintilla_destroy_callback();
        } else {
            QsciScintilla::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qsciscintilla_focusnextchild_isbase) {
            qsciscintilla_focusnextchild_isbase = false;
            return QsciScintilla::focusNextChild();
        } else if (qsciscintilla_focusnextchild_callback != nullptr) {
            return qsciscintilla_focusnextchild_callback();
        } else {
            return QsciScintilla::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qsciscintilla_focuspreviouschild_isbase) {
            qsciscintilla_focuspreviouschild_isbase = false;
            return QsciScintilla::focusPreviousChild();
        } else if (qsciscintilla_focuspreviouschild_callback != nullptr) {
            return qsciscintilla_focuspreviouschild_callback();
        } else {
            return QsciScintilla::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsciscintilla_sender_isbase) {
            qsciscintilla_sender_isbase = false;
            return QsciScintilla::sender();
        } else if (qsciscintilla_sender_callback != nullptr) {
            return qsciscintilla_sender_callback();
        } else {
            return QsciScintilla::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsciscintilla_sendersignalindex_isbase) {
            qsciscintilla_sendersignalindex_isbase = false;
            return QsciScintilla::senderSignalIndex();
        } else if (qsciscintilla_sendersignalindex_callback != nullptr) {
            return qsciscintilla_sendersignalindex_callback();
        } else {
            return QsciScintilla::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsciscintilla_receivers_isbase) {
            qsciscintilla_receivers_isbase = false;
            return QsciScintilla::receivers(signal);
        } else if (qsciscintilla_receivers_callback != nullptr) {
            return qsciscintilla_receivers_callback(this, signal);
        } else {
            return QsciScintilla::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsciscintilla_issignalconnected_isbase) {
            qsciscintilla_issignalconnected_isbase = false;
            return QsciScintilla::isSignalConnected(signal);
        } else if (qsciscintilla_issignalconnected_callback != nullptr) {
            return qsciscintilla_issignalconnected_callback(this, signal);
        } else {
            return QsciScintilla::isSignalConnected(signal);
        }
    }
};

#endif

#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERFORTRAN77_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERFORTRAN77_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerFortran77 so that we can call protected methods
class VirtualQsciLexerFortran77 : public QsciLexerFortran77 {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexerFortran77_Metacall_Callback = int (*)(QsciLexerFortran77*, QMetaObject::Call, int, void**);
    using QsciLexerFortran77_SetFoldCompact_Callback = void (*)(QsciLexerFortran77*, bool);
    using QsciLexerFortran77_Language_Callback = const char* (*)();
    using QsciLexerFortran77_Lexer_Callback = const char* (*)();
    using QsciLexerFortran77_LexerId_Callback = int (*)();
    using QsciLexerFortran77_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerFortran77_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexerFortran77_BlockEnd_Callback = const char* (*)(const QsciLexerFortran77*, int*);
    using QsciLexerFortran77_BlockLookback_Callback = int (*)();
    using QsciLexerFortran77_BlockStart_Callback = const char* (*)(const QsciLexerFortran77*, int*);
    using QsciLexerFortran77_BlockStartKeyword_Callback = const char* (*)(const QsciLexerFortran77*, int*);
    using QsciLexerFortran77_BraceStyle_Callback = int (*)();
    using QsciLexerFortran77_CaseSensitive_Callback = bool (*)();
    using QsciLexerFortran77_Color_Callback = QColor (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_EolFill_Callback = bool (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_Font_Callback = QFont (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_IndentationGuideView_Callback = int (*)();
    using QsciLexerFortran77_Keywords_Callback = const char* (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_DefaultStyle_Callback = int (*)();
    using QsciLexerFortran77_Description_Callback = QString (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_Paper_Callback = QColor (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_DefaultEolFill_Callback = bool (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_SetEditor_Callback = void (*)(QsciLexerFortran77*, QsciScintilla*);
    using QsciLexerFortran77_RefreshProperties_Callback = void (*)();
    using QsciLexerFortran77_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerFortran77_WordCharacters_Callback = const char* (*)();
    using QsciLexerFortran77_SetAutoIndentStyle_Callback = void (*)(QsciLexerFortran77*, int);
    using QsciLexerFortran77_SetColor_Callback = void (*)(QsciLexerFortran77*, const QColor&, int);
    using QsciLexerFortran77_SetEolFill_Callback = void (*)(QsciLexerFortran77*, bool, int);
    using QsciLexerFortran77_SetFont_Callback = void (*)(QsciLexerFortran77*, const QFont&, int);
    using QsciLexerFortran77_SetPaper_Callback = void (*)(QsciLexerFortran77*, const QColor&, int);
    using QsciLexerFortran77_ReadProperties_Callback = bool (*)(QsciLexerFortran77*, QSettings&, const QString&);
    using QsciLexerFortran77_WriteProperties_Callback = bool (*)(const QsciLexerFortran77*, QSettings&, const QString&);
    using QsciLexerFortran77_Event_Callback = bool (*)(QsciLexerFortran77*, QEvent*);
    using QsciLexerFortran77_EventFilter_Callback = bool (*)(QsciLexerFortran77*, QObject*, QEvent*);
    using QsciLexerFortran77_TimerEvent_Callback = void (*)(QsciLexerFortran77*, QTimerEvent*);
    using QsciLexerFortran77_ChildEvent_Callback = void (*)(QsciLexerFortran77*, QChildEvent*);
    using QsciLexerFortran77_CustomEvent_Callback = void (*)(QsciLexerFortran77*, QEvent*);
    using QsciLexerFortran77_ConnectNotify_Callback = void (*)(QsciLexerFortran77*, const QMetaMethod&);
    using QsciLexerFortran77_DisconnectNotify_Callback = void (*)(QsciLexerFortran77*, const QMetaMethod&);
    using QsciLexerFortran77_Sender_Callback = QObject* (*)();
    using QsciLexerFortran77_SenderSignalIndex_Callback = int (*)();
    using QsciLexerFortran77_Receivers_Callback = int (*)(const QsciLexerFortran77*, const char*);
    using QsciLexerFortran77_IsSignalConnected_Callback = bool (*)(const QsciLexerFortran77*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexerFortran77_Metacall_Callback qscilexerfortran77_metacall_callback = nullptr;
    QsciLexerFortran77_SetFoldCompact_Callback qscilexerfortran77_setfoldcompact_callback = nullptr;
    QsciLexerFortran77_Language_Callback qscilexerfortran77_language_callback = nullptr;
    QsciLexerFortran77_Lexer_Callback qscilexerfortran77_lexer_callback = nullptr;
    QsciLexerFortran77_LexerId_Callback qscilexerfortran77_lexerid_callback = nullptr;
    QsciLexerFortran77_AutoCompletionFillups_Callback qscilexerfortran77_autocompletionfillups_callback = nullptr;
    QsciLexerFortran77_AutoCompletionWordSeparators_Callback qscilexerfortran77_autocompletionwordseparators_callback = nullptr;
    QsciLexerFortran77_BlockEnd_Callback qscilexerfortran77_blockend_callback = nullptr;
    QsciLexerFortran77_BlockLookback_Callback qscilexerfortran77_blocklookback_callback = nullptr;
    QsciLexerFortran77_BlockStart_Callback qscilexerfortran77_blockstart_callback = nullptr;
    QsciLexerFortran77_BlockStartKeyword_Callback qscilexerfortran77_blockstartkeyword_callback = nullptr;
    QsciLexerFortran77_BraceStyle_Callback qscilexerfortran77_bracestyle_callback = nullptr;
    QsciLexerFortran77_CaseSensitive_Callback qscilexerfortran77_casesensitive_callback = nullptr;
    QsciLexerFortran77_Color_Callback qscilexerfortran77_color_callback = nullptr;
    QsciLexerFortran77_EolFill_Callback qscilexerfortran77_eolfill_callback = nullptr;
    QsciLexerFortran77_Font_Callback qscilexerfortran77_font_callback = nullptr;
    QsciLexerFortran77_IndentationGuideView_Callback qscilexerfortran77_indentationguideview_callback = nullptr;
    QsciLexerFortran77_Keywords_Callback qscilexerfortran77_keywords_callback = nullptr;
    QsciLexerFortran77_DefaultStyle_Callback qscilexerfortran77_defaultstyle_callback = nullptr;
    QsciLexerFortran77_Description_Callback qscilexerfortran77_description_callback = nullptr;
    QsciLexerFortran77_Paper_Callback qscilexerfortran77_paper_callback = nullptr;
    QsciLexerFortran77_DefaultColorWithStyle_Callback qscilexerfortran77_defaultcolorwithstyle_callback = nullptr;
    QsciLexerFortran77_DefaultEolFill_Callback qscilexerfortran77_defaulteolfill_callback = nullptr;
    QsciLexerFortran77_DefaultFontWithStyle_Callback qscilexerfortran77_defaultfontwithstyle_callback = nullptr;
    QsciLexerFortran77_DefaultPaperWithStyle_Callback qscilexerfortran77_defaultpaperwithstyle_callback = nullptr;
    QsciLexerFortran77_SetEditor_Callback qscilexerfortran77_seteditor_callback = nullptr;
    QsciLexerFortran77_RefreshProperties_Callback qscilexerfortran77_refreshproperties_callback = nullptr;
    QsciLexerFortran77_StyleBitsNeeded_Callback qscilexerfortran77_stylebitsneeded_callback = nullptr;
    QsciLexerFortran77_WordCharacters_Callback qscilexerfortran77_wordcharacters_callback = nullptr;
    QsciLexerFortran77_SetAutoIndentStyle_Callback qscilexerfortran77_setautoindentstyle_callback = nullptr;
    QsciLexerFortran77_SetColor_Callback qscilexerfortran77_setcolor_callback = nullptr;
    QsciLexerFortran77_SetEolFill_Callback qscilexerfortran77_seteolfill_callback = nullptr;
    QsciLexerFortran77_SetFont_Callback qscilexerfortran77_setfont_callback = nullptr;
    QsciLexerFortran77_SetPaper_Callback qscilexerfortran77_setpaper_callback = nullptr;
    QsciLexerFortran77_ReadProperties_Callback qscilexerfortran77_readproperties_callback = nullptr;
    QsciLexerFortran77_WriteProperties_Callback qscilexerfortran77_writeproperties_callback = nullptr;
    QsciLexerFortran77_Event_Callback qscilexerfortran77_event_callback = nullptr;
    QsciLexerFortran77_EventFilter_Callback qscilexerfortran77_eventfilter_callback = nullptr;
    QsciLexerFortran77_TimerEvent_Callback qscilexerfortran77_timerevent_callback = nullptr;
    QsciLexerFortran77_ChildEvent_Callback qscilexerfortran77_childevent_callback = nullptr;
    QsciLexerFortran77_CustomEvent_Callback qscilexerfortran77_customevent_callback = nullptr;
    QsciLexerFortran77_ConnectNotify_Callback qscilexerfortran77_connectnotify_callback = nullptr;
    QsciLexerFortran77_DisconnectNotify_Callback qscilexerfortran77_disconnectnotify_callback = nullptr;
    QsciLexerFortran77_Sender_Callback qscilexerfortran77_sender_callback = nullptr;
    QsciLexerFortran77_SenderSignalIndex_Callback qscilexerfortran77_sendersignalindex_callback = nullptr;
    QsciLexerFortran77_Receivers_Callback qscilexerfortran77_receivers_callback = nullptr;
    QsciLexerFortran77_IsSignalConnected_Callback qscilexerfortran77_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerfortran77_metacall_isbase = false;
    mutable bool qscilexerfortran77_setfoldcompact_isbase = false;
    mutable bool qscilexerfortran77_language_isbase = false;
    mutable bool qscilexerfortran77_lexer_isbase = false;
    mutable bool qscilexerfortran77_lexerid_isbase = false;
    mutable bool qscilexerfortran77_autocompletionfillups_isbase = false;
    mutable bool qscilexerfortran77_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerfortran77_blockend_isbase = false;
    mutable bool qscilexerfortran77_blocklookback_isbase = false;
    mutable bool qscilexerfortran77_blockstart_isbase = false;
    mutable bool qscilexerfortran77_blockstartkeyword_isbase = false;
    mutable bool qscilexerfortran77_bracestyle_isbase = false;
    mutable bool qscilexerfortran77_casesensitive_isbase = false;
    mutable bool qscilexerfortran77_color_isbase = false;
    mutable bool qscilexerfortran77_eolfill_isbase = false;
    mutable bool qscilexerfortran77_font_isbase = false;
    mutable bool qscilexerfortran77_indentationguideview_isbase = false;
    mutable bool qscilexerfortran77_keywords_isbase = false;
    mutable bool qscilexerfortran77_defaultstyle_isbase = false;
    mutable bool qscilexerfortran77_description_isbase = false;
    mutable bool qscilexerfortran77_paper_isbase = false;
    mutable bool qscilexerfortran77_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexerfortran77_defaulteolfill_isbase = false;
    mutable bool qscilexerfortran77_defaultfontwithstyle_isbase = false;
    mutable bool qscilexerfortran77_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexerfortran77_seteditor_isbase = false;
    mutable bool qscilexerfortran77_refreshproperties_isbase = false;
    mutable bool qscilexerfortran77_stylebitsneeded_isbase = false;
    mutable bool qscilexerfortran77_wordcharacters_isbase = false;
    mutable bool qscilexerfortran77_setautoindentstyle_isbase = false;
    mutable bool qscilexerfortran77_setcolor_isbase = false;
    mutable bool qscilexerfortran77_seteolfill_isbase = false;
    mutable bool qscilexerfortran77_setfont_isbase = false;
    mutable bool qscilexerfortran77_setpaper_isbase = false;
    mutable bool qscilexerfortran77_readproperties_isbase = false;
    mutable bool qscilexerfortran77_writeproperties_isbase = false;
    mutable bool qscilexerfortran77_event_isbase = false;
    mutable bool qscilexerfortran77_eventfilter_isbase = false;
    mutable bool qscilexerfortran77_timerevent_isbase = false;
    mutable bool qscilexerfortran77_childevent_isbase = false;
    mutable bool qscilexerfortran77_customevent_isbase = false;
    mutable bool qscilexerfortran77_connectnotify_isbase = false;
    mutable bool qscilexerfortran77_disconnectnotify_isbase = false;
    mutable bool qscilexerfortran77_sender_isbase = false;
    mutable bool qscilexerfortran77_sendersignalindex_isbase = false;
    mutable bool qscilexerfortran77_receivers_isbase = false;
    mutable bool qscilexerfortran77_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerFortran77() : QsciLexerFortran77(){};
    VirtualQsciLexerFortran77(QObject* parent) : QsciLexerFortran77(parent){};

    ~VirtualQsciLexerFortran77() {
        qscilexerfortran77_metacall_callback = nullptr;
        qscilexerfortran77_setfoldcompact_callback = nullptr;
        qscilexerfortran77_language_callback = nullptr;
        qscilexerfortran77_lexer_callback = nullptr;
        qscilexerfortran77_lexerid_callback = nullptr;
        qscilexerfortran77_autocompletionfillups_callback = nullptr;
        qscilexerfortran77_autocompletionwordseparators_callback = nullptr;
        qscilexerfortran77_blockend_callback = nullptr;
        qscilexerfortran77_blocklookback_callback = nullptr;
        qscilexerfortran77_blockstart_callback = nullptr;
        qscilexerfortran77_blockstartkeyword_callback = nullptr;
        qscilexerfortran77_bracestyle_callback = nullptr;
        qscilexerfortran77_casesensitive_callback = nullptr;
        qscilexerfortran77_color_callback = nullptr;
        qscilexerfortran77_eolfill_callback = nullptr;
        qscilexerfortran77_font_callback = nullptr;
        qscilexerfortran77_indentationguideview_callback = nullptr;
        qscilexerfortran77_keywords_callback = nullptr;
        qscilexerfortran77_defaultstyle_callback = nullptr;
        qscilexerfortran77_description_callback = nullptr;
        qscilexerfortran77_paper_callback = nullptr;
        qscilexerfortran77_defaultcolorwithstyle_callback = nullptr;
        qscilexerfortran77_defaulteolfill_callback = nullptr;
        qscilexerfortran77_defaultfontwithstyle_callback = nullptr;
        qscilexerfortran77_defaultpaperwithstyle_callback = nullptr;
        qscilexerfortran77_seteditor_callback = nullptr;
        qscilexerfortran77_refreshproperties_callback = nullptr;
        qscilexerfortran77_stylebitsneeded_callback = nullptr;
        qscilexerfortran77_wordcharacters_callback = nullptr;
        qscilexerfortran77_setautoindentstyle_callback = nullptr;
        qscilexerfortran77_setcolor_callback = nullptr;
        qscilexerfortran77_seteolfill_callback = nullptr;
        qscilexerfortran77_setfont_callback = nullptr;
        qscilexerfortran77_setpaper_callback = nullptr;
        qscilexerfortran77_readproperties_callback = nullptr;
        qscilexerfortran77_writeproperties_callback = nullptr;
        qscilexerfortran77_event_callback = nullptr;
        qscilexerfortran77_eventfilter_callback = nullptr;
        qscilexerfortran77_timerevent_callback = nullptr;
        qscilexerfortran77_childevent_callback = nullptr;
        qscilexerfortran77_customevent_callback = nullptr;
        qscilexerfortran77_connectnotify_callback = nullptr;
        qscilexerfortran77_disconnectnotify_callback = nullptr;
        qscilexerfortran77_sender_callback = nullptr;
        qscilexerfortran77_sendersignalindex_callback = nullptr;
        qscilexerfortran77_receivers_callback = nullptr;
        qscilexerfortran77_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexerFortran77_Metacall_Callback(QsciLexerFortran77_Metacall_Callback cb) { qscilexerfortran77_metacall_callback = cb; }
    void setQsciLexerFortran77_SetFoldCompact_Callback(QsciLexerFortran77_SetFoldCompact_Callback cb) { qscilexerfortran77_setfoldcompact_callback = cb; }
    void setQsciLexerFortran77_Language_Callback(QsciLexerFortran77_Language_Callback cb) { qscilexerfortran77_language_callback = cb; }
    void setQsciLexerFortran77_Lexer_Callback(QsciLexerFortran77_Lexer_Callback cb) { qscilexerfortran77_lexer_callback = cb; }
    void setQsciLexerFortran77_LexerId_Callback(QsciLexerFortran77_LexerId_Callback cb) { qscilexerfortran77_lexerid_callback = cb; }
    void setQsciLexerFortran77_AutoCompletionFillups_Callback(QsciLexerFortran77_AutoCompletionFillups_Callback cb) { qscilexerfortran77_autocompletionfillups_callback = cb; }
    void setQsciLexerFortran77_AutoCompletionWordSeparators_Callback(QsciLexerFortran77_AutoCompletionWordSeparators_Callback cb) { qscilexerfortran77_autocompletionwordseparators_callback = cb; }
    void setQsciLexerFortran77_BlockEnd_Callback(QsciLexerFortran77_BlockEnd_Callback cb) { qscilexerfortran77_blockend_callback = cb; }
    void setQsciLexerFortran77_BlockLookback_Callback(QsciLexerFortran77_BlockLookback_Callback cb) { qscilexerfortran77_blocklookback_callback = cb; }
    void setQsciLexerFortran77_BlockStart_Callback(QsciLexerFortran77_BlockStart_Callback cb) { qscilexerfortran77_blockstart_callback = cb; }
    void setQsciLexerFortran77_BlockStartKeyword_Callback(QsciLexerFortran77_BlockStartKeyword_Callback cb) { qscilexerfortran77_blockstartkeyword_callback = cb; }
    void setQsciLexerFortran77_BraceStyle_Callback(QsciLexerFortran77_BraceStyle_Callback cb) { qscilexerfortran77_bracestyle_callback = cb; }
    void setQsciLexerFortran77_CaseSensitive_Callback(QsciLexerFortran77_CaseSensitive_Callback cb) { qscilexerfortran77_casesensitive_callback = cb; }
    void setQsciLexerFortran77_Color_Callback(QsciLexerFortran77_Color_Callback cb) { qscilexerfortran77_color_callback = cb; }
    void setQsciLexerFortran77_EolFill_Callback(QsciLexerFortran77_EolFill_Callback cb) { qscilexerfortran77_eolfill_callback = cb; }
    void setQsciLexerFortran77_Font_Callback(QsciLexerFortran77_Font_Callback cb) { qscilexerfortran77_font_callback = cb; }
    void setQsciLexerFortran77_IndentationGuideView_Callback(QsciLexerFortran77_IndentationGuideView_Callback cb) { qscilexerfortran77_indentationguideview_callback = cb; }
    void setQsciLexerFortran77_Keywords_Callback(QsciLexerFortran77_Keywords_Callback cb) { qscilexerfortran77_keywords_callback = cb; }
    void setQsciLexerFortran77_DefaultStyle_Callback(QsciLexerFortran77_DefaultStyle_Callback cb) { qscilexerfortran77_defaultstyle_callback = cb; }
    void setQsciLexerFortran77_Description_Callback(QsciLexerFortran77_Description_Callback cb) { qscilexerfortran77_description_callback = cb; }
    void setQsciLexerFortran77_Paper_Callback(QsciLexerFortran77_Paper_Callback cb) { qscilexerfortran77_paper_callback = cb; }
    void setQsciLexerFortran77_DefaultColorWithStyle_Callback(QsciLexerFortran77_DefaultColorWithStyle_Callback cb) { qscilexerfortran77_defaultcolorwithstyle_callback = cb; }
    void setQsciLexerFortran77_DefaultEolFill_Callback(QsciLexerFortran77_DefaultEolFill_Callback cb) { qscilexerfortran77_defaulteolfill_callback = cb; }
    void setQsciLexerFortran77_DefaultFontWithStyle_Callback(QsciLexerFortran77_DefaultFontWithStyle_Callback cb) { qscilexerfortran77_defaultfontwithstyle_callback = cb; }
    void setQsciLexerFortran77_DefaultPaperWithStyle_Callback(QsciLexerFortran77_DefaultPaperWithStyle_Callback cb) { qscilexerfortran77_defaultpaperwithstyle_callback = cb; }
    void setQsciLexerFortran77_SetEditor_Callback(QsciLexerFortran77_SetEditor_Callback cb) { qscilexerfortran77_seteditor_callback = cb; }
    void setQsciLexerFortran77_RefreshProperties_Callback(QsciLexerFortran77_RefreshProperties_Callback cb) { qscilexerfortran77_refreshproperties_callback = cb; }
    void setQsciLexerFortran77_StyleBitsNeeded_Callback(QsciLexerFortran77_StyleBitsNeeded_Callback cb) { qscilexerfortran77_stylebitsneeded_callback = cb; }
    void setQsciLexerFortran77_WordCharacters_Callback(QsciLexerFortran77_WordCharacters_Callback cb) { qscilexerfortran77_wordcharacters_callback = cb; }
    void setQsciLexerFortran77_SetAutoIndentStyle_Callback(QsciLexerFortran77_SetAutoIndentStyle_Callback cb) { qscilexerfortran77_setautoindentstyle_callback = cb; }
    void setQsciLexerFortran77_SetColor_Callback(QsciLexerFortran77_SetColor_Callback cb) { qscilexerfortran77_setcolor_callback = cb; }
    void setQsciLexerFortran77_SetEolFill_Callback(QsciLexerFortran77_SetEolFill_Callback cb) { qscilexerfortran77_seteolfill_callback = cb; }
    void setQsciLexerFortran77_SetFont_Callback(QsciLexerFortran77_SetFont_Callback cb) { qscilexerfortran77_setfont_callback = cb; }
    void setQsciLexerFortran77_SetPaper_Callback(QsciLexerFortran77_SetPaper_Callback cb) { qscilexerfortran77_setpaper_callback = cb; }
    void setQsciLexerFortran77_ReadProperties_Callback(QsciLexerFortran77_ReadProperties_Callback cb) { qscilexerfortran77_readproperties_callback = cb; }
    void setQsciLexerFortran77_WriteProperties_Callback(QsciLexerFortran77_WriteProperties_Callback cb) { qscilexerfortran77_writeproperties_callback = cb; }
    void setQsciLexerFortran77_Event_Callback(QsciLexerFortran77_Event_Callback cb) { qscilexerfortran77_event_callback = cb; }
    void setQsciLexerFortran77_EventFilter_Callback(QsciLexerFortran77_EventFilter_Callback cb) { qscilexerfortran77_eventfilter_callback = cb; }
    void setQsciLexerFortran77_TimerEvent_Callback(QsciLexerFortran77_TimerEvent_Callback cb) { qscilexerfortran77_timerevent_callback = cb; }
    void setQsciLexerFortran77_ChildEvent_Callback(QsciLexerFortran77_ChildEvent_Callback cb) { qscilexerfortran77_childevent_callback = cb; }
    void setQsciLexerFortran77_CustomEvent_Callback(QsciLexerFortran77_CustomEvent_Callback cb) { qscilexerfortran77_customevent_callback = cb; }
    void setQsciLexerFortran77_ConnectNotify_Callback(QsciLexerFortran77_ConnectNotify_Callback cb) { qscilexerfortran77_connectnotify_callback = cb; }
    void setQsciLexerFortran77_DisconnectNotify_Callback(QsciLexerFortran77_DisconnectNotify_Callback cb) { qscilexerfortran77_disconnectnotify_callback = cb; }
    void setQsciLexerFortran77_Sender_Callback(QsciLexerFortran77_Sender_Callback cb) { qscilexerfortran77_sender_callback = cb; }
    void setQsciLexerFortran77_SenderSignalIndex_Callback(QsciLexerFortran77_SenderSignalIndex_Callback cb) { qscilexerfortran77_sendersignalindex_callback = cb; }
    void setQsciLexerFortran77_Receivers_Callback(QsciLexerFortran77_Receivers_Callback cb) { qscilexerfortran77_receivers_callback = cb; }
    void setQsciLexerFortran77_IsSignalConnected_Callback(QsciLexerFortran77_IsSignalConnected_Callback cb) { qscilexerfortran77_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexerFortran77_Metacall_IsBase(bool value) const { qscilexerfortran77_metacall_isbase = value; }
    void setQsciLexerFortran77_SetFoldCompact_IsBase(bool value) const { qscilexerfortran77_setfoldcompact_isbase = value; }
    void setQsciLexerFortran77_Language_IsBase(bool value) const { qscilexerfortran77_language_isbase = value; }
    void setQsciLexerFortran77_Lexer_IsBase(bool value) const { qscilexerfortran77_lexer_isbase = value; }
    void setQsciLexerFortran77_LexerId_IsBase(bool value) const { qscilexerfortran77_lexerid_isbase = value; }
    void setQsciLexerFortran77_AutoCompletionFillups_IsBase(bool value) const { qscilexerfortran77_autocompletionfillups_isbase = value; }
    void setQsciLexerFortran77_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerfortran77_autocompletionwordseparators_isbase = value; }
    void setQsciLexerFortran77_BlockEnd_IsBase(bool value) const { qscilexerfortran77_blockend_isbase = value; }
    void setQsciLexerFortran77_BlockLookback_IsBase(bool value) const { qscilexerfortran77_blocklookback_isbase = value; }
    void setQsciLexerFortran77_BlockStart_IsBase(bool value) const { qscilexerfortran77_blockstart_isbase = value; }
    void setQsciLexerFortran77_BlockStartKeyword_IsBase(bool value) const { qscilexerfortran77_blockstartkeyword_isbase = value; }
    void setQsciLexerFortran77_BraceStyle_IsBase(bool value) const { qscilexerfortran77_bracestyle_isbase = value; }
    void setQsciLexerFortran77_CaseSensitive_IsBase(bool value) const { qscilexerfortran77_casesensitive_isbase = value; }
    void setQsciLexerFortran77_Color_IsBase(bool value) const { qscilexerfortran77_color_isbase = value; }
    void setQsciLexerFortran77_EolFill_IsBase(bool value) const { qscilexerfortran77_eolfill_isbase = value; }
    void setQsciLexerFortran77_Font_IsBase(bool value) const { qscilexerfortran77_font_isbase = value; }
    void setQsciLexerFortran77_IndentationGuideView_IsBase(bool value) const { qscilexerfortran77_indentationguideview_isbase = value; }
    void setQsciLexerFortran77_Keywords_IsBase(bool value) const { qscilexerfortran77_keywords_isbase = value; }
    void setQsciLexerFortran77_DefaultStyle_IsBase(bool value) const { qscilexerfortran77_defaultstyle_isbase = value; }
    void setQsciLexerFortran77_Description_IsBase(bool value) const { qscilexerfortran77_description_isbase = value; }
    void setQsciLexerFortran77_Paper_IsBase(bool value) const { qscilexerfortran77_paper_isbase = value; }
    void setQsciLexerFortran77_DefaultColorWithStyle_IsBase(bool value) const { qscilexerfortran77_defaultcolorwithstyle_isbase = value; }
    void setQsciLexerFortran77_DefaultEolFill_IsBase(bool value) const { qscilexerfortran77_defaulteolfill_isbase = value; }
    void setQsciLexerFortran77_DefaultFontWithStyle_IsBase(bool value) const { qscilexerfortran77_defaultfontwithstyle_isbase = value; }
    void setQsciLexerFortran77_DefaultPaperWithStyle_IsBase(bool value) const { qscilexerfortran77_defaultpaperwithstyle_isbase = value; }
    void setQsciLexerFortran77_SetEditor_IsBase(bool value) const { qscilexerfortran77_seteditor_isbase = value; }
    void setQsciLexerFortran77_RefreshProperties_IsBase(bool value) const { qscilexerfortran77_refreshproperties_isbase = value; }
    void setQsciLexerFortran77_StyleBitsNeeded_IsBase(bool value) const { qscilexerfortran77_stylebitsneeded_isbase = value; }
    void setQsciLexerFortran77_WordCharacters_IsBase(bool value) const { qscilexerfortran77_wordcharacters_isbase = value; }
    void setQsciLexerFortran77_SetAutoIndentStyle_IsBase(bool value) const { qscilexerfortran77_setautoindentstyle_isbase = value; }
    void setQsciLexerFortran77_SetColor_IsBase(bool value) const { qscilexerfortran77_setcolor_isbase = value; }
    void setQsciLexerFortran77_SetEolFill_IsBase(bool value) const { qscilexerfortran77_seteolfill_isbase = value; }
    void setQsciLexerFortran77_SetFont_IsBase(bool value) const { qscilexerfortran77_setfont_isbase = value; }
    void setQsciLexerFortran77_SetPaper_IsBase(bool value) const { qscilexerfortran77_setpaper_isbase = value; }
    void setQsciLexerFortran77_ReadProperties_IsBase(bool value) const { qscilexerfortran77_readproperties_isbase = value; }
    void setQsciLexerFortran77_WriteProperties_IsBase(bool value) const { qscilexerfortran77_writeproperties_isbase = value; }
    void setQsciLexerFortran77_Event_IsBase(bool value) const { qscilexerfortran77_event_isbase = value; }
    void setQsciLexerFortran77_EventFilter_IsBase(bool value) const { qscilexerfortran77_eventfilter_isbase = value; }
    void setQsciLexerFortran77_TimerEvent_IsBase(bool value) const { qscilexerfortran77_timerevent_isbase = value; }
    void setQsciLexerFortran77_ChildEvent_IsBase(bool value) const { qscilexerfortran77_childevent_isbase = value; }
    void setQsciLexerFortran77_CustomEvent_IsBase(bool value) const { qscilexerfortran77_customevent_isbase = value; }
    void setQsciLexerFortran77_ConnectNotify_IsBase(bool value) const { qscilexerfortran77_connectnotify_isbase = value; }
    void setQsciLexerFortran77_DisconnectNotify_IsBase(bool value) const { qscilexerfortran77_disconnectnotify_isbase = value; }
    void setQsciLexerFortran77_Sender_IsBase(bool value) const { qscilexerfortran77_sender_isbase = value; }
    void setQsciLexerFortran77_SenderSignalIndex_IsBase(bool value) const { qscilexerfortran77_sendersignalindex_isbase = value; }
    void setQsciLexerFortran77_Receivers_IsBase(bool value) const { qscilexerfortran77_receivers_isbase = value; }
    void setQsciLexerFortran77_IsSignalConnected_IsBase(bool value) const { qscilexerfortran77_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerfortran77_metacall_isbase) {
            qscilexerfortran77_metacall_isbase = false;
            return QsciLexerFortran77::qt_metacall(param1, param2, param3);
        } else if (qscilexerfortran77_metacall_callback != nullptr) {
            return qscilexerfortran77_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexerFortran77::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerfortran77_setfoldcompact_isbase) {
            qscilexerfortran77_setfoldcompact_isbase = false;
            QsciLexerFortran77::setFoldCompact(fold);
        } else if (qscilexerfortran77_setfoldcompact_callback != nullptr) {
            qscilexerfortran77_setfoldcompact_callback(this, fold);
        } else {
            QsciLexerFortran77::setFoldCompact(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexerfortran77_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerfortran77_lexer_isbase) {
            qscilexerfortran77_lexer_isbase = false;
            return QsciLexerFortran77::lexer();
        } else if (qscilexerfortran77_lexer_callback != nullptr) {
            return qscilexerfortran77_lexer_callback();
        } else {
            return QsciLexerFortran77::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerfortran77_lexerid_isbase) {
            qscilexerfortran77_lexerid_isbase = false;
            return QsciLexerFortran77::lexerId();
        } else if (qscilexerfortran77_lexerid_callback != nullptr) {
            return qscilexerfortran77_lexerid_callback();
        } else {
            return QsciLexerFortran77::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerfortran77_autocompletionfillups_isbase) {
            qscilexerfortran77_autocompletionfillups_isbase = false;
            return QsciLexerFortran77::autoCompletionFillups();
        } else if (qscilexerfortran77_autocompletionfillups_callback != nullptr) {
            return qscilexerfortran77_autocompletionfillups_callback();
        } else {
            return QsciLexerFortran77::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexerfortran77_autocompletionwordseparators_isbase) {
            qscilexerfortran77_autocompletionwordseparators_isbase = false;
            return QsciLexerFortran77::autoCompletionWordSeparators();
        } else if (qscilexerfortran77_autocompletionwordseparators_callback != nullptr) {
            return qscilexerfortran77_autocompletionwordseparators_callback();
        } else {
            return QsciLexerFortran77::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerfortran77_blockend_isbase) {
            qscilexerfortran77_blockend_isbase = false;
            return QsciLexerFortran77::blockEnd(style);
        } else if (qscilexerfortran77_blockend_callback != nullptr) {
            return qscilexerfortran77_blockend_callback(this, style);
        } else {
            return QsciLexerFortran77::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerfortran77_blocklookback_isbase) {
            qscilexerfortran77_blocklookback_isbase = false;
            return QsciLexerFortran77::blockLookback();
        } else if (qscilexerfortran77_blocklookback_callback != nullptr) {
            return qscilexerfortran77_blocklookback_callback();
        } else {
            return QsciLexerFortran77::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerfortran77_blockstart_isbase) {
            qscilexerfortran77_blockstart_isbase = false;
            return QsciLexerFortran77::blockStart(style);
        } else if (qscilexerfortran77_blockstart_callback != nullptr) {
            return qscilexerfortran77_blockstart_callback(this, style);
        } else {
            return QsciLexerFortran77::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerfortran77_blockstartkeyword_isbase) {
            qscilexerfortran77_blockstartkeyword_isbase = false;
            return QsciLexerFortran77::blockStartKeyword(style);
        } else if (qscilexerfortran77_blockstartkeyword_callback != nullptr) {
            return qscilexerfortran77_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexerFortran77::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerfortran77_bracestyle_isbase) {
            qscilexerfortran77_bracestyle_isbase = false;
            return QsciLexerFortran77::braceStyle();
        } else if (qscilexerfortran77_bracestyle_callback != nullptr) {
            return qscilexerfortran77_bracestyle_callback();
        } else {
            return QsciLexerFortran77::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerfortran77_casesensitive_isbase) {
            qscilexerfortran77_casesensitive_isbase = false;
            return QsciLexerFortran77::caseSensitive();
        } else if (qscilexerfortran77_casesensitive_callback != nullptr) {
            return qscilexerfortran77_casesensitive_callback();
        } else {
            return QsciLexerFortran77::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerfortran77_color_isbase) {
            qscilexerfortran77_color_isbase = false;
            return QsciLexerFortran77::color(style);
        } else if (qscilexerfortran77_color_callback != nullptr) {
            return qscilexerfortran77_color_callback(this, style);
        } else {
            return QsciLexerFortran77::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerfortran77_eolfill_isbase) {
            qscilexerfortran77_eolfill_isbase = false;
            return QsciLexerFortran77::eolFill(style);
        } else if (qscilexerfortran77_eolfill_callback != nullptr) {
            return qscilexerfortran77_eolfill_callback(this, style);
        } else {
            return QsciLexerFortran77::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerfortran77_font_isbase) {
            qscilexerfortran77_font_isbase = false;
            return QsciLexerFortran77::font(style);
        } else if (qscilexerfortran77_font_callback != nullptr) {
            return qscilexerfortran77_font_callback(this, style);
        } else {
            return QsciLexerFortran77::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerfortran77_indentationguideview_isbase) {
            qscilexerfortran77_indentationguideview_isbase = false;
            return QsciLexerFortran77::indentationGuideView();
        } else if (qscilexerfortran77_indentationguideview_callback != nullptr) {
            return qscilexerfortran77_indentationguideview_callback();
        } else {
            return QsciLexerFortran77::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerfortran77_keywords_isbase) {
            qscilexerfortran77_keywords_isbase = false;
            return QsciLexerFortran77::keywords(set);
        } else if (qscilexerfortran77_keywords_callback != nullptr) {
            return qscilexerfortran77_keywords_callback(this, set);
        } else {
            return QsciLexerFortran77::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerfortran77_defaultstyle_isbase) {
            qscilexerfortran77_defaultstyle_isbase = false;
            return QsciLexerFortran77::defaultStyle();
        } else if (qscilexerfortran77_defaultstyle_callback != nullptr) {
            return qscilexerfortran77_defaultstyle_callback();
        } else {
            return QsciLexerFortran77::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexerfortran77_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerfortran77_paper_isbase) {
            qscilexerfortran77_paper_isbase = false;
            return QsciLexerFortran77::paper(style);
        } else if (qscilexerfortran77_paper_callback != nullptr) {
            return qscilexerfortran77_paper_callback(this, style);
        } else {
            return QsciLexerFortran77::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerfortran77_defaultcolorwithstyle_isbase) {
            qscilexerfortran77_defaultcolorwithstyle_isbase = false;
            return QsciLexerFortran77::defaultColor(style);
        } else if (qscilexerfortran77_defaultcolorwithstyle_callback != nullptr) {
            return qscilexerfortran77_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexerFortran77::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerfortran77_defaulteolfill_isbase) {
            qscilexerfortran77_defaulteolfill_isbase = false;
            return QsciLexerFortran77::defaultEolFill(style);
        } else if (qscilexerfortran77_defaulteolfill_callback != nullptr) {
            return qscilexerfortran77_defaulteolfill_callback(this, style);
        } else {
            return QsciLexerFortran77::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerfortran77_defaultfontwithstyle_isbase) {
            qscilexerfortran77_defaultfontwithstyle_isbase = false;
            return QsciLexerFortran77::defaultFont(style);
        } else if (qscilexerfortran77_defaultfontwithstyle_callback != nullptr) {
            return qscilexerfortran77_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexerFortran77::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerfortran77_defaultpaperwithstyle_isbase) {
            qscilexerfortran77_defaultpaperwithstyle_isbase = false;
            return QsciLexerFortran77::defaultPaper(style);
        } else if (qscilexerfortran77_defaultpaperwithstyle_callback != nullptr) {
            return qscilexerfortran77_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexerFortran77::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerfortran77_seteditor_isbase) {
            qscilexerfortran77_seteditor_isbase = false;
            QsciLexerFortran77::setEditor(editor);
        } else if (qscilexerfortran77_seteditor_callback != nullptr) {
            qscilexerfortran77_seteditor_callback(this, editor);
        } else {
            QsciLexerFortran77::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerfortran77_refreshproperties_isbase) {
            qscilexerfortran77_refreshproperties_isbase = false;
            QsciLexerFortran77::refreshProperties();
        } else if (qscilexerfortran77_refreshproperties_callback != nullptr) {
            qscilexerfortran77_refreshproperties_callback();
        } else {
            QsciLexerFortran77::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerfortran77_stylebitsneeded_isbase) {
            qscilexerfortran77_stylebitsneeded_isbase = false;
            return QsciLexerFortran77::styleBitsNeeded();
        } else if (qscilexerfortran77_stylebitsneeded_callback != nullptr) {
            return qscilexerfortran77_stylebitsneeded_callback();
        } else {
            return QsciLexerFortran77::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerfortran77_wordcharacters_isbase) {
            qscilexerfortran77_wordcharacters_isbase = false;
            return QsciLexerFortran77::wordCharacters();
        } else if (qscilexerfortran77_wordcharacters_callback != nullptr) {
            return qscilexerfortran77_wordcharacters_callback();
        } else {
            return QsciLexerFortran77::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerfortran77_setautoindentstyle_isbase) {
            qscilexerfortran77_setautoindentstyle_isbase = false;
            QsciLexerFortran77::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerfortran77_setautoindentstyle_callback != nullptr) {
            qscilexerfortran77_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexerFortran77::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerfortran77_setcolor_isbase) {
            qscilexerfortran77_setcolor_isbase = false;
            QsciLexerFortran77::setColor(c, style);
        } else if (qscilexerfortran77_setcolor_callback != nullptr) {
            qscilexerfortran77_setcolor_callback(this, c, style);
        } else {
            QsciLexerFortran77::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerfortran77_seteolfill_isbase) {
            qscilexerfortran77_seteolfill_isbase = false;
            QsciLexerFortran77::setEolFill(eoffill, style);
        } else if (qscilexerfortran77_seteolfill_callback != nullptr) {
            qscilexerfortran77_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexerFortran77::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerfortran77_setfont_isbase) {
            qscilexerfortran77_setfont_isbase = false;
            QsciLexerFortran77::setFont(f, style);
        } else if (qscilexerfortran77_setfont_callback != nullptr) {
            qscilexerfortran77_setfont_callback(this, f, style);
        } else {
            QsciLexerFortran77::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerfortran77_setpaper_isbase) {
            qscilexerfortran77_setpaper_isbase = false;
            QsciLexerFortran77::setPaper(c, style);
        } else if (qscilexerfortran77_setpaper_callback != nullptr) {
            qscilexerfortran77_setpaper_callback(this, c, style);
        } else {
            QsciLexerFortran77::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerfortran77_readproperties_isbase) {
            qscilexerfortran77_readproperties_isbase = false;
            return QsciLexerFortran77::readProperties(qs, prefix);
        } else if (qscilexerfortran77_readproperties_callback != nullptr) {
            return qscilexerfortran77_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerFortran77::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerfortran77_writeproperties_isbase) {
            qscilexerfortran77_writeproperties_isbase = false;
            return QsciLexerFortran77::writeProperties(qs, prefix);
        } else if (qscilexerfortran77_writeproperties_callback != nullptr) {
            return qscilexerfortran77_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerFortran77::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerfortran77_event_isbase) {
            qscilexerfortran77_event_isbase = false;
            return QsciLexerFortran77::event(event);
        } else if (qscilexerfortran77_event_callback != nullptr) {
            return qscilexerfortran77_event_callback(this, event);
        } else {
            return QsciLexerFortran77::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerfortran77_eventfilter_isbase) {
            qscilexerfortran77_eventfilter_isbase = false;
            return QsciLexerFortran77::eventFilter(watched, event);
        } else if (qscilexerfortran77_eventfilter_callback != nullptr) {
            return qscilexerfortran77_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexerFortran77::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerfortran77_timerevent_isbase) {
            qscilexerfortran77_timerevent_isbase = false;
            QsciLexerFortran77::timerEvent(event);
        } else if (qscilexerfortran77_timerevent_callback != nullptr) {
            qscilexerfortran77_timerevent_callback(this, event);
        } else {
            QsciLexerFortran77::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerfortran77_childevent_isbase) {
            qscilexerfortran77_childevent_isbase = false;
            QsciLexerFortran77::childEvent(event);
        } else if (qscilexerfortran77_childevent_callback != nullptr) {
            qscilexerfortran77_childevent_callback(this, event);
        } else {
            QsciLexerFortran77::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerfortran77_customevent_isbase) {
            qscilexerfortran77_customevent_isbase = false;
            QsciLexerFortran77::customEvent(event);
        } else if (qscilexerfortran77_customevent_callback != nullptr) {
            qscilexerfortran77_customevent_callback(this, event);
        } else {
            QsciLexerFortran77::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerfortran77_connectnotify_isbase) {
            qscilexerfortran77_connectnotify_isbase = false;
            QsciLexerFortran77::connectNotify(signal);
        } else if (qscilexerfortran77_connectnotify_callback != nullptr) {
            qscilexerfortran77_connectnotify_callback(this, signal);
        } else {
            QsciLexerFortran77::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerfortran77_disconnectnotify_isbase) {
            qscilexerfortran77_disconnectnotify_isbase = false;
            QsciLexerFortran77::disconnectNotify(signal);
        } else if (qscilexerfortran77_disconnectnotify_callback != nullptr) {
            qscilexerfortran77_disconnectnotify_callback(this, signal);
        } else {
            QsciLexerFortran77::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerfortran77_sender_isbase) {
            qscilexerfortran77_sender_isbase = false;
            return QsciLexerFortran77::sender();
        } else if (qscilexerfortran77_sender_callback != nullptr) {
            return qscilexerfortran77_sender_callback();
        } else {
            return QsciLexerFortran77::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerfortran77_sendersignalindex_isbase) {
            qscilexerfortran77_sendersignalindex_isbase = false;
            return QsciLexerFortran77::senderSignalIndex();
        } else if (qscilexerfortran77_sendersignalindex_callback != nullptr) {
            return qscilexerfortran77_sendersignalindex_callback();
        } else {
            return QsciLexerFortran77::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerfortran77_receivers_isbase) {
            qscilexerfortran77_receivers_isbase = false;
            return QsciLexerFortran77::receivers(signal);
        } else if (qscilexerfortran77_receivers_callback != nullptr) {
            return qscilexerfortran77_receivers_callback(this, signal);
        } else {
            return QsciLexerFortran77::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerfortran77_issignalconnected_isbase) {
            qscilexerfortran77_issignalconnected_isbase = false;
            return QsciLexerFortran77::isSignalConnected(signal);
        } else if (qscilexerfortran77_issignalconnected_callback != nullptr) {
            return qscilexerfortran77_issignalconnected_callback(this, signal);
        } else {
            return QsciLexerFortran77::isSignalConnected(signal);
        }
    }
};

#endif

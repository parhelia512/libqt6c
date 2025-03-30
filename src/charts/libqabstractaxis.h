#pragma once
#ifndef SRC_CHARTSQT6C_LIBQABSTRACTAXIS_H
#define SRC_CHARTSQT6C_LIBQABSTRACTAXIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqbrush.h"
#include "../libqevent.h"
#include "../libqcolor.h"
#include "../libqfont.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpen.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QMetaObject* q_abstractaxis_meta_object(void* self);
void* q_abstractaxis_metacast(void* self, const char* param1);
int32_t q_abstractaxis_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_abstractaxis_tr(const char* s);
int64_t q_abstractaxis_type(void* self);
bool q_abstractaxis_is_visible(void* self);
void q_abstractaxis_set_visible(void* self);
void q_abstractaxis_show(void* self);
void q_abstractaxis_hide(void* self);
bool q_abstractaxis_is_line_visible(void* self);
void q_abstractaxis_set_line_visible(void* self);
void q_abstractaxis_set_line_pen(void* self, void* pen);
QPen* q_abstractaxis_line_pen(void* self);
void q_abstractaxis_set_line_pen_color(void* self, void* color);
QColor* q_abstractaxis_line_pen_color(void* self);
bool q_abstractaxis_is_grid_line_visible(void* self);
void q_abstractaxis_set_grid_line_visible(void* self);
void q_abstractaxis_set_grid_line_pen(void* self, void* pen);
QPen* q_abstractaxis_grid_line_pen(void* self);
bool q_abstractaxis_is_minor_grid_line_visible(void* self);
void q_abstractaxis_set_minor_grid_line_visible(void* self);
void q_abstractaxis_set_minor_grid_line_pen(void* self, void* pen);
QPen* q_abstractaxis_minor_grid_line_pen(void* self);
void q_abstractaxis_set_grid_line_color(void* self, void* color);
QColor* q_abstractaxis_grid_line_color(void* self);
void q_abstractaxis_set_minor_grid_line_color(void* self, void* color);
QColor* q_abstractaxis_minor_grid_line_color(void* self);
bool q_abstractaxis_labels_visible(void* self);
void q_abstractaxis_set_labels_visible(void* self);
void q_abstractaxis_set_labels_brush(void* self, void* brush);
QBrush* q_abstractaxis_labels_brush(void* self);
void q_abstractaxis_set_labels_font(void* self, void* font);
QFont* q_abstractaxis_labels_font(void* self);
void q_abstractaxis_set_labels_angle(void* self, int angle);
int32_t q_abstractaxis_labels_angle(void* self);
void q_abstractaxis_set_labels_color(void* self, void* color);
QColor* q_abstractaxis_labels_color(void* self);
bool q_abstractaxis_is_title_visible(void* self);
void q_abstractaxis_set_title_visible(void* self);
void q_abstractaxis_set_title_brush(void* self, void* brush);
QBrush* q_abstractaxis_title_brush(void* self);
void q_abstractaxis_set_title_font(void* self, void* font);
QFont* q_abstractaxis_title_font(void* self);
void q_abstractaxis_set_title_text(void* self, const char* title);
const char* q_abstractaxis_title_text(void* self);
bool q_abstractaxis_shades_visible(void* self);
void q_abstractaxis_set_shades_visible(void* self);
void q_abstractaxis_set_shades_pen(void* self, void* pen);
QPen* q_abstractaxis_shades_pen(void* self);
void q_abstractaxis_set_shades_brush(void* self, void* brush);
QBrush* q_abstractaxis_shades_brush(void* self);
void q_abstractaxis_set_shades_color(void* self, void* color);
QColor* q_abstractaxis_shades_color(void* self);
void q_abstractaxis_set_shades_border_color(void* self, void* color);
QColor* q_abstractaxis_shades_border_color(void* self);
int64_t q_abstractaxis_orientation(void* self);
int64_t q_abstractaxis_alignment(void* self);
void q_abstractaxis_set_min(void* self, void* min);
void q_abstractaxis_set_max(void* self, void* max);
void q_abstractaxis_set_range(void* self, void* min, void* max);
void q_abstractaxis_set_reverse(void* self);
bool q_abstractaxis_is_reverse(void* self);
void q_abstractaxis_set_labels_editable(void* self);
bool q_abstractaxis_labels_editable(void* self);
bool q_abstractaxis_labels_truncated(void* self);
void q_abstractaxis_set_truncate_labels(void* self);
bool q_abstractaxis_truncate_labels(void* self);
void q_abstractaxis_visible_changed(void* self, bool visible);
void q_abstractaxis_on_visible_changed(void* self, void (*slot)(void*, bool));
void q_abstractaxis_line_pen_changed(void* self, void* pen);
void q_abstractaxis_on_line_pen_changed(void* self, void (*slot)(void*, void*));
void q_abstractaxis_line_visible_changed(void* self, bool visible);
void q_abstractaxis_on_line_visible_changed(void* self, void (*slot)(void*, bool));
void q_abstractaxis_labels_visible_changed(void* self, bool visible);
void q_abstractaxis_on_labels_visible_changed(void* self, void (*slot)(void*, bool));
void q_abstractaxis_labels_brush_changed(void* self, void* brush);
void q_abstractaxis_on_labels_brush_changed(void* self, void (*slot)(void*, void*));
void q_abstractaxis_labels_font_changed(void* self, void* pen);
void q_abstractaxis_on_labels_font_changed(void* self, void (*slot)(void*, void*));
void q_abstractaxis_labels_angle_changed(void* self, int angle);
void q_abstractaxis_on_labels_angle_changed(void* self, void (*slot)(void*, int));
void q_abstractaxis_grid_line_pen_changed(void* self, void* pen);
void q_abstractaxis_on_grid_line_pen_changed(void* self, void (*slot)(void*, void*));
void q_abstractaxis_grid_visible_changed(void* self, bool visible);
void q_abstractaxis_on_grid_visible_changed(void* self, void (*slot)(void*, bool));
void q_abstractaxis_minor_grid_visible_changed(void* self, bool visible);
void q_abstractaxis_on_minor_grid_visible_changed(void* self, void (*slot)(void*, bool));
void q_abstractaxis_minor_grid_line_pen_changed(void* self, void* pen);
void q_abstractaxis_on_minor_grid_line_pen_changed(void* self, void (*slot)(void*, void*));
void q_abstractaxis_grid_line_color_changed(void* self, void* color);
void q_abstractaxis_on_grid_line_color_changed(void* self, void (*slot)(void*, void*));
void q_abstractaxis_minor_grid_line_color_changed(void* self, void* color);
void q_abstractaxis_on_minor_grid_line_color_changed(void* self, void (*slot)(void*, void*));
void q_abstractaxis_color_changed(void* self, void* color);
void q_abstractaxis_on_color_changed(void* self, void (*slot)(void*, void*));
void q_abstractaxis_labels_color_changed(void* self, void* color);
void q_abstractaxis_on_labels_color_changed(void* self, void (*slot)(void*, void*));
void q_abstractaxis_title_text_changed(void* self, const char* title);
void q_abstractaxis_on_title_text_changed(void* self, void (*slot)(void*, const char*));
void q_abstractaxis_title_brush_changed(void* self, void* brush);
void q_abstractaxis_on_title_brush_changed(void* self, void (*slot)(void*, void*));
void q_abstractaxis_title_visible_changed(void* self, bool visible);
void q_abstractaxis_on_title_visible_changed(void* self, void (*slot)(void*, bool));
void q_abstractaxis_title_font_changed(void* self, void* font);
void q_abstractaxis_on_title_font_changed(void* self, void (*slot)(void*, void*));
void q_abstractaxis_shades_visible_changed(void* self, bool visible);
void q_abstractaxis_on_shades_visible_changed(void* self, void (*slot)(void*, bool));
void q_abstractaxis_shades_color_changed(void* self, void* color);
void q_abstractaxis_on_shades_color_changed(void* self, void (*slot)(void*, void*));
void q_abstractaxis_shades_border_color_changed(void* self, void* color);
void q_abstractaxis_on_shades_border_color_changed(void* self, void (*slot)(void*, void*));
void q_abstractaxis_shades_pen_changed(void* self, void* pen);
void q_abstractaxis_on_shades_pen_changed(void* self, void (*slot)(void*, void*));
void q_abstractaxis_shades_brush_changed(void* self, void* brush);
void q_abstractaxis_on_shades_brush_changed(void* self, void (*slot)(void*, void*));
void q_abstractaxis_reverse_changed(void* self, bool reverse);
void q_abstractaxis_on_reverse_changed(void* self, void (*slot)(void*, bool));
void q_abstractaxis_labels_editable_changed(void* self, bool editable);
void q_abstractaxis_on_labels_editable_changed(void* self, void (*slot)(void*, bool));
void q_abstractaxis_labels_truncated_changed(void* self, bool labelsTruncated);
void q_abstractaxis_on_labels_truncated_changed(void* self, void (*slot)(void*, bool));
void q_abstractaxis_truncate_labels_changed(void* self, bool truncateLabels);
void q_abstractaxis_on_truncate_labels_changed(void* self, void (*slot)(void*, bool));
const char* q_abstractaxis_tr2(const char* s, const char* c);
const char* q_abstractaxis_tr3(const char* s, const char* c, int n);
void q_abstractaxis_set_visible1(void* self, bool visible);
void q_abstractaxis_set_line_visible1(void* self, bool visible);
void q_abstractaxis_set_grid_line_visible1(void* self, bool visible);
void q_abstractaxis_set_minor_grid_line_visible1(void* self, bool visible);
void q_abstractaxis_set_labels_visible1(void* self, bool visible);
void q_abstractaxis_set_title_visible1(void* self, bool visible);
void q_abstractaxis_set_shades_visible1(void* self, bool visible);
void q_abstractaxis_set_reverse1(void* self, bool reverse);
void q_abstractaxis_set_labels_editable1(void* self, bool editable);
void q_abstractaxis_set_truncate_labels1(void* self, bool truncateLabels);
bool q_abstractaxis_event(void* self, void* event);
bool q_abstractaxis_event_filter(void* self, void* watched, void* event);
const char* q_abstractaxis_object_name(void* self);
void q_abstractaxis_set_object_name(void* self, const char* name);
bool q_abstractaxis_is_widget_type(void* self);
bool q_abstractaxis_is_window_type(void* self);
bool q_abstractaxis_is_quick_item_type(void* self);
bool q_abstractaxis_signals_blocked(void* self);
bool q_abstractaxis_block_signals(void* self, bool b);
QThread* q_abstractaxis_thread(void* self);
void q_abstractaxis_move_to_thread(void* self, void* thread);
int32_t q_abstractaxis_start_timer(void* self, int interval);
void q_abstractaxis_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_abstractaxis_children(void* self);
void q_abstractaxis_set_parent(void* self, void* parent);
void q_abstractaxis_install_event_filter(void* self, void* filterObj);
void q_abstractaxis_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_abstractaxis_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_abstractaxis_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_abstractaxis_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_abstractaxis_disconnect_with_q_meta_object_connection(void* param1);
void q_abstractaxis_dump_object_tree(void* self);
void q_abstractaxis_dump_object_info(void* self);
bool q_abstractaxis_set_property(void* self, const char* name, void* value);
QVariant* q_abstractaxis_property(void* self, const char* name);
const char** q_abstractaxis_dynamic_property_names(void* self);
QBindingStorage* q_abstractaxis_binding_storage(void* self);
QBindingStorage* q_abstractaxis_binding_storage2(void* self);
void q_abstractaxis_destroyed(void* self);
void q_abstractaxis_on_destroyed(void* self, void (*slot)(void*));
QObject* q_abstractaxis_parent(void* self);
bool q_abstractaxis_inherits(void* self, const char* classname);
void q_abstractaxis_delete_later(void* self);
int32_t q_abstractaxis_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_abstractaxis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_abstractaxis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_abstractaxis_destroyed1(void* self, void* param1);
void q_abstractaxis_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_abstractaxis_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractaxis.html#types

typedef enum {
    QABSTRACTAXIS_AXISTYPE_AXISTYPENOAXIS = 0,
    QABSTRACTAXIS_AXISTYPE_AXISTYPEVALUE = 1,
    QABSTRACTAXIS_AXISTYPE_AXISTYPEBARCATEGORY = 2,
    QABSTRACTAXIS_AXISTYPE_AXISTYPECATEGORY = 4,
    QABSTRACTAXIS_AXISTYPE_AXISTYPEDATETIME = 8,
    QABSTRACTAXIS_AXISTYPE_AXISTYPELOGVALUE = 16,
    QABSTRACTAXIS_AXISTYPE_AXISTYPECOLOR = 32
} QAbstractAxis__AxisType;

#endif

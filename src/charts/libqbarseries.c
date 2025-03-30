#include "libqabstractaxis.hpp"
#include "libqabstractbarseries.hpp"
#include "libqabstractseries.hpp"
#include "../libqanystringview.hpp"
#include "libqbarset.hpp"
#include "../libqbindingstorage.hpp"
#include "libqchart.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqbarseries.hpp"
#include "libqbarseries.h"

/// https://doc.qt.io/qt-6/qbarseries.html

/// q_barseries_new constructs a new QBarSeries object.
///
///
QBarSeries* q_barseries_new() {
    return QBarSeries_new();
}

/// q_barseries_new2 constructs a new QBarSeries object.
///
/// ``` QObject* parent ```
QBarSeries* q_barseries_new2(void* parent) {
    return QBarSeries_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QBarSeries* self ```
QMetaObject* q_barseries_meta_object(void* self) {
    return QBarSeries_MetaObject((QBarSeries*)self);
}

/// ``` QBarSeries* self, const char* param1 ```
void* q_barseries_metacast(void* self, const char* param1) {
    return QBarSeries_Metacast((QBarSeries*)self, param1);
}

/// ``` QBarSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_barseries_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QBarSeries_Metacall((QBarSeries*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QBarSeries* self, int32_t (*slot)(QBarSeries*, enum QMetaObject__Call, int, void*) ```
void q_barseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QBarSeries_OnMetacall((QBarSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBarSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_barseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QBarSeries_QBaseMetacall((QBarSeries*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_barseries_tr(const char* s) {
    libqt_string _str = QBarSeries_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarseries.html#type)
///
/// ``` QBarSeries* self ```
int64_t q_barseries_type(void* self) {
    return QBarSeries_Type((QBarSeries*)self);
}

/// Allows for overriding the related default method
///
/// ``` QBarSeries* self, int64_t (*slot)() ```
void q_barseries_on_type(void* self, int64_t (*slot)()) {
    QBarSeries_OnType((QBarSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBarSeries* self ```
int64_t q_barseries_qbase_type(void* self) {
    return QBarSeries_QBaseType((QBarSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_barseries_tr2(const char* s, const char* c) {
    libqt_string _str = QBarSeries_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_barseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QBarSeries_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setBarWidth)
///
/// ``` QBarSeries* self, double width ```
void q_barseries_set_bar_width(void* self, double width) {
    QAbstractBarSeries_SetBarWidth((QAbstractBarSeries*)self, width);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barWidth)
///
/// ``` QBarSeries* self ```
double q_barseries_bar_width(void* self) {
    return QAbstractBarSeries_BarWidth((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// ``` QBarSeries* self, QBarSet* set ```
bool q_barseries_append(void* self, void* set) {
    return QAbstractBarSeries_Append((QAbstractBarSeries*)self, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#remove)
///
/// ``` QBarSeries* self, QBarSet* set ```
bool q_barseries_remove(void* self, void* set) {
    return QAbstractBarSeries_Remove((QAbstractBarSeries*)self, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#take)
///
/// ``` QBarSeries* self, QBarSet* set ```
bool q_barseries_take(void* self, void* set) {
    return QAbstractBarSeries_Take((QAbstractBarSeries*)self, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// ``` QBarSeries* self, QBarSet* sets[] ```
bool q_barseries_append_with_sets(void* self, void* sets[]) {
    QBarSet** sets_arr = (QBarSet**)sets;
    size_t sets_len = 0;
    while (sets_arr[sets_len] != NULL) {
        sets_len++;
    }
    libqt_list sets_list = {
        .len = sets_len,
        .data = {(QBarSet*)sets},
    };
    return QAbstractBarSeries_AppendWithSets((QAbstractBarSeries*)self, sets_list);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#insert)
///
/// ``` QBarSeries* self, int index, QBarSet* set ```
bool q_barseries_insert(void* self, int index, void* set) {
    return QAbstractBarSeries_Insert((QAbstractBarSeries*)self, index, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#count)
///
/// ``` QBarSeries* self ```
int32_t q_barseries_count(void* self) {
    return QAbstractBarSeries_Count((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barSets)
///
/// ``` QBarSeries* self ```
libqt_list /* of QBarSet* */ q_barseries_bar_sets(void* self) {
    libqt_list _arr = QAbstractBarSeries_BarSets((QAbstractBarSeries*)self);
    return _arr;
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clear)
///
/// ``` QBarSeries* self ```
void q_barseries_clear(void* self) {
    QAbstractBarSeries_Clear((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// ``` QBarSeries* self ```
void q_barseries_set_labels_visible(void* self) {
    QAbstractBarSeries_SetLabelsVisible((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#isLabelsVisible)
///
/// ``` QBarSeries* self ```
bool q_barseries_is_labels_visible(void* self) {
    return QAbstractBarSeries_IsLabelsVisible((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsFormat)
///
/// ``` QBarSeries* self, const char* format ```
void q_barseries_set_labels_format(void* self, const char* format) {
    QAbstractBarSeries_SetLabelsFormat((QAbstractBarSeries*)self, qstring(format));
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormat)
///
/// ``` QBarSeries* self ```
const char* q_barseries_labels_format(void* self) {
    libqt_string _str = QAbstractBarSeries_LabelsFormat((QAbstractBarSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsAngle)
///
/// ``` QBarSeries* self, double angle ```
void q_barseries_set_labels_angle(void* self, double angle) {
    QAbstractBarSeries_SetLabelsAngle((QAbstractBarSeries*)self, angle);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngle)
///
/// ``` QBarSeries* self ```
double q_barseries_labels_angle(void* self) {
    return QAbstractBarSeries_LabelsAngle((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPosition)
///
/// ``` QBarSeries* self, enum QAbstractBarSeries__LabelsPosition position ```
void q_barseries_set_labels_position(void* self, int64_t position) {
    QAbstractBarSeries_SetLabelsPosition((QAbstractBarSeries*)self, position);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPosition)
///
/// ``` QBarSeries* self ```
int64_t q_barseries_labels_position(void* self) {
    return QAbstractBarSeries_LabelsPosition((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPrecision)
///
/// ``` QBarSeries* self, int precision ```
void q_barseries_set_labels_precision(void* self, int precision) {
    QAbstractBarSeries_SetLabelsPrecision((QAbstractBarSeries*)self, precision);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecision)
///
/// ``` QBarSeries* self ```
int32_t q_barseries_labels_precision(void* self) {
    return QAbstractBarSeries_LabelsPrecision((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
///
/// ``` QBarSeries* self, int index, QBarSet* barset ```
void q_barseries_clicked(void* self, int index, void* barset) {
    QAbstractBarSeries_Clicked((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_barseries_on_clicked(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Clicked((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
///
/// ``` QBarSeries* self, bool status, int index, QBarSet* barset ```
void q_barseries_hovered(void* self, bool status, int index, void* barset) {
    QAbstractBarSeries_Hovered((QAbstractBarSeries*)self, status, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QBarSeries* self, void (*slot)(QAbstractBarSeries*, bool, int, QBarSet*) ```
void q_barseries_on_hovered(void* self, void (*slot)(void*, bool, int, void*)) {
    QAbstractBarSeries_Connect_Hovered((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
///
/// ``` QBarSeries* self, int index, QBarSet* barset ```
void q_barseries_pressed(void* self, int index, void* barset) {
    QAbstractBarSeries_Pressed((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_barseries_on_pressed(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Pressed((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
///
/// ``` QBarSeries* self, int index, QBarSet* barset ```
void q_barseries_released(void* self, int index, void* barset) {
    QAbstractBarSeries_Released((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_barseries_on_released(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Released((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
///
/// ``` QBarSeries* self, int index, QBarSet* barset ```
void q_barseries_double_clicked(void* self, int index, void* barset) {
    QAbstractBarSeries_DoubleClicked((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_barseries_on_double_clicked(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_DoubleClicked((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
///
/// ``` QBarSeries* self ```
void q_barseries_count_changed(void* self) {
    QAbstractBarSeries_CountChanged((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QBarSeries* self, void (*slot)(QAbstractBarSeries*) ```
void q_barseries_on_count_changed(void* self, void (*slot)(void*)) {
    QAbstractBarSeries_Connect_CountChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
///
/// ``` QBarSeries* self ```
void q_barseries_labels_visible_changed(void* self) {
    QAbstractBarSeries_LabelsVisibleChanged((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QBarSeries* self, void (*slot)(QAbstractBarSeries*) ```
void q_barseries_on_labels_visible_changed(void* self, void (*slot)(void*)) {
    QAbstractBarSeries_Connect_LabelsVisibleChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
///
/// ``` QBarSeries* self, const char* format ```
void q_barseries_labels_format_changed(void* self, const char* format) {
    QAbstractBarSeries_LabelsFormatChanged((QAbstractBarSeries*)self, qstring(format));
}

/// Inherited from QAbstractBarSeries
///
/// ``` QBarSeries* self, void (*slot)(QAbstractBarSeries*, const char*) ```
void q_barseries_on_labels_format_changed(void* self, void (*slot)(void*, const char*)) {
    QAbstractBarSeries_Connect_LabelsFormatChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
///
/// ``` QBarSeries* self, enum QAbstractBarSeries__LabelsPosition position ```
void q_barseries_labels_position_changed(void* self, int64_t position) {
    QAbstractBarSeries_LabelsPositionChanged((QAbstractBarSeries*)self, position);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QBarSeries* self, void (*slot)(QAbstractBarSeries*, enum QAbstractBarSeries__LabelsPosition) ```
void q_barseries_on_labels_position_changed(void* self, void (*slot)(void*, int64_t)) {
    QAbstractBarSeries_Connect_LabelsPositionChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
///
/// ``` QBarSeries* self, double angle ```
void q_barseries_labels_angle_changed(void* self, double angle) {
    QAbstractBarSeries_LabelsAngleChanged((QAbstractBarSeries*)self, angle);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QBarSeries* self, void (*slot)(QAbstractBarSeries*, double) ```
void q_barseries_on_labels_angle_changed(void* self, void (*slot)(void*, double)) {
    QAbstractBarSeries_Connect_LabelsAngleChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
///
/// ``` QBarSeries* self, int precision ```
void q_barseries_labels_precision_changed(void* self, int precision) {
    QAbstractBarSeries_LabelsPrecisionChanged((QAbstractBarSeries*)self, precision);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QBarSeries* self, void (*slot)(QAbstractBarSeries*, int) ```
void q_barseries_on_labels_precision_changed(void* self, void (*slot)(void*, int)) {
    QAbstractBarSeries_Connect_LabelsPrecisionChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
///
/// ``` QBarSeries* self, QBarSet* sets[] ```
void q_barseries_barsets_added(void* self, void* sets[]) {
    QBarSet** sets_arr = (QBarSet**)sets;
    size_t sets_len = 0;
    while (sets_arr[sets_len] != NULL) {
        sets_len++;
    }
    libqt_list sets_list = {
        .len = sets_len,
        .data = {(QBarSet*)sets},
    };
    QAbstractBarSeries_BarsetsAdded((QAbstractBarSeries*)self, sets_list);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QBarSeries* self, void (*slot)(QAbstractBarSeries*, QBarSet*[]) ```
void q_barseries_on_barsets_added(void* self, void (*slot)(void*, void*)) {
    QAbstractBarSeries_Connect_BarsetsAdded((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
///
/// ``` QBarSeries* self, QBarSet* sets[] ```
void q_barseries_barsets_removed(void* self, void* sets[]) {
    QBarSet** sets_arr = (QBarSet**)sets;
    size_t sets_len = 0;
    while (sets_arr[sets_len] != NULL) {
        sets_len++;
    }
    libqt_list sets_list = {
        .len = sets_len,
        .data = {(QBarSet*)sets},
    };
    QAbstractBarSeries_BarsetsRemoved((QAbstractBarSeries*)self, sets_list);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QBarSeries* self, void (*slot)(QAbstractBarSeries*, QBarSet*[]) ```
void q_barseries_on_barsets_removed(void* self, void (*slot)(void*, void*)) {
    QAbstractBarSeries_Connect_BarsetsRemoved((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// ``` QBarSeries* self, bool visible ```
void q_barseries_set_labels_visible1(void* self, bool visible) {
    QAbstractBarSeries_SetLabelsVisible1((QAbstractBarSeries*)self, visible);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QBarSeries* self, const char* name ```
void q_barseries_set_name(void* self, const char* name) {
    QAbstractSeries_SetName((QAbstractSeries*)self, qstring(name));
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QBarSeries* self ```
const char* q_barseries_name(void* self) {
    libqt_string _str = QAbstractSeries_Name((QAbstractSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QBarSeries* self ```
void q_barseries_set_visible(void* self) {
    QAbstractSeries_SetVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QBarSeries* self ```
bool q_barseries_is_visible(void* self) {
    return QAbstractSeries_IsVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QBarSeries* self ```
double q_barseries_opacity(void* self) {
    return QAbstractSeries_Opacity((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QBarSeries* self, double opacity ```
void q_barseries_set_opacity(void* self, double opacity) {
    QAbstractSeries_SetOpacity((QAbstractSeries*)self, opacity);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QBarSeries* self ```
void q_barseries_set_use_open_g_l(void* self) {
    QAbstractSeries_SetUseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QBarSeries* self ```
bool q_barseries_use_open_g_l(void* self) {
    return QAbstractSeries_UseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QBarSeries* self ```
QChart* q_barseries_chart(void* self) {
    return QAbstractSeries_Chart((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QBarSeries* self, QAbstractAxis* axis ```
bool q_barseries_attach_axis(void* self, void* axis) {
    return QAbstractSeries_AttachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QBarSeries* self, QAbstractAxis* axis ```
bool q_barseries_detach_axis(void* self, void* axis) {
    return QAbstractSeries_DetachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QBarSeries* self ```
libqt_list /* of QAbstractAxis* */ q_barseries_attached_axes(void* self) {
    libqt_list _arr = QAbstractSeries_AttachedAxes((QAbstractSeries*)self);
    return _arr;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QBarSeries* self ```
void q_barseries_show(void* self) {
    QAbstractSeries_Show((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QBarSeries* self ```
void q_barseries_hide(void* self) {
    QAbstractSeries_Hide((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QBarSeries* self ```
void q_barseries_name_changed(void* self) {
    QAbstractSeries_NameChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_barseries_on_name_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_NameChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QBarSeries* self ```
void q_barseries_visible_changed(void* self) {
    QAbstractSeries_VisibleChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_barseries_on_visible_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_VisibleChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QBarSeries* self ```
void q_barseries_opacity_changed(void* self) {
    QAbstractSeries_OpacityChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_barseries_on_opacity_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_OpacityChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QBarSeries* self ```
void q_barseries_use_open_g_l_changed(void* self) {
    QAbstractSeries_UseOpenGLChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_barseries_on_use_open_g_l_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_UseOpenGLChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QBarSeries* self, bool visible ```
void q_barseries_set_visible1(void* self, bool visible) {
    QAbstractSeries_SetVisible1((QAbstractSeries*)self, visible);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QBarSeries* self, bool enable ```
void q_barseries_set_use_open_g_l1(void* self, bool enable) {
    QAbstractSeries_SetUseOpenGL1((QAbstractSeries*)self, enable);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QBarSeries* self ```
const char* q_barseries_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QBarSeries* self, const char* name ```
void q_barseries_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QBarSeries* self ```
bool q_barseries_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QBarSeries* self ```
bool q_barseries_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QBarSeries* self ```
bool q_barseries_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QBarSeries* self ```
bool q_barseries_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QBarSeries* self, bool b ```
bool q_barseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QBarSeries* self ```
QThread* q_barseries_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QBarSeries* self, QThread* thread ```
void q_barseries_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBarSeries* self, int interval ```
int32_t q_barseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QBarSeries* self, int id ```
void q_barseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QBarSeries* self ```
libqt_list /* of QObject* */ q_barseries_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QBarSeries* self, QObject* parent ```
void q_barseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QBarSeries* self, QObject* filterObj ```
void q_barseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QBarSeries* self, QObject* obj ```
void q_barseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_barseries_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBarSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_barseries_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_barseries_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_barseries_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QBarSeries* self ```
void q_barseries_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QBarSeries* self ```
void q_barseries_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QBarSeries* self, const char* name, QVariant* value ```
bool q_barseries_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QBarSeries* self, const char* name ```
QVariant* q_barseries_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QBarSeries* self ```
const char** q_barseries_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QBarSeries* self ```
QBindingStorage* q_barseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QBarSeries* self ```
QBindingStorage* q_barseries_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBarSeries* self ```
void q_barseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QBarSeries* self, void (*slot)(QObject*) ```
void q_barseries_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QBarSeries* self ```
QObject* q_barseries_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QBarSeries* self, const char* classname ```
bool q_barseries_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QBarSeries* self ```
void q_barseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBarSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_barseries_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_barseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBarSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_barseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBarSeries* self, QObject* param1 ```
void q_barseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QBarSeries* self, void (*slot)(QObject*, QObject*) ```
void q_barseries_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSeries* self, QEvent* event ```
bool q_barseries_event(void* self, void* event) {
    return QBarSeries_Event((QBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSeries* self, QEvent* event ```
bool q_barseries_qbase_event(void* self, void* event) {
    return QBarSeries_QBaseEvent((QBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSeries* self, bool (*slot)(QBarSeries*, QEvent*) ```
void q_barseries_on_event(void* self, bool (*slot)(void*, void*)) {
    QBarSeries_OnEvent((QBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSeries* self, QObject* watched, QEvent* event ```
bool q_barseries_event_filter(void* self, void* watched, void* event) {
    return QBarSeries_EventFilter((QBarSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSeries* self, QObject* watched, QEvent* event ```
bool q_barseries_qbase_event_filter(void* self, void* watched, void* event) {
    return QBarSeries_QBaseEventFilter((QBarSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSeries* self, bool (*slot)(QBarSeries*, QObject*, QEvent*) ```
void q_barseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QBarSeries_OnEventFilter((QBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSeries* self, QTimerEvent* event ```
void q_barseries_timer_event(void* self, void* event) {
    QBarSeries_TimerEvent((QBarSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSeries* self, QTimerEvent* event ```
void q_barseries_qbase_timer_event(void* self, void* event) {
    QBarSeries_QBaseTimerEvent((QBarSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSeries* self, void (*slot)(QBarSeries*, QTimerEvent*) ```
void q_barseries_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QBarSeries_OnTimerEvent((QBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSeries* self, QChildEvent* event ```
void q_barseries_child_event(void* self, void* event) {
    QBarSeries_ChildEvent((QBarSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSeries* self, QChildEvent* event ```
void q_barseries_qbase_child_event(void* self, void* event) {
    QBarSeries_QBaseChildEvent((QBarSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSeries* self, void (*slot)(QBarSeries*, QChildEvent*) ```
void q_barseries_on_child_event(void* self, void (*slot)(void*, void*)) {
    QBarSeries_OnChildEvent((QBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSeries* self, QEvent* event ```
void q_barseries_custom_event(void* self, void* event) {
    QBarSeries_CustomEvent((QBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSeries* self, QEvent* event ```
void q_barseries_qbase_custom_event(void* self, void* event) {
    QBarSeries_QBaseCustomEvent((QBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSeries* self, void (*slot)(QBarSeries*, QEvent*) ```
void q_barseries_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QBarSeries_OnCustomEvent((QBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSeries* self, QMetaMethod* signal ```
void q_barseries_connect_notify(void* self, void* signal) {
    QBarSeries_ConnectNotify((QBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSeries* self, QMetaMethod* signal ```
void q_barseries_qbase_connect_notify(void* self, void* signal) {
    QBarSeries_QBaseConnectNotify((QBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSeries* self, void (*slot)(QBarSeries*, QMetaMethod*) ```
void q_barseries_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QBarSeries_OnConnectNotify((QBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSeries* self, QMetaMethod* signal ```
void q_barseries_disconnect_notify(void* self, void* signal) {
    QBarSeries_DisconnectNotify((QBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSeries* self, QMetaMethod* signal ```
void q_barseries_qbase_disconnect_notify(void* self, void* signal) {
    QBarSeries_QBaseDisconnectNotify((QBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSeries* self, void (*slot)(QBarSeries*, QMetaMethod*) ```
void q_barseries_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QBarSeries_OnDisconnectNotify((QBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSeries* self ```
QObject* q_barseries_sender(void* self) {
    return QBarSeries_Sender((QBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSeries* self ```
QObject* q_barseries_qbase_sender(void* self) {
    return QBarSeries_QBaseSender((QBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSeries* self, QObject* (*slot)() ```
void q_barseries_on_sender(void* self, QObject* (*slot)()) {
    QBarSeries_OnSender((QBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSeries* self ```
int32_t q_barseries_sender_signal_index(void* self) {
    return QBarSeries_SenderSignalIndex((QBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSeries* self ```
int32_t q_barseries_qbase_sender_signal_index(void* self) {
    return QBarSeries_QBaseSenderSignalIndex((QBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSeries* self, int32_t (*slot)() ```
void q_barseries_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QBarSeries_OnSenderSignalIndex((QBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSeries* self, const char* signal ```
int32_t q_barseries_receivers(void* self, const char* signal) {
    return QBarSeries_Receivers((QBarSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSeries* self, const char* signal ```
int32_t q_barseries_qbase_receivers(void* self, const char* signal) {
    return QBarSeries_QBaseReceivers((QBarSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSeries* self, int32_t (*slot)(QBarSeries*, const char*) ```
void q_barseries_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QBarSeries_OnReceivers((QBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSeries* self, QMetaMethod* signal ```
bool q_barseries_is_signal_connected(void* self, void* signal) {
    return QBarSeries_IsSignalConnected((QBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSeries* self, QMetaMethod* signal ```
bool q_barseries_qbase_is_signal_connected(void* self, void* signal) {
    return QBarSeries_QBaseIsSignalConnected((QBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSeries* self, bool (*slot)(QBarSeries*, QMetaMethod*) ```
void q_barseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QBarSeries_OnIsSignalConnected((QBarSeries*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QBarSeries* self ```
void q_barseries_delete(void* self) {
    QBarSeries_Delete((QBarSeries*)(self));
}
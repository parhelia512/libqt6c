#include "libqbitmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqvariant.hpp"
#include "libqregion.hpp"
#include "libqregion.h"

QRegion* q_region_new() {
    return QRegion_new();
}

QRegion* q_region_new2(int x, int y, int w, int h) {
    return QRegion_new2(x, y, w, h);
}

QRegion* q_region_new3(void* r) {
    return QRegion_new3((QRect*)r);
}

QRegion* q_region_new4(void* region) {
    return QRegion_new4((QRegion*)region);
}

QRegion* q_region_new5(void* bitmap) {
    return QRegion_new5((QBitmap*)bitmap);
}

QRegion* q_region_new6(int x, int y, int w, int h, int64_t t) {
    return QRegion_new6(x, y, w, h, t);
}

QRegion* q_region_new7(void* r, int64_t t) {
    return QRegion_new7((QRect*)r, t);
}

void q_region_operator_assign(void* self, void* param1) {
    QRegion_OperatorAssign((QRegion*)self, (QRegion*)param1);
}

void q_region_swap(void* self, void* other) {
    QRegion_Swap((QRegion*)self, (QRegion*)other);
}

bool q_region_is_empty(void* self) {
    return QRegion_IsEmpty((QRegion*)self);
}

bool q_region_is_null(void* self) {
    return QRegion_IsNull((QRegion*)self);
}

const QRect* q_region_begin(void* self) {
    return QRegion_Begin((QRegion*)self);
}

const QRect* q_region_cbegin(void* self) {
    return QRegion_Cbegin((QRegion*)self);
}

const QRect* q_region_end(void* self) {
    return QRegion_End((QRegion*)self);
}

const QRect* q_region_cend(void* self) {
    return QRegion_Cend((QRegion*)self);
}

bool q_region_contains(void* self, void* p) {
    return QRegion_Contains((QRegion*)self, (QPoint*)p);
}

bool q_region_contains_with_q_rect(void* self, void* r) {
    return QRegion_ContainsWithQRect((QRegion*)self, (QRect*)r);
}

void q_region_translate(void* self, int dx, int dy) {
    QRegion_Translate((QRegion*)self, dx, dy);
}

void q_region_translate_with_q_point(void* self, void* p) {
    QRegion_TranslateWithQPoint((QRegion*)self, (QPoint*)p);
}

QRegion* q_region_translated(void* self, int dx, int dy) {
    return QRegion_Translated((QRegion*)self, dx, dy);
}

QRegion* q_region_translated_with_q_point(void* self, void* p) {
    return QRegion_TranslatedWithQPoint((QRegion*)self, (QPoint*)p);
}

QRegion* q_region_united(void* self, void* r) {
    return QRegion_United((QRegion*)self, (QRegion*)r);
}

QRegion* q_region_united_with_q_rect(void* self, void* r) {
    return QRegion_UnitedWithQRect((QRegion*)self, (QRect*)r);
}

QRegion* q_region_intersected(void* self, void* r) {
    return QRegion_Intersected((QRegion*)self, (QRegion*)r);
}

QRegion* q_region_intersected_with_q_rect(void* self, void* r) {
    return QRegion_IntersectedWithQRect((QRegion*)self, (QRect*)r);
}

QRegion* q_region_subtracted(void* self, void* r) {
    return QRegion_Subtracted((QRegion*)self, (QRegion*)r);
}

QRegion* q_region_xored(void* self, void* r) {
    return QRegion_Xored((QRegion*)self, (QRegion*)r);
}

bool q_region_intersects(void* self, void* r) {
    return QRegion_Intersects((QRegion*)self, (QRegion*)r);
}

bool q_region_intersects_with_q_rect(void* self, void* r) {
    return QRegion_IntersectsWithQRect((QRegion*)self, (QRect*)r);
}

QRect* q_region_bounding_rect(void* self) {
    return QRegion_BoundingRect((QRegion*)self);
}

void q_region_set_rects(void* self, void* rect, int num) {
    QRegion_SetRects((QRegion*)self, (QRect*)rect, num);
}

void q_region_set_rects_with_q_span_lesserconst_q_rect_greater(void* self, libqt_list r) {
    QRegion_SetRectsWithQSpanLesserconstQRectGreater((QRegion*)self, r);
}

libqt_list /* of QRect* */ q_region_rects(void* self) {
    libqt_list _arr = QRegion_Rects((QRegion*)self);
    return _arr;
}

int32_t q_region_rect_count(void* self) {
    return QRegion_RectCount((QRegion*)self);
}

QRegion* q_region_operator_bitwise_or(void* self, void* r) {
    return QRegion_OperatorBitwiseOr((QRegion*)self, (QRegion*)r);
}

QRegion* q_region_operator_plus(void* self, void* r) {
    return QRegion_OperatorPlus((QRegion*)self, (QRegion*)r);
}

QRegion* q_region_operator_plus_with_q_rect(void* self, void* r) {
    return QRegion_OperatorPlusWithQRect((QRegion*)self, (QRect*)r);
}

QRegion* q_region_operator_bitwise_and(void* self, void* r) {
    return QRegion_OperatorBitwiseAnd((QRegion*)self, (QRegion*)r);
}

QRegion* q_region_operator_bitwise_and_with_q_rect(void* self, void* r) {
    return QRegion_OperatorBitwiseAndWithQRect((QRegion*)self, (QRect*)r);
}

QRegion* q_region_operator_minus(void* self, void* r) {
    return QRegion_OperatorMinus((QRegion*)self, (QRegion*)r);
}

QRegion* q_region_operator_bitwise_not(void* self, void* r) {
    return QRegion_OperatorBitwiseNot((QRegion*)self, (QRegion*)r);
}

void q_region_operator_bitwise_or_assign(void* self, void* r) {
    QRegion_OperatorBitwiseOrAssign((QRegion*)self, (QRegion*)r);
}

QRegion* q_region_operator_plus_assign(void* self, void* r) {
    return QRegion_OperatorPlusAssign((QRegion*)self, (QRegion*)r);
}

QRegion* q_region_operator_plus_assign_with_q_rect(void* self, void* r) {
    return QRegion_OperatorPlusAssignWithQRect((QRegion*)self, (QRect*)r);
}

void q_region_operator_bitwise_and_assign(void* self, void* r) {
    QRegion_OperatorBitwiseAndAssign((QRegion*)self, (QRegion*)r);
}

void q_region_operator_bitwise_and_assign_with_q_rect(void* self, void* r) {
    QRegion_OperatorBitwiseAndAssignWithQRect((QRegion*)self, (QRect*)r);
}

QRegion* q_region_operator_minus_assign(void* self, void* r) {
    return QRegion_OperatorMinusAssign((QRegion*)self, (QRegion*)r);
}

void q_region_operator_bitwise_not_assign(void* self, void* r) {
    QRegion_OperatorBitwiseNotAssign((QRegion*)self, (QRegion*)r);
}

bool q_region_operator_equal(void* self, void* r) {
    return QRegion_OperatorEqual((QRegion*)self, (QRegion*)r);
}

bool q_region_operator_not_equal(void* self, void* r) {
    return QRegion_OperatorNotEqual((QRegion*)self, (QRegion*)r);
}

QVariant* q_region_to_q_variant(void* self) {
    return QRegion_ToQVariant((QRegion*)self);
}

void q_region_delete(void* self) {
    QRegion_Delete((QRegion*)(self));
}

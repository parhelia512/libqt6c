#pragma once
#ifndef SRCC_LIBVIRTUALQGRAPHICSLAYOUT_H
#define SRCC_LIBVIRTUALQGRAPHICSLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsLayout so that we can call protected methods
class VirtualQGraphicsLayout : public QGraphicsLayout {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsLayout_GetContentsMargins_Callback = void (*)(const QGraphicsLayout*, qreal*, qreal*, qreal*, qreal*);
    using QGraphicsLayout_Invalidate_Callback = void (*)();
    using QGraphicsLayout_UpdateGeometry_Callback = void (*)();
    using QGraphicsLayout_WidgetEvent_Callback = void (*)(QGraphicsLayout*, QEvent*);
    using QGraphicsLayout_Count_Callback = int (*)();
    using QGraphicsLayout_ItemAt_Callback = QGraphicsLayoutItem* (*)(const QGraphicsLayout*, int);
    using QGraphicsLayout_RemoveAt_Callback = void (*)(QGraphicsLayout*, int);
    using QGraphicsLayout_SetGeometry_Callback = void (*)(QGraphicsLayout*, const QRectF&);
    using QGraphicsLayout_IsEmpty_Callback = bool (*)();
    using QGraphicsLayout_SizeHint_Callback = QSizeF (*)(const QGraphicsLayout*, Qt::SizeHint, const QSizeF&);
    using QGraphicsLayout_AddChildLayoutItem_Callback = void (*)(QGraphicsLayout*, QGraphicsLayoutItem*);
    using QGraphicsLayout_SetGraphicsItem_Callback = void (*)(QGraphicsLayout*, QGraphicsItem*);
    using QGraphicsLayout_SetOwnedByLayout_Callback = void (*)(QGraphicsLayout*, bool);

  protected:
    // Instance callback storage
    QGraphicsLayout_GetContentsMargins_Callback qgraphicslayout_getcontentsmargins_callback = nullptr;
    QGraphicsLayout_Invalidate_Callback qgraphicslayout_invalidate_callback = nullptr;
    QGraphicsLayout_UpdateGeometry_Callback qgraphicslayout_updategeometry_callback = nullptr;
    QGraphicsLayout_WidgetEvent_Callback qgraphicslayout_widgetevent_callback = nullptr;
    QGraphicsLayout_Count_Callback qgraphicslayout_count_callback = nullptr;
    QGraphicsLayout_ItemAt_Callback qgraphicslayout_itemat_callback = nullptr;
    QGraphicsLayout_RemoveAt_Callback qgraphicslayout_removeat_callback = nullptr;
    QGraphicsLayout_SetGeometry_Callback qgraphicslayout_setgeometry_callback = nullptr;
    QGraphicsLayout_IsEmpty_Callback qgraphicslayout_isempty_callback = nullptr;
    QGraphicsLayout_SizeHint_Callback qgraphicslayout_sizehint_callback = nullptr;
    QGraphicsLayout_AddChildLayoutItem_Callback qgraphicslayout_addchildlayoutitem_callback = nullptr;
    QGraphicsLayout_SetGraphicsItem_Callback qgraphicslayout_setgraphicsitem_callback = nullptr;
    QGraphicsLayout_SetOwnedByLayout_Callback qgraphicslayout_setownedbylayout_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicslayout_getcontentsmargins_isbase = false;
    mutable bool qgraphicslayout_invalidate_isbase = false;
    mutable bool qgraphicslayout_updategeometry_isbase = false;
    mutable bool qgraphicslayout_widgetevent_isbase = false;
    mutable bool qgraphicslayout_count_isbase = false;
    mutable bool qgraphicslayout_itemat_isbase = false;
    mutable bool qgraphicslayout_removeat_isbase = false;
    mutable bool qgraphicslayout_setgeometry_isbase = false;
    mutable bool qgraphicslayout_isempty_isbase = false;
    mutable bool qgraphicslayout_sizehint_isbase = false;
    mutable bool qgraphicslayout_addchildlayoutitem_isbase = false;
    mutable bool qgraphicslayout_setgraphicsitem_isbase = false;
    mutable bool qgraphicslayout_setownedbylayout_isbase = false;

  public:
    VirtualQGraphicsLayout() : QGraphicsLayout(){};
    VirtualQGraphicsLayout(QGraphicsLayoutItem* parent) : QGraphicsLayout(parent){};

    ~VirtualQGraphicsLayout() {
        qgraphicslayout_getcontentsmargins_callback = nullptr;
        qgraphicslayout_invalidate_callback = nullptr;
        qgraphicslayout_updategeometry_callback = nullptr;
        qgraphicslayout_widgetevent_callback = nullptr;
        qgraphicslayout_count_callback = nullptr;
        qgraphicslayout_itemat_callback = nullptr;
        qgraphicslayout_removeat_callback = nullptr;
        qgraphicslayout_setgeometry_callback = nullptr;
        qgraphicslayout_isempty_callback = nullptr;
        qgraphicslayout_sizehint_callback = nullptr;
        qgraphicslayout_addchildlayoutitem_callback = nullptr;
        qgraphicslayout_setgraphicsitem_callback = nullptr;
        qgraphicslayout_setownedbylayout_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsLayout_GetContentsMargins_Callback(QGraphicsLayout_GetContentsMargins_Callback cb) { qgraphicslayout_getcontentsmargins_callback = cb; }
    void setQGraphicsLayout_Invalidate_Callback(QGraphicsLayout_Invalidate_Callback cb) { qgraphicslayout_invalidate_callback = cb; }
    void setQGraphicsLayout_UpdateGeometry_Callback(QGraphicsLayout_UpdateGeometry_Callback cb) { qgraphicslayout_updategeometry_callback = cb; }
    void setQGraphicsLayout_WidgetEvent_Callback(QGraphicsLayout_WidgetEvent_Callback cb) { qgraphicslayout_widgetevent_callback = cb; }
    void setQGraphicsLayout_Count_Callback(QGraphicsLayout_Count_Callback cb) { qgraphicslayout_count_callback = cb; }
    void setQGraphicsLayout_ItemAt_Callback(QGraphicsLayout_ItemAt_Callback cb) { qgraphicslayout_itemat_callback = cb; }
    void setQGraphicsLayout_RemoveAt_Callback(QGraphicsLayout_RemoveAt_Callback cb) { qgraphicslayout_removeat_callback = cb; }
    void setQGraphicsLayout_SetGeometry_Callback(QGraphicsLayout_SetGeometry_Callback cb) { qgraphicslayout_setgeometry_callback = cb; }
    void setQGraphicsLayout_IsEmpty_Callback(QGraphicsLayout_IsEmpty_Callback cb) { qgraphicslayout_isempty_callback = cb; }
    void setQGraphicsLayout_SizeHint_Callback(QGraphicsLayout_SizeHint_Callback cb) { qgraphicslayout_sizehint_callback = cb; }
    void setQGraphicsLayout_AddChildLayoutItem_Callback(QGraphicsLayout_AddChildLayoutItem_Callback cb) { qgraphicslayout_addchildlayoutitem_callback = cb; }
    void setQGraphicsLayout_SetGraphicsItem_Callback(QGraphicsLayout_SetGraphicsItem_Callback cb) { qgraphicslayout_setgraphicsitem_callback = cb; }
    void setQGraphicsLayout_SetOwnedByLayout_Callback(QGraphicsLayout_SetOwnedByLayout_Callback cb) { qgraphicslayout_setownedbylayout_callback = cb; }

    // Base flag setters
    void setQGraphicsLayout_GetContentsMargins_IsBase(bool value) const { qgraphicslayout_getcontentsmargins_isbase = value; }
    void setQGraphicsLayout_Invalidate_IsBase(bool value) const { qgraphicslayout_invalidate_isbase = value; }
    void setQGraphicsLayout_UpdateGeometry_IsBase(bool value) const { qgraphicslayout_updategeometry_isbase = value; }
    void setQGraphicsLayout_WidgetEvent_IsBase(bool value) const { qgraphicslayout_widgetevent_isbase = value; }
    void setQGraphicsLayout_Count_IsBase(bool value) const { qgraphicslayout_count_isbase = value; }
    void setQGraphicsLayout_ItemAt_IsBase(bool value) const { qgraphicslayout_itemat_isbase = value; }
    void setQGraphicsLayout_RemoveAt_IsBase(bool value) const { qgraphicslayout_removeat_isbase = value; }
    void setQGraphicsLayout_SetGeometry_IsBase(bool value) const { qgraphicslayout_setgeometry_isbase = value; }
    void setQGraphicsLayout_IsEmpty_IsBase(bool value) const { qgraphicslayout_isempty_isbase = value; }
    void setQGraphicsLayout_SizeHint_IsBase(bool value) const { qgraphicslayout_sizehint_isbase = value; }
    void setQGraphicsLayout_AddChildLayoutItem_IsBase(bool value) const { qgraphicslayout_addchildlayoutitem_isbase = value; }
    void setQGraphicsLayout_SetGraphicsItem_IsBase(bool value) const { qgraphicslayout_setgraphicsitem_isbase = value; }
    void setQGraphicsLayout_SetOwnedByLayout_IsBase(bool value) const { qgraphicslayout_setownedbylayout_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
        if (qgraphicslayout_getcontentsmargins_isbase) {
            qgraphicslayout_getcontentsmargins_isbase = false;
            QGraphicsLayout::getContentsMargins(left, top, right, bottom);
        } else if (qgraphicslayout_getcontentsmargins_callback != nullptr) {
            qgraphicslayout_getcontentsmargins_callback(this, left, top, right, bottom);
        } else {
            QGraphicsLayout::getContentsMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qgraphicslayout_invalidate_isbase) {
            qgraphicslayout_invalidate_isbase = false;
            QGraphicsLayout::invalidate();
        } else if (qgraphicslayout_invalidate_callback != nullptr) {
            qgraphicslayout_invalidate_callback();
        } else {
            QGraphicsLayout::invalidate();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometry() override {
        if (qgraphicslayout_updategeometry_isbase) {
            qgraphicslayout_updategeometry_isbase = false;
            QGraphicsLayout::updateGeometry();
        } else if (qgraphicslayout_updategeometry_callback != nullptr) {
            qgraphicslayout_updategeometry_callback();
        } else {
            QGraphicsLayout::updateGeometry();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void widgetEvent(QEvent* e) override {
        if (qgraphicslayout_widgetevent_isbase) {
            qgraphicslayout_widgetevent_isbase = false;
            QGraphicsLayout::widgetEvent(e);
        } else if (qgraphicslayout_widgetevent_callback != nullptr) {
            qgraphicslayout_widgetevent_callback(this, e);
        } else {
            QGraphicsLayout::widgetEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        return qgraphicslayout_count_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual QGraphicsLayoutItem* itemAt(int i) const override {
        return qgraphicslayout_itemat_callback(this, i);
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeAt(int index) override {
        qgraphicslayout_removeat_callback(this, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRectF& rect) override {
        if (qgraphicslayout_setgeometry_isbase) {
            qgraphicslayout_setgeometry_isbase = false;
            QGraphicsLayout::setGeometry(rect);
        } else if (qgraphicslayout_setgeometry_callback != nullptr) {
            qgraphicslayout_setgeometry_callback(this, rect);
        } else {
            QGraphicsLayout::setGeometry(rect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qgraphicslayout_isempty_isbase) {
            qgraphicslayout_isempty_isbase = false;
            return QGraphicsLayout::isEmpty();
        } else if (qgraphicslayout_isempty_callback != nullptr) {
            return qgraphicslayout_isempty_callback();
        } else {
            return QGraphicsLayout::isEmpty();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
        return qgraphicslayout_sizehint_callback(this, which, constraint);
    }

    // Virtual method for C ABI access and custom callback
    void addChildLayoutItem(QGraphicsLayoutItem* layoutItem) {
        if (qgraphicslayout_addchildlayoutitem_isbase) {
            qgraphicslayout_addchildlayoutitem_isbase = false;
            QGraphicsLayout::addChildLayoutItem(layoutItem);
        } else if (qgraphicslayout_addchildlayoutitem_callback != nullptr) {
            qgraphicslayout_addchildlayoutitem_callback(this, layoutItem);
        } else {
            QGraphicsLayout::addChildLayoutItem(layoutItem);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setGraphicsItem(QGraphicsItem* item) {
        if (qgraphicslayout_setgraphicsitem_isbase) {
            qgraphicslayout_setgraphicsitem_isbase = false;
            QGraphicsLayout::setGraphicsItem(item);
        } else if (qgraphicslayout_setgraphicsitem_callback != nullptr) {
            qgraphicslayout_setgraphicsitem_callback(this, item);
        } else {
            QGraphicsLayout::setGraphicsItem(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOwnedByLayout(bool ownedByLayout) {
        if (qgraphicslayout_setownedbylayout_isbase) {
            qgraphicslayout_setownedbylayout_isbase = false;
            QGraphicsLayout::setOwnedByLayout(ownedByLayout);
        } else if (qgraphicslayout_setownedbylayout_callback != nullptr) {
            qgraphicslayout_setownedbylayout_callback(this, ownedByLayout);
        } else {
            QGraphicsLayout::setOwnedByLayout(ownedByLayout);
        }
    }
};

#endif

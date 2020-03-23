/****************************************************************************
** Meta object code from reading C++ file 'frontpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../loginscreen/frontpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frontpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FrontPage_t {
    QByteArrayData data[13];
    char stringdata0[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FrontPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FrontPage_t qt_meta_stringdata_FrontPage = {
    {
QT_MOC_LITERAL(0, 0, 9), // "FrontPage"
QT_MOC_LITERAL(1, 10, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 57, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(5, 81, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(6, 105, 23), // "on_homeButton_1_clicked"
QT_MOC_LITERAL(7, 129, 23), // "on_homeButton_2_clicked"
QT_MOC_LITERAL(8, 153, 23), // "on_homeButton_3_clicked"
QT_MOC_LITERAL(9, 177, 12), // "submitReview"
QT_MOC_LITERAL(10, 190, 17), // "stopItGetSomeHelp"
QT_MOC_LITERAL(11, 208, 12), // "sendPamphlet"
QT_MOC_LITERAL(12, 221, 12) // "setupReviews"

    },
    "FrontPage\0on_pushButton_4_clicked\0\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_3_clicked\0on_homeButton_1_clicked\0"
    "on_homeButton_2_clicked\0on_homeButton_3_clicked\0"
    "submitReview\0stopItGetSomeHelp\0"
    "sendPamphlet\0setupReviews"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FrontPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FrontPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FrontPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_4_clicked(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 4: _t->on_homeButton_1_clicked(); break;
        case 5: _t->on_homeButton_2_clicked(); break;
        case 6: _t->on_homeButton_3_clicked(); break;
        case 7: _t->submitReview(); break;
        case 8: _t->stopItGetSomeHelp(); break;
        case 9: _t->sendPamphlet(); break;
        case 10: _t->setupReviews(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FrontPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_FrontPage.data,
    qt_meta_data_FrontPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FrontPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FrontPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FrontPage.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int FrontPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

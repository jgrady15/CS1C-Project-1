/****************************************************************************
** Meta object code from reading C++ file 'adminwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../loginscreen/adminwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_adminWindow_t {
    QByteArrayData data[11];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_adminWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_adminWindow_t qt_meta_stringdata_adminWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "adminWindow"
QT_MOC_LITERAL(1, 12, 9), // "searchFor"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 15), // "alphaNumOptions"
QT_MOC_LITERAL(4, 39, 8), // "updateDB"
QT_MOC_LITERAL(5, 48, 10), // "deleteInDB"
QT_MOC_LITERAL(6, 59, 13), // "selectCompany"
QT_MOC_LITERAL(7, 73, 11), // "QModelIndex"
QT_MOC_LITERAL(8, 85, 5), // "index"
QT_MOC_LITERAL(9, 91, 10), // "addCompany"
QT_MOC_LITERAL(10, 102, 13) // "setupCustomer"

    },
    "adminWindow\0searchFor\0\0alphaNumOptions\0"
    "updateDB\0deleteInDB\0selectCompany\0"
    "QModelIndex\0index\0addCompany\0setupCustomer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_adminWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    1,   50,    2, 0x08 /* Private */,
       4,    0,   53,    2, 0x08 /* Private */,
       5,    0,   54,    2, 0x08 /* Private */,
       6,    1,   55,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void adminWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<adminWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchFor(); break;
        case 1: _t->alphaNumOptions((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateDB(); break;
        case 3: _t->deleteInDB(); break;
        case 4: _t->selectCompany((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->addCompany(); break;
        case 6: _t->setupCustomer(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject adminWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_adminWindow.data,
    qt_meta_data_adminWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *adminWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *adminWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_adminWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int adminWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

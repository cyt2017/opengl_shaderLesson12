/****************************************************************************
** Meta object code from reading C++ file 'mycamera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tool/mycamera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mycamera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MYCAMERA_t {
    QByteArrayData data[13];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MYCAMERA_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MYCAMERA_t qt_meta_stringdata_MYCAMERA = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MYCAMERA"
QT_MOC_LITERAL(1, 9, 14), // "reciveKeyEvent"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "KEYMODE"
QT_MOC_LITERAL(4, 33, 4), // "type"
QT_MOC_LITERAL(5, 38, 16), // "reciveMouseEvent"
QT_MOC_LITERAL(6, 55, 9), // "MOUSEMODE"
QT_MOC_LITERAL(7, 65, 10), // "CELL::int2"
QT_MOC_LITERAL(8, 76, 2), // "pS"
QT_MOC_LITERAL(9, 79, 2), // "pE"
QT_MOC_LITERAL(10, 82, 16), // "reciveWheelEvent"
QT_MOC_LITERAL(11, 99, 1), // "p"
QT_MOC_LITERAL(12, 101, 5) // "point"

    },
    "MYCAMERA\0reciveKeyEvent\0\0KEYMODE\0type\0"
    "reciveMouseEvent\0MOUSEMODE\0CELL::int2\0"
    "pS\0pE\0reciveWheelEvent\0p\0point"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MYCAMERA[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       5,    3,   32,    2, 0x0a /* Public */,
      10,    3,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 7, 0x80000000 | 7,    4,    8,    9,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int, 0x80000000 | 7,    4,   11,   12,

       0        // eod
};

void MYCAMERA::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MYCAMERA *_t = static_cast<MYCAMERA *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reciveKeyEvent((*reinterpret_cast< KEYMODE(*)>(_a[1]))); break;
        case 1: _t->reciveMouseEvent((*reinterpret_cast< MOUSEMODE(*)>(_a[1])),(*reinterpret_cast< CELL::int2(*)>(_a[2])),(*reinterpret_cast< CELL::int2(*)>(_a[3]))); break;
        case 2: _t->reciveWheelEvent((*reinterpret_cast< MOUSEMODE(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< CELL::int2(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject MYCAMERA::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MYCAMERA.data,
      qt_meta_data_MYCAMERA,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MYCAMERA::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MYCAMERA::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MYCAMERA.stringdata0))
        return static_cast<void*>(const_cast< MYCAMERA*>(this));
    return QObject::qt_metacast(_clname);
}

int MYCAMERA::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'robotcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RobotController/robotcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'robotcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RobotController_t {
    QByteArrayData data[9];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobotController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobotController_t qt_meta_stringdata_RobotController = {
    {
QT_MOC_LITERAL(0, 0, 15), // "RobotController"
QT_MOC_LITERAL(1, 16, 37), // "on_motorControlSlider_1_slide..."
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 36), // "on_motorControlSlider_1_value..."
QT_MOC_LITERAL(4, 92, 5), // "value"
QT_MOC_LITERAL(5, 98, 36), // "on_motorControlSlider_2_value..."
QT_MOC_LITERAL(6, 135, 36), // "on_motorControlSlider_3_value..."
QT_MOC_LITERAL(7, 172, 36), // "on_motorControlSlider_4_value..."
QT_MOC_LITERAL(8, 209, 36) // "on_motorControlSlider_5_value..."

    },
    "RobotController\0on_motorControlSlider_1_sliderPressed\0"
    "\0on_motorControlSlider_1_valueChanged\0"
    "value\0on_motorControlSlider_2_valueChanged\0"
    "on_motorControlSlider_3_valueChanged\0"
    "on_motorControlSlider_4_valueChanged\0"
    "on_motorControlSlider_5_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobotController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    1,   45,    2, 0x08 /* Private */,
       5,    1,   48,    2, 0x08 /* Private */,
       6,    1,   51,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       8,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void RobotController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RobotController *_t = static_cast<RobotController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_motorControlSlider_1_sliderPressed(); break;
        case 1: _t->on_motorControlSlider_1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_motorControlSlider_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_motorControlSlider_3_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_motorControlSlider_4_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_motorControlSlider_5_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject RobotController::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_RobotController.data,
      qt_meta_data_RobotController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RobotController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobotController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RobotController.stringdata0))
        return static_cast<void*>(const_cast< RobotController*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int RobotController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

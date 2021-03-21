/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../proba1/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[345];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 19), // "on_fps_valueChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "arg1"
QT_MOC_LITERAL(4, 37, 20), // "on_num2_valueChanged"
QT_MOC_LITERAL(5, 58, 24), // "on_timesecc_valueChanged"
QT_MOC_LITERAL(6, 83, 18), // "on_v0_valueChanged"
QT_MOC_LITERAL(7, 102, 21), // "on_exitButton_clicked"
QT_MOC_LITERAL(8, 124, 19), // "on_checkBox_clicked"
QT_MOC_LITERAL(9, 144, 7), // "checked"
QT_MOC_LITERAL(10, 152, 24), // "on_checkBox_stateChanged"
QT_MOC_LITERAL(11, 177, 31), // "on_colorBox_currentIndexChanged"
QT_MOC_LITERAL(12, 209, 5), // "index"
QT_MOC_LITERAL(13, 215, 28), // "on_hideOptionsButton_clicked"
QT_MOC_LITERAL(14, 244, 25), // "on_sizeSalut_valueChanged"
QT_MOC_LITERAL(15, 270, 24), // "on_timeTail_valueChanged"
QT_MOC_LITERAL(16, 295, 24), // "on_haveTail_stateChanged"
QT_MOC_LITERAL(17, 320, 24) // "on_sizeTail_valueChanged"

    },
    "MainWindow\0on_fps_valueChanged\0\0arg1\0"
    "on_num2_valueChanged\0on_timesecc_valueChanged\0"
    "on_v0_valueChanged\0on_exitButton_clicked\0"
    "on_checkBox_clicked\0checked\0"
    "on_checkBox_stateChanged\0"
    "on_colorBox_currentIndexChanged\0index\0"
    "on_hideOptionsButton_clicked\0"
    "on_sizeSalut_valueChanged\0"
    "on_timeTail_valueChanged\0"
    "on_haveTail_stateChanged\0"
    "on_sizeTail_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x08 /* Private */,
       4,    1,   82,    2, 0x08 /* Private */,
       5,    1,   85,    2, 0x08 /* Private */,
       6,    1,   88,    2, 0x08 /* Private */,
       7,    0,   91,    2, 0x08 /* Private */,
       8,    1,   92,    2, 0x08 /* Private */,
      10,    1,   95,    2, 0x08 /* Private */,
      11,    1,   98,    2, 0x08 /* Private */,
      13,    0,  101,    2, 0x08 /* Private */,
      14,    1,  102,    2, 0x08 /* Private */,
      15,    1,  105,    2, 0x08 /* Private */,
      16,    1,  108,    2, 0x08 /* Private */,
      17,    1,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_fps_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_num2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_timesecc_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_v0_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->on_exitButton_clicked(); break;
        case 5: _t->on_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_checkBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_colorBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_hideOptionsButton_clicked(); break;
        case 9: _t->on_sizeSalut_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_timeTail_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_haveTail_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_sizeTail_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

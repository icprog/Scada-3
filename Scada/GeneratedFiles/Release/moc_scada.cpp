/****************************************************************************
** Meta object code from reading C++ file 'scada.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scada.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scada.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Scada_t {
    QByteArrayData data[8];
    char stringdata[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scada_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scada_t qt_meta_stringdata_Scada = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 18),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 21),
QT_MOC_LITERAL(4, 48, 19),
QT_MOC_LITERAL(5, 68, 23),
QT_MOC_LITERAL(6, 92, 16),
QT_MOC_LITERAL(7, 109, 17)
    },
    "Scada\0on_sysConfigAction\0\0"
    "on_widgetConfigAction\0on_sysManagerAction\0"
    "on_deleteDataBaseAction\0on_previewAction\0"
    "on_savePageConfig"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scada[] = {

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
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Scada::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scada *_t = static_cast<Scada *>(_o);
        switch (_id) {
        case 0: _t->on_sysConfigAction(); break;
        case 1: _t->on_widgetConfigAction(); break;
        case 2: _t->on_sysManagerAction(); break;
        case 3: _t->on_deleteDataBaseAction(); break;
        case 4: _t->on_previewAction(); break;
        case 5: _t->on_savePageConfig(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Scada::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Scada.data,
      qt_meta_data_Scada,  qt_static_metacall, 0, 0}
};


const QMetaObject *Scada::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scada::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Scada.stringdata))
        return static_cast<void*>(const_cast< Scada*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Scada::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

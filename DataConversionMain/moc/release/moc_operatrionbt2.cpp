/****************************************************************************
** Meta object code from reading C++ file 'operatrionbt2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Module/operatrionbt2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'operatrionbt2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Operatrionbt2_t {
    QByteArrayData data[7];
    char stringdata[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Operatrionbt2_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Operatrionbt2_t qt_meta_stringdata_Operatrionbt2 = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 13),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 2),
QT_MOC_LITERAL(4, 32, 12),
QT_MOC_LITERAL(5, 45, 21),
QT_MOC_LITERAL(6, 67, 23)
    },
    "Operatrionbt2\0signalDetails\0\0id\0"
    "signalDelete\0on_pushButton_clicked\0"
    "on_pushButton_3_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Operatrionbt2[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06,
       4,    1,   37,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    0,   40,    2, 0x08,
       6,    0,   41,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Operatrionbt2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Operatrionbt2 *_t = static_cast<Operatrionbt2 *>(_o);
        switch (_id) {
        case 0: _t->signalDetails((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->signalDelete((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Operatrionbt2::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Operatrionbt2::signalDetails)) {
                *result = 0;
            }
        }
        {
            typedef void (Operatrionbt2::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Operatrionbt2::signalDelete)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Operatrionbt2::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Operatrionbt2.data,
      qt_meta_data_Operatrionbt2,  qt_static_metacall, 0, 0}
};


const QMetaObject *Operatrionbt2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Operatrionbt2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Operatrionbt2.stringdata))
        return static_cast<void*>(const_cast< Operatrionbt2*>(this));
    return QWidget::qt_metacast(_clname);
}

int Operatrionbt2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Operatrionbt2::signalDetails(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Operatrionbt2::signalDelete(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

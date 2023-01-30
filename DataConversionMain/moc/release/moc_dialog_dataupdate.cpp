/****************************************************************************
** Meta object code from reading C++ file 'dialog_dataupdate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dialog_dataupdate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_dataupdate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Dialog_dataUpdate_t {
    QByteArrayData data[11];
    char stringdata[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Dialog_dataUpdate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Dialog_dataUpdate_t qt_meta_stringdata_Dialog_dataUpdate = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 15),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 21),
QT_MOC_LITERAL(4, 57, 23),
QT_MOC_LITERAL(5, 81, 25),
QT_MOC_LITERAL(6, 107, 4),
QT_MOC_LITERAL(7, 112, 23),
QT_MOC_LITERAL(8, 136, 23),
QT_MOC_LITERAL(9, 160, 23),
QT_MOC_LITERAL(10, 184, 23)
    },
    "Dialog_dataUpdate\0dataUpdata_hide\0\0"
    "on_pushButton_clicked\0on_pushButton_3_clicked\0"
    "on_lineEdit_2_textChanged\0arg1\0"
    "on_pushButton_4_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_5_clicked\0on_pushButton_6_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog_dataUpdate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08,
       4,    0,   56,    2, 0x08,
       5,    1,   57,    2, 0x08,
       7,    0,   60,    2, 0x08,
       8,    0,   61,    2, 0x08,
       9,    0,   62,    2, 0x08,
      10,    0,   63,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dialog_dataUpdate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dialog_dataUpdate *_t = static_cast<Dialog_dataUpdate *>(_o);
        switch (_id) {
        case 0: _t->dataUpdata_hide(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_3_clicked(); break;
        case 3: _t->on_lineEdit_2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_4_clicked(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: _t->on_pushButton_5_clicked(); break;
        case 7: _t->on_pushButton_6_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Dialog_dataUpdate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog_dataUpdate::dataUpdata_hide)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Dialog_dataUpdate::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog_dataUpdate.data,
      qt_meta_data_Dialog_dataUpdate,  qt_static_metacall, 0, 0}
};


const QMetaObject *Dialog_dataUpdate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog_dataUpdate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog_dataUpdate.stringdata))
        return static_cast<void*>(const_cast< Dialog_dataUpdate*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog_dataUpdate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Dialog_dataUpdate::dataUpdata_hide()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE

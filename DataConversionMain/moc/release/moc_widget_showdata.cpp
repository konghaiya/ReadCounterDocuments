/****************************************************************************
** Meta object code from reading C++ file 'widget_showdata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widget_showdata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget_showdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Widget_ShowData_t {
    QByteArrayData data[20];
    char stringdata[343];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Widget_ShowData_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Widget_ShowData_t qt_meta_stringdata_Widget_ShowData = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 17),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 11),
QT_MOC_LITERAL(4, 47, 2),
QT_MOC_LITERAL(5, 50, 3),
QT_MOC_LITERAL(6, 54, 10),
QT_MOC_LITERAL(7, 65, 10),
QT_MOC_LITERAL(8, 76, 20),
QT_MOC_LITERAL(9, 97, 21),
QT_MOC_LITERAL(10, 119, 23),
QT_MOC_LITERAL(11, 143, 25),
QT_MOC_LITERAL(12, 169, 16),
QT_MOC_LITERAL(13, 186, 4),
QT_MOC_LITERAL(14, 191, 23),
QT_MOC_LITERAL(15, 215, 24),
QT_MOC_LITERAL(16, 240, 24),
QT_MOC_LITERAL(17, 265, 28),
QT_MOC_LITERAL(18, 294, 23),
QT_MOC_LITERAL(19, 318, 23)
    },
    "Widget_ShowData\0slot_leading_hide\0\0"
    "slotDetails\0id\0row\0slotUpdata\0slotDelete\0"
    "slot_dataUpdata_hide\0on_pushButton_clicked\0"
    "on_pushButton_4_clicked\0"
    "on_listWidget_itemClicked\0QListWidgetItem*\0"
    "item\0on_pushButton_2_clicked\0"
    "on_pushButton_dr_clicked\0"
    "on_pushButton_up_clicked\0"
    "on_pushButton_delete_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_5_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget_ShowData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x09,
       3,    2,   85,    2, 0x09,
       6,    2,   90,    2, 0x09,
       7,    2,   95,    2, 0x09,
       8,    0,  100,    2, 0x09,
       9,    0,  101,    2, 0x08,
      10,    0,  102,    2, 0x08,
      11,    1,  103,    2, 0x08,
      14,    0,  106,    2, 0x08,
      15,    0,  107,    2, 0x08,
      16,    0,  108,    2, 0x08,
      17,    0,  109,    2, 0x08,
      18,    0,  110,    2, 0x08,
      19,    0,  111,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget_ShowData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget_ShowData *_t = static_cast<Widget_ShowData *>(_o);
        switch (_id) {
        case 0: _t->slot_leading_hide(); break;
        case 1: _t->slotDetails((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->slotUpdata((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->slotDelete((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->slot_dataUpdata_hide(); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_pushButton_4_clicked(); break;
        case 7: _t->on_listWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->on_pushButton_2_clicked(); break;
        case 9: _t->on_pushButton_dr_clicked(); break;
        case 10: _t->on_pushButton_up_clicked(); break;
        case 11: _t->on_pushButton_delete_clicked(); break;
        case 12: _t->on_pushButton_3_clicked(); break;
        case 13: _t->on_pushButton_5_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Widget_ShowData::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget_ShowData.data,
      qt_meta_data_Widget_ShowData,  qt_static_metacall, 0, 0}
};


const QMetaObject *Widget_ShowData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget_ShowData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Widget_ShowData.stringdata))
        return static_cast<void*>(const_cast< Widget_ShowData*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget_ShowData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'MessageBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../HaibinSerialPortDebuger-master/MessageBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MessageBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MessageBox_t {
    QByteArrayData data[7];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MessageBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MessageBox_t qt_meta_stringdata_MessageBox = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MessageBox"
QT_MOC_LITERAL(1, 11, 4), // "Icon"
QT_MOC_LITERAL(2, 16, 6), // "NoIcon"
QT_MOC_LITERAL(3, 23, 11), // "Information"
QT_MOC_LITERAL(4, 35, 7), // "Warning"
QT_MOC_LITERAL(5, 43, 8), // "Critical"
QT_MOC_LITERAL(6, 52, 8) // "Question"

    },
    "MessageBox\0Icon\0NoIcon\0Information\0"
    "Warning\0Critical\0Question"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MessageBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    5,   19,

 // enum data: key, value
       2, uint(MessageBox::NoIcon),
       3, uint(MessageBox::Information),
       4, uint(MessageBox::Warning),
       5, uint(MessageBox::Critical),
       6, uint(MessageBox::Question),

       0        // eod
};

void MessageBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MessageBox::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_MessageBox.data,
    qt_meta_data_MessageBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MessageBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MessageBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MessageBox.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MessageBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'my_comport.h'
**
** Created: Mon Nov 9 14:38:34 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "my_comport.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'my_comport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyComPort[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      28,   11,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MyComPort[] = {
    "MyComPort\0\0timesl,data,size\0"
    "receiveMsg(QTime,const unsigned char*,int)\0"
};

const QMetaObject MyComPort::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyComPort,
      qt_meta_data_MyComPort, 0 }
};

const QMetaObject *MyComPort::metaObject() const
{
    return &staticMetaObject;
}

void *MyComPort::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyComPort))
        return static_cast<void*>(const_cast< MyComPort*>(this));
    return QObject::qt_metacast(_clname);
}

int MyComPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: receiveMsg((*reinterpret_cast< const QTime(*)>(_a[1])),(*reinterpret_cast< const unsigned char*(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

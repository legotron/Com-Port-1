/****************************************************************************
** Meta object code from reading C++ file 'threadcomport.h'
**
** Created: Fri Nov 6 14:18:14 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "threadcomport.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'threadcomport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QMainComThread[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

       0        // eod
};

static const char qt_meta_stringdata_QMainComThread[] = {
    "QMainComThread\0"
};

const QMetaObject QMainComThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QMainComThread,
      qt_meta_data_QMainComThread, 0 }
};

const QMetaObject *QMainComThread::metaObject() const
{
    return &staticMetaObject;
}

void *QMainComThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QMainComThread))
        return static_cast<void*>(const_cast< QMainComThread*>(this));
    return QThread::qt_metacast(_clname);
}

int QMainComThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Qthreadcomport[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      33,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      91,   85,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Qthreadcomport[] = {
    "Qthreadcomport\0\0timesl,data,size\0"
    "newDataInPortSignal(QTime,const unsigned char*,int)\0"
    "count\0newDataInPortSlot(int)\0"
};

const QMetaObject Qthreadcomport::staticMetaObject = {
    { &QextSerialPort::staticMetaObject, qt_meta_stringdata_Qthreadcomport,
      qt_meta_data_Qthreadcomport, 0 }
};

const QMetaObject *Qthreadcomport::metaObject() const
{
    return &staticMetaObject;
}

void *Qthreadcomport::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qthreadcomport))
        return static_cast<void*>(const_cast< Qthreadcomport*>(this));
    return QextSerialPort::qt_metacast(_clname);
}

int Qthreadcomport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QextSerialPort::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: newDataInPortSignal((*reinterpret_cast< const QTime(*)>(_a[1])),(*reinterpret_cast< const unsigned char*(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 1: newDataInPortSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Qthreadcomport::newDataInPortSignal(const QTime _t1, const unsigned char * _t2, const int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_ReceiveThread[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      21,   15,   14,   14, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_ReceiveThread[] = {
    "ReceiveThread\0\0count\0newDataInPortThread(int)\0"
};

const QMetaObject ReceiveThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ReceiveThread,
      qt_meta_data_ReceiveThread, 0 }
};

const QMetaObject *ReceiveThread::metaObject() const
{
    return &staticMetaObject;
}

void *ReceiveThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ReceiveThread))
        return static_cast<void*>(const_cast< ReceiveThread*>(this));
    return QThread::qt_metacast(_clname);
}

int ReceiveThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: newDataInPortThread((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ReceiveThread::newDataInPortThread(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

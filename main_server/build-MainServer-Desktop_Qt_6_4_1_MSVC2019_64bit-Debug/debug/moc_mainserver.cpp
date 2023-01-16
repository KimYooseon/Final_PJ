/****************************************************************************
** Meta object code from reading C++ file 'mainserver.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MainServer/mainserver.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_MainServer_t {
    uint offsetsAndSizes[18];
    char stringdata0[11];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[13];
    char stringdata5[12];
    char stringdata6[10];
    char stringdata7[5];
    char stringdata8[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainServer_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainServer_t qt_meta_stringdata_MainServer = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainServer"
        QT_MOC_LITERAL(11, 10),  // "sendNewPID"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 13),  // "newConnection"
        QT_MOC_LITERAL(37, 12),  // "disconnected"
        QT_MOC_LITERAL(50, 11),  // "receiveData"
        QT_MOC_LITERAL(62, 9),  // "writeData"
        QT_MOC_LITERAL(72, 4),  // "data"
        QT_MOC_LITERAL(77, 16)   // "sendDataToClient"
    },
    "MainServer",
    "sendNewPID",
    "",
    "newConnection",
    "disconnected",
    "receiveData",
    "writeData",
    "data",
    "sendDataToClient"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainServer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   53,    2, 0x08,    3 /* Private */,
       4,    0,   54,    2, 0x08,    4 /* Private */,
       5,    0,   55,    2, 0x08,    5 /* Private */,
       6,    1,   56,    2, 0x08,    6 /* Private */,
       8,    1,   59,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QByteArray,    7,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainServer.offsetsAndSizes,
    qt_meta_data_MainServer,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainServer_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainServer, std::true_type>,
        // method 'sendNewPID'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'newConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'writeData'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'sendDataToClient'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void MainServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainServer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendNewPID((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->newConnection(); break;
        case 2: _t->disconnected(); break;
        case 3: _t->receiveData(); break;
        case 4: { bool _r = _t->writeData((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->sendDataToClient((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainServer::*)(QString );
            if (_t _q_method = &MainServer::sendNewPID; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MainServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainServer.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MainServer::sendNewPID(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

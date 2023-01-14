/****************************************************************************
** Meta object code from reading C++ file 'networkmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PaientManagementSW/networkmanager.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
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
struct qt_meta_stringdata_NetworkManager_t {
    uint offsetsAndSizes[14];
    char stringdata0[15];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[10];
    char stringdata5[5];
    char stringdata6[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_NetworkManager_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_NetworkManager_t qt_meta_stringdata_NetworkManager = {
    {
        QT_MOC_LITERAL(0, 14),  // "NetworkManager"
        QT_MOC_LITERAL(15, 13),  // "connectToHost"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 4),  // "host"
        QT_MOC_LITERAL(35, 9),  // "writeData"
        QT_MOC_LITERAL(45, 4),  // "data"
        QT_MOC_LITERAL(50, 13)   // "newDataSended"
    },
    "NetworkManager",
    "connectToHost",
    "",
    "host",
    "writeData",
    "data",
    "newDataSended"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_NetworkManager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x0a,    1 /* Public */,
       4,    1,   35,    2, 0x0a,    3 /* Public */,
       6,    1,   38,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QByteArray,    5,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject NetworkManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_NetworkManager.offsetsAndSizes,
    qt_meta_data_NetworkManager,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_NetworkManager_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NetworkManager, std::true_type>,
        // method 'connectToHost'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'writeData'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'newDataSended'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void NetworkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetworkManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->connectToHost((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->writeData((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->newDataSended((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *NetworkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NetworkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

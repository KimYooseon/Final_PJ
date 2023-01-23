/****************************************************************************
** Meta object code from reading C++ file 'networkmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PatientManagementSW/networkmanager.h"
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
    uint offsetsAndSizes[28];
    char stringdata0[15];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[15];
    char stringdata5[15];
    char stringdata6[13];
    char stringdata7[13];
    char stringdata8[14];
    char stringdata9[5];
    char stringdata10[10];
    char stringdata11[5];
    char stringdata12[14];
    char stringdata13[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_NetworkManager_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_NetworkManager_t qt_meta_stringdata_NetworkManager = {
    {
        QT_MOC_LITERAL(0, 14),  // "NetworkManager"
        QT_MOC_LITERAL(15, 10),  // "sendNewPID"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 16),  // "sendSearchResult"
        QT_MOC_LITERAL(44, 14),  // "sendSRQRequest"
        QT_MOC_LITERAL(59, 14),  // "sendVTSRequest"
        QT_MOC_LITERAL(74, 12),  // "sendISVevent"
        QT_MOC_LITERAL(87, 12),  // "sendVTFevent"
        QT_MOC_LITERAL(100, 13),  // "connectToHost"
        QT_MOC_LITERAL(114, 4),  // "host"
        QT_MOC_LITERAL(119, 9),  // "writeData"
        QT_MOC_LITERAL(129, 4),  // "data"
        QT_MOC_LITERAL(134, 13),  // "newDataSended"
        QT_MOC_LITERAL(148, 11)   // "receiveData"
    },
    "NetworkManager",
    "sendNewPID",
    "",
    "sendSearchResult",
    "sendSRQRequest",
    "sendVTSRequest",
    "sendISVevent",
    "sendVTFevent",
    "connectToHost",
    "host",
    "writeData",
    "data",
    "newDataSended",
    "receiveData"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_NetworkManager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,    1 /* Public */,
       3,    2,   77,    2, 0x06,    3 /* Public */,
       4,    1,   82,    2, 0x06,    6 /* Public */,
       5,    1,   85,    2, 0x06,    8 /* Public */,
       6,    1,   88,    2, 0x06,   10 /* Public */,
       7,    1,   91,    2, 0x06,   12 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   94,    2, 0x0a,   14 /* Public */,
      10,    1,   97,    2, 0x0a,   16 /* Public */,
      12,    1,  100,    2, 0x08,   18 /* Private */,
      13,    0,  103,    2, 0x08,   20 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,    9,
    QMetaType::Bool, QMetaType::QByteArray,   11,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

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
        // method 'sendNewPID'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'sendSearchResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'sendSRQRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'sendVTSRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'sendISVevent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'sendVTFevent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'connectToHost'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'writeData'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'newDataSended'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'receiveData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void NetworkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetworkManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendNewPID((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->sendSearchResult((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->sendSRQRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->sendVTSRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->sendISVevent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->sendVTFevent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: { bool _r = _t->connectToHost((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->writeData((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->newDataSended((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->receiveData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NetworkManager::*)(QString );
            if (_t _q_method = &NetworkManager::sendNewPID; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NetworkManager::*)(QString , QString );
            if (_t _q_method = &NetworkManager::sendSearchResult; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NetworkManager::*)(QString );
            if (_t _q_method = &NetworkManager::sendSRQRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NetworkManager::*)(QString );
            if (_t _q_method = &NetworkManager::sendVTSRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NetworkManager::*)(QString );
            if (_t _q_method = &NetworkManager::sendISVevent; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (NetworkManager::*)(QString );
            if (_t _q_method = &NetworkManager::sendVTFevent; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void NetworkManager::sendNewPID(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NetworkManager::sendSearchResult(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NetworkManager::sendSRQRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NetworkManager::sendVTSRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NetworkManager::sendISVevent(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void NetworkManager::sendVTFevent(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

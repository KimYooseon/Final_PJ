/****************************************************************************
** Meta object code from reading C++ file 'patientstatusmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PatientManagementSW/patientstatusmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'patientstatusmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PatientStatusManager_t {
    uint offsetsAndSizes[24];
    char stringdata0[21];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[37];
    char stringdata5[17];
    char stringdata6[5];
    char stringdata7[7];
    char stringdata8[39];
    char stringdata9[34];
    char stringdata10[20];
    char stringdata11[29];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_PatientStatusManager_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_PatientStatusManager_t qt_meta_stringdata_PatientStatusManager = {
    {
        QT_MOC_LITERAL(0, 20),  // "PatientStatusManager"
        QT_MOC_LITERAL(21, 11),  // "sendRequest"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 14),  // "waitInfoSended"
        QT_MOC_LITERAL(49, 36),  // "on_waitPaymentTreeWidget_item..."
        QT_MOC_LITERAL(86, 16),  // "QTreeWidgetItem*"
        QT_MOC_LITERAL(103, 4),  // "item"
        QT_MOC_LITERAL(108, 6),  // "column"
        QT_MOC_LITERAL(115, 38),  // "on_waitTreatmentTreeWidget_it..."
        QT_MOC_LITERAL(154, 33),  // "on_shootRequestPushButton_cli..."
        QT_MOC_LITERAL(188, 19),  // "statusRequestSended"
        QT_MOC_LITERAL(208, 28)   // "on_paymentPushButton_clicked"
    },
    "PatientStatusManager",
    "sendRequest",
    "",
    "waitInfoSended",
    "on_waitPaymentTreeWidget_itemClicked",
    "QTreeWidgetItem*",
    "item",
    "column",
    "on_waitTreatmentTreeWidget_itemClicked",
    "on_shootRequestPushButton_clicked",
    "statusRequestSended",
    "on_paymentPushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PatientStatusManager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   59,    2, 0x08,    3 /* Private */,
       4,    2,   62,    2, 0x08,    5 /* Private */,
       8,    2,   67,    2, 0x08,    8 /* Private */,
       9,    0,   72,    2, 0x08,   11 /* Private */,
      10,    1,   73,    2, 0x08,   12 /* Private */,
      11,    0,   76,    2, 0x08,   14 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,    7,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void PatientStatusManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PatientStatusManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->waitInfoSended((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_waitPaymentTreeWidget_itemClicked((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->on_waitTreatmentTreeWidget_itemClicked((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->on_shootRequestPushButton_clicked(); break;
        case 5: _t->statusRequestSended((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->on_paymentPushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PatientStatusManager::*)(QString );
            if (_t _q_method = &PatientStatusManager::sendRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PatientStatusManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PatientStatusManager.offsetsAndSizes,
    qt_meta_data_PatientStatusManager,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_PatientStatusManager_t
, QtPrivate::TypeAndForceComplete<PatientStatusManager, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *PatientStatusManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PatientStatusManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PatientStatusManager.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PatientStatusManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void PatientStatusManager::sendRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

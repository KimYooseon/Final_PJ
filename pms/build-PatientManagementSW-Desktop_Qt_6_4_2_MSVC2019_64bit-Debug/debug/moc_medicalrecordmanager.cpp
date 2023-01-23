/****************************************************************************
** Meta object code from reading C++ file 'medicalrecordmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PatientManagementSW/medicalrecordmanager.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'medicalrecordmanager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_MedicalRecordManager_t {
    uint offsetsAndSizes[14];
    char stringdata0[21];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[38];
    char stringdata4[17];
    char stringdata5[5];
    char stringdata6[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MedicalRecordManager_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MedicalRecordManager_t qt_meta_stringdata_MedicalRecordManager = {
    {
        QT_MOC_LITERAL(0, 20),  // "MedicalRecordManager"
        QT_MOC_LITERAL(21, 16),  // "recordDataSended"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 37),  // "on_recordTreeWidget_itemDoubl..."
        QT_MOC_LITERAL(77, 16),  // "QTreeWidgetItem*"
        QT_MOC_LITERAL(94, 4),  // "item"
        QT_MOC_LITERAL(99, 6)   // "column"
    },
    "MedicalRecordManager",
    "recordDataSended",
    "",
    "on_recordTreeWidget_itemDoubleClicked",
    "QTreeWidgetItem*",
    "item",
    "column"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MedicalRecordManager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   26,    2, 0x08,    1 /* Private */,
       3,    2,   31,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject MedicalRecordManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MedicalRecordManager.offsetsAndSizes,
    qt_meta_data_MedicalRecordManager,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MedicalRecordManager_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MedicalRecordManager, std::true_type>,
        // method 'recordDataSended'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_recordTreeWidget_itemDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void MedicalRecordManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MedicalRecordManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->recordDataSended((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->on_recordTreeWidget_itemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *MedicalRecordManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MedicalRecordManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MedicalRecordManager.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MedicalRecordManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

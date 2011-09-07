/****************************************************************************
** Meta object code from reading C++ file 'test-qt-greeter.h'
**
** Created: Tue Sep 6 15:54:44 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "test-qt-greeter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test-qt-greeter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TestGreeter[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   13,   12,   12, 0x08,
      66,   13,   12,   12, 0x08,
     107,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TestGreeter[] = {
    "TestGreeter\0\0text,type\0"
    "showMessage(QString,QLightDM::MessageType)\0"
    "showPrompt(QString,QLightDM::PromptType)\0"
    "authenticationComplete()\0"
};

const QMetaObject TestGreeter::staticMetaObject = {
    { &QLightDM::Greeter::staticMetaObject, qt_meta_stringdata_TestGreeter,
      qt_meta_data_TestGreeter, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TestGreeter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TestGreeter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TestGreeter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TestGreeter))
        return static_cast<void*>(const_cast< TestGreeter*>(this));
    typedef QLightDM::Greeter QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int TestGreeter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef QLightDM::Greeter QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QLightDM::MessageType(*)>(_a[2]))); break;
        case 1: showPrompt((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QLightDM::PromptType(*)>(_a[2]))); break;
        case 2: authenticationComplete(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

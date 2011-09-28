/****************************************************************************
** Meta object code from reading C++ file 'greeter.h'
**
** Created: Fri Sep 16 16:29:21 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "greeter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'greeter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Greeter[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,    8,    9,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Greeter[] = {
    "Greeter\0\0bool\0onStartSession()\0"
};

const QMetaObject Greeter::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Greeter,
      qt_meta_data_Greeter, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Greeter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Greeter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Greeter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Greeter))
        return static_cast<void*>(const_cast< Greeter*>(this));
    return QWidget::qt_metacast(_clname);
}

int Greeter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = onStartSession();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

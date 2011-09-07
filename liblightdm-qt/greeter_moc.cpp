/****************************************************************************
** Meta object code from reading C++ file 'Greeter'
**
** Created: Tue Sep 6 15:54:20 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QLightDM/Greeter"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Greeter' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLightDM__Greeter[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   19,   18,   18, 0x05,
      72,   19,   18,   18, 0x05,
     113,   18,   18,   18, 0x05,
     138,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     167,   18,  162,   18, 0x0a,
     190,  181,   18,   18, 0x0a,
     212,   18,   18,   18, 0x2a,
     227,   18,   18,   18, 0x0a,
     258,  249,   18,   18, 0x0a,
     275,   18,   18,   18, 0x0a,
     306,  298,  162,   18, 0x0a,
     332,   18,  162,   18, 0x2a,
     354,  351,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QLightDM__Greeter[] = {
    "QLightDM::Greeter\0\0text,type\0"
    "showMessage(QString,QLightDM::MessageType)\0"
    "showPrompt(QString,QLightDM::PromptType)\0"
    "authenticationComplete()\0"
    "autologinTimerExpired()\0bool\0connectSync()\0"
    "username\0authenticate(QString)\0"
    "authenticate()\0authenticateAsGuest()\0"
    "response\0respond(QString)\0"
    "cancelAuthentication()\0session\0"
    "startSessionSync(QString)\0startSessionSync()\0"
    "fd\0onRead(int)\0"
};

const QMetaObject QLightDM::Greeter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QLightDM__Greeter,
      qt_meta_data_QLightDM__Greeter, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLightDM::Greeter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLightDM::Greeter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLightDM::Greeter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLightDM__Greeter))
        return static_cast<void*>(const_cast< Greeter*>(this));
    return QObject::qt_metacast(_clname);
}

int QLightDM::Greeter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QLightDM::MessageType(*)>(_a[2]))); break;
        case 1: showPrompt((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QLightDM::PromptType(*)>(_a[2]))); break;
        case 2: authenticationComplete(); break;
        case 3: autologinTimerExpired(); break;
        case 4: { bool _r = connectSync();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: authenticate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: authenticate(); break;
        case 7: authenticateAsGuest(); break;
        case 8: respond((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: cancelAuthentication(); break;
        case 10: { bool _r = startSessionSync((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = startSessionSync();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: onRead((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QLightDM::Greeter::showMessage(QString _t1, QLightDM::MessageType _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QLightDM::Greeter::showPrompt(QString _t1, QLightDM::PromptType _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QLightDM::Greeter::authenticationComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QLightDM::Greeter::autologinTimerExpired()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE

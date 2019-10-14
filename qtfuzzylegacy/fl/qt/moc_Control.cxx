/****************************************************************************
** Meta object code from reading C++ file 'Control.h'
**
** Created: Mon Oct 14 09:14:45 2019
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Control.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Control.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_fl__qt__Control[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   17,   16,   16, 0x09,
      43,   16,   16,   16, 0x09,
      67,   58,   16,   16, 0x09,
      92,   16,   16,   16, 0x09,
     111,   16,   16,   16, 0x09,
     133,   16,   16,   16, 0x09,
     156,   16,   16,   16, 0x09,
     173,   16,   16,   16, 0x0a,
     183,   16,   16,   16, 0x0a,
     201,  190,   16,   16, 0x0a,
     235,  230,   16,   16, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_fl__qt__Control[] = {
    "fl::qt::Control\0\0value\0updateInput(double)\0"
    "updateOutput()\0position\0"
    "onChangeSliderValue(int)\0onEditInputValue()\0"
    "onClickVariableName()\0onActionVariableName()\0"
    "swapOutputView()\0refresh()\0draw()\0"
    "term,color\0draw(const fl::Term*,QColor)\0"
    "term\0draw(const fl::Term*)\0"
};

void fl::qt::Control::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Control *_t = static_cast<Control *>(_o);
        switch (_id) {
        case 0: _t->updateInput((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->updateOutput(); break;
        case 2: _t->onChangeSliderValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onEditInputValue(); break;
        case 4: _t->onClickVariableName(); break;
        case 5: _t->onActionVariableName(); break;
        case 6: _t->swapOutputView(); break;
        case 7: _t->refresh(); break;
        case 8: _t->draw(); break;
        case 9: _t->draw((*reinterpret_cast< const fl::Term*(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 10: _t->draw((*reinterpret_cast< const fl::Term*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData fl::qt::Control::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject fl::qt::Control::staticMetaObject = {
    { &Viewer::staticMetaObject, qt_meta_stringdata_fl__qt__Control,
      qt_meta_data_fl__qt__Control, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &fl::qt::Control::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *fl::qt::Control::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *fl::qt::Control::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_fl__qt__Control))
        return static_cast<void*>(const_cast< Control*>(this));
    return Viewer::qt_metacast(_clname);
}

int fl::qt::Control::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Viewer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

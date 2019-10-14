/****************************************************************************
** Meta object code from reading C++ file 'Surface2D.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Surface2D.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Surface2D.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_fl__qt__Surface2D[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x09,
      39,   18,   18,   18, 0x09,
      59,   18,   18,   18, 0x09,
      79,   18,   18,   18, 0x09,
     103,   18,   18,   18, 0x09,
     119,   18,   18,   18, 0x09,
     136,   18,   18,   18, 0x09,
     156,   18,   18,   18, 0x09,
     181,   18,   18,   18, 0x09,
     205,   18,   18,   18, 0x09,
     227,   18,   18,   18, 0x09,
     249,   18,   18,   18, 0x09,
     267,   18,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_fl__qt__Surface2D[] = {
    "fl::qt::Surface2D\0\0onChangeInputA(int)\0"
    "onChangeInputB(int)\0onChangeOutput(int)\0"
    "onChangeSpinBox(double)\0onClickInputs()\0"
    "onClickOptions()\0onOptionTriggered()\0"
    "setNumberOfContours(int)\0"
    "setWidthOfContours(int)\0onClickMinimumColor()\0"
    "onClickMaximumColor()\0onClickGenerate()\0"
    "onEngineChanged()\0"
};

void fl::qt::Surface2D::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Surface2D *_t = static_cast<Surface2D *>(_o);
        switch (_id) {
        case 0: _t->onChangeInputA((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onChangeInputB((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onChangeOutput((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onChangeSpinBox((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->onClickInputs(); break;
        case 5: _t->onClickOptions(); break;
        case 6: _t->onOptionTriggered(); break;
        case 7: _t->setNumberOfContours((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setWidthOfContours((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onClickMinimumColor(); break;
        case 10: _t->onClickMaximumColor(); break;
        case 11: _t->onClickGenerate(); break;
        case 12: _t->onEngineChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData fl::qt::Surface2D::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject fl::qt::Surface2D::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_fl__qt__Surface2D,
      qt_meta_data_fl__qt__Surface2D, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &fl::qt::Surface2D::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *fl::qt::Surface2D::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *fl::qt::Surface2D::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_fl__qt__Surface2D))
        return static_cast<void*>(const_cast< Surface2D*>(this));
    return QDialog::qt_metacast(_clname);
}

int fl::qt::Surface2D::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'Variable.h'
**
** Created: Mon Oct 14 09:14:47 2019
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Variable.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Variable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_fl__qt__Variable[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x09,
      35,   17,   17,   17, 0x09,
      55,   17,   17,   17, 0x09,
      73,   17,   17,   17, 0x09,
      89,   17,   17,   17, 0x09,
     107,   17,   17,   17, 0x09,
     132,   17,   17,   17, 0x09,
     162,  157,   17,   17, 0x09,
     192,  157,   17,   17, 0x09,
     228,   17,   17,   17, 0x09,
     243,   17,   17,   17, 0x09,
     268,   17,   17,   17, 0x09,
     277,   17,   17,   17, 0x09,
     297,   17,   17,   17, 0x09,
     306,   17,   17,   17, 0x09,
     315,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_fl__qt__Variable[] = {
    "fl::qt::Variable\0\0onClickAddTerm()\0"
    "onClickRemoveTerm()\0onClickEditTerm()\0"
    "onClickMoveUp()\0onClickMoveDown()\0"
    "onChangeMinRange(double)\0"
    "onChangeMaxRange(double)\0item\0"
    "onClickTerm(QListWidgetItem*)\0"
    "onDoubleClickTerm(QListWidgetItem*)\0"
    "onSelectTerm()\0onSelectDefuzzifier(int)\0"
    "redraw()\0showSelectedTerms()\0accept()\0"
    "reject()\0reloadModel()\0"
};

void fl::qt::Variable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Variable *_t = static_cast<Variable *>(_o);
        switch (_id) {
        case 0: _t->onClickAddTerm(); break;
        case 1: _t->onClickRemoveTerm(); break;
        case 2: _t->onClickEditTerm(); break;
        case 3: _t->onClickMoveUp(); break;
        case 4: _t->onClickMoveDown(); break;
        case 5: _t->onChangeMinRange((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->onChangeMaxRange((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->onClickTerm((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->onDoubleClickTerm((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 9: _t->onSelectTerm(); break;
        case 10: _t->onSelectDefuzzifier((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->redraw(); break;
        case 12: _t->showSelectedTerms(); break;
        case 13: _t->accept(); break;
        case 14: _t->reject(); break;
        case 15: _t->reloadModel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData fl::qt::Variable::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject fl::qt::Variable::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_fl__qt__Variable,
      qt_meta_data_fl__qt__Variable, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &fl::qt::Variable::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *fl::qt::Variable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *fl::qt::Variable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_fl__qt__Variable))
        return static_cast<void*>(const_cast< Variable*>(this));
    return QDialog::qt_metacast(_clname);
}

int fl::qt::Variable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

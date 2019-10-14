/****************************************************************************
** Meta object code from reading C++ file 'Term.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Term.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Term.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_fl__qt__Term[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x09,
      38,   32,   13,   13, 0x09,
      64,   32,   13,   13, 0x09,
      81,   13,   13,   13, 0x09,
     113,   13,   13,   13, 0x09,
     146,   13,   13,   13, 0x09,
     179,   13,   13,   13, 0x09,
     203,   13,   13,   13, 0x09,
     235,   13,   13,   13, 0x09,
     274,   13,   13,   13, 0x09,
     302,   13,   13,   13, 0x09,
     333,   13,   13,   13, 0x09,
     368,   13,   13,   13, 0x09,
     403,   13,   13,   13, 0x09,
     431,   13,   13,   13, 0x09,
     462,   13,   13,   13, 0x09,
     492,   13,   13,   13, 0x09,
     522,   13,   13,   13, 0x09,
     554,   13,   13,   13, 0x09,
     598,   13,   13,   13, 0x09,
     623,   13,   13,   13, 0x09,
     649,   13,   13,   13, 0x09,
     674,   13,   13,   13, 0x09,
     699,   13,   13,   13, 0x09,
     723,   13,   13,   13, 0x09,
     739,   13,   13,   13, 0x09,
     748,   13,   13,   13, 0x09,
     767,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_fl__qt__Term[] = {
    "fl::qt::Term\0\0onEngineChanged()\0index\0"
    "onChangeToolBoxIndex(int)\0onChangeTab(int)\0"
    "onChangeSpinBoxTriangle(double)\0"
    "onChangeSpinBoxTrapezoid(double)\0"
    "onChangeSpinBoxRectangle(double)\0"
    "onClickDiscreteParser()\0"
    "onChangeSpinBoxGaussian(double)\0"
    "onChangeSpinBoxGaussianProduct(double)\0"
    "onChangeSpinBoxBell(double)\0"
    "onChangeSpinBoxPiShape(double)\0"
    "onChangeSpinBoxSigmoidDiff(double)\0"
    "onChangeSpinBoxSigmoidProd(double)\0"
    "onChangeSpinBoxRamp(double)\0"
    "onChangeSpinBoxSigmoid(double)\0"
    "onChangeSpinBoxSShape(double)\0"
    "onChangeSpinBoxZShape(double)\0"
    "onChangeSpinBoxConstant(double)\0"
    "onChangeLinearCoefficient(QListWidgetItem*)\0"
    "onClickFunctionProcess()\0"
    "onClickFunctionVariable()\0"
    "onClickVariable(QString)\0"
    "onClickFunctionBuiltIn()\0"
    "onClickBuiltIn(QString)\0onClickWizard()\0"
    "redraw()\0showSelectedTerm()\0accept()\0"
};

void fl::qt::Term::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Term *_t = static_cast<Term *>(_o);
        switch (_id) {
        case 0: _t->onEngineChanged(); break;
        case 1: _t->onChangeToolBoxIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onChangeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onChangeSpinBoxTriangle((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->onChangeSpinBoxTrapezoid((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->onChangeSpinBoxRectangle((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->onClickDiscreteParser(); break;
        case 7: _t->onChangeSpinBoxGaussian((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->onChangeSpinBoxGaussianProduct((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->onChangeSpinBoxBell((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->onChangeSpinBoxPiShape((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->onChangeSpinBoxSigmoidDiff((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->onChangeSpinBoxSigmoidProd((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->onChangeSpinBoxRamp((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->onChangeSpinBoxSigmoid((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->onChangeSpinBoxSShape((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->onChangeSpinBoxZShape((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->onChangeSpinBoxConstant((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->onChangeLinearCoefficient((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 19: _t->onClickFunctionProcess(); break;
        case 20: _t->onClickFunctionVariable(); break;
        case 21: _t->onClickVariable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->onClickFunctionBuiltIn(); break;
        case 23: _t->onClickBuiltIn((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->onClickWizard(); break;
        case 25: _t->redraw(); break;
        case 26: _t->showSelectedTerm(); break;
        case 27: _t->accept(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData fl::qt::Term::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject fl::qt::Term::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_fl__qt__Term,
      qt_meta_data_fl__qt__Term, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &fl::qt::Term::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *fl::qt::Term::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *fl::qt::Term::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_fl__qt__Term))
        return static_cast<void*>(const_cast< Term*>(this));
    return QDialog::qt_metacast(_clname);
}

int fl::qt::Term::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

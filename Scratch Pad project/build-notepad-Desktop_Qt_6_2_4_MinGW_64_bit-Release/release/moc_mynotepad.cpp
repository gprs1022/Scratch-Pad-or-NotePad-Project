/****************************************************************************
** Meta object code from reading C++ file 'mynotepad.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MyNotepad/mynotepad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mynotepad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyNotepad_t {
    const uint offsetsAndSize[50];
    char stringdata0[282];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MyNotepad_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MyNotepad_t qt_meta_stringdata_MyNotepad = {
    {
QT_MOC_LITERAL(0, 9), // "MyNotepad"
QT_MOC_LITERAL(10, 11), // "newDocument"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 4), // "open"
QT_MOC_LITERAL(28, 4), // "save"
QT_MOC_LITERAL(33, 6), // "saveAs"
QT_MOC_LITERAL(40, 5), // "print"
QT_MOC_LITERAL(46, 4), // "exit"
QT_MOC_LITERAL(51, 4), // "copy"
QT_MOC_LITERAL(56, 3), // "cut"
QT_MOC_LITERAL(60, 5), // "paste"
QT_MOC_LITERAL(66, 4), // "undo"
QT_MOC_LITERAL(71, 4), // "redo"
QT_MOC_LITERAL(76, 10), // "selectFont"
QT_MOC_LITERAL(87, 11), // "setFontBold"
QT_MOC_LITERAL(99, 4), // "bold"
QT_MOC_LITERAL(104, 16), // "setFontUnderline"
QT_MOC_LITERAL(121, 9), // "underline"
QT_MOC_LITERAL(131, 13), // "setFontItalic"
QT_MOC_LITERAL(145, 6), // "italic"
QT_MOC_LITERAL(152, 5), // "about"
QT_MOC_LITERAL(158, 24), // "on_actionColor_triggered"
QT_MOC_LITERAL(183, 24), // "on_actioncolor_triggered"
QT_MOC_LITERAL(208, 38), // "on_actionTextBackgroundColor_..."
QT_MOC_LITERAL(247, 34) // "on_actionBackgroundColor_trig..."

    },
    "MyNotepad\0newDocument\0\0open\0save\0"
    "saveAs\0print\0exit\0copy\0cut\0paste\0undo\0"
    "redo\0selectFont\0setFontBold\0bold\0"
    "setFontUnderline\0underline\0setFontItalic\0"
    "italic\0about\0on_actionColor_triggered\0"
    "on_actioncolor_triggered\0"
    "on_actionTextBackgroundColor_triggered\0"
    "on_actionBackgroundColor_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyNotepad[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  134,    2, 0x08,    1 /* Private */,
       3,    0,  135,    2, 0x08,    2 /* Private */,
       4,    0,  136,    2, 0x08,    3 /* Private */,
       5,    0,  137,    2, 0x08,    4 /* Private */,
       6,    0,  138,    2, 0x08,    5 /* Private */,
       7,    0,  139,    2, 0x08,    6 /* Private */,
       8,    0,  140,    2, 0x08,    7 /* Private */,
       9,    0,  141,    2, 0x08,    8 /* Private */,
      10,    0,  142,    2, 0x08,    9 /* Private */,
      11,    0,  143,    2, 0x08,   10 /* Private */,
      12,    0,  144,    2, 0x08,   11 /* Private */,
      13,    0,  145,    2, 0x08,   12 /* Private */,
      14,    1,  146,    2, 0x08,   13 /* Private */,
      16,    1,  149,    2, 0x08,   15 /* Private */,
      18,    1,  152,    2, 0x08,   17 /* Private */,
      20,    0,  155,    2, 0x08,   19 /* Private */,
      21,    0,  156,    2, 0x08,   20 /* Private */,
      22,    0,  157,    2, 0x08,   21 /* Private */,
      23,    0,  158,    2, 0x08,   22 /* Private */,
      24,    0,  159,    2, 0x08,   23 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MyNotepad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyNotepad *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newDocument(); break;
        case 1: _t->open(); break;
        case 2: _t->save(); break;
        case 3: _t->saveAs(); break;
        case 4: _t->print(); break;
        case 5: _t->exit(); break;
        case 6: _t->copy(); break;
        case 7: _t->cut(); break;
        case 8: _t->paste(); break;
        case 9: _t->undo(); break;
        case 10: _t->redo(); break;
        case 11: _t->selectFont(); break;
        case 12: _t->setFontBold((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->setFontUnderline((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->setFontItalic((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->about(); break;
        case 16: _t->on_actionColor_triggered(); break;
        case 17: _t->on_actioncolor_triggered(); break;
        case 18: _t->on_actionTextBackgroundColor_triggered(); break;
        case 19: _t->on_actionBackgroundColor_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject MyNotepad::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MyNotepad.offsetsAndSize,
    qt_meta_data_MyNotepad,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MyNotepad_t
, QtPrivate::TypeAndForceComplete<MyNotepad, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MyNotepad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyNotepad::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyNotepad.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MyNotepad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 20;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

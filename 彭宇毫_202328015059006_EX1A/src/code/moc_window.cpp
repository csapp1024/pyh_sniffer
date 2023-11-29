/****************************************************************************
** Meta object code from reading C++ file 'window.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "window.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CaptureThread_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CaptureThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CaptureThread_t qt_meta_stringdata_CaptureThread = {
    {
QT_MOC_LITERAL(0, 0, 13) // "CaptureThread"

    },
    "CaptureThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CaptureThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CaptureThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CaptureThread::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_CaptureThread.data,
    qt_meta_data_CaptureThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CaptureThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CaptureThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CaptureThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int CaptureThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Window_t {
    QByteArrayData data[29];
    char stringdata0[337];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Window_t qt_meta_stringdata_Window = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Window"
QT_MOC_LITERAL(1, 7, 20), // "begin_capture_signal"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "bool*"
QT_MOC_LITERAL(4, 35, 6), // "active"
QT_MOC_LITERAL(5, 42, 15), // "not_implemented"
QT_MOC_LITERAL(6, 58, 5), // "about"
QT_MOC_LITERAL(7, 64, 7), // "on_exit"
QT_MOC_LITERAL(8, 72, 11), // "select_file"
QT_MOC_LITERAL(9, 84, 16), // "select_save_file"
QT_MOC_LITERAL(10, 101, 16), // "select_interface"
QT_MOC_LITERAL(11, 118, 23), // "select_interface_button"
QT_MOC_LITERAL(12, 142, 8), // "QWidget*"
QT_MOC_LITERAL(13, 151, 4), // "list"
QT_MOC_LITERAL(14, 156, 13), // "begin_capture"
QT_MOC_LITERAL(15, 170, 11), // "end_capture"
QT_MOC_LITERAL(16, 182, 15), // "restart_capture"
QT_MOC_LITERAL(17, 198, 14), // "capture_filter"
QT_MOC_LITERAL(18, 213, 21), // "capture_filter_button"
QT_MOC_LITERAL(19, 235, 7), // "textbox"
QT_MOC_LITERAL(20, 243, 10), // "statistics"
QT_MOC_LITERAL(21, 254, 16), // "statistics_hover"
QT_MOC_LITERAL(22, 271, 10), // "QPieSlice*"
QT_MOC_LITERAL(23, 282, 5), // "slice"
QT_MOC_LITERAL(24, 288, 5), // "state"
QT_MOC_LITERAL(25, 294, 17), // "load_packet_bytes"
QT_MOC_LITERAL(26, 312, 3), // "row"
QT_MOC_LITERAL(27, 316, 3), // "col"
QT_MOC_LITERAL(28, 320, 16) // "load_packet_tree"

    },
    "Window\0begin_capture_signal\0\0bool*\0"
    "active\0not_implemented\0about\0on_exit\0"
    "select_file\0select_save_file\0"
    "select_interface\0select_interface_button\0"
    "QWidget*\0list\0begin_capture\0end_capture\0"
    "restart_capture\0capture_filter\0"
    "capture_filter_button\0textbox\0statistics\0"
    "statistics_hover\0QPieSlice*\0slice\0"
    "state\0load_packet_bytes\0row\0col\0"
    "load_packet_tree"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Window[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  102,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    0,  105,    2, 0x08 /* Private */,
       9,    0,  106,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    1,  108,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    1,  115,    2, 0x08 /* Private */,
      20,    0,  118,    2, 0x08 /* Private */,
      21,    2,  119,    2, 0x08 /* Private */,
      25,    2,  124,    2, 0x08 /* Private */,
      28,    2,  129,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   19,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22, QMetaType::Bool,   23,   24,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   26,   27,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   26,   27,

       0        // eod
};

void Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->begin_capture_signal((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 1: _t->not_implemented(); break;
        case 2: _t->about(); break;
        case 3: _t->on_exit(); break;
        case 4: _t->select_file(); break;
        case 5: _t->select_save_file(); break;
        case 6: _t->select_interface(); break;
        case 7: _t->select_interface_button((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 8: _t->begin_capture(); break;
        case 9: _t->end_capture(); break;
        case 10: _t->restart_capture(); break;
        case 11: _t->capture_filter(); break;
        case 12: _t->capture_filter_button((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 13: _t->statistics(); break;
        case 14: _t->statistics_hover((*reinterpret_cast< QPieSlice*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 15: _t->load_packet_bytes((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: _t->load_packet_tree((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPieSlice* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Window::*)(bool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Window::begin_capture_signal)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Window::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_Window.data,
    qt_meta_data_Window,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Window.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void Window::begin_capture_signal(bool * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

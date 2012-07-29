/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:19 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 547 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 39 "sipQtGuiQDropEvent.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 43 "sipQtGuiQDropEvent.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 46 "sipQtGuiQDropEvent.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qmimedata.sip"
#include <qmimedata.h>
#line 49 "sipQtGuiQDropEvent.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 52 "sipQtGuiQDropEvent.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 55 "sipQtGuiQDropEvent.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 58 "sipQtGuiQDropEvent.cpp"
#line 42 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 61 "sipQtGuiQDropEvent.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 64 "sipQtGuiQDropEvent.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 67 "sipQtGuiQDropEvent.cpp"


class sipQDropEvent : public QDropEvent
{
public:
    sipQDropEvent(const QPoint&,Qt::DropActions,const QMimeData *,Qt::MouseButtons,Qt::KeyboardModifiers,QEvent::Type);
    sipQDropEvent(const QDropEvent&);
    virtual ~sipQDropEvent();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    const char * format(int) const;
    QByteArray encodedData(const char *) const;
    bool provides(const char *) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDropEvent(const sipQDropEvent &);
    sipQDropEvent &operator = (const sipQDropEvent &);

    char sipPyMethods[3];
};

sipQDropEvent::sipQDropEvent(const QPoint& a0,Qt::DropActions a1,const QMimeData *a2,Qt::MouseButtons a3,Qt::KeyboardModifiers a4,QEvent::Type a5): QDropEvent(a0,a1,a2,a3,a4,a5), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDropEvent::sipQDropEvent(const QDropEvent& a0): QDropEvent(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDropEvent::~sipQDropEvent()
{
    sipCommonDtor(sipPySelf);
}

const char * sipQDropEvent::format(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_format);

    if (!meth)
        return QDropEvent::format(a0);

    extern const char * sipVH_QtGui_146(sip_gilstate_t,PyObject *,int,int,sipSimpleWrapper *);

    return sipVH_QtGui_146(sipGILState,meth,a0,-78,sipPySelf);
}

QByteArray sipQDropEvent::encodedData(const char *a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_encodedData);

    if (!meth)
        return QDropEvent::encodedData(a0);

    extern QByteArray sipVH_QtGui_144(sip_gilstate_t,PyObject *,const char *);

    return sipVH_QtGui_144(sipGILState,meth,a0);
}

bool sipQDropEvent::provides(const char *a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_provides);

    if (!meth)
        return QDropEvent::provides(a0);

    extern bool sipVH_QtGui_145(sip_gilstate_t,PyObject *,const char *);

    return sipVH_QtGui_145(sipGILState,meth,a0);
}


extern "C" {static PyObject *meth_QDropEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDropEvent, &sipCpp))
        {
            QPoint *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->pos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_pos, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDropEvent_mouseButtons(PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_mouseButtons(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDropEvent, &sipCpp))
        {
            Qt::MouseButtons *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::MouseButtons(sipCpp->mouseButtons());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_mouseButtons, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDropEvent_keyboardModifiers(PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_keyboardModifiers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDropEvent, &sipCpp))
        {
            Qt::KeyboardModifiers *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::KeyboardModifiers(sipCpp->keyboardModifiers());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_KeyboardModifiers,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_keyboardModifiers, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDropEvent_possibleActions(PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_possibleActions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDropEvent, &sipCpp))
        {
            Qt::DropActions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::DropActions(sipCpp->possibleActions());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_DropActions,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_possibleActions, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDropEvent_proposedAction(PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_proposedAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDropEvent, &sipCpp))
        {
            Qt::DropAction sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->proposedAction();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_DropAction);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_proposedAction, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDropEvent_acceptProposedAction(PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_acceptProposedAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDropEvent, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->acceptProposedAction();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_acceptProposedAction, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDropEvent_dropAction(PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_dropAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDropEvent, &sipCpp))
        {
            Qt::DropAction sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->dropAction();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_DropAction);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_dropAction, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDropEvent_setDropAction(PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_setDropAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::DropAction a0;
        QDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QDropEvent, &sipCpp, sipType_Qt_DropAction, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDropAction(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_setDropAction, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDropEvent_source(PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_source(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDropEvent, &sipCpp))
        {
            QWidget *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->source();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_source, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDropEvent_mimeData(PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_mimeData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDropEvent, &sipCpp))
        {
            const QMimeData *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->mimeData();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(const_cast<QMimeData *>(sipRes),sipType_QMimeData,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_mimeData, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDropEvent_format(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_format(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        int a0 = 0;
        QDropEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_n,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|i", &sipSelf, sipType_QDropEvent, &sipCpp, &a0))
        {
            const char *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QDropEvent::format(a0) : sipCpp->format(a0));
            Py_END_ALLOW_THREADS

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_format, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDropEvent_encodedData(PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_encodedData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const char * a0;
        QDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bs", &sipSelf, sipType_QDropEvent, &sipCpp, &a0))
        {
            QByteArray *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray((sipSelfWasArg ? sipCpp->QDropEvent::encodedData(a0) : sipCpp->encodedData(a0)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_encodedData, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDropEvent_provides(PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_provides(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const char * a0;
        QDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bs", &sipSelf, sipType_QDropEvent, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QDropEvent::provides(a0) : sipCpp->provides(a0));
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_provides, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDropEvent(void *, const sipTypeDef *);}
static void *cast_QDropEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QDropEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QDropEvent *)ptr,targetType)) != NULL)
        return res;

    if ((res = ((const sipClassTypeDef *)sipType_QMimeSource)->ctd_cast((QMimeSource *)(QDropEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDropEvent(void *, int);}
static void release_QDropEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQDropEvent *>(sipCppV);
    else
        delete reinterpret_cast<QDropEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QDropEvent(sipSimpleWrapper *);}
static void dealloc_QDropEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDropEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDropEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QDropEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QDropEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQDropEvent *sipCpp = 0;

    {
        const QPoint * a0;
        Qt::DropActions * a1;
        int a1State = 0;
        const QMimeData * a2;
        Qt::MouseButtons * a3;
        int a3State = 0;
        Qt::KeyboardModifiers * a4;
        int a4State = 0;
        QEvent::Type a5 = QEvent::Drop;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            NULL,
            NULL,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9J1J8J1J1|E", sipType_QPoint, &a0, sipType_Qt_DropActions, &a1, &a1State, sipType_QMimeData, &a2, sipType_Qt_MouseButtons, &a3, &a3State, sipType_Qt_KeyboardModifiers, &a4, &a4State, sipType_QEvent_Type, &a5))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDropEvent(*a0,*a1,a2,*a3,*a4,a5);
            Py_END_ALLOW_THREADS
            sipReleaseType(a1,sipType_Qt_DropActions,a1State);
            sipReleaseType(a3,sipType_Qt_MouseButtons,a3State);
            sipReleaseType(a4,sipType_Qt_KeyboardModifiers,a4State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QDropEvent * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDropEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDropEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDropEvent[] = {{58, 0, 0}, {346, 255, 1}};


static PyMethodDef methods_QDropEvent[] = {
    {SIP_MLNAME_CAST(sipName_acceptProposedAction), meth_QDropEvent_acceptProposedAction, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_dropAction), meth_QDropEvent_dropAction, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_encodedData), meth_QDropEvent_encodedData, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_format), (PyCFunction)meth_QDropEvent_format, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_keyboardModifiers), meth_QDropEvent_keyboardModifiers, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_mimeData), meth_QDropEvent_mimeData, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_mouseButtons), meth_QDropEvent_mouseButtons, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_pos), meth_QDropEvent_pos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_possibleActions), meth_QDropEvent_possibleActions, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_proposedAction), meth_QDropEvent_proposedAction, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_provides), meth_QDropEvent_provides, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setDropAction), meth_QDropEvent_setDropAction, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_source), meth_QDropEvent_source, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QDropEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QDropEvent,
        {0}
    },
    {
        sipNameNr_QDropEvent,
        {0, 0, 1},
        13, methods_QDropEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QDropEvent,
    0,
    init_QDropEvent,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QDropEvent,
    0,
    0,
    0,
    release_QDropEvent,
    cast_QDropEvent,
    0,
    0,
    0
},
    0,
    0,
    0
};

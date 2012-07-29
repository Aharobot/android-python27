/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:17 2012
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

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 611 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 41 "sipQtGuiQPainterPixmapFragmentHints.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 611 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 47 "sipQtGuiQPainterPixmapFragmentHints.cpp"


extern "C" {static int slot_QPainter_PixmapFragmentHints___bool__(PyObject *);}
static int slot_QPainter_PixmapFragmentHints___bool__(PyObject *sipSelf)
{
    QPainter::PixmapFragmentHints *sipCpp = reinterpret_cast<QPainter::PixmapFragmentHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPainter_PixmapFragmentHints));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 336 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 65 "sipQtGuiQPainterPixmapFragmentHints.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QPainter_PixmapFragmentHints___ne__(PyObject *,PyObject *);}
static PyObject *slot_QPainter_PixmapFragmentHints___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QPainter::PixmapFragmentHints *sipCpp = reinterpret_cast<QPainter::PixmapFragmentHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPainter_PixmapFragmentHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPainter::PixmapFragmentHints * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QPainter_PixmapFragmentHints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 331 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 93 "sipQtGuiQPainterPixmapFragmentHints.cpp"
            sipReleaseType(const_cast<QPainter::PixmapFragmentHints *>(a0),sipType_QPainter_PixmapFragmentHints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QPainter_PixmapFragmentHints,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QPainter_PixmapFragmentHints___eq__(PyObject *,PyObject *);}
static PyObject *slot_QPainter_PixmapFragmentHints___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QPainter::PixmapFragmentHints *sipCpp = reinterpret_cast<QPainter::PixmapFragmentHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPainter_PixmapFragmentHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPainter::PixmapFragmentHints * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QPainter_PixmapFragmentHints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 326 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 129 "sipQtGuiQPainterPixmapFragmentHints.cpp"
            sipReleaseType(const_cast<QPainter::PixmapFragmentHints *>(a0),sipType_QPainter_PixmapFragmentHints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QPainter_PixmapFragmentHints,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QPainter_PixmapFragmentHints___invert__(PyObject *);}
static PyObject *slot_QPainter_PixmapFragmentHints___invert__(PyObject *sipSelf)
{
    QPainter::PixmapFragmentHints *sipCpp = reinterpret_cast<QPainter::PixmapFragmentHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPainter_PixmapFragmentHints));

    if (!sipCpp)
        return 0;


    {
        {
            QPainter::PixmapFragmentHints *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPainter::PixmapFragmentHints(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPainter_PixmapFragmentHints,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QPainter_PixmapFragmentHints___and__(PyObject *,PyObject *);}
static PyObject *slot_QPainter_PixmapFragmentHints___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QPainter::PixmapFragmentHints * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QPainter_PixmapFragmentHints, &a0, &a0State, &a1))
        {
            QPainter::PixmapFragmentHints *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPainter::PixmapFragmentHints((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QPainter_PixmapFragmentHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPainter_PixmapFragmentHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QPainter_PixmapFragmentHints___xor__(PyObject *,PyObject *);}
static PyObject *slot_QPainter_PixmapFragmentHints___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QPainter::PixmapFragmentHints * a0;
        int a0State = 0;
        QPainter::PixmapFragmentHints * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QPainter_PixmapFragmentHints, &a0, &a0State, sipType_QPainter_PixmapFragmentHints, &a1, &a1State))
        {
            QPainter::PixmapFragmentHints *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPainter::PixmapFragmentHints((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QPainter_PixmapFragmentHints,a0State);
            sipReleaseType(a1,sipType_QPainter_PixmapFragmentHints,a1State);

            return sipConvertFromNewType(sipRes,sipType_QPainter_PixmapFragmentHints,NULL);
        }
    }

    {
        QPainter::PixmapFragmentHints * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QPainter_PixmapFragmentHints, &a0, &a0State, &a1))
        {
            QPainter::PixmapFragmentHints *sipRes = 0;

#line 320 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = new QPainter::PixmapFragmentHints(*a0 ^ a1);
#line 236 "sipQtGuiQPainterPixmapFragmentHints.cpp"
            sipReleaseType(a0,sipType_QPainter_PixmapFragmentHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPainter_PixmapFragmentHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QPainter_PixmapFragmentHints___or__(PyObject *,PyObject *);}
static PyObject *slot_QPainter_PixmapFragmentHints___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QPainter::PixmapFragmentHints * a0;
        int a0State = 0;
        QPainter::PixmapFragmentHints * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QPainter_PixmapFragmentHints, &a0, &a0State, sipType_QPainter_PixmapFragmentHints, &a1, &a1State))
        {
            QPainter::PixmapFragmentHints *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPainter::PixmapFragmentHints((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QPainter_PixmapFragmentHints,a0State);
            sipReleaseType(a1,sipType_QPainter_PixmapFragmentHints,a1State);

            return sipConvertFromNewType(sipRes,sipType_QPainter_PixmapFragmentHints,NULL);
        }
    }

    {
        QPainter::PixmapFragmentHints * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QPainter_PixmapFragmentHints, &a0, &a0State, &a1))
        {
            QPainter::PixmapFragmentHints *sipRes = 0;

#line 315 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = new QPainter::PixmapFragmentHints(*a0 | a1);
#line 288 "sipQtGuiQPainterPixmapFragmentHints.cpp"
            sipReleaseType(a0,sipType_QPainter_PixmapFragmentHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPainter_PixmapFragmentHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QPainter_PixmapFragmentHints___int__(PyObject *);}
static PyObject *slot_QPainter_PixmapFragmentHints___int__(PyObject *sipSelf)
{
    QPainter::PixmapFragmentHints *sipCpp = reinterpret_cast<QPainter::PixmapFragmentHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPainter_PixmapFragmentHints));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }
}


extern "C" {static PyObject *slot_QPainter_PixmapFragmentHints___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QPainter_PixmapFragmentHints___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPainter_PixmapFragmentHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QPainter::PixmapFragmentHints *sipCpp = reinterpret_cast<QPainter::PixmapFragmentHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPainter_PixmapFragmentHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QPainter::PixmapFragmentHints * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QPainter_PixmapFragmentHints, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QPainter::PixmapFragmentHints::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QPainter_PixmapFragmentHints,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QPainter_PixmapFragmentHints___ior__(PyObject *,PyObject *);}
static PyObject *slot_QPainter_PixmapFragmentHints___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPainter_PixmapFragmentHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QPainter::PixmapFragmentHints *sipCpp = reinterpret_cast<QPainter::PixmapFragmentHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPainter_PixmapFragmentHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QPainter::PixmapFragmentHints * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QPainter_PixmapFragmentHints, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QPainter::PixmapFragmentHints::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QPainter_PixmapFragmentHints,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QPainter_PixmapFragmentHints___iand__(PyObject *,PyObject *);}
static PyObject *slot_QPainter_PixmapFragmentHints___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPainter_PixmapFragmentHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QPainter::PixmapFragmentHints *sipCpp = reinterpret_cast<QPainter::PixmapFragmentHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPainter_PixmapFragmentHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QPainter::PixmapFragmentHints::operator&=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPainter_PixmapFragmentHints(void *, const sipTypeDef *);}
static void *cast_QPainter_PixmapFragmentHints(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QPainter_PixmapFragmentHints)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPainter_PixmapFragmentHints(void *, int);}
static void release_QPainter_PixmapFragmentHints(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QPainter::PixmapFragmentHints *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QPainter_PixmapFragmentHints(void *, SIP_SSIZE_T, const void *);}
static void assign_QPainter_PixmapFragmentHints(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPainter::PixmapFragmentHints *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPainter::PixmapFragmentHints *>(sipSrc);
}


extern "C" {static void *array_QPainter_PixmapFragmentHints(SIP_SSIZE_T);}
static void *array_QPainter_PixmapFragmentHints(SIP_SSIZE_T sipNrElem)
{
    return new QPainter::PixmapFragmentHints[sipNrElem];
}


extern "C" {static void *copy_QPainter_PixmapFragmentHints(const void *, SIP_SSIZE_T);}
static void *copy_QPainter_PixmapFragmentHints(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPainter::PixmapFragmentHints(reinterpret_cast<const QPainter::PixmapFragmentHints *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPainter_PixmapFragmentHints(sipSimpleWrapper *);}
static void dealloc_QPainter_PixmapFragmentHints(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPainter_PixmapFragmentHints(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QPainter_PixmapFragmentHints(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QPainter_PixmapFragmentHints(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QPainter::PixmapFragmentHints *sipCpp = 0;

    {
        const QPainter::PixmapFragmentHints * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QPainter_PixmapFragmentHints, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QPainter::PixmapFragmentHints(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QPainter::PixmapFragmentHints *>(a0),sipType_QPainter_PixmapFragmentHints,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QPainter::PixmapFragmentHints(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QPainter::PixmapFragmentHints();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QPainter_PixmapFragmentHints(PyObject *, void **, int *, PyObject *);}
static int convertTo_QPainter_PixmapFragmentHints(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QPainter::PixmapFragmentHints **sipCppPtr = reinterpret_cast<QPainter::PixmapFragmentHints **>(sipCppPtrV);

#line 341 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QPainter::PixmapFragmentHints is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QPainter_PixmapFragmentHint)) ||
            sipCanConvertToType(sipPy, sipType_QPainter_PixmapFragmentHints, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QPainter_PixmapFragmentHint)))
{
    *sipCppPtr = new QPainter::PixmapFragmentHints(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QPainter::PixmapFragmentHints *>(sipConvertToType(sipPy, sipType_QPainter_PixmapFragmentHints, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 581 "sipQtGuiQPainterPixmapFragmentHints.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QPainter_PixmapFragmentHints[] = {
    {(void *)slot_QPainter_PixmapFragmentHints___bool__, bool_slot},
    {(void *)slot_QPainter_PixmapFragmentHints___ne__, ne_slot},
    {(void *)slot_QPainter_PixmapFragmentHints___eq__, eq_slot},
    {(void *)slot_QPainter_PixmapFragmentHints___invert__, invert_slot},
    {(void *)slot_QPainter_PixmapFragmentHints___and__, and_slot},
    {(void *)slot_QPainter_PixmapFragmentHints___xor__, xor_slot},
    {(void *)slot_QPainter_PixmapFragmentHints___or__, or_slot},
    {(void *)slot_QPainter_PixmapFragmentHints___int__, int_slot},
    {(void *)slot_QPainter_PixmapFragmentHints___ixor__, ixor_slot},
    {(void *)slot_QPainter_PixmapFragmentHints___ior__, ior_slot},
    {(void *)slot_QPainter_PixmapFragmentHints___iand__, iand_slot},
    {0, (sipPySlotType)0}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QPainter_PixmapFragmentHints = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QPainter__PixmapFragmentHints,
        {0}
    },
    {
        sipNameNr_PixmapFragmentHints,
        {367, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QPainter_PixmapFragmentHints,
    init_QPainter_PixmapFragmentHints,
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
    dealloc_QPainter_PixmapFragmentHints,
    assign_QPainter_PixmapFragmentHints,
    array_QPainter_PixmapFragmentHints,
    copy_QPainter_PixmapFragmentHints,
    release_QPainter_PixmapFragmentHints,
    cast_QPainter_PixmapFragmentHints,
    convertTo_QPainter_PixmapFragmentHints,
    0,
    0
},
    0,
    1,
    0
};

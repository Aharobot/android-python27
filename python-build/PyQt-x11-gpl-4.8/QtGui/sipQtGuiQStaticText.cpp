/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:16 2012
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

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qstatictext.sip"
#include <qstatictext.h>
#line 39 "sipQtGuiQStaticText.cpp"

#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 43 "sipQtGuiQStaticText.cpp"
#line 44 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qtransform.sip"
#include <qtransform.h>
#line 46 "sipQtGuiQStaticText.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qfont.sip"
#include <qfont.h>
#line 49 "sipQtGuiQStaticText.cpp"
#line 98 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qsize.sip"
#include <qsize.h>
#line 52 "sipQtGuiQStaticText.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qtextoption.sip"
#include <qtextoption.h>
#line 107 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qtextoption.sip"
#include <qtextoption.h>
#line 57 "sipQtGuiQStaticText.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 60 "sipQtGuiQStaticText.cpp"


extern "C" {static PyObject *meth_QStaticText_setText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QStaticText_setText(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QStaticText *sipCpp;

        static const char *sipKwdList[] = {
            sipName_text,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1", &sipSelf, sipType_QStaticText, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setText(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_setText, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QStaticText_text(PyObject *, PyObject *);}
static PyObject *meth_QStaticText_text(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QStaticText *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStaticText, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->text());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_text, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QStaticText_setTextFormat(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QStaticText_setTextFormat(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::TextFormat a0;
        QStaticText *sipCpp;

        static const char *sipKwdList[] = {
            sipName_textFormat,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BE", &sipSelf, sipType_QStaticText, &sipCpp, sipType_Qt_TextFormat, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setTextFormat(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_setTextFormat, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QStaticText_textFormat(PyObject *, PyObject *);}
static PyObject *meth_QStaticText_textFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QStaticText *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStaticText, &sipCpp))
        {
            Qt::TextFormat sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->textFormat();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_TextFormat);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_textFormat, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QStaticText_setTextWidth(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QStaticText_setTextWidth(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QStaticText *sipCpp;

        static const char *sipKwdList[] = {
            sipName_textWidth,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bd", &sipSelf, sipType_QStaticText, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setTextWidth(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_setTextWidth, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QStaticText_textWidth(PyObject *, PyObject *);}
static PyObject *meth_QStaticText_textWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QStaticText *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStaticText, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->textWidth();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_textWidth, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QStaticText_setTextOption(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QStaticText_setTextOption(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextOption * a0;
        QStaticText *sipCpp;

        static const char *sipKwdList[] = {
            sipName_textOption,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9", &sipSelf, sipType_QStaticText, &sipCpp, sipType_QTextOption, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setTextOption(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_setTextOption, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QStaticText_textOption(PyObject *, PyObject *);}
static PyObject *meth_QStaticText_textOption(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QStaticText *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStaticText, &sipCpp))
        {
            QTextOption *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextOption(sipCpp->textOption());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextOption,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_textOption, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QStaticText_size(PyObject *, PyObject *);}
static PyObject *meth_QStaticText_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QStaticText *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStaticText, &sipCpp))
        {
            QSizeF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSizeF(sipCpp->size());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_size, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QStaticText_prepare(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QStaticText_prepare(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QTransform& a0def = QTransform();
        const QTransform * a0 = &a0def;
        const QFont& a1def = QFont();
        const QFont * a1 = &a1def;
        QStaticText *sipCpp;

        static const char *sipKwdList[] = {
            sipName_matrix,
            sipName_font,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J9J9", &sipSelf, sipType_QStaticText, &sipCpp, sipType_QTransform, &a0, sipType_QFont, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->prepare(*a0,*a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_prepare, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QStaticText_setPerformanceHint(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QStaticText_setPerformanceHint(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QStaticText::PerformanceHint a0;
        QStaticText *sipCpp;

        static const char *sipKwdList[] = {
            sipName_performanceHint,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BE", &sipSelf, sipType_QStaticText, &sipCpp, sipType_QStaticText_PerformanceHint, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPerformanceHint(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_setPerformanceHint, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QStaticText_performanceHint(PyObject *, PyObject *);}
static PyObject *meth_QStaticText_performanceHint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QStaticText *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStaticText, &sipCpp))
        {
            QStaticText::PerformanceHint sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->performanceHint();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QStaticText_PerformanceHint);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_performanceHint, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_QStaticText___ne__(PyObject *,PyObject *);}
static PyObject *slot_QStaticText___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QStaticText *sipCpp = reinterpret_cast<QStaticText *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStaticText));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStaticText * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QStaticText, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QStaticText::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QStaticText,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStaticText___eq__(PyObject *,PyObject *);}
static PyObject *slot_QStaticText___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QStaticText *sipCpp = reinterpret_cast<QStaticText *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStaticText));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStaticText * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QStaticText, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QStaticText::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QStaticText,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStaticText(void *, const sipTypeDef *);}
static void *cast_QStaticText(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QStaticText)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStaticText(void *, int);}
static void release_QStaticText(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStaticText *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStaticText(void *, SIP_SSIZE_T, const void *);}
static void assign_QStaticText(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStaticText *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStaticText *>(sipSrc);
}


extern "C" {static void *array_QStaticText(SIP_SSIZE_T);}
static void *array_QStaticText(SIP_SSIZE_T sipNrElem)
{
    return new QStaticText[sipNrElem];
}


extern "C" {static void *copy_QStaticText(const void *, SIP_SSIZE_T);}
static void *copy_QStaticText(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStaticText(reinterpret_cast<const QStaticText *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStaticText(sipSimpleWrapper *);}
static void dealloc_QStaticText(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStaticText(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QStaticText(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QStaticText(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStaticText *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStaticText();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QString * a0;
        int a0State = 0;

        static const char *sipKwdList[] = {
            sipName_text,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1", sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStaticText(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        const QStaticText * a0;

        static const char *sipKwdList[] = {
            sipName_other,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9", sipType_QStaticText, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStaticText(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QStaticText[] = {
    {(void *)slot_QStaticText___ne__, ne_slot},
    {(void *)slot_QStaticText___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QStaticText[] = {
    {SIP_MLNAME_CAST(sipName_performanceHint), meth_QStaticText_performanceHint, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_prepare), (PyCFunction)meth_QStaticText_prepare, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_setPerformanceHint), (PyCFunction)meth_QStaticText_setPerformanceHint, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_setText), (PyCFunction)meth_QStaticText_setText, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_setTextFormat), (PyCFunction)meth_QStaticText_setTextFormat, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_setTextOption), (PyCFunction)meth_QStaticText_setTextOption, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_setTextWidth), (PyCFunction)meth_QStaticText_setTextWidth, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_size), meth_QStaticText_size, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_text), meth_QStaticText_text, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_textFormat), meth_QStaticText_textFormat, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_textOption), meth_QStaticText_textOption, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_textWidth), meth_QStaticText_textWidth, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QStaticText[] = {
    {sipName_AggressiveCaching, QStaticText::AggressiveCaching, 460},
    {sipName_ModerateCaching, QStaticText::ModerateCaching, 460},
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QStaticText = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QStaticText,
        {0}
    },
    {
        sipNameNr_QStaticText,
        {0, 0, 1},
        12, methods_QStaticText,
        2, enummembers_QStaticText,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QStaticText,
    init_QStaticText,
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
    dealloc_QStaticText,
    assign_QStaticText,
    array_QStaticText,
    copy_QStaticText,
    release_QStaticText,
    cast_QStaticText,
    0,
    0,
    0
},
    0,
    0,
    0
};
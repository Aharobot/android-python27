/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:04:00 2012
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

#include "sipAPIQtXml.h"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 39 "sipQtXmlQDomImplementation.cpp"

#line 211 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 43 "sipQtXmlQDomImplementation.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 46 "sipQtXmlQDomImplementation.cpp"
#line 193 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 49 "sipQtXmlQDomImplementation.cpp"


extern "C" {static PyObject *meth_QDomImplementation_hasFeature(PyObject *, PyObject *);}
static PyObject *meth_QDomImplementation_hasFeature(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        QDomImplementation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QDomImplementation, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasFeature(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomImplementation, sipName_hasFeature, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDomImplementation_createDocumentType(PyObject *, PyObject *);}
static PyObject *meth_QDomImplementation_createDocumentType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        const QString * a2;
        int a2State = 0;
        QDomImplementation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1J1", &sipSelf, sipType_QDomImplementation, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State))
        {
            QDomDocumentType *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDomDocumentType(sipCpp->createDocumentType(*a0,*a1,*a2));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);

            return sipConvertFromNewType(sipRes,sipType_QDomDocumentType,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomImplementation, sipName_createDocumentType, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDomImplementation_createDocument(PyObject *, PyObject *);}
static PyObject *meth_QDomImplementation_createDocument(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        const QDomDocumentType * a2;
        QDomImplementation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1J9", &sipSelf, sipType_QDomImplementation, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QDomDocumentType, &a2))
        {
            QDomDocument *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDomDocument(sipCpp->createDocument(*a0,*a1,*a2));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDomDocument,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomImplementation, sipName_createDocument, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDomImplementation_isNull(PyObject *, PyObject *);}
static PyObject *meth_QDomImplementation_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDomImplementation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDomImplementation, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomImplementation, sipName_isNull, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDomImplementation_invalidDataPolicy(PyObject *, PyObject *);}
static PyObject *meth_QDomImplementation_invalidDataPolicy(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QDomImplementation::InvalidDataPolicy sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QDomImplementation::invalidDataPolicy();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QDomImplementation_InvalidDataPolicy);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomImplementation, sipName_invalidDataPolicy, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDomImplementation_setInvalidDataPolicy(PyObject *, PyObject *);}
static PyObject *meth_QDomImplementation_setInvalidDataPolicy(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDomImplementation::InvalidDataPolicy a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QDomImplementation_InvalidDataPolicy, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            QDomImplementation::setInvalidDataPolicy(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomImplementation, sipName_setInvalidDataPolicy, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_QDomImplementation___ne__(PyObject *,PyObject *);}
static PyObject *slot_QDomImplementation___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QDomImplementation *sipCpp = reinterpret_cast<QDomImplementation *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDomImplementation));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDomImplementation * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDomImplementation, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QDomImplementation::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtXml,ne_slot,sipType_QDomImplementation,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDomImplementation___eq__(PyObject *,PyObject *);}
static PyObject *slot_QDomImplementation___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QDomImplementation *sipCpp = reinterpret_cast<QDomImplementation *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDomImplementation));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDomImplementation * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDomImplementation, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QDomImplementation::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtXml,eq_slot,sipType_QDomImplementation,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDomImplementation(void *, const sipTypeDef *);}
static void *cast_QDomImplementation(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDomImplementation)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDomImplementation(void *, int);}
static void release_QDomImplementation(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QDomImplementation *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QDomImplementation(void *, SIP_SSIZE_T, const void *);}
static void assign_QDomImplementation(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDomImplementation *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDomImplementation *>(sipSrc);
}


extern "C" {static void *array_QDomImplementation(SIP_SSIZE_T);}
static void *array_QDomImplementation(SIP_SSIZE_T sipNrElem)
{
    return new QDomImplementation[sipNrElem];
}


extern "C" {static void *copy_QDomImplementation(const void *, SIP_SSIZE_T);}
static void *copy_QDomImplementation(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDomImplementation(reinterpret_cast<const QDomImplementation *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDomImplementation(sipSimpleWrapper *);}
static void dealloc_QDomImplementation(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDomImplementation(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QDomImplementation(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QDomImplementation(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDomImplementation *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDomImplementation();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QDomImplementation * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDomImplementation, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDomImplementation(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDomImplementation[] = {
    {(void *)slot_QDomImplementation___ne__, ne_slot},
    {(void *)slot_QDomImplementation___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QDomImplementation[] = {
    {SIP_MLNAME_CAST(sipName_createDocument), meth_QDomImplementation_createDocument, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_createDocumentType), meth_QDomImplementation_createDocumentType, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_hasFeature), meth_QDomImplementation_hasFeature, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_invalidDataPolicy), meth_QDomImplementation_invalidDataPolicy, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QDomImplementation_isNull, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setInvalidDataPolicy), meth_QDomImplementation_setInvalidDataPolicy, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QDomImplementation[] = {
    {sipName_AcceptInvalidChars, QDomImplementation::AcceptInvalidChars, 11},
    {sipName_DropInvalidChars, QDomImplementation::DropInvalidChars, 11},
    {sipName_ReturnNullNode, QDomImplementation::ReturnNullNode, 11},
};


pyqt4ClassTypeDef sipTypeDef_QtXml_QDomImplementation = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QDomImplementation,
        {0}
    },
    {
        sipNameNr_QDomImplementation,
        {0, 0, 1},
        6, methods_QDomImplementation,
        3, enummembers_QDomImplementation,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QDomImplementation,
    init_QDomImplementation,
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
    dealloc_QDomImplementation,
    assign_QDomImplementation,
    array_QDomImplementation,
    copy_QDomImplementation,
    release_QDomImplementation,
    cast_QDomImplementation,
    0,
    0,
    0
},
    0,
    0,
    0
};

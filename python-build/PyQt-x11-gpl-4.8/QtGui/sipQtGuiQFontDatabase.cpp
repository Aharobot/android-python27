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

#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qfontdatabase.sip"
#include <qfontdatabase.h>
#line 39 "sipQtGuiQFontDatabase.cpp"

#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 43 "sipQtGuiQFontDatabase.cpp"
#line 42 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 46 "sipQtGuiQFontDatabase.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 49 "sipQtGuiQFontDatabase.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qfont.sip"
#include <qfont.h>
#line 52 "sipQtGuiQFontDatabase.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qfontinfo.sip"
#include <qfontinfo.h>
#line 55 "sipQtGuiQFontDatabase.cpp"
#line 632 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 58 "sipQtGuiQFontDatabase.cpp"
#line 133 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qfontdatabase.sip"
#include <qfontdatabase.h>
#include <qlist.h>
#line 62 "sipQtGuiQFontDatabase.cpp"


extern "C" {static PyObject *meth_QFontDatabase_standardSizes(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_standardSizes(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QList<int> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<int>(QFontDatabase::standardSizes());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_1800,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_standardSizes, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontDatabase_writingSystems(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_writingSystems(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontDatabase, &sipCpp))
        {
            QList<QFontDatabase::WritingSystem> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QFontDatabase::WritingSystem>(sipCpp->writingSystems());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QFontDatabase_WritingSystem,NULL);
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        QFontDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QList<QFontDatabase::WritingSystem> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QFontDatabase::WritingSystem>(sipCpp->writingSystems(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QList_0100QFontDatabase_WritingSystem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_writingSystems, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontDatabase_families(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_families(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QFontDatabase::WritingSystem a0 = QFontDatabase::Any;
        QFontDatabase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_writingSystem,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|E", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QFontDatabase_WritingSystem, &a0))
        {
            QStringList *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringList(sipCpp->families(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_families, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontDatabase_styles(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_styles(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QFontDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QStringList *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringList(sipCpp->styles(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_styles, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontDatabase_pointSizes(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_pointSizes(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        const QString& a1def = QString();
        const QString * a1 = &a1def;
        int a1State = 0;
        QFontDatabase *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_style,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|J1", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            QList<int> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<int>(sipCpp->pointSizes(*a0,*a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QList_1800,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_pointSizes, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontDatabase_smoothSizes(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_smoothSizes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        QFontDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            QList<int> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<int>(sipCpp->smoothSizes(*a0,*a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QList_1800,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_smoothSizes, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontDatabase_styleString(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_styleString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFont * a0;
        QFontDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QFont, &a0))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->styleString(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    {
        const QFontInfo * a0;
        QFontDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QFontInfo, &a0))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->styleString(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_styleString, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontDatabase_font(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_font(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        int a2;
        QFontDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1i", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, &a2))
        {
            QFont *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QFont(sipCpp->font(*a0,*a1,a2));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QFont,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_font, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontDatabase_isBitmapScalable(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_isBitmapScalable(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        const QString& a1def = QString();
        const QString * a1 = &a1def;
        int a1State = 0;
        QFontDatabase *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_style,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|J1", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isBitmapScalable(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_isBitmapScalable, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontDatabase_isSmoothlyScalable(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_isSmoothlyScalable(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        const QString& a1def = QString();
        const QString * a1 = &a1def;
        int a1State = 0;
        QFontDatabase *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_style,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|J1", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isSmoothlyScalable(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_isSmoothlyScalable, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontDatabase_isScalable(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_isScalable(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        const QString& a1def = QString();
        const QString * a1 = &a1def;
        int a1State = 0;
        QFontDatabase *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_style,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|J1", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isScalable(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_isScalable, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontDatabase_isFixedPitch(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_isFixedPitch(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        const QString& a1def = QString();
        const QString * a1 = &a1def;
        int a1State = 0;
        QFontDatabase *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_style,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|J1", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isFixedPitch(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_isFixedPitch, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontDatabase_italic(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_italic(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        QFontDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->italic(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_italic, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontDatabase_bold(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_bold(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        QFontDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->bold(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_bold, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontDatabase_weight(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_weight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        QFontDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->weight(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_weight, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontDatabase_writingSystemName(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_writingSystemName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontDatabase::WritingSystem a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QFontDatabase_WritingSystem, &a0))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(QFontDatabase::writingSystemName(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_writingSystemName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontDatabase_writingSystemSample(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_writingSystemSample(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontDatabase::WritingSystem a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QFontDatabase_WritingSystem, &a0))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(QFontDatabase::writingSystemSample(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_writingSystemSample, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontDatabase_addApplicationFont(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_addApplicationFont(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QFontDatabase::addApplicationFont(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_addApplicationFont, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontDatabase_addApplicationFontFromData(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_addApplicationFontFromData(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QByteArray, &a0, &a0State))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QFontDatabase::addApplicationFontFromData(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_addApplicationFontFromData, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontDatabase_applicationFontFamilies(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_applicationFontFamilies(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            QStringList *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringList(QFontDatabase::applicationFontFamilies(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_applicationFontFamilies, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontDatabase_removeApplicationFont(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_removeApplicationFont(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QFontDatabase::removeApplicationFont(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_removeApplicationFont, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontDatabase_removeAllApplicationFonts(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_removeAllApplicationFonts(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QFontDatabase::removeAllApplicationFonts();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_removeAllApplicationFonts, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontDatabase_supportsThreadedFontRendering(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_supportsThreadedFontRendering(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QFontDatabase::supportsThreadedFontRendering();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_supportsThreadedFontRendering, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QFontDatabase(void *, const sipTypeDef *);}
static void *cast_QFontDatabase(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QFontDatabase)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QFontDatabase(void *, int);}
static void release_QFontDatabase(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QFontDatabase *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QFontDatabase(void *, SIP_SSIZE_T, const void *);}
static void assign_QFontDatabase(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QFontDatabase *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QFontDatabase *>(sipSrc);
}


extern "C" {static void *array_QFontDatabase(SIP_SSIZE_T);}
static void *array_QFontDatabase(SIP_SSIZE_T sipNrElem)
{
    return new QFontDatabase[sipNrElem];
}


extern "C" {static void *copy_QFontDatabase(const void *, SIP_SSIZE_T);}
static void *copy_QFontDatabase(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QFontDatabase(reinterpret_cast<const QFontDatabase *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QFontDatabase(sipSimpleWrapper *);}
static void dealloc_QFontDatabase(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QFontDatabase(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QFontDatabase(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QFontDatabase(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QFontDatabase *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QFontDatabase();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QFontDatabase * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QFontDatabase, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QFontDatabase(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QFontDatabase[] = {
    {SIP_MLNAME_CAST(sipName_addApplicationFont), meth_QFontDatabase_addApplicationFont, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_addApplicationFontFromData), meth_QFontDatabase_addApplicationFontFromData, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_applicationFontFamilies), meth_QFontDatabase_applicationFontFamilies, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_bold), meth_QFontDatabase_bold, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_families), (PyCFunction)meth_QFontDatabase_families, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_font), meth_QFontDatabase_font, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isBitmapScalable), (PyCFunction)meth_QFontDatabase_isBitmapScalable, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_isFixedPitch), (PyCFunction)meth_QFontDatabase_isFixedPitch, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_isScalable), (PyCFunction)meth_QFontDatabase_isScalable, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_isSmoothlyScalable), (PyCFunction)meth_QFontDatabase_isSmoothlyScalable, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_italic), meth_QFontDatabase_italic, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_pointSizes), (PyCFunction)meth_QFontDatabase_pointSizes, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_removeAllApplicationFonts), meth_QFontDatabase_removeAllApplicationFonts, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_removeApplicationFont), meth_QFontDatabase_removeApplicationFont, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_smoothSizes), meth_QFontDatabase_smoothSizes, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_standardSizes), meth_QFontDatabase_standardSizes, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_styleString), meth_QFontDatabase_styleString, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_styles), meth_QFontDatabase_styles, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_supportsThreadedFontRendering), meth_QFontDatabase_supportsThreadedFontRendering, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_weight), meth_QFontDatabase_weight, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_writingSystemName), meth_QFontDatabase_writingSystemName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_writingSystemSample), meth_QFontDatabase_writingSystemSample, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_writingSystems), meth_QFontDatabase_writingSystems, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QFontDatabase[] = {
    {sipName_Any, QFontDatabase::Any, 129},
    {sipName_Arabic, QFontDatabase::Arabic, 129},
    {sipName_Armenian, QFontDatabase::Armenian, 129},
    {sipName_Bengali, QFontDatabase::Bengali, 129},
    {sipName_Cyrillic, QFontDatabase::Cyrillic, 129},
    {sipName_Devanagari, QFontDatabase::Devanagari, 129},
    {sipName_Georgian, QFontDatabase::Georgian, 129},
    {sipName_Greek, QFontDatabase::Greek, 129},
    {sipName_Gujarati, QFontDatabase::Gujarati, 129},
    {sipName_Gurmukhi, QFontDatabase::Gurmukhi, 129},
    {sipName_Hebrew, QFontDatabase::Hebrew, 129},
    {sipName_Japanese, QFontDatabase::Japanese, 129},
    {sipName_Kannada, QFontDatabase::Kannada, 129},
    {sipName_Khmer, QFontDatabase::Khmer, 129},
    {sipName_Korean, QFontDatabase::Korean, 129},
    {sipName_Lao, QFontDatabase::Lao, 129},
    {sipName_Latin, QFontDatabase::Latin, 129},
    {sipName_Malayalam, QFontDatabase::Malayalam, 129},
    {sipName_Myanmar, QFontDatabase::Myanmar, 129},
    {sipName_Nko, QFontDatabase::Nko, 129},
    {sipName_Ogham, QFontDatabase::Ogham, 129},
    {sipName_Oriya, QFontDatabase::Oriya, 129},
    {sipName_Other, QFontDatabase::Other, 129},
    {sipName_Runic, QFontDatabase::Runic, 129},
    {sipName_SimplifiedChinese, QFontDatabase::SimplifiedChinese, 129},
    {sipName_Sinhala, QFontDatabase::Sinhala, 129},
    {sipName_Symbol, QFontDatabase::Symbol, 129},
    {sipName_Syriac, QFontDatabase::Syriac, 129},
    {sipName_Tamil, QFontDatabase::Tamil, 129},
    {sipName_Telugu, QFontDatabase::Telugu, 129},
    {sipName_Thaana, QFontDatabase::Thaana, 129},
    {sipName_Thai, QFontDatabase::Thai, 129},
    {sipName_Tibetan, QFontDatabase::Tibetan, 129},
    {sipName_TraditionalChinese, QFontDatabase::TraditionalChinese, 129},
    {sipName_Vietnamese, QFontDatabase::Vietnamese, 129},
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QFontDatabase = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QFontDatabase,
        {0}
    },
    {
        sipNameNr_QFontDatabase,
        {0, 0, 1},
        23, methods_QFontDatabase,
        35, enummembers_QFontDatabase,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QFontDatabase,
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
    dealloc_QFontDatabase,
    assign_QFontDatabase,
    array_QFontDatabase,
    copy_QFontDatabase,
    release_QFontDatabase,
    cast_QFontDatabase,
    0,
    0,
    0
},
    0,
    0,
    0
};

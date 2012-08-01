/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:18 2012
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

#line 96 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qlayoutitem.sip"
#include <qlayoutitem.h>
#line 39 "sipQtGuiQWidgetItem.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 43 "sipQtGuiQWidgetItem.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qrect.sip"
#include <qrect.h>
#line 46 "sipQtGuiQWidgetItem.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 49 "sipQtGuiQWidgetItem.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qsize.sip"
#include <qsize.h>
#line 52 "sipQtGuiQWidgetItem.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qsizepolicy.sip"
#include <qsizepolicy.h>
#line 55 "sipQtGuiQWidgetItem.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 58 "sipQtGuiQWidgetItem.cpp"
#line 77 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qlayoutitem.sip"
#include <qlayoutitem.h>
#line 61 "sipQtGuiQWidgetItem.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qlayout.sip"
#include <qlayout.h>
#line 64 "sipQtGuiQWidgetItem.cpp"


class sipQWidgetItem : public QWidgetItem
{
public:
    sipQWidgetItem(QWidget *);
    virtual ~sipQWidgetItem();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QSize sizeHint() const;
    QSize minimumSize() const;
    QSize maximumSize() const;
    Qt::Orientations expandingDirections() const;
    bool isEmpty() const;
    void setGeometry(const QRect&);
    QRect geometry() const;
    QWidget * widget();
    bool hasHeightForWidth() const;
    int heightForWidth(int) const;
    int minimumHeightForWidth(int) const;
    void invalidate();
    QLayout * layout();
    QSpacerItem * spacerItem();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQWidgetItem(const sipQWidgetItem &);
    sipQWidgetItem &operator = (const sipQWidgetItem &);

    char sipPyMethods[14];
};

sipQWidgetItem::sipQWidgetItem(QWidget *a0): QWidgetItem(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQWidgetItem::~sipQWidgetItem()
{
    sipCommonDtor(sipPySelf);
}

QSize sipQWidgetItem::sizeHint() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_sizeHint);

    if (!meth)
        return QWidgetItem::sizeHint();

    extern QSize sipVH_QtGui_5(sip_gilstate_t,PyObject *);

    return sipVH_QtGui_5(sipGILState,meth);
}

QSize sipQWidgetItem::minimumSize() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_minimumSize);

    if (!meth)
        return QWidgetItem::minimumSize();

    extern QSize sipVH_QtGui_5(sip_gilstate_t,PyObject *);

    return sipVH_QtGui_5(sipGILState,meth);
}

QSize sipQWidgetItem::maximumSize() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_maximumSize);

    if (!meth)
        return QWidgetItem::maximumSize();

    extern QSize sipVH_QtGui_5(sip_gilstate_t,PyObject *);

    return sipVH_QtGui_5(sipGILState,meth);
}

Qt::Orientations sipQWidgetItem::expandingDirections() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,NULL,sipName_expandingDirections);

    if (!meth)
        return QWidgetItem::expandingDirections();

    extern Qt::Orientations sipVH_QtGui_155(sip_gilstate_t,PyObject *);

    return sipVH_QtGui_155(sipGILState,meth);
}

bool sipQWidgetItem::isEmpty() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,NULL,sipName_isEmpty);

    if (!meth)
        return QWidgetItem::isEmpty();

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t,PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtGui_QtCore->em_virthandlers[7]))(sipGILState,meth);
}

void sipQWidgetItem::setGeometry(const QRect& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_setGeometry);

    if (!meth)
    {
        QWidgetItem::setGeometry(a0);
        return;
    }

    extern void sipVH_QtGui_102(sip_gilstate_t,PyObject *,const QRect&);

    sipVH_QtGui_102(sipGILState,meth,a0);
}

QRect sipQWidgetItem::geometry() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,NULL,sipName_geometry);

    if (!meth)
        return QWidgetItem::geometry();

    extern QRect sipVH_QtGui_154(sip_gilstate_t,PyObject *);

    return sipVH_QtGui_154(sipGILState,meth);
}

QWidget * sipQWidgetItem::widget()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_widget);

    if (!meth)
        return QWidgetItem::widget();

    extern QWidget * sipVH_QtGui_106(sip_gilstate_t,PyObject *);

    return sipVH_QtGui_106(sipGILState,meth);
}

bool sipQWidgetItem::hasHeightForWidth() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,NULL,sipName_hasHeightForWidth);

    if (!meth)
        return QWidgetItem::hasHeightForWidth();

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t,PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtGui_QtCore->em_virthandlers[7]))(sipGILState,meth);
}

int sipQWidgetItem::heightForWidth(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,NULL,sipName_heightForWidth);

    if (!meth)
        return QWidgetItem::heightForWidth(a0);

    extern int sipVH_QtGui_28(sip_gilstate_t,PyObject *,int);

    return sipVH_QtGui_28(sipGILState,meth,a0);
}

int sipQWidgetItem::minimumHeightForWidth(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,NULL,sipName_minimumHeightForWidth);

    if (!meth)
        return QLayoutItem::minimumHeightForWidth(a0);

    extern int sipVH_QtGui_28(sip_gilstate_t,PyObject *,int);

    return sipVH_QtGui_28(sipGILState,meth,a0);
}

void sipQWidgetItem::invalidate()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,NULL,sipName_invalidate);

    if (!meth)
    {
        QLayoutItem::invalidate();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t,PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtGui_QtCore->em_virthandlers[11]))(sipGILState,meth);
}

QLayout * sipQWidgetItem::layout()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,NULL,sipName_layout);

    if (!meth)
        return QLayoutItem::layout();

    extern QLayout * sipVH_QtGui_157(sip_gilstate_t,PyObject *);

    return sipVH_QtGui_157(sipGILState,meth);
}

QSpacerItem * sipQWidgetItem::spacerItem()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[13],sipPySelf,NULL,sipName_spacerItem);

    if (!meth)
        return QLayoutItem::spacerItem();

    extern QSpacerItem * sipVH_QtGui_156(sip_gilstate_t,PyObject *);

    return sipVH_QtGui_156(sipGILState,meth);
}


extern "C" {static PyObject *meth_QWidgetItem_sizeHint(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_sizeHint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
            QSize *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize((sipSelfWasArg ? sipCpp->QWidgetItem::sizeHint() : sipCpp->sizeHint()));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_sizeHint, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWidgetItem_minimumSize(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_minimumSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
            QSize *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize((sipSelfWasArg ? sipCpp->QWidgetItem::minimumSize() : sipCpp->minimumSize()));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_minimumSize, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWidgetItem_maximumSize(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_maximumSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
            QSize *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize((sipSelfWasArg ? sipCpp->QWidgetItem::maximumSize() : sipCpp->maximumSize()));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_maximumSize, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWidgetItem_expandingDirections(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_expandingDirections(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
            Qt::Orientations *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::Orientations((sipSelfWasArg ? sipCpp->QWidgetItem::expandingDirections() : sipCpp->expandingDirections()));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_Orientations,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_expandingDirections, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWidgetItem_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QWidgetItem::isEmpty() : sipCpp->isEmpty());
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_isEmpty, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWidgetItem_setGeometry(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_setGeometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QRect * a0;
        QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QWidgetItem, &sipCpp, sipType_QRect, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QWidgetItem::setGeometry(*a0) : sipCpp->setGeometry(*a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_setGeometry, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWidgetItem_geometry(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_geometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
            QRect *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRect((sipSelfWasArg ? sipCpp->QWidgetItem::geometry() : sipCpp->geometry()));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_geometry, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWidgetItem_widget(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_widget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
            QWidget *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QWidgetItem::widget() : sipCpp->widget());
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_widget, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWidgetItem_hasHeightForWidth(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_hasHeightForWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QWidgetItem::hasHeightForWidth() : sipCpp->hasHeightForWidth());
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_hasHeightForWidth, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWidgetItem_heightForWidth(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_heightForWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QWidgetItem, &sipCpp, &a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QWidgetItem::heightForWidth(a0) : sipCpp->heightForWidth(a0));
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_heightForWidth, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWidgetItem(void *, const sipTypeDef *);}
static void *cast_QWidgetItem(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QWidgetItem)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QLayoutItem)->ctd_cast((QLayoutItem *)(QWidgetItem *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWidgetItem(void *, int);}
static void release_QWidgetItem(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQWidgetItem *>(sipCppV);
    else
        delete reinterpret_cast<QWidgetItem *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QWidgetItem(sipSimpleWrapper *);}
static void dealloc_QWidgetItem(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQWidgetItem *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QWidgetItem(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QWidgetItem(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QWidgetItem(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQWidgetItem *sipCpp = 0;

    {
        QWidget * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QWidget, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQWidgetItem(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QWidgetItem[] = {{272, 255, 1}};


static PyMethodDef methods_QWidgetItem[] = {
    {SIP_MLNAME_CAST(sipName_expandingDirections), meth_QWidgetItem_expandingDirections, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_geometry), meth_QWidgetItem_geometry, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_hasHeightForWidth), meth_QWidgetItem_hasHeightForWidth, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_heightForWidth), meth_QWidgetItem_heightForWidth, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QWidgetItem_isEmpty, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_maximumSize), meth_QWidgetItem_maximumSize, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_minimumSize), meth_QWidgetItem_minimumSize, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setGeometry), meth_QWidgetItem_setGeometry, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_sizeHint), meth_QWidgetItem_sizeHint, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_widget), meth_QWidgetItem_widget, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QWidgetItem = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QWidgetItem,
        {0}
    },
    {
        sipNameNr_QWidgetItem,
        {0, 0, 1},
        10, methods_QWidgetItem,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QWidgetItem,
    0,
    init_QWidgetItem,
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
    dealloc_QWidgetItem,
    0,
    0,
    0,
    release_QWidgetItem,
    cast_QWidgetItem,
    0,
    0,
    0
},
    0,
    0,
    0
};
/********************************************************************************
** Form generated from reading UI file '_QtTest.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI__QTTEST_H
#define UI__QTTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui__QtTestClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *_QtTestClass)
    {
        if (_QtTestClass->objectName().isEmpty())
            _QtTestClass->setObjectName(QString::fromUtf8("_QtTestClass"));
        _QtTestClass->resize(600, 400);
        menuBar = new QMenuBar(_QtTestClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        _QtTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(_QtTestClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        _QtTestClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(_QtTestClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        _QtTestClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(_QtTestClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        _QtTestClass->setStatusBar(statusBar);

        retranslateUi(_QtTestClass);

        QMetaObject::connectSlotsByName(_QtTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *_QtTestClass)
    {
        _QtTestClass->setWindowTitle(QCoreApplication::translate("_QtTestClass", "_QtTest", nullptr));
    } // retranslateUi

};

namespace Ui {
    class _QtTestClass: public Ui__QtTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI__QTTEST_H

/********************************************************************************
** Form generated from reading UI file 'equationeditor.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUATIONEDITOR_H
#define UI_EQUATIONEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_equationeditor
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *equationeditor)
    {
        if (equationeditor->objectName().isEmpty())
            equationeditor->setObjectName("equationeditor");
        equationeditor->resize(800, 600);
        menubar = new QMenuBar(equationeditor);
        menubar->setObjectName("menubar");
        equationeditor->setMenuBar(menubar);
        centralwidget = new QWidget(equationeditor);
        centralwidget->setObjectName("centralwidget");
        equationeditor->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(equationeditor);
        statusbar->setObjectName("statusbar");
        equationeditor->setStatusBar(statusbar);

        retranslateUi(equationeditor);

        QMetaObject::connectSlotsByName(equationeditor);
    } // setupUi

    void retranslateUi(QMainWindow *equationeditor)
    {
        equationeditor->setWindowTitle(QCoreApplication::translate("equationeditor", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class equationeditor: public Ui_equationeditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUATIONEDITOR_H

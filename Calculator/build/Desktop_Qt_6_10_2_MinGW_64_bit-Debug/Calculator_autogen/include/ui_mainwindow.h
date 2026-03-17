/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *number1;
    QLineEdit *number2;
    QLineEdit *result;
    QPushButton *btnDiv;
    QPushButton *btnAdd;
    QPushButton *btnMul;
    QPushButton *btnSub;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 118, 200));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        number1 = new QLineEdit(widget);
        number1->setObjectName("number1");

        verticalLayout->addWidget(number1);

        number2 = new QLineEdit(widget);
        number2->setObjectName("number2");

        verticalLayout->addWidget(number2);

        result = new QLineEdit(widget);
        result->setObjectName("result");
        result->setReadOnly(true);

        verticalLayout->addWidget(result);

        btnDiv = new QPushButton(widget);
        btnDiv->setObjectName("btnDiv");

        verticalLayout->addWidget(btnDiv);

        btnAdd = new QPushButton(widget);
        btnAdd->setObjectName("btnAdd");

        verticalLayout->addWidget(btnAdd);

        btnMul = new QPushButton(widget);
        btnMul->setObjectName("btnMul");

        verticalLayout->addWidget(btnMul);

        btnSub = new QPushButton(widget);
        btnSub->setObjectName("btnSub");

        verticalLayout->addWidget(btnSub);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        number1->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\262\320\276\320\265 \321\207\320\270\321\201\320\273\320\276", nullptr));
        number2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\202\320\276\321\200\320\276\320\265 \321\207\320\270\321\201\320\273\320\276", nullptr));
        result->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        btnDiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnMul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btnSub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

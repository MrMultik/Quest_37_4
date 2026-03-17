/********************************************************************************
** Form generated from reading UI file 'tvremote.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TVREMOTE_H
#define UI_TVREMOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TVRemote
{
public:
    QWidget *centralwidget;
    QLabel *display;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btn0;
    QPushButton *btnNext;
    QPushButton *btnPrev;
    QPushButton *btnVolUp;
    QPushButton *btnVolDown;
    QPushButton *btnPower;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TVRemote)
    {
        if (TVRemote->objectName().isEmpty())
            TVRemote->setObjectName("TVRemote");
        TVRemote->resize(240, 680);
        TVRemote->setMinimumSize(QSize(240, 680));
        TVRemote->setMaximumSize(QSize(240, 680));
        centralwidget = new QWidget(TVRemote);
        centralwidget->setObjectName("centralwidget");
        display = new QLabel(centralwidget);
        display->setObjectName("display");
        display->setGeometry(QRect(20, 10, 200, 80));
        btn1 = new QPushButton(centralwidget);
        btn1->setObjectName("btn1");
        btn1->setGeometry(QRect(10, 100, 60, 24));
        btn2 = new QPushButton(centralwidget);
        btn2->setObjectName("btn2");
        btn2->setGeometry(QRect(90, 100, 60, 24));
        btn3 = new QPushButton(centralwidget);
        btn3->setObjectName("btn3");
        btn3->setGeometry(QRect(170, 100, 60, 24));
        btn4 = new QPushButton(centralwidget);
        btn4->setObjectName("btn4");
        btn4->setGeometry(QRect(10, 150, 60, 24));
        btn5 = new QPushButton(centralwidget);
        btn5->setObjectName("btn5");
        btn5->setGeometry(QRect(90, 150, 60, 24));
        btn6 = new QPushButton(centralwidget);
        btn6->setObjectName("btn6");
        btn6->setGeometry(QRect(170, 150, 60, 24));
        btn7 = new QPushButton(centralwidget);
        btn7->setObjectName("btn7");
        btn7->setGeometry(QRect(10, 200, 60, 24));
        btn8 = new QPushButton(centralwidget);
        btn8->setObjectName("btn8");
        btn8->setGeometry(QRect(90, 200, 60, 24));
        btn9 = new QPushButton(centralwidget);
        btn9->setObjectName("btn9");
        btn9->setGeometry(QRect(170, 200, 60, 24));
        btn0 = new QPushButton(centralwidget);
        btn0->setObjectName("btn0");
        btn0->setGeometry(QRect(90, 250, 60, 24));
        btnNext = new QPushButton(centralwidget);
        btnNext->setObjectName("btnNext");
        btnNext->setGeometry(QRect(10, 250, 60, 24));
        btnPrev = new QPushButton(centralwidget);
        btnPrev->setObjectName("btnPrev");
        btnPrev->setGeometry(QRect(10, 300, 60, 24));
        btnVolUp = new QPushButton(centralwidget);
        btnVolUp->setObjectName("btnVolUp");
        btnVolUp->setGeometry(QRect(170, 250, 60, 24));
        btnVolDown = new QPushButton(centralwidget);
        btnVolDown->setObjectName("btnVolDown");
        btnVolDown->setGeometry(QRect(170, 300, 60, 24));
        btnPower = new QPushButton(centralwidget);
        btnPower->setObjectName("btnPower");
        btnPower->setGeometry(QRect(30, 350, 171, 50));
        TVRemote->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TVRemote);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 240, 22));
        TVRemote->setMenuBar(menubar);
        statusbar = new QStatusBar(TVRemote);
        statusbar->setObjectName("statusbar");
        TVRemote->setStatusBar(statusbar);

        retranslateUi(TVRemote);

        QMetaObject::connectSlotsByName(TVRemote);
    } // setupUi

    void retranslateUi(QMainWindow *TVRemote)
    {
        TVRemote->setWindowTitle(QCoreApplication::translate("TVRemote", "TVRemote", nullptr));
#if QT_CONFIG(tooltip)
        display->setToolTip(QCoreApplication::translate("TVRemote", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        display->setWhatsThis(QCoreApplication::translate("TVRemote", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        display->setText(QCoreApplication::translate("TVRemote", "<html><head/><body><p align=\"center\">CH: 1</p></body></html>", nullptr));
        btn1->setText(QCoreApplication::translate("TVRemote", "1", nullptr));
        btn2->setText(QCoreApplication::translate("TVRemote", "2", nullptr));
        btn3->setText(QCoreApplication::translate("TVRemote", "3", nullptr));
        btn4->setText(QCoreApplication::translate("TVRemote", "4", nullptr));
        btn5->setText(QCoreApplication::translate("TVRemote", "5", nullptr));
        btn6->setText(QCoreApplication::translate("TVRemote", "6", nullptr));
        btn7->setText(QCoreApplication::translate("TVRemote", "7", nullptr));
        btn8->setText(QCoreApplication::translate("TVRemote", "8", nullptr));
        btn9->setText(QCoreApplication::translate("TVRemote", "9", nullptr));
        btn0->setText(QCoreApplication::translate("TVRemote", "0", nullptr));
        btnNext->setText(QCoreApplication::translate("TVRemote", ">", nullptr));
        btnPrev->setText(QCoreApplication::translate("TVRemote", "<", nullptr));
        btnVolUp->setText(QCoreApplication::translate("TVRemote", "+", nullptr));
        btnVolDown->setText(QCoreApplication::translate("TVRemote", "-", nullptr));
        btnPower->setText(QCoreApplication::translate("TVRemote", "POWER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TVRemote: public Ui_TVRemote {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TVREMOTE_H

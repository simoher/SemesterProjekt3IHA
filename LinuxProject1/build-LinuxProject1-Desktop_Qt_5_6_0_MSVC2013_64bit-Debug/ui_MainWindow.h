/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_AutomatiskTracking;
    QPushButton *pushButton_Selftest;
    QPushButton *pushButton_ManuelStyring;
    QLabel *label_nondynamic;
    QLabel *label_dynamic;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(405, 283);
        QIcon icon(QIcon::fromTheme(QStringLiteral("icon")));
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_AutomatiskTracking = new QPushButton(centralWidget);
        pushButton_AutomatiskTracking->setObjectName(QStringLiteral("pushButton_AutomatiskTracking"));
        pushButton_AutomatiskTracking->setGeometry(QRect(270, 160, 120, 60));
        pushButton_Selftest = new QPushButton(centralWidget);
        pushButton_Selftest->setObjectName(QStringLiteral("pushButton_Selftest"));
        pushButton_Selftest->setGeometry(QRect(10, 160, 120, 60));
        pushButton_ManuelStyring = new QPushButton(centralWidget);
        pushButton_ManuelStyring->setObjectName(QStringLiteral("pushButton_ManuelStyring"));
        pushButton_ManuelStyring->setGeometry(QRect(140, 160, 120, 60));
        label_nondynamic = new QLabel(centralWidget);
        label_nondynamic->setObjectName(QStringLiteral("label_nondynamic"));
        label_nondynamic->setGeometry(QRect(290, 10, 101, 20));
        label_dynamic = new QLabel(centralWidget);
        label_dynamic->setObjectName(QStringLiteral("label_dynamic"));
        label_dynamic->setGeometry(QRect(100, 130, 161, 20));
        label_dynamic->setLayoutDirection(Qt::LeftToRight);
        label_dynamic->setAutoFillBackground(false);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(270, 29, 120, 121));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 405, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_AutomatiskTracking, SIGNAL(clicked()), MainWindow, SLOT(ButtonClicked_AutoTracking()));
        QObject::connect(pushButton_ManuelStyring, SIGNAL(clicked()), MainWindow, SLOT(ButtonClicked_ManuelStyring()));
        QObject::connect(pushButton_Selftest, SIGNAL(clicked()), MainWindow, SLOT(ButtonClicked_Selftest()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "G.U.N.S.H.O.W", 0));
        pushButton_AutomatiskTracking->setText(QApplication::translate("MainWindow", "Automatisk Tracking", 0));
        pushButton_Selftest->setText(QApplication::translate("MainWindow", "Self Test", 0));
        pushButton_ManuelStyring->setText(QApplication::translate("MainWindow", "Manuel Styring", 0));
        label_nondynamic->setText(QApplication::translate("MainWindow", "Status Messages:", 0));
        label_dynamic->setText(QApplication::translate("MainWindow", "Dynamic Label", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

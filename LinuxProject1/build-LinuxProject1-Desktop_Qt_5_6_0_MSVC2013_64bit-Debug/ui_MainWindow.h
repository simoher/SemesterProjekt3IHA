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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1149, 763);
        QIcon icon;
        QString iconThemeName = QStringLiteral("icon");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_AutomatiskTracking = new QPushButton(centralWidget);
        pushButton_AutomatiskTracking->setObjectName(QStringLiteral("pushButton_AutomatiskTracking"));
        pushButton_AutomatiskTracking->setGeometry(QRect(780, 440, 250, 160));
        QFont font;
        font.setPointSize(20);
        pushButton_AutomatiskTracking->setFont(font);
        pushButton_AutomatiskTracking->setStyleSheet(QStringLiteral("border-image: url(:/icon-automatisk-tracking.PNG);"));
        pushButton_Selftest = new QPushButton(centralWidget);
        pushButton_Selftest->setObjectName(QStringLiteral("pushButton_Selftest"));
        pushButton_Selftest->setGeometry(QRect(110, 440, 250, 160));
        pushButton_Selftest->setFont(font);
        pushButton_Selftest->setStyleSheet(QLatin1String("border-image: url(:/icon-self-test.png);\n"
""));
        pushButton_ManuelStyring = new QPushButton(centralWidget);
        pushButton_ManuelStyring->setObjectName(QStringLiteral("pushButton_ManuelStyring"));
        pushButton_ManuelStyring->setGeometry(QRect(420, 440, 250, 160));
        pushButton_ManuelStyring->setFont(font);
        pushButton_ManuelStyring->setStyleSheet(QStringLiteral("border-image: url(:/icon-manuel-styring.PNG);"));
        label_nondynamic = new QLabel(centralWidget);
        label_nondynamic->setObjectName(QStringLiteral("label_nondynamic"));
        label_nondynamic->setGeometry(QRect(810, 50, 240, 71));
        QFont font1;
        font1.setFamily(QStringLiteral("Cambria"));
        font1.setPointSize(24);
        label_nondynamic->setFont(font1);
        label_nondynamic->setStyleSheet(QStringLiteral("color: rgb(141, 141, 141)"));
        label_nondynamic->setScaledContents(false);
        label_dynamic = new QLabel(centralWidget);
        label_dynamic->setObjectName(QStringLiteral("label_dynamic"));
        label_dynamic->setGeometry(QRect(160, 220, 521, 111));
        label_dynamic->setLayoutDirection(Qt::LeftToRight);
        label_dynamic->setAutoFillBackground(false);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(800, 120, 261, 281));
        QFont font2;
        font2.setFamily(QStringLiteral("Cambria"));
        font2.setPointSize(24);
        font2.setBold(true);
        font2.setWeight(75);
        textEdit->setFont(font2);
        textEdit->setStyleSheet(QStringLiteral("border-image: url();"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 550, 161, 51));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(130, 130, 130)\n"
""));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(430, 550, 231, 51));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(130, 130, 130)\n"
""));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(740, 550, 331, 51));
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(130, 130, 130)\n"
""));
        MainWindow->setCentralWidget(centralWidget);
        pushButton_Selftest->raise();
        pushButton_AutomatiskTracking->raise();
        pushButton_ManuelStyring->raise();
        label_nondynamic->raise();
        label_dynamic->raise();
        textEdit->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1149, 21));
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
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(ButtonClicked_Selftest()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(ButtonClicked_ManuelStyring()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(ButtonClicked_AutoTracking()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "G.U.N.S.H.O.W", 0));
        pushButton_AutomatiskTracking->setText(QString());
        pushButton_Selftest->setText(QString());
        pushButton_ManuelStyring->setText(QString());
        label_nondynamic->setText(QApplication::translate("MainWindow", "Status Messages:", 0));
        label_dynamic->setText(QApplication::translate("MainWindow", "Dynamic Label", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Self Test", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Manuel Styring", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Automatisk Tracking", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

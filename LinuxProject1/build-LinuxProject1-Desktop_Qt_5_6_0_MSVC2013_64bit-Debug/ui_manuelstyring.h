/********************************************************************************
** Form generated from reading UI file 'manuelstyring.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANUELSTYRING_H
#define UI_MANUELSTYRING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_manuelStyring
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *manuelStyring)
    {
        if (manuelStyring->objectName().isEmpty())
            manuelStyring->setObjectName(QStringLiteral("manuelStyring"));
        manuelStyring->resize(640, 480);
        pushButton = new QPushButton(manuelStyring);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 240, 581, 23));

        retranslateUi(manuelStyring);

        QMetaObject::connectSlotsByName(manuelStyring);
    } // setupUi

    void retranslateUi(QDialog *manuelStyring)
    {
        manuelStyring->setWindowTitle(QApplication::translate("manuelStyring", "Dialog", 0));
        pushButton->setText(QApplication::translate("manuelStyring", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class manuelStyring: public Ui_manuelStyring {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUELSTYRING_H

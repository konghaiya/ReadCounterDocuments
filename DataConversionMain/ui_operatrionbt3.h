/********************************************************************************
** Form generated from reading UI file 'operatrionbt3.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERATRIONBT3_H
#define UI_OPERATRIONBT3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OperatrionBt3
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;

    void setupUi(QWidget *OperatrionBt3)
    {
        if (OperatrionBt3->objectName().isEmpty())
            OperatrionBt3->setObjectName(QStringLiteral("OperatrionBt3"));
        OperatrionBt3->resize(58, 23);
        gridLayout = new QGridLayout(OperatrionBt3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, 0);
        pushButton_2 = new QPushButton(OperatrionBt3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(pushButton_2, 0, 0, 1, 1);


        retranslateUi(OperatrionBt3);

        QMetaObject::connectSlotsByName(OperatrionBt3);
    } // setupUi

    void retranslateUi(QWidget *OperatrionBt3)
    {
        OperatrionBt3->setWindowTitle(QApplication::translate("OperatrionBt3", "Form", 0));
        pushButton_2->setText(QApplication::translate("OperatrionBt3", "\345\210\240\351\231\244", 0));
    } // retranslateUi

};

namespace Ui {
    class OperatrionBt3: public Ui_OperatrionBt3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERATRIONBT3_H

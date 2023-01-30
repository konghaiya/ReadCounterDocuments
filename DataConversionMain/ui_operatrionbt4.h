/********************************************************************************
** Form generated from reading UI file 'operatrionbt4.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERATRIONBT4_H
#define UI_OPERATRIONBT4_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_operatrionbt4
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;

    void setupUi(QWidget *operatrionbt4)
    {
        if (operatrionbt4->objectName().isEmpty())
            operatrionbt4->setObjectName(QStringLiteral("operatrionbt4"));
        operatrionbt4->resize(60, 25);
        gridLayout = new QGridLayout(operatrionbt4);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, 0);
        pushButton_2 = new QPushButton(operatrionbt4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(0, 0));
        pushButton_2->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(pushButton_2, 0, 0, 1, 1);


        retranslateUi(operatrionbt4);

        QMetaObject::connectSlotsByName(operatrionbt4);
    } // setupUi

    void retranslateUi(QWidget *operatrionbt4)
    {
        operatrionbt4->setWindowTitle(QApplication::translate("operatrionbt4", "Form", 0));
        pushButton_2->setText(QApplication::translate("operatrionbt4", "\350\257\246\346\203\205", 0));
    } // retranslateUi

};

namespace Ui {
    class operatrionbt4: public Ui_operatrionbt4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERATRIONBT4_H

/********************************************************************************
** Form generated from reading UI file 'operatrionbt5.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERATRIONBT5_H
#define UI_OPERATRIONBT5_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_operatrionbt5
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;

    void setupUi(QWidget *operatrionbt5)
    {
        if (operatrionbt5->objectName().isEmpty())
            operatrionbt5->setObjectName(QStringLiteral("operatrionbt5"));
        operatrionbt5->resize(98, 23);
        gridLayout = new QGridLayout(operatrionbt5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(operatrionbt5);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);


        retranslateUi(operatrionbt5);

        QMetaObject::connectSlotsByName(operatrionbt5);
    } // setupUi

    void retranslateUi(QWidget *operatrionbt5)
    {
        operatrionbt5->setWindowTitle(QApplication::translate("operatrionbt5", "Form", 0));
        pushButton->setText(QApplication::translate("operatrionbt5", "\346\237\245\347\234\213\345\255\227\345\205\270\344\277\241\346\201\257", 0));
    } // retranslateUi

};

namespace Ui {
    class operatrionbt5: public Ui_operatrionbt5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERATRIONBT5_H

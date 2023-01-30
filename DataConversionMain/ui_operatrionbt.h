/********************************************************************************
** Form generated from reading UI file 'operatrionbt.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERATRIONBT_H
#define UI_OPERATRIONBT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OperatrionBt
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *OperatrionBt)
    {
        if (OperatrionBt->objectName().isEmpty())
            OperatrionBt->setObjectName(QStringLiteral("OperatrionBt"));
        OperatrionBt->resize(130, 32);
        gridLayout = new QGridLayout(OperatrionBt);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, -1);
        label = new QLabel(OperatrionBt);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(5, 16777215));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        pushButton = new QPushButton(OperatrionBt);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        label_2 = new QLabel(OperatrionBt);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(5, 16777215));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        pushButton_2 = new QPushButton(OperatrionBt);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        pushButton_3 = new QPushButton(OperatrionBt);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(pushButton_3, 0, 4, 1, 1);

        pushButton_2->raise();
        label->raise();
        pushButton->raise();
        label_2->raise();
        pushButton_3->raise();

        retranslateUi(OperatrionBt);

        QMetaObject::connectSlotsByName(OperatrionBt);
    } // setupUi

    void retranslateUi(QWidget *OperatrionBt)
    {
        OperatrionBt->setWindowTitle(QApplication::translate("OperatrionBt", "Form", 0));
        label->setText(QApplication::translate("OperatrionBt", "|", 0));
        pushButton->setText(QApplication::translate("OperatrionBt", "\350\257\246\346\203\205", 0));
        label_2->setText(QApplication::translate("OperatrionBt", "|", 0));
        pushButton_2->setText(QApplication::translate("OperatrionBt", "\344\277\256\346\224\271", 0));
        pushButton_3->setText(QApplication::translate("OperatrionBt", "\345\210\240\351\231\244", 0));
    } // retranslateUi

};

namespace Ui {
    class OperatrionBt: public Ui_OperatrionBt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERATRIONBT_H

/********************************************************************************
** Form generated from reading UI file 'operatrionbt2.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERATRIONBT2_H
#define UI_OPERATRIONBT2_H

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

class Ui_Operatrionbt2
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Operatrionbt2)
    {
        if (Operatrionbt2->objectName().isEmpty())
            Operatrionbt2->setObjectName(QStringLiteral("Operatrionbt2"));
        Operatrionbt2->resize(97, 23);
        gridLayout = new QGridLayout(Operatrionbt2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(Operatrionbt2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        label = new QLabel(Operatrionbt2);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(5, 16777215));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(Operatrionbt2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);


        retranslateUi(Operatrionbt2);

        QMetaObject::connectSlotsByName(Operatrionbt2);
    } // setupUi

    void retranslateUi(QWidget *Operatrionbt2)
    {
        Operatrionbt2->setWindowTitle(QApplication::translate("Operatrionbt2", "Form", 0));
        pushButton->setText(QApplication::translate("Operatrionbt2", "\350\257\246\346\203\205", 0));
        label->setText(QApplication::translate("Operatrionbt2", "|", 0));
        pushButton_3->setText(QApplication::translate("Operatrionbt2", "\345\210\240\351\231\244", 0));
    } // retranslateUi

};

namespace Ui {
    class Operatrionbt2: public Ui_Operatrionbt2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERATRIONBT2_H

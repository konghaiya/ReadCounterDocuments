/********************************************************************************
** Form generated from reading UI file 'dialog_opendb.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_OPENDB_H
#define UI_DIALOG_OPENDB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Dialog_openDB
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_choose_dbFile;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_open_dbFile;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *Dialog_openDB)
    {
        if (Dialog_openDB->objectName().isEmpty())
            Dialog_openDB->setObjectName(QStringLiteral("Dialog_openDB"));
        Dialog_openDB->resize(447, 325);
        gridLayout = new QGridLayout(Dialog_openDB);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 117, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Dialog_openDB);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(Dialog_openDB);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_choose_dbFile = new QPushButton(Dialog_openDB);
        pushButton_choose_dbFile->setObjectName(QStringLiteral("pushButton_choose_dbFile"));

        horizontalLayout->addWidget(pushButton_choose_dbFile);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 116, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(187, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_open_dbFile = new QPushButton(Dialog_openDB);
        pushButton_open_dbFile->setObjectName(QStringLiteral("pushButton_open_dbFile"));

        horizontalLayout_2->addWidget(pushButton_open_dbFile);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_cancel = new QPushButton(Dialog_openDB);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));

        horizontalLayout_2->addWidget(pushButton_cancel);


        gridLayout->addLayout(horizontalLayout_2, 3, 2, 1, 1);


        retranslateUi(Dialog_openDB);

        QMetaObject::connectSlotsByName(Dialog_openDB);
    } // setupUi

    void retranslateUi(QDialog *Dialog_openDB)
    {
        Dialog_openDB->setWindowTitle(QApplication::translate("Dialog_openDB", "Dialog", 0));
        label->setText(QApplication::translate("Dialog_openDB", "\346\225\260\346\215\256\345\272\223\346\226\207\344\273\266\357\274\232", 0));
        pushButton_choose_dbFile->setText(QApplication::translate("Dialog_openDB", "\351\200\211\346\213\251\346\225\260\346\215\256\345\272\223\346\226\207\344\273\266", 0));
        pushButton_open_dbFile->setText(QApplication::translate("Dialog_openDB", "\350\275\275\345\205\245", 0));
        pushButton_cancel->setText(QApplication::translate("Dialog_openDB", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_openDB: public Ui_Dialog_openDB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_OPENDB_H

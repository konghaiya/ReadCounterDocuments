/********************************************************************************
** Form generated from reading UI file 'dialog_createtableheader.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CREATETABLEHEADER_H
#define UI_DIALOG_CREATETABLEHEADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog_createTableHeader
{
public:
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QComboBox *comboBox;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Dialog_createTableHeader)
    {
        if (Dialog_createTableHeader->objectName().isEmpty())
            Dialog_createTableHeader->setObjectName(QStringLiteral("Dialog_createTableHeader"));
        Dialog_createTableHeader->resize(990, 619);
        Dialog_createTableHeader->setStyleSheet(QString::fromUtf8("QWidget,\n"
"QMainWindow{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(80, 80, 90, 255), stop:1 rgba(30, 30, 30, 255));\n"
"    font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(194, 193, 187);\n"
"}\n"
"QTableWidget{\n"
"	alternate-background-color: rgba(255, 255, 255, 20);\n"
"}\n"
"\n"
"/*\350\241\250\345\244\264\346\240\267\345\274\217*/\n"
"\n"
"QHeaderView::section{\n"
"	background-color: rgb(86, 86, 86);\n"
"	border:1px solid rgba(220,220,220,100);\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"}\n"
"/*\346\214\211\351\222\256*/\n"
"QPushButton,\n"
"QToolButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(68, 68, 75, 255), stop:1 rgba(30, 30, 30, 255));\n"
"	border:1px groove rgba(255,255,255,100);\n"
"\n"
"}\n"
"/*\346\214\211\351\222\256\346\202\254\345\201\234\345\222\214\346\214\211\344\270\213\347\212\266\346\200\201*/\n"
"QPushButton:hover,\n"
"QPushButton:pressed,\n"
"QPushButton:checked,"
                        "\n"
"QPushButton:selected,\n"
"QToolButton:hover,\n"
"QToolButton:pressed,\n"
"QToolButton:checked,\n"
"QToolButton:selected{\n"
"	color: rgba(255, 150, 0,255);\n"
"\n"
"	background-color: qradialgradient(spread:pad, cx:0.505682, cy:0, radius:0.8, fx:0.505682, fy:0, stop:0 rgba(106, 162, 214, 255), stop:1 rgba(30, 30, 30, 255));\n"
"	border:2px groove rgba(70, 140, 195,100);\n"
"}\n"
"/*\346\273\232\345\212\250\346\235\241*/\n"
"QScrollBar{\n"
"	background-color: rgba(255, 255, 255,10);\n"
"	border:1px groove  gay;	\n"
"	border-color: rgba(255, 255, 255,80);\n"
"}\n"
"/*\346\260\264\345\271\263\346\273\232\345\212\250\346\235\241*/\n"
"QScrollBar:horizontal{\n"
"    height:17px;\n"
"    margin:0 16 0 16;\n"
"}\n"
"/*\346\260\264\345\271\263\346\273\232\345\212\250\346\235\241 \346\273\221\345\235\227*/\n"
"QScrollBar::handle:horizontal{\n"
"	background-color: rgba(255,255,255,95);\n"
"    min-width:20px;\n"
"    margin:1px 0px 1px 0px;\n"
"	border:1px groove  gay;	\n"
"	border-color: rgba(255, 255, 255,80);\n"
""
                        "}\n"
"QScrollBar::handle:horizontal:hover{\n"
"	background-color:rgba(70, 140, 195,100);	\n"
"    min-width:20px;\n"
"    margin:1px 0px 1px 0px;\n"
"	border:1px groove  gay;	\n"
"	border-color: rgba(255, 255, 127,50);\n"
"}\n"
"/*\346\260\264\345\271\263\346\273\232\345\212\250\346\235\241 \345\276\256\350\260\203\346\214\211\351\222\256*/\n"
"QScrollBar::add-line:horizontal{\n"
"	background-color: rgba(255,255,255,60);\n"
"    border:1px groove  gay;	\n"
"	border-color: rgba(255, 255, 255,80);\n"
"    width:15px;\n"
"    subcontrol-position:right;\n"
"    subcontrol-origin:margin;\n"
"}"));
        gridLayout_2 = new QGridLayout(Dialog_createTableHeader);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        textEdit = new QTextEdit(Dialog_createTableHeader);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setReadOnly(true);

        gridLayout_2->addWidget(textEdit, 3, 0, 1, 2);

        pushButton_3 = new QPushButton(Dialog_createTableHeader);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(205, 30));
        pushButton_3->setMaximumSize(QSize(200, 16777215));
        pushButton_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(22, 155, 213);"));

        gridLayout_2->addWidget(pushButton_3, 2, 1, 1, 1);

        label_4 = new QLabel(Dialog_createTableHeader);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit = new QLineEdit(Dialog_createTableHeader);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(300, 40));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        label_3 = new QLabel(Dialog_createTableHeader);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("color: rgb(252, 252, 252);"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        comboBox = new QComboBox(Dialog_createTableHeader);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(0, 40));
        comboBox->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(comboBox, 2, 1, 1, 1);

        lineEdit_2 = new QLineEdit(Dialog_createTableHeader);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(300, 40));

        gridLayout->addWidget(lineEdit_2, 3, 1, 1, 2);

        label = new QLabel(Dialog_createTableHeader);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("color: rgb(252, 252, 252);"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(Dialog_createTableHeader);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("color: rgb(252, 252, 252);"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        pushButton = new QPushButton(Dialog_createTableHeader);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(200, 40));
        pushButton->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(22, 155, 213);"));

        gridLayout->addWidget(pushButton, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(Dialog_createTableHeader);

        QMetaObject::connectSlotsByName(Dialog_createTableHeader);
    } // setupUi

    void retranslateUi(QDialog *Dialog_createTableHeader)
    {
        Dialog_createTableHeader->setWindowTitle(QApplication::translate("Dialog_createTableHeader", "Dialog", 0));
        pushButton_3->setText(QApplication::translate("Dialog_createTableHeader", "\345\274\200\345\247\213\345\210\233\345\273\272", 0));
        label_4->setText(QApplication::translate("Dialog_createTableHeader", "\346\211\247\350\241\214\347\273\223\346\236\234\357\274\232", 0));
        lineEdit->setText(QString());
        label_3->setText(QApplication::translate("Dialog_createTableHeader", "\345\212\237\350\203\275\345\217\267\345\210\227\350\241\250\357\274\232   ", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog_createTableHeader", "\346\201\222\347\224\237", 0)
         << QApplication::translate("Dialog_createTableHeader", "\351\207\221\346\255\243U", 0)
         << QApplication::translate("Dialog_createTableHeader", "\351\207\221\346\255\243W", 0)
         << QApplication::translate("Dialog_createTableHeader", "\351\241\266\347\202\271", 0)
        );
        lineEdit_2->setText(QString());
        label->setText(QApplication::translate("Dialog_createTableHeader", "\346\225\260\346\215\256\345\272\223\346\226\207\344\273\266\357\274\232", 0));
        label_2->setText(QApplication::translate("Dialog_createTableHeader", "\351\200\211\346\213\251\346\237\234\345\217\260\357\274\232     ", 0));
        pushButton->setText(QApplication::translate("Dialog_createTableHeader", "\351\200\211\346\213\251\346\225\260\346\215\256\345\272\223\346\226\207\344\273\266", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_createTableHeader: public Ui_Dialog_createTableHeader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CREATETABLEHEADER_H

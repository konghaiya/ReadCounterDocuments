/********************************************************************************
** Form generated from reading UI file 'dialog_readgtfile.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_READGTFILE_H
#define UI_DIALOG_READGTFILE_H

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

QT_BEGIN_NAMESPACE

class Ui_Dialog_readGtFile
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Dialog_readGtFile)
    {
        if (Dialog_readGtFile->objectName().isEmpty())
            Dialog_readGtFile->setObjectName(QStringLiteral("Dialog_readGtFile"));
        Dialog_readGtFile->resize(795, 484);
        Dialog_readGtFile->setStyleSheet(QString::fromUtf8("QWidget,\n"
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
        gridLayout_2 = new QGridLayout(Dialog_readGtFile);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 157, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Dialog_readGtFile);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 40));
        label->setStyleSheet(QStringLiteral("color: rgb(252, 252, 252);"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(Dialog_readGtFile);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(300, 40));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 2);

        pushButton = new QPushButton(Dialog_readGtFile);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(200, 40));

        gridLayout->addWidget(pushButton, 0, 3, 1, 1);

        label_2 = new QLabel(Dialog_readGtFile);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("color: rgb(252, 252, 252);"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboBox = new QComboBox(Dialog_readGtFile);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(0, 40));
        comboBox->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(comboBox, 1, 1, 1, 2);

        label_3 = new QLabel(Dialog_readGtFile);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("color: rgb(252, 252, 252);"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        comboBox_2 = new QComboBox(Dialog_readGtFile);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(0, 40));
        comboBox_2->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(comboBox_2, 2, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 157, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(Dialog_readGtFile);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(120, 40));

        gridLayout_2->addWidget(pushButton_3, 3, 1, 1, 1);


        retranslateUi(Dialog_readGtFile);

        QMetaObject::connectSlotsByName(Dialog_readGtFile);
    } // setupUi

    void retranslateUi(QDialog *Dialog_readGtFile)
    {
        Dialog_readGtFile->setWindowTitle(QApplication::translate("Dialog_readGtFile", "Dialog", 0));
        label->setText(QApplication::translate("Dialog_readGtFile", "\351\234\200\346\233\264\346\226\260\347\232\204\346\226\207\346\241\243", 0));
        pushButton->setText(QApplication::translate("Dialog_readGtFile", "\351\200\211\346\213\251\346\237\234\345\217\260\346\216\245\345\217\243\346\226\207\346\241\243", 0));
        label_2->setText(QApplication::translate("Dialog_readGtFile", "\351\200\211\346\213\251\346\237\234\345\217\260\357\274\232     ", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog_readGtFile", "\346\201\222\347\224\237", 0)
         << QApplication::translate("Dialog_readGtFile", "\351\207\221\346\255\243W", 0)
         << QApplication::translate("Dialog_readGtFile", "\351\241\266\347\202\271", 0)
         << QApplication::translate("Dialog_readGtFile", "\351\207\221\346\255\243U", 0)
         << QApplication::translate("Dialog_readGtFile", "\351\207\221\346\255\243W\347\273\237\344\270\200\346\216\245\345\205\245", 0)
        );
        label_3->setText(QApplication::translate("Dialog_readGtFile", "\351\200\211\346\213\251\344\270\232\345\212\241\347\261\273\345\236\213\357\274\232     ", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Dialog_readGtFile", "\346\231\256\351\200\232", 0)
         << QApplication::translate("Dialog_readGtFile", "\344\270\244\350\236\215", 0)
         << QApplication::translate("Dialog_readGtFile", "\345\255\227\345\205\270", 0)
        );
        pushButton_3->setText(QApplication::translate("Dialog_readGtFile", "\345\274\200\345\247\213\346\233\264\346\226\260", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_readGtFile: public Ui_Dialog_readGtFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_READGTFILE_H

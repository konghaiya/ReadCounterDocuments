/********************************************************************************
** Form generated from reading UI file 'form_gtinterfacemain.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_GTINTERFACEMAIN_H
#define UI_FORM_GTINTERFACEMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_GtInterfaceMain
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Form_GtInterfaceMain)
    {
        if (Form_GtInterfaceMain->objectName().isEmpty())
            Form_GtInterfaceMain->setObjectName(QStringLiteral("Form_GtInterfaceMain"));
        Form_GtInterfaceMain->resize(923, 620);
        Form_GtInterfaceMain->setStyleSheet(QString::fromUtf8("QWidget,\n"
"QMainWindow{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(80, 80, 90, 255), stop:1 rgba(30, 30, 30, 255));\n"
"    font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
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
        gridLayout = new QGridLayout(Form_GtInterfaceMain);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(Form_GtInterfaceMain);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(400, 0));
        lineEdit->setMaximumSize(QSize(16777215, 16777215));
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgba(120, 120, 120,120);"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_2 = new QPushButton(Form_GtInterfaceMain);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(120, 30));
        pushButton_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(22, 155, 213);"));

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        tableWidget = new QTableWidget(Form_GtInterfaceMain);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 3);


        retranslateUi(Form_GtInterfaceMain);

        QMetaObject::connectSlotsByName(Form_GtInterfaceMain);
    } // setupUi

    void retranslateUi(QWidget *Form_GtInterfaceMain)
    {
        Form_GtInterfaceMain->setWindowTitle(QApplication::translate("Form_GtInterfaceMain", "Form", 0));
        pushButton_2->setText(QApplication::translate("Form_GtInterfaceMain", "\346\237\245\346\211\276\346\237\234\345\217\260\346\216\245\345\217\243", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Form_GtInterfaceMain", "\345\212\237\350\203\275\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Form_GtInterfaceMain", "\345\212\237\350\203\275\345\217\267\346\217\217\350\277\260", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Form_GtInterfaceMain", "\345\212\237\350\203\275\345\217\267\347\261\273\345\236\213", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Form_GtInterfaceMain", "\346\237\234\345\217\260\347\261\273\345\236\213", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Form_GtInterfaceMain", "\345\244\207\346\263\250\344\277\241\346\201\257", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Form_GtInterfaceMain", "\346\223\215\344\275\234", 0));
    } // retranslateUi

};

namespace Ui {
    class Form_GtInterfaceMain: public Ui_Form_GtInterfaceMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_GTINTERFACEMAIN_H

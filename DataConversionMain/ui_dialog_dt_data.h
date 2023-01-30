/********************************************************************************
** Form generated from reading UI file 'dialog_dt_data.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_DT_DATA_H
#define UI_DIALOG_DT_DATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_Dt_Data
{
public:
    QGridLayout *gridLayout;
    QLabel *label_top;
    QTableWidget *tableWidget;

    void setupUi(QDialog *Dialog_Dt_Data)
    {
        if (Dialog_Dt_Data->objectName().isEmpty())
            Dialog_Dt_Data->setObjectName(QStringLiteral("Dialog_Dt_Data"));
        Dialog_Dt_Data->resize(319, 509);
        Dialog_Dt_Data->setStyleSheet(QString::fromUtf8("QWidget,\n"
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
        gridLayout = new QGridLayout(Dialog_Dt_Data);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_top = new QLabel(Dialog_Dt_Data);
        label_top->setObjectName(QStringLiteral("label_top"));
        label_top->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        label_top->setAlignment(Qt::AlignCenter);
        label_top->setWordWrap(true);

        gridLayout->addWidget(label_top, 0, 0, 1, 1);

        tableWidget = new QTableWidget(Dialog_Dt_Data);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 1);


        retranslateUi(Dialog_Dt_Data);

        QMetaObject::connectSlotsByName(Dialog_Dt_Data);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Dt_Data)
    {
        Dialog_Dt_Data->setWindowTitle(QApplication::translate("Dialog_Dt_Data", "Dialog", 0));
        label_top->setText(QApplication::translate("Dialog_Dt_Data", "\345\255\227\346\256\265\345\220\215\347\247\260\357\274\232", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Dialog_Dt_Data", "\344\273\243\347\240\201", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Dialog_Dt_Data", "\346\217\217\350\277\260", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_Dt_Data: public Ui_Dialog_Dt_Data {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DT_DATA_H

/********************************************************************************
** Form generated from reading UI file 'dialog_interface.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_INTERFACE_H
#define UI_DIALOG_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_interface
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QTextEdit *textEdit_bz;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QTextEdit *textEdit_ms;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTableWidget *tableWidget_rc;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTableWidget *tableWidget_cc;
    QLabel *label_top;

    void setupUi(QDialog *Dialog_interface)
    {
        if (Dialog_interface->objectName().isEmpty())
            Dialog_interface->setObjectName(QStringLiteral("Dialog_interface"));
        Dialog_interface->resize(982, 654);
        Dialog_interface->setStyleSheet(QString::fromUtf8("QWidget,\n"
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
        gridLayout = new QGridLayout(Dialog_interface);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(Dialog_interface);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(90, 16777215));

        verticalLayout_3->addWidget(label_3);

        textEdit_bz = new QTextEdit(Dialog_interface);
        textEdit_bz->setObjectName(QStringLiteral("textEdit_bz"));
        textEdit_bz->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(textEdit_bz);


        gridLayout->addLayout(verticalLayout_3, 2, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(Dialog_interface);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMaximumSize(QSize(90, 16777215));

        verticalLayout_4->addWidget(label_4);

        textEdit_ms = new QTextEdit(Dialog_interface);
        textEdit_ms->setObjectName(QStringLiteral("textEdit_ms"));
        textEdit_ms->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(textEdit_ms);


        gridLayout->addLayout(verticalLayout_4, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(Dialog_interface);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(50, 16777215));

        verticalLayout_2->addWidget(label);

        tableWidget_rc = new QTableWidget(Dialog_interface);
        if (tableWidget_rc->columnCount() < 6)
            tableWidget_rc->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_rc->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_rc->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_rc->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_rc->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_rc->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_rc->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget_rc->setObjectName(QStringLiteral("tableWidget_rc"));

        verticalLayout_2->addWidget(tableWidget_rc);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 1, 3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(Dialog_interface);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(50, 16777215));

        verticalLayout->addWidget(label_2);

        tableWidget_cc = new QTableWidget(Dialog_interface);
        if (tableWidget_cc->columnCount() < 5)
            tableWidget_cc->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_cc->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_cc->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_cc->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_cc->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_cc->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        tableWidget_cc->setObjectName(QStringLiteral("tableWidget_cc"));

        verticalLayout->addWidget(tableWidget_cc);


        gridLayout->addLayout(verticalLayout, 2, 1, 1, 3);

        label_top = new QLabel(Dialog_interface);
        label_top->setObjectName(QStringLiteral("label_top"));
        label_top->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        label_top->setAlignment(Qt::AlignCenter);
        label_top->setWordWrap(true);

        gridLayout->addWidget(label_top, 0, 0, 1, 3);

        gridLayout->setColumnStretch(0, 3);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 9);

        retranslateUi(Dialog_interface);

        QMetaObject::connectSlotsByName(Dialog_interface);
    } // setupUi

    void retranslateUi(QDialog *Dialog_interface)
    {
        Dialog_interface->setWindowTitle(QApplication::translate("Dialog_interface", "Dialog", 0));
        label_3->setText(QApplication::translate("Dialog_interface", "\345\244\207\346\263\250\344\277\241\346\201\257\357\274\232", 0));
        label_4->setText(QApplication::translate("Dialog_interface", "\345\212\237\350\203\275\345\217\267\346\217\217\350\277\260\357\274\232", 0));
        label->setText(QApplication::translate("Dialog_interface", "\345\205\245\345\217\202\357\274\232", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_rc->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Dialog_interface", "\345\217\202\346\225\260\345\220\215\347\247\260", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_rc->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Dialog_interface", "\345\217\202\346\225\260\346\217\217\350\277\260", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_rc->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Dialog_interface", "\346\225\260\346\215\256\347\261\273\345\236\213", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_rc->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Dialog_interface", "\345\244\207\346\263\250\344\277\241\346\201\257", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_rc->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Dialog_interface", "\346\230\257\345\220\246\345\277\205\351\241\273", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_rc->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Dialog_interface", "\346\223\215\344\275\234", 0));
        label_2->setText(QApplication::translate("Dialog_interface", "\345\207\272\345\217\202\357\274\232", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_cc->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("Dialog_interface", "\345\217\202\346\225\260\345\220\215\347\247\260", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_cc->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("Dialog_interface", "\345\217\202\346\225\260\346\217\217\350\277\260", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_cc->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("Dialog_interface", "\346\225\260\346\215\256\347\261\273\345\236\213", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_cc->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("Dialog_interface", "\345\244\207\346\263\250\344\277\241\346\201\257", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_cc->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("Dialog_interface", "\346\223\215\344\275\234", 0));
        label_top->setText(QApplication::translate("Dialog_interface", "\345\212\237\350\203\275\345\217\267\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_interface: public Ui_Dialog_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_INTERFACE_H

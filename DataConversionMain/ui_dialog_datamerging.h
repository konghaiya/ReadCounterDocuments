/********************************************************************************
** Form generated from reading UI file 'dialog_datamerging.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_DATAMERGING_H
#define UI_DIALOG_DATAMERGING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog_dataMerging
{
public:
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit;
    QLabel *label_3;
    QTableWidget *tableWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_4;

    void setupUi(QDialog *Dialog_dataMerging)
    {
        if (Dialog_dataMerging->objectName().isEmpty())
            Dialog_dataMerging->setObjectName(QStringLiteral("Dialog_dataMerging"));
        Dialog_dataMerging->resize(979, 609);
        Dialog_dataMerging->setStyleSheet(QString::fromUtf8("QWidget,\n"
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
        gridLayout_2 = new QGridLayout(Dialog_dataMerging);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        textEdit = new QTextEdit(Dialog_dataMerging);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setReadOnly(true);

        gridLayout_2->addWidget(textEdit, 7, 0, 1, 2);

        label_3 = new QLabel(Dialog_dataMerging);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(label_3, 6, 0, 1, 1);

        tableWidget = new QTableWidget(Dialog_dataMerging);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 2, 0, 4, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Dialog_dataMerging);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(Dialog_dataMerging);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 30));
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgba(120, 120, 120,120);"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        pushButton = new QPushButton(Dialog_dataMerging);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(205, 30));
        pushButton->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(22, 155, 213);"));

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);

        label_2 = new QLabel(Dialog_dataMerging);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(Dialog_dataMerging);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 30));
        lineEdit_2->setStyleSheet(QStringLiteral("background-color: rgba(120, 120, 120,120);"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(Dialog_dataMerging);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(205, 30));
        pushButton_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(22, 155, 213);"));

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);

        label_5 = new QLabel(Dialog_dataMerging);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(Dialog_dataMerging);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(0, 30));
        lineEdit_3->setStyleSheet(QStringLiteral("background-color: rgba(120, 120, 120,120);"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);

        pushButton_3 = new QPushButton(Dialog_dataMerging);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(205, 30));
        pushButton_3->setMaximumSize(QSize(200, 16777215));
        pushButton_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(22, 155, 213);"));

        gridLayout_2->addWidget(pushButton_3, 6, 1, 1, 1);

        pushButton_4 = new QPushButton(Dialog_dataMerging);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(80, 30));
        pushButton_4->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(22, 155, 213);"));

        gridLayout_2->addWidget(pushButton_4, 2, 1, 1, 1);

        pushButton_5 = new QPushButton(Dialog_dataMerging);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(120, 30));
        pushButton_5->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(22, 155, 213);"));

        gridLayout_2->addWidget(pushButton_5, 3, 1, 1, 1);

        label_4 = new QLabel(Dialog_dataMerging);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 4, 1, 2, 1);


        retranslateUi(Dialog_dataMerging);

        QMetaObject::connectSlotsByName(Dialog_dataMerging);
    } // setupUi

    void retranslateUi(QDialog *Dialog_dataMerging)
    {
        Dialog_dataMerging->setWindowTitle(QApplication::translate("Dialog_dataMerging", "Dialog", 0));
        label_3->setText(QApplication::translate("Dialog_dataMerging", "\346\211\247\350\241\214\347\273\223\346\236\234\357\274\232", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Dialog_dataMerging", "\345\237\272\347\241\200\345\270\220\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Dialog_dataMerging", "\345\220\210\345\271\266\345\270\220\345\217\267", 0));
        label->setText(QApplication::translate("Dialog_dataMerging", "\345\237\272\347\241\200\346\225\260\346\215\256\345\272\223\346\226\207\344\273\266\357\274\232", 0));
        pushButton->setText(QApplication::translate("Dialog_dataMerging", "\351\200\211\346\213\251\345\237\272\347\241\200\346\225\260\346\215\256\345\272\223\346\226\207\344\273\266", 0));
        label_2->setText(QApplication::translate("Dialog_dataMerging", "\345\220\210\345\271\266\346\225\260\346\215\256\345\272\223\346\226\207\344\273\266\357\274\232", 0));
        pushButton_2->setText(QApplication::translate("Dialog_dataMerging", "\351\200\211\346\213\251\345\220\210\345\271\266\346\225\260\346\215\256\345\272\223\346\226\207\344\273\266", 0));
        label_5->setText(QApplication::translate("Dialog_dataMerging", "\351\234\200\350\246\201\345\220\210\345\271\266\347\232\204\345\212\237\350\203\275\345\217\267\357\274\232", 0));
        pushButton_3->setText(QApplication::translate("Dialog_dataMerging", "\345\274\200\345\247\213\345\220\210\345\271\266", 0));
        pushButton_4->setText(QApplication::translate("Dialog_dataMerging", "\345\242\236\345\212\240", 0));
        pushButton_5->setText(QApplication::translate("Dialog_dataMerging", "\345\210\240\351\231\244\351\200\211\344\270\255\350\241\214", 0));
        label_4->setText(QApplication::translate("Dialog_dataMerging", "\350\276\223\345\205\245\351\234\200\350\246\201\345\220\210\345\271\266\347\232\204\345\270\220\345\217\267\357\274\214\345\217\257\344\270\272\347\251\272", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_dataMerging: public Ui_Dialog_dataMerging {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DATAMERGING_H

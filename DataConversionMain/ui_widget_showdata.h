/********************************************************************************
** Form generated from reading UI file 'widget_showdata.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SHOWDATA_H
#define UI_WIDGET_SHOWDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget_ShowData
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_5;
    QLabel *label;
    QPushButton *pushButton_4;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_dr;
    QPushButton *pushButton_up;
    QPushButton *pushButton_delete;
    QTableWidget *tableWidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Widget_ShowData)
    {
        if (Widget_ShowData->objectName().isEmpty())
            Widget_ShowData->setObjectName(QStringLiteral("Widget_ShowData"));
        Widget_ShowData->resize(1244, 778);
        Widget_ShowData->setMinimumSize(QSize(120, 0));
        Widget_ShowData->setStyleSheet(QString::fromUtf8("QWidget,\n"
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
        gridLayout = new QGridLayout(Widget_ShowData);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_5 = new QPushButton(Widget_ShowData);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(22, 155, 213);"));

        gridLayout->addWidget(pushButton_5, 0, 5, 1, 1);

        label = new QLabel(Widget_ShowData);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(Widget_ShowData);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(80, 0));
        pushButton_4->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(22, 155, 213);"));

        gridLayout->addWidget(pushButton_4, 0, 6, 1, 1);

        listWidget = new QListWidget(Widget_ShowData);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMinimumSize(QSize(200, 0));
        listWidget->setMaximumSize(QSize(120, 16777215));
        listWidget->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(listWidget, 1, 0, 3, 1);

        pushButton = new QPushButton(Widget_ShowData);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(80, 30));
        pushButton->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(22, 155, 213);"));

        gridLayout->addWidget(pushButton, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 2, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        pushButton_dr = new QPushButton(Widget_ShowData);
        pushButton_dr->setObjectName(QStringLiteral("pushButton_dr"));
        pushButton_dr->setMinimumSize(QSize(0, 30));
        pushButton_dr->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"\n"
""));

        gridLayout->addWidget(pushButton_dr, 3, 2, 1, 1);

        pushButton_up = new QPushButton(Widget_ShowData);
        pushButton_up->setObjectName(QStringLiteral("pushButton_up"));
        pushButton_up->setMinimumSize(QSize(0, 30));
        pushButton_up->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(pushButton_up, 3, 3, 1, 1);

        pushButton_delete = new QPushButton(Widget_ShowData);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        pushButton_delete->setMinimumSize(QSize(0, 30));
        pushButton_delete->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(pushButton_delete, 3, 4, 1, 1);

        tableWidget = new QTableWidget(Widget_ShowData);
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
        tableWidget->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(tableWidget, 2, 2, 1, 5);

        lineEdit = new QLineEdit(Widget_ShowData);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgba(120, 120, 120,120);"));

        gridLayout->addWidget(lineEdit, 1, 3, 1, 2);

        pushButton_3 = new QPushButton(Widget_ShowData);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setMinimumSize(QSize(80, 30));
        pushButton_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(22, 155, 213);"));

        gridLayout->addWidget(pushButton_3, 3, 6, 1, 1);

        pushButton_2 = new QPushButton(Widget_ShowData);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(120, 30));
        pushButton_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(22, 155, 213);"));

        gridLayout->addWidget(pushButton_2, 1, 5, 1, 1);


        retranslateUi(Widget_ShowData);

        QMetaObject::connectSlotsByName(Widget_ShowData);
    } // setupUi

    void retranslateUi(QWidget *Widget_ShowData)
    {
        Widget_ShowData->setWindowTitle(QApplication::translate("Widget_ShowData", "Form", 0));
        pushButton_5->setText(QApplication::translate("Widget_ShowData", "\346\234\200\345\260\217\345\214\226", 0));
        label->setText(QApplication::translate("Widget_ShowData", "      \346\225\260\346\215\256\345\272\223", 0));
        pushButton_4->setText(QApplication::translate("Widget_ShowData", "\345\205\263\351\227\255", 0));
        pushButton->setText(QApplication::translate("Widget_ShowData", "\345\257\274\345\205\245", 0));
        pushButton_dr->setText(QApplication::translate("Widget_ShowData", "\345\257\274\345\205\245\345\210\260\347\216\257\345\242\203", 0));
        pushButton_up->setText(QApplication::translate("Widget_ShowData", "\344\277\256\346\224\271\346\225\260\346\215\256\345\272\223\344\277\241\346\201\257", 0));
        pushButton_delete->setText(QApplication::translate("Widget_ShowData", "\345\210\240\351\231\244\346\225\260\346\215\256\345\272\223", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget_ShowData", "\345\270\220\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget_ShowData", "\345\270\220\345\217\267\347\261\273\345\236\213", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Widget_ShowData", "\346\237\234\345\217\260\347\261\273\345\236\213", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Widget_ShowData", "\345\270\220\345\217\267\345\261\236\346\200\247\357\274\210\346\240\207\347\255\276\357\274\211", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Widget_ShowData", "\346\211\200\345\261\236\346\225\260\346\215\256\345\272\223", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Widget_ShowData", "\346\223\215\344\275\234", 0));
        pushButton_3->setText(QApplication::translate("Widget_ShowData", "\346\225\260\346\215\256\345\220\210\345\271\266", 0));
        pushButton_2->setText(QApplication::translate("Widget_ShowData", "\346\237\245\346\211\276", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget_ShowData: public Ui_Widget_ShowData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SHOWDATA_H

/********************************************************************************
** Form generated from reading UI file 'form_gtmsgshowmain.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_GTMSGSHOWMAIN_H
#define UI_FORM_GTMSGSHOWMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_GtMsgShowMain
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QWidget *widget_left;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_scsjb;
    QPushButton *bt_scsjb;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_data_update;
    QPushButton *bt_data_update;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_gnh;
    QPushButton *bt_gnh;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_zd;
    QPushButton *bt_zd;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Form_GtMsgShowMain)
    {
        if (Form_GtMsgShowMain->objectName().isEmpty())
            Form_GtMsgShowMain->setObjectName(QStringLiteral("Form_GtMsgShowMain"));
        Form_GtMsgShowMain->resize(1175, 746);
        Form_GtMsgShowMain->setStyleSheet(QString::fromUtf8("QWidget,\n"
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
        gridLayout_2 = new QGridLayout(Form_GtMsgShowMain);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 0, 1, 1);

        widget = new QWidget(Form_GtMsgShowMain);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(widget, 0, 1, 3, 1);

        widget_left = new QWidget(Form_GtMsgShowMain);
        widget_left->setObjectName(QStringLiteral("widget_left"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_left->sizePolicy().hasHeightForWidth());
        widget_left->setSizePolicy(sizePolicy1);
        widget_left->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(widget_left);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_scsjb = new QLabel(widget_left);
        label_scsjb->setObjectName(QStringLiteral("label_scsjb"));
        label_scsjb->setMinimumSize(QSize(40, 0));
        label_scsjb->setMaximumSize(QSize(40, 16777215));
        label_scsjb->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));

        horizontalLayout_13->addWidget(label_scsjb);

        bt_scsjb = new QPushButton(widget_left);
        bt_scsjb->setObjectName(QStringLiteral("bt_scsjb"));
        bt_scsjb->setMinimumSize(QSize(140, 40));
        bt_scsjb->setMaximumSize(QSize(120, 40));
        bt_scsjb->setStyleSheet(QStringLiteral(""));

        horizontalLayout_13->addWidget(bt_scsjb);


        gridLayout->addLayout(horizontalLayout_13, 2, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_data_update = new QLabel(widget_left);
        label_data_update->setObjectName(QStringLiteral("label_data_update"));
        label_data_update->setMinimumSize(QSize(40, 0));
        label_data_update->setMaximumSize(QSize(40, 16777215));
        label_data_update->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));

        horizontalLayout_12->addWidget(label_data_update);

        bt_data_update = new QPushButton(widget_left);
        bt_data_update->setObjectName(QStringLiteral("bt_data_update"));
        bt_data_update->setMinimumSize(QSize(140, 40));
        bt_data_update->setMaximumSize(QSize(120, 40));
        bt_data_update->setStyleSheet(QStringLiteral(""));

        horizontalLayout_12->addWidget(bt_data_update);


        gridLayout->addLayout(horizontalLayout_12, 3, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_gnh = new QLabel(widget_left);
        label_gnh->setObjectName(QStringLiteral("label_gnh"));
        label_gnh->setMinimumSize(QSize(40, 0));
        label_gnh->setMaximumSize(QSize(40, 16777215));
        label_gnh->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));

        horizontalLayout_11->addWidget(label_gnh);

        bt_gnh = new QPushButton(widget_left);
        bt_gnh->setObjectName(QStringLiteral("bt_gnh"));
        bt_gnh->setMinimumSize(QSize(140, 40));
        bt_gnh->setMaximumSize(QSize(120, 40));
        bt_gnh->setStyleSheet(QStringLiteral(""));

        horizontalLayout_11->addWidget(bt_gnh);


        gridLayout->addLayout(horizontalLayout_11, 0, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_zd = new QLabel(widget_left);
        label_zd->setObjectName(QStringLiteral("label_zd"));
        label_zd->setMinimumSize(QSize(40, 0));
        label_zd->setMaximumSize(QSize(40, 16777215));
        label_zd->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));

        horizontalLayout_10->addWidget(label_zd);

        bt_zd = new QPushButton(widget_left);
        bt_zd->setObjectName(QStringLiteral("bt_zd"));
        bt_zd->setMinimumSize(QSize(140, 40));
        bt_zd->setMaximumSize(QSize(120, 40));
        bt_zd->setStyleSheet(QStringLiteral(""));

        horizontalLayout_10->addWidget(bt_zd);


        gridLayout->addLayout(horizontalLayout_10, 1, 0, 1, 1);


        gridLayout_2->addWidget(widget_left, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 0, 1, 1);


        retranslateUi(Form_GtMsgShowMain);

        QMetaObject::connectSlotsByName(Form_GtMsgShowMain);
    } // setupUi

    void retranslateUi(QWidget *Form_GtMsgShowMain)
    {
        Form_GtMsgShowMain->setWindowTitle(QApplication::translate("Form_GtMsgShowMain", "Form", 0));
        label_scsjb->setText(QString());
        bt_scsjb->setText(QApplication::translate("Form_GtMsgShowMain", "\347\224\237\346\210\220\346\225\260\346\215\256\350\241\250\345\244\264", 0));
        label_data_update->setText(QString());
        bt_data_update->setText(QApplication::translate("Form_GtMsgShowMain", "\346\225\260\346\215\256\346\233\264\346\226\260", 0));
        label_gnh->setText(QString());
        bt_gnh->setText(QApplication::translate("Form_GtMsgShowMain", "\345\212\237\350\203\275\345\217\267\346\237\245\350\257\242", 0));
        label_zd->setText(QString());
        bt_zd->setText(QApplication::translate("Form_GtMsgShowMain", "\345\255\227\345\205\270\346\237\245\350\257\242", 0));
    } // retranslateUi

};

namespace Ui {
    class Form_GtMsgShowMain: public Ui_Form_GtMsgShowMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_GTMSGSHOWMAIN_H

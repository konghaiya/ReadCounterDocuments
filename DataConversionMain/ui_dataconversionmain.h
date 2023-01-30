/********************************************************************************
** Form generated from reading UI file 'dataconversionmain.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATACONVERSIONMAIN_H
#define UI_DATACONVERSIONMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataConversionMain
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;

    void setupUi(QWidget *DataConversionMain)
    {
        if (DataConversionMain->objectName().isEmpty())
            DataConversionMain->setObjectName(QStringLiteral("DataConversionMain"));
        DataConversionMain->resize(724, 439);
        DataConversionMain->setStyleSheet(QString::fromUtf8("/*\346\214\211\351\222\256*/\n"
"QPushButton,\n"
"QToolButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(68, 68, 75, 255), stop:1 rgba(30, 30, 30, 255));\n"
"	border:1px groove rgba(255,255,255,100);\n"
"\n"
"}\n"
"/*\346\214\211\351\222\256\346\202\254\345\201\234\345\222\214\346\214\211\344\270\213\347\212\266\346\200\201*/\n"
"QPushButton:hover,\n"
"QPushButton:pressed,\n"
"QPushButton:checked,\n"
"QPushButton:selected,\n"
"QToolButton:hover,\n"
"QToolButton:pressed,\n"
"QToolButton:checked,\n"
"QToolButton:selected{\n"
"	color: rgba(255, 150, 0,255);\n"
"\n"
"	background-color: qradialgradient(spread:pad, cx:0.505682, cy:0, radius:0.8, fx:0.505682, fy:0, stop:0 rgba(106, 162, 214, 255), stop:1 rgba(30, 30, 30, 255));\n"
"	border:2px groove rgba(70, 140, 195,100);\n"
"}"));
        gridLayout_2 = new QGridLayout(DataConversionMain);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton = new QPushButton(DataConversionMain);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(50, 20));
        pushButton->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 36);\n"
"color: rgb(249, 249, 249);"));

        gridLayout_2->addWidget(pushButton, 0, 5, 1, 1);

        label = new QLabel(DataConversionMain);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 75 20pt \"Aharoni\";\n"
"color: rgb(180, 180, 180);\n"
""));

        gridLayout_2->addWidget(label, 1, 1, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(116, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 3, 1, 2);

        horizontalSpacer = new QSpacerItem(117, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(DataConversionMain);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(50, 20));
        pushButton_4->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 36);\n"
"color: rgb(249, 249, 249);"));

        gridLayout_2->addWidget(pushButton_4, 0, 4, 1, 1);

        verticalSpacer = new QSpacerItem(68, 173, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_3 = new QPushButton(DataConversionMain);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMaximumSize(QSize(16777215, 100));
        pushButton_3->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 36);\n"
"font: 75 italic 26pt \"Aharoni\";\n"
"color: rgb(249, 249, 249);"));

        gridLayout->addWidget(pushButton_3, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(DataConversionMain);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMaximumSize(QSize(16777215, 100));
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 36);\n"
"font: 75 italic 26pt \"Aharoni\";\n"
"color: rgb(249, 249, 249);"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(DataConversionMain);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMaximumSize(QSize(16777215, 100));
        pushButton_5->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 36);\n"
"font: 75 italic 26pt \"Aharoni\";\n"
"color: rgb(249, 249, 249);"));

        gridLayout->addWidget(pushButton_5, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 3, 3, 1, 3);


        retranslateUi(DataConversionMain);

        QMetaObject::connectSlotsByName(DataConversionMain);
    } // setupUi

    void retranslateUi(QWidget *DataConversionMain)
    {
        DataConversionMain->setWindowTitle(QApplication::translate("DataConversionMain", "DataConversionMain", 0));
        pushButton->setText(QApplication::translate("DataConversionMain", " \351\200\200\345\207\272", 0));
        label->setText(QApplication::translate("DataConversionMain", "\346\254\242\350\277\216\344\275\277\347\224\250\346\250\241\346\213\237\346\237\234\345\217\260\351\233\206\346\210\220\345\267\245\345\205\267", 0));
        pushButton_4->setText(QApplication::translate("DataConversionMain", "\346\234\200\345\260\217\345\214\226", 0));
        pushButton_3->setText(QApplication::translate("DataConversionMain", "\346\225\260\346\215\256\344\270\255\345\277\203", 0));
        pushButton_2->setText(QApplication::translate("DataConversionMain", " \345\220\257\347\224\250\346\250\241\346\213\237\346\237\234\345\217\260", 0));
        pushButton_5->setText(QApplication::translate("DataConversionMain", "\346\237\234\345\217\260\346\216\245\345\217\243", 0));
    } // retranslateUi

};

namespace Ui {
    class DataConversionMain: public Ui_DataConversionMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATACONVERSIONMAIN_H

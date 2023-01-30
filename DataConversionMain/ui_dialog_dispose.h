/********************************************************************************
** Form generated from reading UI file 'dialog_dispose.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_DISPOSE_H
#define UI_DIALOG_DISPOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Dialog_dispose
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_5;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *Dialog_dispose)
    {
        if (Dialog_dispose->objectName().isEmpty())
            Dialog_dispose->setObjectName(QStringLiteral("Dialog_dispose"));
        Dialog_dispose->resize(653, 490);
        Dialog_dispose->setStyleSheet(QString::fromUtf8("QWidget,\n"
"QMainWindow{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(80, 80, 90, 255), stop:1 rgba(30, 30, 30, 255));\n"
"    font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(194, 193, 187);\n"
"}\n"
"\n"
"/*\345\267\245\345\205\267\346\240\217*/\n"
"QToolBar{\n"
"	background-color: rgba(0, 0, 0,80);\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"}\n"
"/*\345\267\245\345\205\267\347\256\261*/\n"
"QToolBox{\n"
"	color: rgb(194, 193, 187);\n"
"	background-color: rgba(255, 255, 255,0);\n"
"}\n"
"/*\345\267\245\345\205\267\347\256\261\346\214\211\351\222\256*/\n"
"QToolBox::tab{\n"
"	background-color: rgba(0, 0, 0,100);\n"
"	border:2px groove  gay;	\n"
"	border-color: rgba(255,255,255,60);\n"
"}\n"
"QToolBox::tab:hover,\n"
"QToolBox::tab:selected{\n"
"	color: rgb(255, 255, 255);\n"
"	/*background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 216, 0, 250), stop:1 rgba(255, 152, 30, 100));*/\n"
"	b"
                        "ackground-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(57, 71, 82, 255), stop:1 rgba(113, 128, 157, 255));\n"
"	border:2px groove  gay;	\n"
"	border-color: rgba(255,255,255,60);\n"
"	padding:2px 2px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*\347\274\226\350\276\221\346\241\206\343\200\201\346\230\276\347\244\272\346\241\206*/\n"
"QLineEdit,\n"
"QListView,\n"
"QTreeView,\n"
"QTableView,\n"
"QColumnView{\n"
"	background-color: rgba(0, 0, 0,80);\n"
"	selection-color: rgb(255, 255, 255);\n"
"	selection-background-color:rgba(70, 140, 195,50);\n"
"	border:0px groove  gay;	\n"
"	border-color: rgba(255,255,255,80);\n"
"    padding:2px 4px;\n"
"}\n"
"/*\350\241\250\345\244\264\346\240\267\345\274\217*/\n"
"\n"
"QHeaderView::section{\n"
"	background-color: rgb(86, 86, 86);\n"
"	border:1px solid rgba(220,220,220,100);\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"}\n"
"QTableWidget{\n"
"	alternate-background-color: rgba(255, 255, 255, 20);\n"
"}\n"
"\n"
"\n"
"\n"
"/*\346\214\211\351\222\256*/\n"
"QPushButton,\n"
""
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
"}\n"
"/*\345\201\234\351\235\240\346\240\217*/\n"
"QDockWidget{\n"
"	color: rgb(255, 255, 255);\n"
"	border:1px groove  gay;	\n"
"	border-color: rgba(255,255,0,60);\n"
"}\n"
"/*\351\200\211\351\241\271*/\n"
"QCheckBox,\n"
"QRadioButton{\n"
"	backgr"
                        "ound-color: none;\n"
"}\n"
"/*\351\200\211\351\241\271\345\213\276\351\200\211\347\212\266\346\200\201*/\n"
"QCheckBox:hover,\n"
"QCheckBox:checked,\n"
"QRadioButton:hover,\n"
"QRadioButton:checked{\n"
"	color: rgb(240, 130, 40);\n"
"}\n"
"/*\351\200\211\351\241\271\345\215\241*/\n"
"QTabWidget{\n"
"}\n"
"QTabWidget::pane{\n"
"	background-color: none;\n"
"	border:2px solid rgba(255,255,255,80);\n"
"}\n"
"/*\351\200\211\351\241\271\345\215\241tab\346\214\211\351\222\256*/\n"
"QTabBar::tab{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(71, 71, 71, 255), stop:0.119318 rgba(98, 98, 98, 255), stop:1 rgba(53, 53, 53, 255));\n"
"    border:2px solid rgba(0,0,0,100);\n"
"	min-width:70px;\n"
"	min-height:15px;\n"
"}\n"
"QTabBar::tab:selected,\n"
"QTabBar::tab:hover{\n"
"	color: rgb(0, 0, 0);\n"
"\n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 216, 0, 230), stop:1 rgba(255, 152, 30, 150));\n"
"	border:1px solid rgba"
                        "(0,0,0,150);\n"
"}\n"
"/*\347\274\226\350\276\221\346\241\206\343\200\201\345\276\256\350\260\203\346\241\206*/\n"
"QComboBox,\n"
"QTextEdit,\n"
"QPlainTextEdit,\n"
"QLineEdit,\n"
"QTimeEdit,\n"
"QDateEdit,\n"
"QDateTimeEdit,\n"
"QSpinBox,\n"
"QDoubleSpinBox{\n"
"	background-color: rgba(0, 0, 0,80);\n"
"	selection-color: rgb(255, 255, 255);\n"
"	selection-background-color:rgba(70, 140, 195,50);\n"
"	border:0px groove  rgba(255,255,255,80);\n"
"}\n"
"/*\347\274\226\350\276\221\346\241\206\343\200\201\345\276\256\350\260\203\346\241\206 \346\214\211\351\222\256*/\n"
"QTextEdit::up-button,\n"
"QTextEdit::down-button,\n"
"QPlainTextEdit::up-button,\n"
"QPlainTextEdit::down-button,\n"
"QLineEdit::up-button,\n"
"QLineEdit::down-button,\n"
"QTimeEdit::up-button,\n"
"QTimeEdit::down-button,\n"
"QDateEdit::up-button,\n"
"QDateEdit::down-button,\n"
"QDateTimeEdit::up-button,\n"
"QDateTimeEdit::down-button,\n"
"QSpinBox::up-button,\n"
"QSpinBox::down-button,\n"
"QDoubleSpinBox::up-button,\n"
"QDoubleSpinBox::down-button{"
                        "\n"
"	background-color: rgba(255,255,255,60);\n"
"    border:1px groove  gay;	\n"
"	border-color: rgba(255, 255, 255,80);\n"
"}\n"
"/*\347\274\226\350\276\221\346\241\206\343\200\201\345\276\256\350\260\203\346\241\206 \346\214\211\351\222\256\347\212\266\346\200\201*/\n"
"QTextEdit::up-button:hover,\n"
"QTextEdit::down-button:hover,\n"
"QPlainTextEdit::up-button:hover,\n"
"QPlainTextEdit::down-button:hover,\n"
"QLineEdit::up-button:hover,\n"
"QLineEdit::down-button:hover,\n"
"QTimeEdit::up-button:hover,\n"
"QTimeEdit::down-button:hover,\n"
"QDateEdit::up-button:hover,\n"
"QDateEdit::down-button:hover,\n"
"QDateTimeEdit::up-button:hover,\n"
"QDateTimeEdit::down-button:hover,\n"
"QSpinBox::up-button:hover,\n"
"QSpinBox::down-button:hover,\n"
"QDoubleSpinBox::up-button:hover,\n"
"QDoubleSpinBox::down-button:hover{\n"
"	background-color:rgba(70, 140, 195,100);	\n"
"    border:1px groove  gay;	\n"
"	border-color: rgba(255, 255, 127,50);\n"
"}\n"
"/*\347\274\226\350\276\221\346\241\206\343\200\201\345\276\256\350\260"
                        "\203\346\241\206 \347\256\255\345\244\264*/\n"
"QTextEdit::down-arrow,\n"
"QPlainTextEdit::down-arrow,\n"
"QLineEdit::down-arrow,\n"
"QTimeEdit::down-arrow,\n"
"QDateEdit::down-arrow,\n"
"QDateTimeEdit::down-arrow,\n"
"QSpinBox::down-arrow,\n"
"QDoubleSpinBox::down-arrow{\n"
"	image: url(:/icon/down-arrow.png);\n"
"	height:5px;\n"
"}\n"
"QTextEdit::up-arrow,\n"
"QPlainTextEdit::up-arrow,\n"
"QLineEdit::up-arrow,\n"
"QTimeEdit::up-arrow,\n"
"QDateEdit::up-arrow,\n"
"QDateTimeEdit::up-arrow,\n"
"QSpinBox::up-arrow,\n"
"QDoubleSpinBox::up-arrow{\n"
"	image: url(:/icon/up-arrow.png);\n"
"	height:5px;\n"
"}\n"
"/*\351\200\211\351\241\271\346\240\217 \347\256\255\345\244\264*/\n"
"QComboBox::drop-down{	\n"
"	background-color: rgba(255,255,255,60);\n"
"    border:1px groove  gay;	\n"
"	border-color: rgba(255, 255, 255,80);	\n"
"    image: url(:/icon/down-arrow.png);\n"
"	width:7px;\n"
"    padding:2px 4px;\n"
"}\n"
"QComboBox::drop-down:hover{\n"
"	background-color:rgba(70, 140, 195,100);	\n"
"    border:1px groove  "
                        "gay;	\n"
"	border-color: rgba(30, 125, 255,100);\n"
"    image: url(:/icon/down-arrow.png);\n"
"	width:7px;\n"
"    padding:2px 4px;\n"
"}\n"
"/*\346\240\207\347\255\276*/\n"
"QLabel{\n"
"    background-color:none;\n"
"    padding:2px 4px;\n"
"}\n"
"/*\347\273\204*/\n"
"Q3GroupBox,QGroupBox{\n"
"	background-color: rgba(255,255,255,10);\n"
"    border:2px groove;	\n"
"    border-color:rgba(255,255,255,80);\n"
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
"	border-co"
                        "lor: rgba(255, 255, 255,80);\n"
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
"}\n"
"QScrollBar::add-line:horizontal:hover{\n"
"	background-color:rgba(70, 140, 195,100);	\n"
"    border:1px groove  gay;	\n"
"	border-color: rgba(255, 255, 127,50);\n"
"    width:15px;\n"
"    subcontrol-position:right;\n"
"    subcontrol-origin:margin;\n"
"}\n"
"QScrollBar::sub-line:horizontal{\n"
"	background-color: rgba(255,255,255,60);\n"
"    border:1px groove  gay;	\n"
"	border-color: r"
                        "gba(255, 255, 255,80);\n"
"    width:15px;\n"
"    subcontrol-position:left;\n"
"    subcontrol-origin:margin;\n"
"}\n"
"QScrollBar::sub-line:horizontal:hover{\n"
"	background-color:rgba(70, 140, 195,100);	\n"
"    border:1px groove  gay;	\n"
"	border-color: rgba(255, 255, 127,50);\n"
"    width:15px;\n"
"    subcontrol-position:left;\n"
"    subcontrol-origin:margin;\n"
"}\n"
"/*\346\260\264\345\271\263\346\273\232\345\212\250\346\235\241 \347\256\255\345\244\264*/\n"
"QScrollBar::left-arrow:horizontal{\n"
"	image: url(:/icon/left-arrow.png);\n"
"height:7px;\n"
"}\n"
"QScrollBar::right-arrow:horizontal{\n"
"	image: url(:/icon/right-arrow.png);\n"
"height:7px;\n"
"}\n"
"QScrollBar::add-page:horizontal,\n"
"QScrollBar::sub-page:horizontal{\n"
"	background-color:none;\n"
"}\n"
"/*\345\236\202\347\233\264\346\273\232\345\212\250\346\235\241*/\n"
"QScrollBar:vertical{\n"
"    height:17px;\n"
"    margin: 16 0 16 0;\n"
"}\n"
"/*\345\236\202\347\233\264\346\273\232\345\212\250\346\235\241 \346\273\221\345\235\227*/\n"
""
                        "QScrollBar::handle:vertical{\n"
"	background-color:  rgba(255,255,255,95);\n"
"    min-height:20px;\n"
"    margin:1px 0px 1px 0px;\n"
"	border:1px groove  gay;	\n"
"	border-color: rgba(255, 255, 255,80);\n"
"}\n"
"QScrollBar::handle:vertical:hover{\n"
"	background-color:rgba(70, 140, 195,100);	\n"
"    min-height:20px;\n"
"    margin:1px 0px 1px 0px;\n"
"	border:1px groove  gay;	\n"
"	border-color: rgba(255, 255, 127,50);\n"
"}\n"
"/*\345\236\202\347\233\264\346\273\232\345\212\250\346\235\241 \345\276\256\350\260\203\346\214\211\351\222\256*/\n"
"QScrollBar::add-line:vertical{\n"
"	background-color: rgba(255,255,255,60);\n"
"    border:1px groove  gay;	\n"
"	border-color: rgba(255, 255, 255,80);\n"
"    height:15px;\n"
"    subcontrol-position:bottom;\n"
"    subcontrol-origin:margin;\n"
"}\n"
"QScrollBar::add-line:vertical:hover{\n"
"	background-color:rgba(70, 140, 195,100);	\n"
"    border:1px groove  gay;	\n"
"	border-color: rgba(255, 255, 127,50);\n"
"    height:15px;\n"
"    subcontrol-position:bottom;\n"
""
                        "    subcontrol-origin:margin;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"	background-color: rgba(255,255,255,60);\n"
"    border:1px groove  gay;	\n"
"	border-color: rgba(255, 255, 255,80);\n"
"    height:15px;\n"
"    subcontrol-position:top;\n"
"    subcontrol-origin:margin;\n"
"}\n"
"QScrollBar::sub-line:vertical:hover{\n"
"	background-color:rgba(70, 140, 195,100);	\n"
"    border:1px groove  gay;	\n"
"	border-color: rgba(255, 255, 127,50);\n"
"    height:15px;\n"
"    subcontrol-position:top;\n"
"    subcontrol-origin:margin;\n"
"}\n"
"/*\345\236\202\347\233\264\346\273\232\345\212\250\346\235\241 \347\256\255\345\244\264*/\n"
"QScrollBar::up-arrow:vertical{\n"
"	image: url(:/icon/up-arrow.png);\n"
"    height:7px;\n"
"}\n"
"QScrollBar::down-arrow:vertical{\n"
"	image: url(:/icon/down-arrow.png);\n"
"    height:7px;\n"
"}\n"
"QScrollBar::add-page:vertical,\n"
"QScrollBar::sub-page:vertical{\n"
"	background-color:none;\n"
"}\n"
"/*\346\273\221\345\235\227\350\203\214\346\231\257*/\n"
"QSlider{\n"
"	backgr"
                        "ound:none;\n"
"}\n"
"/*\346\260\264\345\271\263\346\273\221\345\235\227*/\n"
"QSlider::groove:horizontal{\n"
"	border:1px solid rgba(255, 255, 255,80);\n"
"	background:rgba(255,255,255,80);\n"
"	height:5px;\n"
"	border-radius:1px;\n"
"	padding-left:-1px;\n"
"	padding-right:-1px;\n"
"}\n"
"QSlider::sub-page:horizontal{\n"
"	background:rgba(70, 140, 195,150);\n"
"	border:1px solid none;\n"
"	height:10px;\n"
"	border-radius:2px;\n"
"}\n"
"QSlider::add-page:horizontal{\n"
"	background:rgba(255,255,255,80);\n"
"	border:0px solid ;\n"
"	height:10px;\n"
"	border-radius:2px;\n"
"}\n"
"/*\346\260\264\345\271\263\346\273\221\345\235\227 \346\270\270\346\240\207*/\n"
"QSlider::handle:houizontal{\n"
"	background:qradialgradient(spread:pad,cx:0.5,cy:0.5,radius:0.5,fx:0.5,fy:0.5,stop:0.6 #265782,stop:0.778409 rgba(255,255,255,255));\n"
"	width:11px;\n"
"	margin-top:-3px;\n"
"	margin-bottom:-3px;\n"
"	border-radius:5px;\n"
"}\n"
"QSlider::handle:horizontal:hover{\n"
"	background:qradialgradient(spread:pad,cx:0.5,cy:0.5,radiu"
                        "s:0.5,fx:0.5,fy:0.5,stop:0.6 rgb(0,150,255),stop:0.778409 rgba(255,255,255,255));\n"
"	width:11px;\n"
"	margin-top:-3px;\n"
"	margin-bottom:-3px;\n"
"	border-radius:5px;\n"
"}\n"
"/*\345\236\202\347\233\264\346\273\221\345\235\227*/\n"
"QSlider::groove:vertical{\n"
"	border:1px solid rgba(255, 255, 255,80);\n"
"	background:rgba(255,255,255,80);\n"
"	width:5px;\n"
"	border-radius:1px;\n"
"    padding-top:-1px;\n"
"    padding-bottom:-1px;\n"
"}\n"
"QSlider::add-page:vertical{\n"
"	background:rgba(70, 140, 195,150);\n"
"	border:1px solid none;\n"
"	width:10px;\n"
"	border-radius:2px;\n"
"}\n"
"QSlider::sub-page:vertical{\n"
"	background:rgba(255,255,255,80);\n"
"	border:0px solid ;\n"
"	width:10px;\n"
"	border-radius:2px;\n"
"}\n"
"/*\345\236\202\347\233\264\346\273\221\345\235\227 \346\270\270\346\240\207*/\n"
"QSlider::handle:vertical{\n"
"	background:qradialgradient(spread:pad,cx:0.5,cy:0.5,radius:0.5,fx:0.5,fy:0.5,stop:0.6 #265782,stop:0.778409 rgba(255,255,255,255));\n"
"	height:11px;\n"
"	margin-left:-3px;"
                        "\n"
"	margin-right:-3px;\n"
"	border-radius:5px;\n"
"}\n"
"QSlider::handle:vertical:hover{\n"
"	background:qradialgradient(spread:pad,cx:0.5,cy:0.5,radius:0.5,fx:0.5,fy:0.5,stop:0.6 rgb(0,150,255),stop:0.778409 rgba(255,255,255,255));\n"
"	height:11px;\n"
"	margin-left:-3px;\n"
"	margin-right:-3px;\n"
"	border-radius:5px;\n"
"}\n"
"/*\350\277\233\345\272\246\346\235\241*/\n"
"QProgressBar{\n"
"	background-color: rgba(0, 0, 0,80);\n"
"	color:rgb(255,150,0);\n"
"	border:1px solid rgba(255,255,255,80);\n"
"	text-align:center;\n"
"    max-height:20px;\n"
"}\n"
"QProgressBar::chunk{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:0, y2:1, stop:0 rgba(255, 150, 0, 190), stop:1 rgba(255, 150, 0,80));\n"
"\n"
"}"));
        gridLayout = new QGridLayout(Dialog_dispose);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_6 = new QPushButton(Dialog_dispose);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(200, 30));
        pushButton_6->setMaximumSize(QSize(16777215, 30));

        gridLayout->addWidget(pushButton_6, 7, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_3 = new QPushButton(Dialog_dispose);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(200, 30));
        pushButton_3->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(Dialog_dispose);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(200, 30));
        pushButton_4->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_3->addWidget(pushButton_4);


        gridLayout->addLayout(horizontalLayout_3, 4, 0, 1, 4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(Dialog_dispose);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(200, 30));
        pushButton->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(Dialog_dispose);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(200, 30));
        pushButton_2->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_5 = new QPushButton(Dialog_dispose);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(120, 0));
        pushButton_5->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(pushButton_5);

        label = new QLabel(Dialog_dispose);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));

        horizontalLayout->addWidget(label);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(166, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 7, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(171, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 7, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 8, 1, 1, 1);


        retranslateUi(Dialog_dispose);

        QMetaObject::connectSlotsByName(Dialog_dispose);
    } // setupUi

    void retranslateUi(QDialog *Dialog_dispose)
    {
        Dialog_dispose->setWindowTitle(QApplication::translate("Dialog_dispose", "Dialog", 0));
        pushButton_6->setText(QApplication::translate("Dialog_dispose", "\345\257\274\345\205\245\345\205\245\345\217\202\346\240\241\351\252\214\351\205\215\347\275\256\346\250\241\346\235\277\350\207\263\347\233\256\346\240\207\347\250\213\345\272\217\347\233\256\345\275\225", 0));
        pushButton_3->setText(QApplication::translate("Dialog_dispose", "\345\220\257\345\212\250\346\225\260\346\215\256\346\250\241\346\213\237", 0));
        pushButton_4->setText(QApplication::translate("Dialog_dispose", "\345\205\263\351\227\255\346\225\260\346\215\256\346\250\241\346\213\237", 0));
        pushButton->setText(QApplication::translate("Dialog_dispose", "\345\274\200\345\220\257\346\225\260\346\215\256\350\216\267\345\217\226", 0));
        pushButton_2->setText(QApplication::translate("Dialog_dispose", "\345\205\263\351\227\255\346\225\260\346\215\256\350\216\267\345\217\226", 0));
        pushButton_5->setText(QApplication::translate("Dialog_dispose", "\350\277\224\345\233\236", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_dispose: public Ui_Dialog_dispose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DISPOSE_H

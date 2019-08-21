/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QTextEdit *Receive_text_window;
    QTextEdit *Send_text_window;
    QLabel *label_2;
    QPushButton *clear_button_2;
    QPushButton *receive_modl;
    QPushButton *send_modl;
    QPushButton *send_button;
    QPushButton *clear_button_1;
    QLabel *label_3;
    QComboBox *comboBox;
    QComboBox *com;
    QComboBox *baud;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *stopbit;
    QLabel *label_6;
    QComboBox *bit;
    QLabel *label_7;
    QComboBox *jiaoyan;
    QPushButton *open_port;
    QPushButton *close_port;
    QLabel *label_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(730, 686);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font.setPointSize(14);
        font.setBold(false);
        font.setUnderline(true);
        font.setWeight(50);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 320, 140, 20));
        label->setTextFormat(Qt::AutoText);
        Receive_text_window = new QTextEdit(centralWidget);
        Receive_text_window->setObjectName(QString::fromUtf8("Receive_text_window"));
        Receive_text_window->setGeometry(QRect(320, 350, 372, 211));
        Send_text_window = new QTextEdit(centralWidget);
        Send_text_window->setObjectName(QString::fromUtf8("Send_text_window"));
        Send_text_window->setGeometry(QRect(320, 40, 372, 211));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 10, 140, 20));
        label_2->setTextFormat(Qt::AutoText);
        clear_button_2 = new QPushButton(centralWidget);
        clear_button_2->setObjectName(QString::fromUtf8("clear_button_2"));
        clear_button_2->setGeometry(QRect(470, 570, 93, 28));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        clear_button_2->setFont(font1);
        receive_modl = new QPushButton(centralWidget);
        receive_modl->setObjectName(QString::fromUtf8("receive_modl"));
        receive_modl->setGeometry(QRect(330, 570, 110, 28));
        receive_modl->setFont(font1);
        send_modl = new QPushButton(centralWidget);
        send_modl->setObjectName(QString::fromUtf8("send_modl"));
        send_modl->setGeometry(QRect(330, 260, 110, 28));
        send_modl->setFont(font1);
        send_button = new QPushButton(centralWidget);
        send_button->setObjectName(QString::fromUtf8("send_button"));
        send_button->setGeometry(QRect(590, 260, 93, 28));
        send_button->setFont(font);
        clear_button_1 = new QPushButton(centralWidget);
        clear_button_1->setObjectName(QString::fromUtf8("clear_button_1"));
        clear_button_1->setGeometry(QRect(470, 260, 93, 28));
        clear_button_1->setFont(font1);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 20, 140, 20));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(1520, 760, 87, 22));
        com = new QComboBox(centralWidget);
        com->setObjectName(QString::fromUtf8("com"));
        com->setGeometry(QRect(160, 20, 121, 25));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\226\260\351\255\217"));
        font2.setPointSize(10);
        font2.setUnderline(false);
        com->setFont(font2);
        baud = new QComboBox(centralWidget);
        baud->addItem(QString());
        baud->addItem(QString());
        baud->addItem(QString());
        baud->addItem(QString());
        baud->addItem(QString());
        baud->addItem(QString());
        baud->addItem(QString());
        baud->addItem(QString());
        baud->setObjectName(QString::fromUtf8("baud"));
        baud->setGeometry(QRect(160, 70, 121, 25));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\226\260\351\255\217"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setUnderline(false);
        font3.setWeight(50);
        baud->setFont(font3);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 70, 140, 20));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 120, 140, 20));
        stopbit = new QComboBox(centralWidget);
        stopbit->addItem(QString());
        stopbit->setObjectName(QString::fromUtf8("stopbit"));
        stopbit->setGeometry(QRect(160, 120, 121, 25));
        stopbit->setFont(font3);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 170, 140, 20));
        bit = new QComboBox(centralWidget);
        bit->addItem(QString());
        bit->addItem(QString());
        bit->addItem(QString());
        bit->addItem(QString());
        bit->setObjectName(QString::fromUtf8("bit"));
        bit->setGeometry(QRect(160, 170, 121, 25));
        bit->setFont(font3);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 220, 140, 20));
        jiaoyan = new QComboBox(centralWidget);
        jiaoyan->addItem(QString());
        jiaoyan->setObjectName(QString::fromUtf8("jiaoyan"));
        jiaoyan->setGeometry(QRect(160, 220, 121, 25));
        jiaoyan->setFont(font3);
        open_port = new QPushButton(centralWidget);
        open_port->setObjectName(QString::fromUtf8("open_port"));
        open_port->setGeometry(QRect(55, 520, 181, 28));
        close_port = new QPushButton(centralWidget);
        close_port->setObjectName(QString::fromUtf8("close_port"));
        close_port->setGeometry(QRect(55, 570, 181, 28));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 260, 231, 231));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/images/Me.JPG")));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 730, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\216\245\346\224\266\347\252\227\345\217\243", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\347\252\227\345\217\243", nullptr));
        clear_button_2->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        receive_modl->setText(QCoreApplication::translate("MainWindow", "\346\226\207\346\234\254\346\250\241\345\274\217", nullptr));
        send_modl->setText(QCoreApplication::translate("MainWindow", "\346\226\207\346\234\254\346\250\241\345\274\217", nullptr));
        send_button->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        clear_button_1->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\351\200\211\346\213\251", nullptr));
        baud->setItemText(0, QCoreApplication::translate("MainWindow", "9600", nullptr));
        baud->setItemText(1, QCoreApplication::translate("MainWindow", "300", nullptr));
        baud->setItemText(2, QCoreApplication::translate("MainWindow", "1200", nullptr));
        baud->setItemText(3, QCoreApplication::translate("MainWindow", "2400", nullptr));
        baud->setItemText(4, QCoreApplication::translate("MainWindow", "4800", nullptr));
        baud->setItemText(5, QCoreApplication::translate("MainWindow", "14400", nullptr));
        baud->setItemText(6, QCoreApplication::translate("MainWindow", "19200", nullptr));
        baud->setItemText(7, QCoreApplication::translate("MainWindow", "28800", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", nullptr));
        stopbit->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));

        label_6->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", nullptr));
        bit->setItemText(0, QCoreApplication::translate("MainWindow", "8", nullptr));
        bit->setItemText(1, QCoreApplication::translate("MainWindow", "5", nullptr));
        bit->setItemText(2, QCoreApplication::translate("MainWindow", "6", nullptr));
        bit->setItemText(3, QCoreApplication::translate("MainWindow", "7", nullptr));

        label_7->setText(QCoreApplication::translate("MainWindow", "\345\245\207\345\201\266\346\240\241\351\252\214", nullptr));
        jiaoyan->setItemText(0, QCoreApplication::translate("MainWindow", "0", nullptr));

        open_port->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        close_port->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

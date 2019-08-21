/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *stopbit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *com;
    QPushButton *open_port;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *baud;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *jiaoyan;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *bit;
    QPushButton *close_port;
    QLabel *label_6;
    QTextEdit *Receive_text_window;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *clear_button2;
    QPushButton *receive_modl;
    QLabel *label_7;
    QTextEdit *send_text_window;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *send_button;
    QPushButton *clear_button_1;
    QPushButton *send_modl;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(648, 489);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        stopbit = new QComboBox(Widget);
        stopbit->addItem(QString());
        stopbit->setObjectName(QString::fromUtf8("stopbit"));

        horizontalLayout_5->addWidget(stopbit);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        com = new QComboBox(Widget);
        com->setObjectName(QString::fromUtf8("com"));

        horizontalLayout->addWidget(com);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        open_port = new QPushButton(Widget);
        open_port->setObjectName(QString::fromUtf8("open_port"));

        gridLayout->addWidget(open_port, 7, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        baud = new QComboBox(Widget);
        baud->addItem(QString());
        baud->addItem(QString());
        baud->addItem(QString());
        baud->addItem(QString());
        baud->addItem(QString());
        baud->addItem(QString());
        baud->addItem(QString());
        baud->addItem(QString());
        baud->setObjectName(QString::fromUtf8("baud"));

        horizontalLayout_2->addWidget(baud);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        jiaoyan = new QComboBox(Widget);
        jiaoyan->addItem(QString());
        jiaoyan->setObjectName(QString::fromUtf8("jiaoyan"));

        horizontalLayout_4->addWidget(jiaoyan);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        bit = new QComboBox(Widget);
        bit->addItem(QString());
        bit->addItem(QString());
        bit->addItem(QString());
        bit->addItem(QString());
        bit->setObjectName(QString::fromUtf8("bit"));

        horizontalLayout_3->addWidget(bit);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        close_port = new QPushButton(Widget);
        close_port->setObjectName(QString::fromUtf8("close_port"));

        gridLayout->addWidget(close_port, 6, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 6, 1);

        label_6 = new QLabel(Widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 1, 1, 1);

        Receive_text_window = new QTextEdit(Widget);
        Receive_text_window->setObjectName(QString::fromUtf8("Receive_text_window"));

        gridLayout_2->addWidget(Receive_text_window, 1, 1, 1, 2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        clear_button2 = new QPushButton(Widget);
        clear_button2->setObjectName(QString::fromUtf8("clear_button2"));

        horizontalLayout_7->addWidget(clear_button2);

        receive_modl = new QPushButton(Widget);
        receive_modl->setObjectName(QString::fromUtf8("receive_modl"));

        horizontalLayout_7->addWidget(receive_modl);


        gridLayout_2->addLayout(horizontalLayout_7, 2, 2, 1, 1);

        label_7 = new QLabel(Widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 3, 1, 1, 1);

        send_text_window = new QTextEdit(Widget);
        send_text_window->setObjectName(QString::fromUtf8("send_text_window"));

        gridLayout_2->addWidget(send_text_window, 4, 1, 1, 2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        send_button = new QPushButton(Widget);
        send_button->setObjectName(QString::fromUtf8("send_button"));

        horizontalLayout_6->addWidget(send_button);

        clear_button_1 = new QPushButton(Widget);
        clear_button_1->setObjectName(QString::fromUtf8("clear_button_1"));

        horizontalLayout_6->addWidget(clear_button_1);

        send_modl = new QPushButton(Widget);
        send_modl->setObjectName(QString::fromUtf8("send_modl"));

        horizontalLayout_6->addWidget(send_modl);


        gridLayout_2->addLayout(horizontalLayout_6, 5, 1, 1, 2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        stopbit->setItemText(0, QCoreApplication::translate("Widget", "1", nullptr));

        label->setText(QCoreApplication::translate("Widget", "\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        open_port->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        baud->setItemText(0, QCoreApplication::translate("Widget", "9600", nullptr));
        baud->setItemText(1, QCoreApplication::translate("Widget", "300", nullptr));
        baud->setItemText(2, QCoreApplication::translate("Widget", "1200", nullptr));
        baud->setItemText(3, QCoreApplication::translate("Widget", "2400", nullptr));
        baud->setItemText(4, QCoreApplication::translate("Widget", "4800", nullptr));
        baud->setItemText(5, QCoreApplication::translate("Widget", "14400", nullptr));
        baud->setItemText(6, QCoreApplication::translate("Widget", "19200", nullptr));
        baud->setItemText(7, QCoreApplication::translate("Widget", "28800", nullptr));

        label_4->setText(QCoreApplication::translate("Widget", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        jiaoyan->setItemText(0, QCoreApplication::translate("Widget", "0", nullptr));

        label_3->setText(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        bit->setItemText(0, QCoreApplication::translate("Widget", "8", nullptr));
        bit->setItemText(1, QCoreApplication::translate("Widget", "5", nullptr));
        bit->setItemText(2, QCoreApplication::translate("Widget", "6", nullptr));
        bit->setItemText(3, QCoreApplication::translate("Widget", "7", nullptr));

        close_port->setText(QCoreApplication::translate("Widget", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\346\216\245\346\224\266\347\252\227\345\217\243", nullptr));
        clear_button2->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\225\260\346\215\256", nullptr));
        receive_modl->setText(QCoreApplication::translate("Widget", "\346\226\207\346\234\254\346\250\241\345\274\217", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\347\252\227\345\217\243", nullptr));
        send_button->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
        clear_button_1->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\225\260\346\215\256", nullptr));
        send_modl->setText(QCoreApplication::translate("Widget", "\346\226\207\346\234\254\346\250\241\345\274\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

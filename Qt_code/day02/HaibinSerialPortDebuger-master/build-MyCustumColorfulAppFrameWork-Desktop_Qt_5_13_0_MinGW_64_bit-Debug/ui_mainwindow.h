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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionAbout_QT;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_10;
    QRadioButton *rB_rcvMode_text;
    QRadioButton *rB_rcvMode_hex;
    QPushButton *pB_clearLog;
    QPushButton *pB_saveRevData;
    QPushButton *pB_saveSendData;
    QPushButton *pB_saveAllData;
    QSpacerItem *verticalSpacer;
    QTextEdit *tE_rcvcon;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *cB_serailport;
    QLabel *label_2;
    QComboBox *cB_bautrate;
    QLabel *Label;
    QComboBox *cB_databits;
    QLabel *label_3;
    QComboBox *cB_stopbit;
    QLabel *label_4;
    QComboBox *cB_checkbit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pB_openSerail;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QRadioButton *rB_sendMode_text;
    QRadioButton *rB_sendMode_hex;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;
    QTextEdit *tE_sendcon;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pB_sendfile;
    QPushButton *pB_senddata;
    QPushButton *pB_autoSend;
    QLabel *label_5;
    QLineEdit *lE_send_ms;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    QLineEdit *lE_send_cnt;
    QLabel *label_7;
    QLineEdit *lE_rcv_cnt;
    QPushButton *pB_clear_count;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menubar;
    QMenu *menuHelp;
    QButtonGroup *buttonGroup_send;
    QButtonGroup *buttonGroup_rcv;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(976, 577);
        MainWindow->setMinimumSize(QSize(590, 0));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_QT = new QAction(MainWindow);
        actionAbout_QT->setObjectName(QString::fromUtf8("actionAbout_QT"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_11 = new QVBoxLayout(groupBox_3);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(3);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        rB_rcvMode_text = new QRadioButton(groupBox_3);
        buttonGroup_rcv = new QButtonGroup(MainWindow);
        buttonGroup_rcv->setObjectName(QString::fromUtf8("buttonGroup_rcv"));
        buttonGroup_rcv->addButton(rB_rcvMode_text);
        rB_rcvMode_text->setObjectName(QString::fromUtf8("rB_rcvMode_text"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rB_rcvMode_text->sizePolicy().hasHeightForWidth());
        rB_rcvMode_text->setSizePolicy(sizePolicy);
        rB_rcvMode_text->setMaximumSize(QSize(16777215, 20));
        rB_rcvMode_text->setChecked(true);

        verticalLayout_10->addWidget(rB_rcvMode_text);

        rB_rcvMode_hex = new QRadioButton(groupBox_3);
        buttonGroup_rcv->addButton(rB_rcvMode_hex);
        rB_rcvMode_hex->setObjectName(QString::fromUtf8("rB_rcvMode_hex"));
        sizePolicy.setHeightForWidth(rB_rcvMode_hex->sizePolicy().hasHeightForWidth());
        rB_rcvMode_hex->setSizePolicy(sizePolicy);
        rB_rcvMode_hex->setMaximumSize(QSize(16777215, 20));
        rB_rcvMode_hex->setChecked(false);

        verticalLayout_10->addWidget(rB_rcvMode_hex);

        pB_clearLog = new QPushButton(groupBox_3);
        pB_clearLog->setObjectName(QString::fromUtf8("pB_clearLog"));
        pB_clearLog->setMaximumSize(QSize(16777215, 22));

        verticalLayout_10->addWidget(pB_clearLog);

        pB_saveRevData = new QPushButton(groupBox_3);
        pB_saveRevData->setObjectName(QString::fromUtf8("pB_saveRevData"));
        pB_saveRevData->setMaximumSize(QSize(16777215, 22));

        verticalLayout_10->addWidget(pB_saveRevData);

        pB_saveSendData = new QPushButton(groupBox_3);
        pB_saveSendData->setObjectName(QString::fromUtf8("pB_saveSendData"));
        pB_saveSendData->setMaximumSize(QSize(16777215, 22));

        verticalLayout_10->addWidget(pB_saveSendData);

        pB_saveAllData = new QPushButton(groupBox_3);
        pB_saveAllData->setObjectName(QString::fromUtf8("pB_saveAllData"));
        pB_saveAllData->setMaximumSize(QSize(16777215, 22));

        verticalLayout_10->addWidget(pB_saveAllData);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer);


        verticalLayout_9->addLayout(verticalLayout_10);


        horizontalLayout_11->addLayout(verticalLayout_9);

        tE_rcvcon = new QTextEdit(groupBox_3);
        tE_rcvcon->setObjectName(QString::fromUtf8("tE_rcvcon"));

        horizontalLayout_11->addWidget(tE_rcvcon);


        verticalLayout_8->addLayout(horizontalLayout_11);


        verticalLayout_11->addLayout(verticalLayout_8);


        verticalLayout_12->addWidget(groupBox_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_6 = new QHBoxLayout(groupBox);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cB_serailport = new QComboBox(groupBox);
        cB_serailport->setObjectName(QString::fromUtf8("cB_serailport"));
        cB_serailport->setEnabled(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, cB_serailport);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        cB_bautrate = new QComboBox(groupBox);
        cB_bautrate->setObjectName(QString::fromUtf8("cB_bautrate"));

        formLayout->setWidget(1, QFormLayout::FieldRole, cB_bautrate);

        Label = new QLabel(groupBox);
        Label->setObjectName(QString::fromUtf8("Label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, Label);

        cB_databits = new QComboBox(groupBox);
        cB_databits->setObjectName(QString::fromUtf8("cB_databits"));

        formLayout->setWidget(2, QFormLayout::FieldRole, cB_databits);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        cB_stopbit = new QComboBox(groupBox);
        cB_stopbit->setObjectName(QString::fromUtf8("cB_stopbit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, cB_stopbit);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        cB_checkbit = new QComboBox(groupBox);
        cB_checkbit->setObjectName(QString::fromUtf8("cB_checkbit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, cB_checkbit);


        verticalLayout_2->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pB_openSerail = new QPushButton(groupBox);
        pB_openSerail->setObjectName(QString::fromUtf8("pB_openSerail"));

        horizontalLayout->addWidget(pB_openSerail);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_6->addLayout(verticalLayout_2);


        horizontalLayout_7->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rB_sendMode_text = new QRadioButton(groupBox_2);
        buttonGroup_send = new QButtonGroup(MainWindow);
        buttonGroup_send->setObjectName(QString::fromUtf8("buttonGroup_send"));
        buttonGroup_send->addButton(rB_sendMode_text);
        rB_sendMode_text->setObjectName(QString::fromUtf8("rB_sendMode_text"));
        sizePolicy.setHeightForWidth(rB_sendMode_text->sizePolicy().hasHeightForWidth());
        rB_sendMode_text->setSizePolicy(sizePolicy);
        rB_sendMode_text->setMaximumSize(QSize(16777215, 20));
        rB_sendMode_text->setChecked(true);

        verticalLayout->addWidget(rB_sendMode_text);

        rB_sendMode_hex = new QRadioButton(groupBox_2);
        buttonGroup_send->addButton(rB_sendMode_hex);
        rB_sendMode_hex->setObjectName(QString::fromUtf8("rB_sendMode_hex"));
        sizePolicy.setHeightForWidth(rB_sendMode_hex->sizePolicy().hasHeightForWidth());
        rB_sendMode_hex->setSizePolicy(sizePolicy);
        rB_sendMode_hex->setMaximumSize(QSize(16777215, 20));
        rB_sendMode_hex->setChecked(false);

        verticalLayout->addWidget(rB_sendMode_hex);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(16777215, 22));

        verticalLayout->addWidget(pushButton_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_3->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(verticalLayout_3);

        tE_sendcon = new QTextEdit(groupBox_2);
        tE_sendcon->setObjectName(QString::fromUtf8("tE_sendcon"));

        horizontalLayout_2->addWidget(tE_sendcon);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pB_sendfile = new QPushButton(groupBox_2);
        pB_sendfile->setObjectName(QString::fromUtf8("pB_sendfile"));
        pB_sendfile->setMaximumSize(QSize(16777215, 22));

        horizontalLayout_3->addWidget(pB_sendfile, 0, Qt::AlignLeft|Qt::AlignVCenter);

        pB_senddata = new QPushButton(groupBox_2);
        pB_senddata->setObjectName(QString::fromUtf8("pB_senddata"));
        pB_senddata->setMinimumSize(QSize(0, 0));
        pB_senddata->setMaximumSize(QSize(16777215, 22));

        horizontalLayout_3->addWidget(pB_senddata, 0, Qt::AlignVCenter);

        pB_autoSend = new QPushButton(groupBox_2);
        pB_autoSend->setObjectName(QString::fromUtf8("pB_autoSend"));
        pB_autoSend->setMaximumSize(QSize(16777215, 22));

        horizontalLayout_3->addWidget(pB_autoSend, 0, Qt::AlignVCenter);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 22));
        label_5->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_3->addWidget(label_5, 0, Qt::AlignVCenter);

        lE_send_ms = new QLineEdit(groupBox_2);
        lE_send_ms->setObjectName(QString::fromUtf8("lE_send_ms"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lE_send_ms->sizePolicy().hasHeightForWidth());
        lE_send_ms->setSizePolicy(sizePolicy1);
        lE_send_ms->setMaximumSize(QSize(50, 22));
        lE_send_ms->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_3->addWidget(lE_send_ms, 0, Qt::AlignVCenter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout_7->addWidget(groupBox_2);


        verticalLayout_12->addLayout(horizontalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        lE_send_cnt = new QLineEdit(centralwidget);
        lE_send_cnt->setObjectName(QString::fromUtf8("lE_send_cnt"));
        lE_send_cnt->setMaximumSize(QSize(60, 16777215));
        lE_send_cnt->setReadOnly(true);

        horizontalLayout_4->addWidget(lE_send_cnt);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        lE_rcv_cnt = new QLineEdit(centralwidget);
        lE_rcv_cnt->setObjectName(QString::fromUtf8("lE_rcv_cnt"));
        lE_rcv_cnt->setMaximumSize(QSize(60, 16777215));
        lE_rcv_cnt->setReadOnly(true);

        horizontalLayout_4->addWidget(lE_rcv_cnt);

        pB_clear_count = new QPushButton(centralwidget);
        pB_clear_count->setObjectName(QString::fromUtf8("pB_clear_count"));
        pB_clear_count->setMaximumSize(QSize(60, 22));

        horizontalLayout_4->addWidget(pB_clear_count);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_12->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_12, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 976, 26));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuHelp->menuAction());
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_QT);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_2, SIGNAL(clicked()), tE_sendcon, SLOT(clear()));
        QObject::connect(pB_clearLog, SIGNAL(clicked()), tE_rcvcon, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216\346\234\254\350\275\257\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAbout_QT->setText(QCoreApplication::translate("MainWindow", "About QT", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\346\216\245\346\224\266\347\274\223\345\206\262\345\214\272", nullptr));
#if QT_CONFIG(tooltip)
        rB_rcvMode_text->setToolTip(QCoreApplication::translate("MainWindow", "\346\231\256\351\200\232\346\226\207\346\234\254\346\250\241\345\274\217\345\217\221\351\200\201", nullptr));
#endif // QT_CONFIG(tooltip)
        rB_rcvMode_text->setText(QCoreApplication::translate("MainWindow", "\346\226\207\346\234\254\346\250\241\345\274\217", nullptr));
#if QT_CONFIG(tooltip)
        rB_rcvMode_hex->setToolTip(QCoreApplication::translate("MainWindow", "\345\215\201\345\205\255\350\277\233\345\210\266\346\250\241\345\274\217\345\217\221\351\200\201", nullptr));
#endif // QT_CONFIG(tooltip)
        rB_rcvMode_hex->setText(QCoreApplication::translate("MainWindow", "HEX\346\250\241\345\274\217", nullptr));
        pB_clearLog->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\266\210\346\201\257\350\256\260\345\275\225", nullptr));
        pB_saveRevData->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\216\245\346\224\266\346\225\260\346\215\256", nullptr));
        pB_saveSendData->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
        pB_saveAllData->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\345\205\250\351\203\250\346\225\260\346\215\256", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\351\205\215\347\275\256", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        Label->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215", nullptr));
        pB_openSerail->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\347\274\223\345\206\262\345\214\272", nullptr));
#if QT_CONFIG(tooltip)
        rB_sendMode_text->setToolTip(QCoreApplication::translate("MainWindow", "\346\231\256\351\200\232\346\226\207\346\234\254\346\250\241\345\274\217\345\217\221\351\200\201", nullptr));
#endif // QT_CONFIG(tooltip)
        rB_sendMode_text->setText(QCoreApplication::translate("MainWindow", "\346\226\207\346\234\254\346\250\241\345\274\217", nullptr));
#if QT_CONFIG(tooltip)
        rB_sendMode_hex->setToolTip(QCoreApplication::translate("MainWindow", "\345\215\201\345\205\255\350\277\233\345\210\266\346\250\241\345\274\217\345\217\221\351\200\201", nullptr));
#endif // QT_CONFIG(tooltip)
        rB_sendMode_hex->setText(QCoreApplication::translate("MainWindow", "HEX\346\250\241\345\274\217", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\345\217\221\351\200\201\345\214\272", nullptr));
        pB_sendfile->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
        pB_senddata->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
        pB_autoSend->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\345\217\221\351\200\201", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\221\250\346\234\237(ms)", nullptr));
        lE_send_ms->setPlaceholderText(QCoreApplication::translate("MainWindow", "ms", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\346\216\245\346\224\266", nullptr));
        pB_clear_count->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

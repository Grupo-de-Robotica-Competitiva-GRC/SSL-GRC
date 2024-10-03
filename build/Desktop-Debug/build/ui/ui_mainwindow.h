/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Receive;
    QPushButton *StopReceiving;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_5;
    QLabel *label_8;
    QTextEdit *txtInfo;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QComboBox *team;
    QLabel *label_5;
    QComboBox *strategy;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_11;
    QComboBox *mode;
    QLabel *label_9;
    QLineEdit *_addr;
    QLabel *label_10;
    QLineEdit *_port;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *Connect;
    QPushButton *Send;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(704, 603);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #1A3B62 ;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Receive = new QPushButton(centralwidget);
        Receive->setObjectName(QString::fromUtf8("Receive"));
        Receive->setGeometry(QRect(30, 520, 301, 41));
        Receive->setStyleSheet(QString::fromUtf8(
          "QPushButton {"
          "    background-color: #E01B25;"
          "    color: #D1D1D1;"
          "    border: 2px solid black;"
          "}"
          "QPushButton:pressed {"
          "    background-color: #FF5733;"  // Cor alterada ao pressionar
          "    border: 2px solid #FFD700;"  // Alterar a borda ao pressionar
          "}"
      ));

        StopReceiving = new QPushButton(centralwidget);
        StopReceiving->setObjectName(QString::fromUtf8("StopReceiving"));
        StopReceiving->setGeometry(QRect(360, 520, 311, 41));
        StopReceiving->setStyleSheet(QString::fromUtf8(
          "QPushButton {"
          "    background-color: #E01B25;"
          "    color: #D1D1D1;"
          "    border: 2px solid black;"
          "}"
          "QPushButton:pressed {"
          "    background-color: #FF5733;"  // Cor alterada ao pressionar
          "    border: 2px solid #FFD700;"  // Alterar a borda ao pressionar
          "}"
      ));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 266, 161, 16));
        label->setStyleSheet(QString::fromUtf8("color: #FFFFFF; /* Cor do texto branco */\n"
"background-color: #1A3B62; /* Fundo azul */\n"
"font-size: 18px;\n"
"font-weight: bold;\n"
"\n"
"\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 10, 171, 31));
        label_2->setStyleSheet(QString::fromUtf8("color: #FFFFFF; /* Cor do texto branco */\n"
"background-color: #1A3B62; /* Fundo azul */\n"
"font-size: 24px;\n"
"font-weight: bold;\n"
"\n"
"\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 10, 111, 121));
        label_3->setStyleSheet(QString::fromUtf8(""));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../Downloads/grclogoAredondada.png")));
        label_3->setScaledContents(true);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(160, 180, 131, 41));
        pushButton_5->setMouseTracking(true);
        pushButton_5->setTabletTracking(true);
        pushButton_5->setStyleSheet(QString::fromUtf8(
          "QPushButton {"
          "    background-color: #E01B25;"
          "    color: #D1D1D1;"
          "    border: 2px solid black;"
          "}"
          "QPushButton:pressed {"
          "    background-color: #FF5733;"  // Cor alterada ao pressionar
          "    border: 2px solid #FFD700;"  // Alterar a borda ao pressionar
          "}"
      ));
        pushButton_5->setCheckable(true);
        pushButton_5->setFlat(true);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(400, 30, 101, 21));
        label_8->setStyleSheet(QString::fromUtf8("color: #FFFFFF; /* Cor do texto branco */\n"
"background-color: #1A3B62; /* Fundo azul */\n"
"font-size: 18px;\n"
"font-weight: bold;\n"
"\n"
"\n"
""));
        txtInfo = new QTextEdit(centralwidget);
        txtInfo->setObjectName(QString::fromUtf8("txtInfo"));
        txtInfo->setGeometry(QRect(30, 300, 641, 201));
        txtInfo->setStyleSheet(QString::fromUtf8("background-color: #D1D1D1;\n"
"color:  Black;\n"
"border: 2px solid black;\n"
""));
        txtInfo->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        txtInfo->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        txtInfo->setReadOnly(true);
        txtInfo->setOverwriteMode(true);
        txtInfo->setTabStopDistance(80.000000000000000);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 50, 151, 112));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: #FFFFFF; /* Cor do texto branco */\n"
"background-color: #1A3B62; /* Fundo azul */\n"
"font-size: 18px;\n"
"font-weight: bold;\n"
"\n"
"\n"
""));

        verticalLayout->addWidget(label_4);

        team = new QComboBox(layoutWidget);
        team->setObjectName(QString::fromUtf8("team"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(209, 209, 209, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(0, 0, 0, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        team->setPalette(palette);
        team->setStyleSheet(QString::fromUtf8("background-color: #D1D1D1;\n"
"color:  Black;\n"
"border: 2px solid black;\n"
""));

        verticalLayout->addWidget(team);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("color: #FFFFFF; /* Cor do texto branco */\n"
"background-color: #1A3B62; /* Fundo azul */\n"
"font-size: 18px;\n"
"font-weight: bold;\n"
"\n"
"\n"
""));

        verticalLayout->addWidget(label_5);

        strategy = new QComboBox(layoutWidget);
        strategy->setObjectName(QString::fromUtf8("strategy"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        QBrush brush3(QColor(218, 218, 218, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        QBrush brush4(QColor(38, 38, 38, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        QBrush brush5(QColor(38, 39, 40, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        QBrush brush6(QColor(128, 128, 129, 255));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        strategy->setPalette(palette1);
        strategy->setStyleSheet(QString::fromUtf8("background-color: #D1D1D1;\n"
"color:  Black;\n"
"border: 2px solid black;\n"
""));

        verticalLayout->addWidget(strategy);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(400, 60, 181, 158));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("color: #FFFFFF; /* Cor do texto branco */\n"
"background-color: #1A3B62; /* Fundo azul */\n"
"font-size: 15px;\n"
"font-weight: bold;\n"
"\n"
"\n"
""));

        verticalLayout_3->addWidget(label_11);

        mode = new QComboBox(layoutWidget1);
        mode->setObjectName(QString::fromUtf8("mode"));
        mode->setStyleSheet(QString::fromUtf8("background-color: #D1D1D1;\n"
"color:  Black;\n"
"border: 2px solid black;\n"
""));
        mode->setEditable(false);

        verticalLayout_3->addWidget(mode);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("color: #FFFFFF; /* Cor do texto branco */\n"
"background-color: #1A3B62; /* Fundo azul */\n"
"font-size: 15px;\n"
"font-weight: bold;\n"
"\n"
"\n"
""));

        verticalLayout_3->addWidget(label_9);

        _addr = new QLineEdit(layoutWidget1);
        _addr->setObjectName(QString::fromUtf8("_addr"));
        _addr->setStyleSheet(QString::fromUtf8("background-color: #D1D1D1;\n"
"color:  Black;\n"
"border: 2px solid black;\n"
""));

        verticalLayout_3->addWidget(_addr);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("color: #FFFFFF; /* Cor do texto branco */\n"
"background-color: #1A3B62; /* Fundo azul */\n"
"font-size: 15px;\n"
"font-weight: bold;\n"
"\n"
"\n"
""));

        verticalLayout_3->addWidget(label_10);

        _port = new QLineEdit(layoutWidget1);
        _port->setObjectName(QString::fromUtf8("_port"));
        _port->setStyleSheet(QString::fromUtf8("background-color: #D1D1D1;\n"
"color:  Black;\n"
"border: 2px solid black;\n"
""));

        verticalLayout_3->addWidget(_port);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(400, 220, 181, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Connect = new QPushButton(layoutWidget2);
        Connect->setObjectName(QString::fromUtf8("Connect"));
        Connect->setStyleSheet(QString::fromUtf8(
          "QPushButton {"
          "    background-color: #E01B25;"
          "    color: #D1D1D1;"
          "    border: 2px solid black;"
          "}"
          "QPushButton:pressed {"
          "    background-color: #FF5733;"  // Cor alterada ao pressionar
          "    border: 2px solid #FFD700;"  // Alterar a borda ao pressionar
          "}"
      ));
        Connect->setFlat(true);

        horizontalLayout->addWidget(Connect);

        Send = new QPushButton(layoutWidget2);
        Send->setObjectName(QString::fromUtf8("Send"));
        Send->setEnabled(true);
        Send->setStyleSheet(QString::fromUtf8(
          "QPushButton {"
          "    background-color: #E01B25;"
          "    color: #D1D1D1;"
          "    border: 2px solid black;"
          "}"
          "QPushButton:pressed {"
          "    background-color: #FF5733;"  // Cor alterada ao pressionar
          "    border: 2px solid #FFD700;"  // Alterar a borda ao pressionar
          "}"
      ));

        horizontalLayout->addWidget(Send);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 704, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "GRC SSL - EL", nullptr));
        Receive->setText(QCoreApplication::translate("MainWindow", "Receive", nullptr));
        StopReceiving->setText(QCoreApplication::translate("MainWindow", "Stop Receiving", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Vision data", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "GRC SSL - EL", nullptr));
        label_3->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Apply strategy", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        txtInfo->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:10pt;\"><br /></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Selected team", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Strategy", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Mode", nullptr));
        mode->setCurrentText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "Simulator Address", nullptr));
        _addr->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Simulator Port", nullptr));
        _port->setText(QCoreApplication::translate("MainWindow", "20011", nullptr));
        Connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        Send->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

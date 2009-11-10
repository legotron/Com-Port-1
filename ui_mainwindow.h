/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Tue Nov 10 14:26:37 2009
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_openport;
    QPushButton *pushButton_closeport;
    QPushButton *pushButton_tx;
    QComboBox *port_comboBox;
    QLineEdit *tx_edit;
    QLineEdit *tx_cnt_edit;
    QPlainTextEdit *tx_window;
    QPlainTextEdit *rx_window;
    QGridLayout *gridLayout;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(572, 310);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setMargin(11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_openport = new QPushButton(centralWidget);
        pushButton_openport->setObjectName(QString::fromUtf8("pushButton_openport"));
        pushButton_openport->setCheckable(false);
        pushButton_openport->setFlat(false);

        gridLayout_2->addWidget(pushButton_openport, 0, 0, 1, 1);

        pushButton_closeport = new QPushButton(centralWidget);
        pushButton_closeport->setObjectName(QString::fromUtf8("pushButton_closeport"));

        gridLayout_2->addWidget(pushButton_closeport, 0, 1, 1, 1);

        pushButton_tx = new QPushButton(centralWidget);
        pushButton_tx->setObjectName(QString::fromUtf8("pushButton_tx"));

        gridLayout_2->addWidget(pushButton_tx, 0, 2, 1, 1);

        port_comboBox = new QComboBox(centralWidget);
        port_comboBox->setObjectName(QString::fromUtf8("port_comboBox"));

        gridLayout_2->addWidget(port_comboBox, 0, 4, 1, 2);

        tx_edit = new QLineEdit(centralWidget);
        tx_edit->setObjectName(QString::fromUtf8("tx_edit"));

        gridLayout_2->addWidget(tx_edit, 1, 0, 1, 4);

        tx_cnt_edit = new QLineEdit(centralWidget);
        tx_cnt_edit->setObjectName(QString::fromUtf8("tx_cnt_edit"));
        tx_cnt_edit->setReadOnly(true);

        gridLayout_2->addWidget(tx_cnt_edit, 1, 5, 1, 1);

        tx_window = new QPlainTextEdit(centralWidget);
        tx_window->setObjectName(QString::fromUtf8("tx_window"));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(8);
        tx_window->setFont(font);

        gridLayout_2->addWidget(tx_window, 2, 0, 1, 3);

        rx_window = new QPlainTextEdit(centralWidget);
        rx_window->setObjectName(QString::fromUtf8("rx_window"));
        rx_window->setFont(font);

        gridLayout_2->addWidget(rx_window, 2, 3, 1, 3);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        gridLayout_2->addLayout(gridLayout, 3, 0, 1, 6);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 4, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 572, 22));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        pushButton_openport->setText(QApplication::translate("MainWindow", "Open port", 0, QApplication::UnicodeUTF8));
        pushButton_closeport->setText(QApplication::translate("MainWindow", "Close port", 0, QApplication::UnicodeUTF8));
        pushButton_tx->setText(QApplication::translate("MainWindow", "Tx", 0, QApplication::UnicodeUTF8));
        tx_edit->setText(QString());
        tx_cnt_edit->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Bytes sent:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include "my_comport.h"

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
	MyComPort *comport;

private slots:

 void on_port_comboBox_activated(QString );
 void on_pushButton_tx_clicked();
 void on_pushButton_closeport_clicked();
 void on_pushButton_openport_clicked();
 void on_recieveMsg(QByteArray &);

};

#endif // MAINWINDOW_H

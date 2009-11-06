#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

	comport_init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
	comport_open();
}

void MainWindow::on_pushButton_2_clicked()
{
	comport_close();
}

void MainWindow::on_pushButton_3_clicked()
{
	QString Message;
	QString BytesRecieved_str;
	int BytesRecieved = 0;

	//comport_receiveMsg(Message, BytesRecieved);
	BytesRecieved_str = BytesRecieved;

	ui->plainTextEdit->appendPlainText(Message);
	ui->plainTextEdit_2->appendPlainText(BytesRecieved_str);
}

void MainWindow::on_pushButton_4_clicked()
{
	QString TXMessage = "Hey, ComPort";
	comport_transmitMsg(TXMessage);
}

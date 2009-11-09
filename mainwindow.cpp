#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	comport = new MyComPort();
}

MainWindow::~MainWindow()
{
    delete ui;
	delete comport;
}

void MainWindow::on_pushButton_clicked()
{
	comport->open();
}

void MainWindow::on_pushButton_2_clicked()
{
	comport->close();
}

void MainWindow::on_pushButton_3_clicked()
{
	/*
	QString Message;
	QString BytesRecieved_str;
	int BytesRecieved = 0;

	//comport_receiveMsg(Message, BytesRecieved);
	BytesRecieved_str = BytesRecieved;

	ui->plainTextEdit->appendPlainText(Message);
	ui->plainTextEdit_2->appendPlainText(BytesRecieved_str);
	*/
}

void MainWindow::on_pushButton_4_clicked()
{
	QString str = "Hello";
	QByteArray data;

	data.append(str);
	comport->transmitMsg(data);
}

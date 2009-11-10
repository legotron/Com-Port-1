#include "mainwindow.h"
#include "ui_mainwindow.h"

//------------------------------------------------------------------------------
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

	ui->pushButton_tx->setEnabled(false);
	ui->pushButton_closeport->setEnabled(false);

	ui->port_comboBox->addItem("/dev/ttyUSB0");
	ui->port_comboBox->addItem("/dev/ttyp0");
	ui->port_comboBox->addItem("/dev/ttyS0");

	comport = new MyComPort(0, ui->port_comboBox->currentText());

	//connections
	connect(comport,SIGNAL(sig_recieveMsg(QByteArray &)),this, SLOT(on_recieveMsg(QByteArray &)));
}
//------------------------------------------------------------------------------
MainWindow::~MainWindow()
{
    delete ui;
	delete comport;
}

void MainWindow::on_pushButton_openport_clicked()
{
	QString portname = ui->port_comboBox->currentText();
	comport->setPortName(portname);
	if (comport->open() == 1) {
		ui->pushButton_openport->setEnabled(false);
		ui->pushButton_closeport->setEnabled(true);
		ui->pushButton_tx->setEnabled(true);
		ui->statusBar->showMessage("Port "+portname+" successfully opened");
	}
	else ui->statusBar->showMessage("Could not open "+portname);
}
//------------------------------------------------------------------------------
void MainWindow::on_pushButton_closeport_clicked()
{
	if (comport->close() == 0) {
		ui->pushButton_openport->setEnabled(true);
		ui->pushButton_closeport->setEnabled(false);
		ui->pushButton_tx->setEnabled(false);
		ui->statusBar->showMessage("Port closed");
	}
	else ui->statusBar->showMessage("Could not close port");
}
//------------------------------------------------------------------------------
void MainWindow::on_pushButton_tx_clicked()
{
	QString str = ui->tx_edit->text();
	QByteArray data;

	data.append(str);
	comport->transmitMsg(data);

	ui->tx_window->appendPlainText(str);
	ui->tx_cnt_edit->clear();
	ui->tx_cnt_edit->insert(QString::number(str.length()));
}
//------------------------------------------------------------------------------
void MainWindow::on_recieveMsg(QByteArray &data)
{
	ui->rx_window->appendPlainText((QString)data);
}
//------------------------------------------------------------------------------
void MainWindow::on_port_comboBox_activated(QString )
{

}
//------------------------------------------------------------------------------

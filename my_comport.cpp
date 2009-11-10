#include "my_comport.h"

//------------------------------------------------------------------------------
MyComPort::MyComPort(QObject* parent, QString port_name)
: QObject(parent)
{
	PortSettings portsettings;

	portsettings.BaudRate = BAUD115200;
	portsettings.DataBits = DATA_8;
	portsettings.Parity = PAR_NONE;
	portsettings.StopBits = STOP_1;
	portsettings.FlowControl = FLOW_OFF;
	portsettings.Timeout_Millisec = 500;
	portsettings.Timeout_Sec = 0;

	mainComThread = new QMainComThread(port_name,&portsettings);

	mainComThread->start();

	port =  NULL;

	while (!port)
	{
		port = mainComThread->getPort();
		qApp->processEvents();
	}

	//connections
	connect(port,SIGNAL(newDataInPortSignal(QTime,const unsigned char *, const int)),this, SLOT(receiveMsg(QTime,const unsigned char *, const int)));
}
//------------------------------------------------------------------------------
bool MyComPort::open()
{
	if (! port) return 0;
	port->open(QIODevice::ReadWrite);
	qDebug("is open: %d",port->isOpen());
	return port->isOpen();
}
//------------------------------------------------------------------------------
bool MyComPort::close()
{
	if (! port) return 0;
	port->close();
	qDebug("is open: %d",port->isOpen());
	return port->isOpen();
}
//------------------------------------------------------------------------------
void MyComPort::transmitMsg(QByteArray &data)
{
	int count = port->write(data, data.length());
	qDebug("trasmitted : %d", count);
}
//------------------------------------------------------------------------------
void MyComPort::receiveMsg(const QTime timesl, const unsigned char *data, const int size)
{
	QByteArray ba_data;

	if (size == 0) return;

	ba_data.append(QByteArray::fromRawData((const char *)data, size));
	emit sig_recieveMsg(ba_data);
}
//------------------------------------------------------------------------------
void MyComPort::setPortName(QString name)
{
	port->setPortName(name);
}
//------------------------------------------------------------------------------

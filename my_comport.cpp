#include "my_comport.h"

//------------------------------------------------------------------------------
MyComPort::MyComPort(QObject* parent)
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

	mainComThread = new QMainComThread("/dev/ttyp0",&portsettings);
	mainComThread->start();

	port =  NULL;

	while (!port)
	{
		port = mainComThread->getPort();
		qApp->processEvents();
	}

	//connect(port,SIGNAL(newDataInPortSignal(QTime,const unsigned char *, const int)),this, SLOT(receiveMsg(QTime,const unsigned char *, const int)));
}
//------------------------------------------------------------------------------
void MyComPort::open()
{
	if (! port) return;
	port->open(QIODevice::ReadWrite);
	qDebug("is open: %d",port->isOpen());
}
//------------------------------------------------------------------------------
void MyComPort::close()
{
	if (! port) return;
	port->close();
	qDebug("is open: %d",port->isOpen());
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
}
//------------------------------------------------------------------------------


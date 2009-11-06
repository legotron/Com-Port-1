#include "my_comport.h"
#include <qextserialport.h>

QextSerialPort *port;

//------------------------------------------------------------------------------
void comport_init()
{
	//port = new QextSerialPort("/dev/ttyUSB0");
	port = new QextSerialPort("/dev/ttyp0");

	port->setBaudRate(BAUD115200);
	port->setFlowControl(FLOW_OFF);
	port->setParity(PAR_NONE);
	port->setDataBits(DATA_8);
	port->setStopBits(STOP_1);

	//connect(port,SIGNAL(newDataInPortSignal(QTime,const unsigned char *, const int)),this, SLOT(receiveMsg(QTime,const unsigned char *, const int)));
}
//------------------------------------------------------------------------------
void comport_open()
{
	port->open(QIODevice::ReadWrite);
	qDebug("is open: %d", port->isOpen());
}
//------------------------------------------------------------------------------
void comport_close()
{
	port->close();
	qDebug("is open: %d", port->isOpen());
}
//------------------------------------------------------------------------------
void comport_transmitMsg(QString &msg)
{
  int i = port->write(msg.toAscii(), msg.length());
  qDebug("trasmitted : %d", i);
}
//------------------------------------------------------------------------------




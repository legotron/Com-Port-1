#ifndef _MY_COMPORT_H_
  #define _MY_COMPORT_H_

#include <QString>
#include <QTime>
#include <qextserialport.h>
#include <threadcomport.h>

class MyComPort {

public:
	MyComPort();
	~MyComPort();
	void open();
	void close();
	void transmitMsg(QString &msg);
private:
	Qthreadcomport *port;
	QMainComThread *mainComThread;
private slots:

	void receiveMsg(const QTime timesl, const unsigned char *data, const int size);
};

/*
********************************************************************************
*                              FUNCTION PROTOTYPES
********************************************************************************
*/

void comport_init();
void comport_open();
void comport_close();
void comport_transmitMsg(QString &msg);
void comport_receiveMsg(QString &msg, int &rx_bytes);

#endif

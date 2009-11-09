#ifndef _MY_COMPORT_H_
  #define _MY_COMPORT_H_

#include <QString>
#include <QTime>
#include <QObject>
#include <qextserialport.h>
#include <threadcomport.h>
#include <QApplication>

class MyComPort : public QObject {
	Q_OBJECT
public:
	MyComPort(QObject* parent = 0);
	//virtual ~MyComPort();

	Qthreadcomport *port;
	QMainComThread *mainComThread;

	void open();
	void close();
	void transmitMsg(QByteArray &data);
private:

private slots:

	void receiveMsg(const QTime timesl, const unsigned char *data, const int size);
};

#endif

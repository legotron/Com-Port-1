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
	MyComPort(QObject* parent = 0, QString port_name = 0);
	bool open();
	bool close();
	void transmitMsg(QByteArray &data);
	void setPortName(QString name);

private:
	Qthreadcomport *port;
	QMainComThread *mainComThread;

private slots:
	void receiveMsg(const QTime timesl, const unsigned char *data, const int size);

signals:
	void sig_recieveMsg(QByteArray &data);
};

#endif

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include <QTextEdit>
#include "Includes/VisionProtos/ssl_vision_detection.pb.h"
#include "Includes/VisionProtos/ssl_vision_geometry.pb.h"
#include "Includes/VisionProtos/ssl_vision_wrapper.pb.h"
#include "Includes/VisionProtos/timer.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void receiveBtnClicked();
    void processPendingDatagrams();
    void stopReceiving();
    void reconnectUdp();
    void sendBtnClicked();
    void sendPacket(SSL_DetectionFrame detection);

private:
    Ui::MainWindow *ui;
    QHostAddress _addr;
    quint16 _port;
    QUdpSocket udpsocket_rec;
    QUdpSocket udpsocket;
    bool sending;
    QTimer *timer;
};
#endif // MAINWINDOW_H

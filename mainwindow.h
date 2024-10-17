#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include <QTextEdit>
#include "Includes/VisionProtos/ssl_vision_detection.pb.h"
#include "Includes/VisionProtos/ssl_vision_geometry.pb.h"
#include "Includes/VisionProtos/ssl_vision_wrapper.pb.h"
#include "Includes/VisionProtos/timer.h"
#include "Includes/GRSimProtos/grSim_Packet.pb.h"
#include <QSerialPort>
#include <QSerialPortInfo>

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
    void simulationStrategy(SSL_DetectionFrame detection);
    void realStrategy(SSL_DetectionFrame detection);
    void strategyAndSendSimulated(int i,SSL_DetectionRobot robot, grSim_Packet packet);
    void strategyAndSendReal(int i,SSL_DetectionRobot robot, grSim_Packet packet);

private slots:
    void on_Receive_pressed();

    void on_Receive_released();

    void on_StopReceiving_pressed();

    void on_StopReceiving_released();

    void on_Connect_pressed();

    void on_Connect_released();

    void on_Send_pressed();

    void on_Send_released();

private:
    Ui::MainWindow *ui;
    QHostAddress _addr;
    quint16 _port;
    QUdpSocket udpsocket_rec;
    QUdpSocket udpsocket;
    bool sending;
    QTimer *timer;
    QSerialPort serial;

};
#endif // MAINWINDOW_H

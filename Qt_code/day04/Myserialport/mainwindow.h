#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>        //提供访问串口的功能
#include <QSerialPortInfo>    //提供系统中存在的串口的信息
#include <QWidget>
#include <QTime>
#include <QMessageBox>
#include <QTextCodec>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void Read_Data();
    void find_port();
    void on_send_modl_clicked();
    void on_receive_modl_clicked();
    void on_clear_button_1_clicked();
    void on_clear_button_2_clicked();
    void sleep(int msec);
    void on_close_port_clicked();
    void on_open_port_clicked();
    void on_send_button_clicked();

private:
    Ui::MainWindow *ui;
    QSerialPort *serialport;
    bool textstate_receive;
    bool textstate_send;
};

#endif // MAINWINDOW_H

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    clock = new Clock(this);
    clock->show();

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(btn_start_click()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(btn_stop_click()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(btn_reset_click()));
    connect(clock, SIGNAL(alarm()), this, SLOT(on_alarm()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_alarm()
{
    QMessageBox msg;
    msg.setText("время вышло");
    msg.exec();
}

void MainWindow::btn_start_click()
{
    clock->start();
}
void MainWindow::btn_stop_click()
{
    clock->stop();
}
void MainWindow::btn_reset_click()
{
    clock->reset();
}


void MainWindow::on_pushButton_clicked()
{

}


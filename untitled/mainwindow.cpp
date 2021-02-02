#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QtDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug()<<"hello";
}

MainWindow::~MainWindow()
{
    delete ui;
}


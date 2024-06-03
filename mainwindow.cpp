#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "configreader.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Читаем конфигурационный файл
    ConfigReader confReader("default.conf");
}

MainWindow::~MainWindow()
{
    delete ui;
}

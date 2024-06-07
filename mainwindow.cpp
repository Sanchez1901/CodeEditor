#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "configreader.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Читаем конфигурационный файл
    try{
        ConfigReader confReader("..\\build-Coder-Desktop_Qt_5_15_2_MinGW_64_bit-Debug\\Config.txt");
    }catch(...){

    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

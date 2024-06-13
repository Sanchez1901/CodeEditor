#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "configreader.h"
#include "stylehelper.h"
#include <QDebug>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Читаем конфигурационный файл
    try{
        ConfigReader confReader("default.conf");
    }catch(...){
        qDebug() << "Не удалось прочитать данные из файла конфигурации";
    }
    setInterfaceStyle();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setInterfaceStyle()
{
    StyleHelper::setFonts();
    this->setStyleSheet(StyleHelper::getMainStyleLight());
}

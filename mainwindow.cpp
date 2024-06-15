#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "configreader.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Читаем конфигурационный файл
    ConfigReader confReader("default.conf");
    //Файл
    connect(ui->OpenAction,&QAction::triggered,this,&MainWindow::openActionSlot);
    connect(ui->ExportAction,&QAction::triggered,this,&MainWindow::exportActionSlot);
    connect(ui->ExitAction,&QAction::triggered,this,&MainWindow::exitActionSlot);
    //Заметки
    connect(ui->NewAction,&QAction::triggered,this,&MainWindow::newActionSlot);
    connect(ui->SaveCopyAction,&QAction::triggered,this,&MainWindow::saveCopyActionSlot);
    connect(ui->SaveAsAction,&QAction::triggered,this,&MainWindow::saveAsActionSlot);
    connect(ui->ClearAction,&QAction::triggered,this,&MainWindow::clearActionSlot);
    connect(ui->DeleteAction,&QAction::triggered,this,&MainWindow::deleteActionSlot);
    //Редактировать
    connect(ui->UndoAction,&QAction::triggered,this,&MainWindow::undoActionSlot);
    connect(ui->ReturnAction,&QAction::triggered,this,&MainWindow::returnActionSlot);
    connect(ui->CopyAction,&QAction::triggered,this,&MainWindow::copyActionSlot);
    connect(ui->PasteAction,&QAction::triggered,this,&MainWindow::pasteActionSlot);
    connect(ui->CutAction,&QAction::triggered,this,&MainWindow::cutActionSlot);
    connect(ui->SettingsAction,&QAction::triggered,this,&MainWindow::settingsActionSlot);
    //Помощь
    connect(ui->ReferenceAction,&QAction::triggered,this,&MainWindow::referenceActionSlot);
    connect(ui->AboutProgramAction,&QAction::triggered,this,&MainWindow::aboutProgramActionSlot);
}

MainWindow::~MainWindow()
{
    delete ui;
}
// Файл
void MainWindow::openActionSlot()
{

}

void MainWindow::exportActionSlot()
{

}

void MainWindow::exitActionSlot()
{

}
// Заметки
void MainWindow::newActionSlot()
{

}

void MainWindow::saveCopyActionSlot()
{

}

void MainWindow::saveAsActionSlot()
{

}

void MainWindow::clearActionSlot()
{

}

void MainWindow::deleteActionSlot()
{

}
// Редактировать
void MainWindow::undoActionSlot()
{

}

void MainWindow::returnActionSlot()
{

}

void MainWindow::copyActionSlot()
{

}

void MainWindow::pasteActionSlot()
{

}

void MainWindow::cutActionSlot()
{

}

void MainWindow::settingsActionSlot()
{

}
//Помощь
void MainWindow::referenceActionSlot()
{

}

void MainWindow::aboutProgramActionSlot()
{

}

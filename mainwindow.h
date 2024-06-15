#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "highlighter.h"
#include "highlighterQss.h"
#include "highlighterJson.h"

#include "codeeditor.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void ruleChengeButton();
	//Файл
    void openActionSlot();
    void exportActionSlot();
    void exitActionSlot();
    //Заметки
    void newActionSlot();
    void saveCopyActionSlot();
    void saveAsActionSlot();
    void clearActionSlot();
    void deleteActionSlot();
    //Редактировать
    void undoActionSlot();
    void returnActionSlot();
    void copyActionSlot();
    void pasteActionSlot();
    void cutActionSlot();
    void settingsActionSlot();
    //Помощь
    void referenceActionSlot();
    void aboutProgramActionSlot();

private:
    Ui::MainWindow *ui;

    void setInterfaceStyle();
};
#endif // MAINWINDOW_H

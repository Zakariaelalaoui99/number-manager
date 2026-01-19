#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "numberslist.h"

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
    void on_actionadd_triggered();

    void on_actionedit_triggered();

    void on_actiondelet_triggered();

    void pdateUI();

    void on_clearButton_clicked();

    void on_actionSpecial_Function_triggered();

private:
    Ui::MainWindow *ui;
    NumbersList* m_numberslist;


};
#endif // MAINWINDOW_H

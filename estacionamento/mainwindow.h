#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "conexao.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    QString status;
    Conexao *c;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_commandLinkButton_4_clicked();

private:
    Ui::MainWindow *ui;
    void validarCampos();
};

#endif // MAINWINDOW_H

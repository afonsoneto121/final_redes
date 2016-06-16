#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "configform.h"
#include <iostream>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->status = "Desconectado";
    ui->setupUi(this);
    ui->statusBar->showMessage(this->status);    
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //QString porta = ui->portLine->text();
    //QString ip = ui->ipLine->text();
    Conexao *d = new Conexao(7890,"192.168.0.117");
    d->conect();
    c = d;
}

void MainWindow::validarCampos()
{
    QString str = ui->lineEdit->text();
    int tam = str.size();
    if(tam != 7)
    {
        QMessageBox::warning(this,"Alerta","Formato da placa invalido");
    }
}



void MainWindow::on_commandLinkButton_4_clicked()
{
    //validarCampos();
    c->enviar("Teste");
}

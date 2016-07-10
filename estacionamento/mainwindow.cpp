#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QMessageBox>
#include <unistd.h>
#include <string.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->status = "Desconectado";
    ui->setupUi(this);
    ui->statusBar->showMessage(this->status);
    this->porta =  7890 ;
    this->ip = "192.168.0.107";
}

MainWindow::~MainWindow()
{
    delete ui;
}
bool con = true;

void MainWindow::on_pushButton_clicked()
{
    if(con)
    {
        Conexao *d = new Conexao(porta,this->ip);
        d->conect();
        c = d;
        ui->pushButton->setText("Desconectar");
        ui->statusBar->showMessage("Conectado");
        con = false;
    }
    else {
        c = NULL;
        ui->pushButton->setText("Conectar");
        ui->statusBar->showMessage("Desconectado");
        con = true;
    }

}

bool MainWindow::validarCampos()
{
    QString str = ui->lineEdit->text();
    int tam = str.size();
    if(tam != 7)
    {
        QMessageBox::warning(this,"Alerta","Formato da placa invalido");
        return false;
    }
    return true;
}



void MainWindow::on_commandLinkButton_4_clicked()
{

    //Inserir
    if(c != NULL && validarCampos()==true)
    {
        char tipo = 'A';

        QString placa = ui->lineEdit->text();
        placa = placa+tipo;
        std::string fname = placa.toStdString();
        char *cstr = new char [fname.size()+1];
        strcpy( cstr, fname.c_str() );

        std::cout <<" "<< cstr;

        c->enviar(cstr);

        QMessageBox::information(this,"Informação","Veiculo Inserido");

    }
    else
    {
        QMessageBox::warning(this,"Alerta","Você esta desconectado");
    }

}

void MainWindow::on_commandLinkButton_5_clicked()
{
    //Pesquisar
    if(c != NULL && validarCampos() == true)
    {
        char tipo = 'B';

        QString placa = ui->lineEdit->text();
        placa = placa+tipo;
        std::string fname = placa.toStdString();
        char *cstr = new char [fname.size()+1];
        strcpy( cstr, fname.c_str() );
        c->enviar(cstr);
        std::cout << cstr;

        char *sd = NULL;
        while(sd == NULL)
        {
            sd = c->receber();
        }


        std::cout << sd;
        if(strcmp(sd , "OK") == 0)
        {
            QMessageBox::information(this,"Informação","Veiculo encontrado ");
        }
        else
        {
            QMessageBox::information(this,"Informação","Veiculo não encontrado");
        }
    }
    else
    {
        QMessageBox::warning(this,"Alerta","Você esta desconectado");
    }
}

void MainWindow::on_commandLinkButton_6_clicked()
{
        //Apagar
    if(c != NULL && validarCampos() == true)
    {
        char tipo = 'C';

        QString placa = ui->lineEdit->text();
        placa = placa+tipo;
        std::string fname = placa.toStdString();
        char *cstr = new char [fname.size()+1];
        strcpy( cstr, fname.c_str() );
        c->enviar(cstr);
        std::cout << cstr;

        char *sd = NULL;
        while(sd == NULL)
        {
            sd = c->receber();
        }

        if(strcmp(sd , "OK") == 0)
        {
            QMessageBox::information(this,"Informação","Veiculo apagado ");

        }
    }
}


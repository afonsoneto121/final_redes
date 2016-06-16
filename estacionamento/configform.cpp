#include "configform.h"
#include "ui_configform.h"
#include <iostream>
#include <QMessageBox>
ConfigForm::ConfigForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ConfigForm)
{
    ui->setupUi(this);
    this->conexao = new Conexao(7890,"");
}

ConfigForm::~ConfigForm()
{
    delete ui;
}

void ConfigForm::on_pushButton_2_clicked()
{
    QString porta_str = ui->portaLine->text();
    QString ip_str = ui->ipLine->text();
    int port = porta_str.toInt();
    char* cstr;

    std::string fname = ip_str.toStdString();
    cstr = new char [fname.size()+1];
    strcpy( cstr, fname.c_str() );

    this->conexao = new Conexao(port,cstr);
    QMessageBox::information(this,"Configuração","OK");
}


void ConfigForm::on_pushButton_clicked()
{

}

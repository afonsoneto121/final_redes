#ifndef CONFIGFORM_H
#define CONFIGFORM_H

#include <QMainWindow>
#include "conexao.h"
namespace Ui {
class ConfigForm;
}

class ConfigForm : public QMainWindow
{
    Q_OBJECT
public:
    Conexao* conexao;
public:
    explicit ConfigForm(QWidget *parent = 0);
    ~ConfigForm();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::ConfigForm *ui;
};

#endif // CONFIGFORM_H

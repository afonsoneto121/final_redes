/********************************************************************************
** Form generated from reading UI file 'configform.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGFORM_H
#define UI_CONFIGFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigForm
{
public:
    QAction *actionSair;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLineEdit *portaLine;
    QLabel *label;
    QLineEdit *ipLine;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *ConfigForm)
    {
        if (ConfigForm->objectName().isEmpty())
            ConfigForm->setObjectName(QStringLiteral("ConfigForm"));
        ConfigForm->resize(399, 168);
        actionSair = new QAction(ConfigForm);
        actionSair->setObjectName(QStringLiteral("actionSair"));
        centralwidget = new QWidget(ConfigForm);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 61, 21));
        portaLine = new QLineEdit(centralwidget);
        portaLine->setObjectName(QStringLiteral("portaLine"));
        portaLine->setGeometry(QRect(30, 50, 113, 23));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 59, 15));
        ipLine = new QLineEdit(centralwidget);
        ipLine->setObjectName(QStringLiteral("ipLine"));
        ipLine->setGeometry(QRect(230, 50, 113, 23));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 30, 59, 15));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 100, 80, 23));
        ConfigForm->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ConfigForm);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ConfigForm->setStatusBar(statusbar);
        menubar = new QMenuBar(ConfigForm);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 399, 20));
        ConfigForm->setMenuBar(menubar);

        retranslateUi(ConfigForm);

        QMetaObject::connectSlotsByName(ConfigForm);
    } // setupUi

    void retranslateUi(QMainWindow *ConfigForm)
    {
        ConfigForm->setWindowTitle(QApplication::translate("ConfigForm", "MainWindow", 0));
        actionSair->setText(QApplication::translate("ConfigForm", "Sair", 0));
        pushButton->setText(QApplication::translate("ConfigForm", "Voltar", 0));
        portaLine->setText(QApplication::translate("ConfigForm", "7890", 0));
        label->setText(QApplication::translate("ConfigForm", "Porta", 0));
        ipLine->setText(QString());
        label_2->setText(QApplication::translate("ConfigForm", "IP", 0));
        pushButton_2->setText(QApplication::translate("ConfigForm", "Confirmar", 0));
    } // retranslateUi

};

namespace Ui {
    class ConfigForm: public Ui_ConfigForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGFORM_H

#include "admin.h"
#include "ui_admin.h"
#include <QMessageBox>

Admin::Admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
}

Admin::~Admin()
{
    delete ui;
}



void Admin::on_pushButton_back_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void Admin::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username=="admin" && password=="admin"){
        QMessageBox::information(this,"Login","Login Successful.");
        hide();
        adminOptions = new AdminOptions(this);
        adminOptions->show();
    }
    else{
        QMessageBox::warning(this,"Login","Enter correct username and password.");
    }
}


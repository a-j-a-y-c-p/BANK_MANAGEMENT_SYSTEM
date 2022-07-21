#include "deletecustomer.h"
#include "ui_deletecustomer.h"
#include <QMessageBox>

DeleteCustomer::DeleteCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteCustomer)
{
    ui->setupUi(this);
}

DeleteCustomer::~DeleteCustomer()
{
    delete ui;
}

void DeleteCustomer::on_pushButton_back_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void DeleteCustomer::on_pushButton_submit_clicked()
{
    QString name = ui->lineEdit_name->text();
    QString mob = ui->lineEdit_mob->text();
    QString acc = ui->lineEdit_acc->text();

    if(name=="" || mob=="" || acc==""){
        QMessageBox::warning(this,"Invalid","Enter Valid Entries");
    }
    else{
        QMessageBox::information(this,"Successful","Account Deleting request saved successfully.");
    }
}


#include "customer.h"
#include "ui_customer.h"
#include <QMessageBox>

Customer::Customer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Customer)
{
    ui->setupUi(this);
}

Customer::~Customer()
{
    delete ui;
}

void Customer::on_pushButton_back_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void Customer::on_pushButton_login_clicked()
{
    QString acc = ui->lineEdit_acc->text();

    if(acc=="121"){
        QMessageBox::information(this,"Searching","Search Successful.");
        hide();
        customerOptions = new CustomerOptions(this);
        customerOptions->show();
    }
    else{
        QMessageBox::warning(this,"Searching","Enter correct account number.");
    }
}


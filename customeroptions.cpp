#include "customeroptions.h"
#include "ui_customeroptions.h"
#include <QMessageBox>
CustomerOptions::CustomerOptions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomerOptions)
{
    ui->setupUi(this);
}

CustomerOptions::~CustomerOptions()
{
    delete ui;
}



void CustomerOptions::on_pushButton_bal_clicked()
{
    QMessageBox::information(this,"Balance","Your account balance is rs 11111 ");
}


void CustomerOptions::on_pushButton_back_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void CustomerOptions::on_pushButton_mini_clicked()
{
    hide();
    mini = new MiniStatement(this);
    mini->show();
}


void CustomerOptions::on_pushButton_deposite_clicked()
{
    hide();
    deposit = new Deposit(this);
    deposit->show();
}


void CustomerOptions::on_pushButton_loanReq_clicked()
{
    hide();
    loanReq = new LoanReq(this);
    loanReq->show();
}


void CustomerOptions::on_pushButton_withdrow_clicked()
{
    hide();
    withdraw = new Withdraw(this);
    withdraw->show();
}


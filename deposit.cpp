#include "deposit.h"
#include "ui_deposit.h"
#include <QMessageBox>

Deposit::Deposit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Deposit)
{
    ui->setupUi(this);
}

Deposit::~Deposit()
{
    delete ui;
}

void Deposit::on_pushButton_back_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void Deposit::on_pushButton_deposit_clicked()
{
    QString amount = ui->lineEdit_amount->text();

    if(amount=="" || amount<="0")
        QMessageBox::warning(this,"Deposit","Enter valid amount.");
    else{
        QMessageBox::information(this,"Deposit","Successful");
        hide();
        QWidget *parent = this->parentWidget();
        parent->show();
    }
}


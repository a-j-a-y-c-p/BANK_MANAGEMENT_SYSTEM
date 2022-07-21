#include "withdraw.h"
#include "ui_withdraw.h"
#include <QMessageBox>

Withdraw::Withdraw(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Withdraw)
{
    ui->setupUi(this);
}

Withdraw::~Withdraw()
{
    delete ui;
}

void Withdraw::on_pushButton_back_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void Withdraw::on_pushButton_withdrow_clicked()
{
    QString amount = ui->lineEdit_amount->text();

    if(amount=="" || amount<="0")
        QMessageBox::warning(this,"Withdraw","Enter valid amount.");
    else if(amount>"11111")
            QMessageBox::warning(this,"Withdraw","Insufficient balance");
    else{
        QMessageBox::information(this,"Withdraw","Successful");
        hide();
        QWidget *parent = this->parentWidget();
        parent->show();
    }
}


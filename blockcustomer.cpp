#include "blockcustomer.h"
#include "ui_blockcustomer.h"
#include <QMessageBox>

BlockCustomer::BlockCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BlockCustomer)
{
    ui->setupUi(this);
}

BlockCustomer::~BlockCustomer()
{
    delete ui;
}

void BlockCustomer::on_pushButton_back_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void BlockCustomer::on_pushButton_submit_2_clicked()
{
    QString name = ui->lineEdit_name_2->text();
    QString mob = ui->lineEdit_mob_2->text();
    QString acc = ui->lineEdit_acc_2->text();

    if(name=="" || mob=="" || acc==""){
        QMessageBox::warning(this,"Invalid","Enter Valid Entries");
    }
    else{
        QMessageBox::information(this,"Successful","Account Blocking request saved successfully.");
    }
}


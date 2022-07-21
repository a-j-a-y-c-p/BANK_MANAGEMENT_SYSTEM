#include "addcustomer.h"
#include "ui_addcustomer.h"
#include <QMessageBox>

AddCustomer::AddCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddCustomer)
{
    ui->setupUi(this);
}

AddCustomer::~AddCustomer()
{
    delete ui;
}

void AddCustomer::on_pushButton_back_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void AddCustomer::on_pushButton_submit_clicked()
{
    QString name = ui->lineEdit_name->text();
    QString father = ui->lineEdit_father->text();
    QString mother = ui->lineEdit_mother->text();
    QString mob = ui->lineEdit_mob->text();
    QString email = ui->lineEdit_email->text();
    QString id = ui->lineEdit_id->text();

    if(name=="" || father == "" || mother=="" || mob=="" || email=="" || id==""){
        QMessageBox::warning(this,"Invalid","Enter Valid Entries");
    }
    else{
        QMessageBox::information(this,"Successful","Account opening request saved successfully.");
    }
}


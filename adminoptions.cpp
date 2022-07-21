#include "adminoptions.h"
#include "ui_adminoptions.h"
#include <QMessageBox>

AdminOptions::AdminOptions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminOptions)
{
    ui->setupUi(this);
}

AdminOptions::~AdminOptions()
{
    delete ui;
}

void AdminOptions::on_pushButton_back_clicked()
{

    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void AdminOptions::on_pushButton_view_clicked()
{
    hide();
    viewCustomer = new ViewCustomer(this);
    viewCustomer->show();
}


void AdminOptions::on_pushButton_delete_clicked()
{
    hide();
    deleteCustomer = new DeleteCustomer(this);
    deleteCustomer->show();
}


void AdminOptions::on_pushButton_open_clicked()
{
    hide();
    addCustomer = new AddCustomer(this);
    addCustomer->show();
}


void AdminOptions::on_pushButton_block_clicked()
{
    hide();
    blockCustomer = new BlockCustomer(this);
    blockCustomer->show();
}


void AdminOptions::on_pushButton_loan_clicked()
{
    hide();
    loanView = new LoanView(this);
    loanView->show();
}


#include "viewcustomer.h"
#include "ui_viewcustomer.h"

ViewCustomer::ViewCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewCustomer)
{
    ui->setupUi(this);
}

ViewCustomer::~ViewCustomer()
{
    delete ui;
}

void ViewCustomer::on_pushButton_back_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


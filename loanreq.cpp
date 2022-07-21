#include "loanreq.h"
#include "ui_loanreq.h"
#include <QMessageBox>

LoanReq::LoanReq(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoanReq)
{
    ui->setupUi(this);
}

LoanReq::~LoanReq()
{
    delete ui;
}

void LoanReq::on_pushButton_back_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void LoanReq::on_pushButton_apply_clicked()
{
    QString type = ui->comboBox->currentText();
    QString name = ui->lineEdit_name->text();
    QString mob = ui->lineEdit_mob->text();
    QString ocu = ui->lineEdit_occupation->text();
    QString date = ui->dateEdit->text();

    if(name =="" || mob=="" || ocu=="" || type=="Select"){
        QMessageBox::warning(this,"Loan Request","Enter Valid Data.");
    }
    else if(ui->radioButton_N->isChecked() || ui->radioButton_y->isChecked()){
        QMessageBox::information(this,"Loan Request","Request submit successfully.");
        hide();
        QWidget *parent = this->parentWidget();
        parent->show();
    }
    else{
        QMessageBox::warning(this,"Loan Request","Select atleast one option.");
    }
}


#include "loanview.h"
#include "ui_loanview.h"

LoanView::LoanView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoanView)
{
    ui->setupUi(this);
}

LoanView::~LoanView()
{
    delete ui;
}

void LoanView::on_pushButton_back_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


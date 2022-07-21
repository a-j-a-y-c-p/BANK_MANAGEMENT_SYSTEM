#include "ministatement.h"
#include "ui_ministatement.h"

MiniStatement::MiniStatement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MiniStatement)
{
    ui->setupUi(this);
}

MiniStatement::~MiniStatement()
{
    delete ui;
}

void MiniStatement::on_pushButton_back_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


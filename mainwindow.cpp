#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/Icon/Img/bank-icon.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_admin_clicked()
{

    admin = new Admin(this);
    admin->show();
}


void MainWindow::on_pushButton_customer_clicked()
{

    customer = new Customer(this);
    customer->show();
}


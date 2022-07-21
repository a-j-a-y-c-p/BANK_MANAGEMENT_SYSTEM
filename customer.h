#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QDialog>
#include "customeroptions.h"

namespace Ui {
class Customer;
}

class Customer : public QDialog
{
    Q_OBJECT

public:
    explicit Customer(QWidget *parent = nullptr);
    ~Customer();

private slots:
    void on_pushButton_admin_clicked();

    void on_pushButton_back_clicked();

    void on_pushButton_login_clicked();

private:
    Ui::Customer *ui;
    CustomerOptions *customerOptions;
};

#endif // CUSTOMER_H

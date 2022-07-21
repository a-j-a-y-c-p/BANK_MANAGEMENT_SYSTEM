#ifndef ADDCUSTOMER_H
#define ADDCUSTOMER_H

#include <QDialog>

namespace Ui {
class AddCustomer;
}

class AddCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit AddCustomer(QWidget *parent = nullptr);
    ~AddCustomer();

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_submit_clicked();

private:
    Ui::AddCustomer *ui;
};

#endif // ADDCUSTOMER_H

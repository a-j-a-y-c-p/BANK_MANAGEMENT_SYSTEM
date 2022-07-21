#ifndef DELETECUSTOMER_H
#define DELETECUSTOMER_H

#include <QDialog>

namespace Ui {
class DeleteCustomer;
}

class DeleteCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteCustomer(QWidget *parent = nullptr);
    ~DeleteCustomer();

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_submit_clicked();

private:
    Ui::DeleteCustomer *ui;
};

#endif // DELETECUSTOMER_H

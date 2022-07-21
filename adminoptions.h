#ifndef ADMINOPTIONS_H
#define ADMINOPTIONS_H

#include <QDialog>
#include "addcustomer.h"
#include "blockcustomer.h"
#include "deletecustomer.h"
#include "loanview.h"
#include "viewcustomer.h"

namespace Ui {
class AdminOptions;
}

class AdminOptions : public QDialog
{
    Q_OBJECT

public:
    explicit AdminOptions(QWidget *parent = nullptr);
    ~AdminOptions();

private slots:
    void on_pushButton_back_clicked();


    void on_pushButton_view_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_open_clicked();

    void on_pushButton_block_clicked();

    void on_pushButton_loan_clicked();

private:
    Ui::AdminOptions *ui;
    AddCustomer *addCustomer;
    ViewCustomer *viewCustomer;
    DeleteCustomer *deleteCustomer;
    LoanView *loanView;
    BlockCustomer *blockCustomer;
};

#endif // ADMINOPTIONS_H

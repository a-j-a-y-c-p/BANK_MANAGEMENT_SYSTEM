#ifndef CUSTOMEROPTIONS_H
#define CUSTOMEROPTIONS_H

#include <QDialog>
#include "withdraw.h"
#include "deposit.h"
#include "loanreq.h"
#include "ministatement.h"

namespace Ui {
class CustomerOptions;
}

class CustomerOptions : public QDialog
{
    Q_OBJECT

public:
    explicit CustomerOptions(QWidget *parent = nullptr);
    ~CustomerOptions();

private slots:

    void on_pushButton_bal_clicked();

    void on_pushButton_back_clicked();

    void on_pushButton_mini_clicked();

    void on_pushButton_deposite_clicked();

    void on_pushButton_loanReq_clicked();

    void on_pushButton_withdrow_clicked();

private:
    Ui::CustomerOptions *ui;
    Withdraw *withdraw;
    Deposit *deposit;
    LoanReq *loanReq;
    MiniStatement *mini;
};

#endif // CUSTOMEROPTIONS_H

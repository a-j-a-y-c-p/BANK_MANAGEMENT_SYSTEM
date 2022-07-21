#ifndef LOANREQ_H
#define LOANREQ_H

#include <QDialog>

namespace Ui {
class LoanReq;
}

class LoanReq : public QDialog
{
    Q_OBJECT

public:
    explicit LoanReq(QWidget *parent = nullptr);
    ~LoanReq();

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_apply_clicked();

private:
    Ui::LoanReq *ui;
};

#endif // LOANREQ_H

#ifndef WITHDRAW_H
#define WITHDRAW_H

#include <QDialog>

namespace Ui {
class Withdraw;
}

class Withdraw : public QDialog
{
    Q_OBJECT

public:
    explicit Withdraw(QWidget *parent = nullptr);
    ~Withdraw();

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_withdrow_clicked();

private:
    Ui::Withdraw *ui;
};

#endif // WITHDRAW_H

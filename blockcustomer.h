#ifndef BLOCKCUSTOMER_H
#define BLOCKCUSTOMER_H

#include <QDialog>

namespace Ui {
class BlockCustomer;
}

class BlockCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit BlockCustomer(QWidget *parent = nullptr);
    ~BlockCustomer();

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_submit_2_clicked();

private:
    Ui::BlockCustomer *ui;
};

#endif // BLOCKCUSTOMER_H

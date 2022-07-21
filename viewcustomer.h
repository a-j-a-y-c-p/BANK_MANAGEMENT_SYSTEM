#ifndef VIEWCUSTOMER_H
#define VIEWCUSTOMER_H

#include <QDialog>

namespace Ui {
class ViewCustomer;
}

class ViewCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit ViewCustomer(QWidget *parent = nullptr);
    ~ViewCustomer();

private slots:
    void on_pushButton_back_clicked();

private:
    Ui::ViewCustomer *ui;
};

#endif // VIEWCUSTOMER_H

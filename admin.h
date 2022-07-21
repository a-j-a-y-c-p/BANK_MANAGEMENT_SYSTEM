#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>
#include "adminoptions.h"

namespace Ui {
class Admin;
}

class Admin : public QDialog
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();

private slots:
    void on_pushButton_admin_clicked();

    void on_pushButton_back_clicked();

    void on_pushButton_login_clicked();

private:
    Ui::Admin *ui;
    AdminOptions *adminOptions;
};

#endif // ADMIN_H

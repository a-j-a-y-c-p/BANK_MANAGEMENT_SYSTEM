#ifndef LOANVIEW_H
#define LOANVIEW_H

#include <QDialog>

namespace Ui {
class LoanView;
}

class LoanView : public QDialog
{
    Q_OBJECT

public:
    explicit LoanView(QWidget *parent = nullptr);
    ~LoanView();

private slots:
    void on_pushButton_back_clicked();

private:
    Ui::LoanView *ui;
};

#endif // LOANVIEW_H

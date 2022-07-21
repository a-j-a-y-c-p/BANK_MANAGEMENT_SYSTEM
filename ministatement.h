#ifndef MINISTATEMENT_H
#define MINISTATEMENT_H

#include <QDialog>

namespace Ui {
class MiniStatement;
}

class MiniStatement : public QDialog
{
    Q_OBJECT

public:
    explicit MiniStatement(QWidget *parent = nullptr);
    ~MiniStatement();

private slots:
    void on_pushButton_back_clicked();

private:
    Ui::MiniStatement *ui;
};

#endif // MINISTATEMENT_H

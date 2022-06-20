#ifndef ADDFRUIT_H
#define ADDFRUIT_H

#include <QDialog>
#include "mydb.h"

namespace Ui {
class AddItem;
}

class AddFruit : public QDialog
{
    Q_OBJECT

public:
    explicit AddFruit(QWidget *parent = nullptr);
    ~AddFruit();
    void Show();

private slots:
    void on_btnAdd_clicked();

private:
    Ui::AddItem *ui;
    void resetElements();

};

#endif // ADDFRUIT_H

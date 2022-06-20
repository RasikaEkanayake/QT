#ifndef UPDATEFRUITCATG_H
#define UPDATEFRUITCATG_H

#include <QDialog>
#include "mydb.h"

namespace Ui {
class UpdateItem;
}

class UpdateFruitCatg : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateFruitCatg(QWidget *parent = nullptr);
    ~UpdateFruitCatg();
    void Show();

private slots:
    void on_pushButton_clicked();

private:
    Ui::UpdateItem *ui;
    void updateUI();
};

#endif // UPDATEFRUITCATG_H

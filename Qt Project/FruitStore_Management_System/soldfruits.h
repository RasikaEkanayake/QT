#ifndef SOLDFRUITS_H
#define SOLDFRUITS_H

#include <QDialog>
#include "mydb.h"

namespace Ui {
class SoldItems;
}

class SoldFruits : public QDialog
{
    Q_OBJECT

public:
    explicit SoldFruits(QWidget *parent = nullptr);
    ~SoldFruits();
    void Show();
private:
    Ui::SoldItems *ui;
    void updateUI();
};

#endif // SOLDFRUITS_H

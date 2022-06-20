#ifndef RETURNEDFRUITS_H
#define RETURNEDFRUITS_H

#include <QDialog>
#include "mydb.h"

namespace Ui {
class ReturnedItems;
}

class ReturnedFruits : public QDialog
{
    Q_OBJECT

public:
    explicit ReturnedFruits(QWidget *parent = nullptr);
    ~ReturnedFruits();
    void Show();
private:
    Ui::ReturnedItems *ui;
    void updateUI();
};

#endif // RETURNEDFRUITS_H

#ifndef AVAILABLEFRUITS_H
#define AVAILABLEFRUITS_H

#include <QDialog>
#include "mydb.h"

namespace Ui {
class AvailableItems;
}

class AvailableFruits : public QDialog
{
    Q_OBJECT

public:
    explicit AvailableFruits(QWidget *parent = nullptr);
    ~AvailableFruits();
    void Show();
private:
    Ui::AvailableItems *ui;
    void updateUI();
};

#endif // AVAILABLEFRUITS_H

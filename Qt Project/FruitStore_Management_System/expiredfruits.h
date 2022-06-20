#ifndef EXPIREDFRUITS_H
#define EXPIREDFRUITS_H

#include <QDialog>
#include "mydb.h"

namespace Ui {
class ExpiredItems;
}

class ExpiredFruits : public QDialog
{
    Q_OBJECT

public:
    explicit ExpiredFruits(QWidget *parent = nullptr);
    ~ExpiredFruits();
     void Show();
private:
    Ui::ExpiredItems *ui;
        void updateUI();
};

#endif // EXPIREDFRUITS_H

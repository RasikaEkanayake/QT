#ifndef FINDFRUITS_H
#define FINDFRUITS_H

#include <QDialog>
#include "mydb.h"

namespace Ui {
class FindItem;
}

class FindFruits : public QDialog
{
    Q_OBJECT

public:
    explicit FindFruits(QWidget *parent = nullptr);
    ~FindFruits();

private slots:
    void on_btnFind_clicked();

private:
    Ui::FindItem *ui;

};
#endif // FINDFRUITS_H

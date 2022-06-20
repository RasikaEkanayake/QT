#ifndef SPOILEDFRUITS_H
#define SPOILEDFRUITS_H

#include <QDialog>
#include "mydb.h"

namespace Ui {
class SpoiledItems;
}

class SpoiledFruits : public QDialog
{
    Q_OBJECT

public:
    explicit SpoiledFruits(QWidget *parent = nullptr);
    ~SpoiledFruits();
     void Show();

private:
    Ui::SpoiledItems *ui;
    void updateUI();
};

#endif // SPOILEDFRUITS_H

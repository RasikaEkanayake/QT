#ifndef FRUITSREPORT_H
#define FRUITSREPORT_H

#include <QDialog>
#include "mydb.h"
#include <QSqlQueryModel>

namespace Ui {
class ItemsReport;
}

class FruitsReport : public QDialog
{
    Q_OBJECT

public:
    explicit FruitsReport(QWidget *parent = nullptr);
    ~FruitsReport();
    void Show();

private:
    Ui::ItemsReport *ui;
    void updateUI();
};

#endif // FRUITSREPORT_H

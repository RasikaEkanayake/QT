/*
 * Project Developed by CppBuzz.com for learning QT-C++ concepts
 * Users are allowed to use/modify this code according to their requirement.
 * These projects are free to download.
 * Date: 25th April 2020
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addfruit.h"
#include "fruitsreport.h"

#include "expiredfruits.h"
#include "soldfruits.h"
#include "spoiledfruits.h"
#include "returnedfruits.h"
#include "availablefruits.h"
#include "findfruits.h"

#include "updatefruitcatg.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAddItem_clicked();

    void on_btnUpdateItem_clicked();

    void on_btnSoldItems_clicked();

    void on_btnReport_clicked();

    void on_btnExpiredItems_clicked();

    void on_btnAvailableItems_clicked();

    void on_btnSpoiledItem_clicked();

    void on_btnReturnItems_clicked();

    void on_btnFindItem_clicked();

private:
    Ui::MainWindow *ui;
    AddFruit * ptrAddFruitItem;
    FruitsReport *ptrFruitItemReport;

    SpoiledFruits *ptrSpoiledFruitItems;
    SoldFruits *ptrSoldFruitITems;
    ExpiredFruits *ptrExpiredFruitItems;
    ReturnedFruits *ptrReturnedFruitItems;
    AvailableFruits *ptrAvailableFruitItems;
    FindFruits * ptrFindFruitItem;
    UpdateFruitCatg *ptrUpdateFruitItem;

};

#endif // MAINWINDOW_H

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix ("C:/Resource/bc.jpg");
    ui->label_4->setPixmap(pix);
    ptrAddFruitItem = new AddFruit(this);


    ptrFruitItemReport = new FruitsReport(this);

    ptrSpoiledFruitItems = new SpoiledFruits(this);
    ptrSoldFruitITems = new SoldFruits(this);
    ptrExpiredFruitItems = new ExpiredFruits(this);
    ptrReturnedFruitItems = new ReturnedFruits(this);
    ptrAvailableFruitItems = new AvailableFruits(this);

    ptrUpdateFruitItem = new UpdateFruitCatg(this);
    ptrFindFruitItem = new FindFruits(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete ptrAddFruitItem;
    delete ptrFruitItemReport;

    delete ptrSpoiledFruitItems;
    delete ptrSoldFruitITems;
    delete ptrExpiredFruitItems;
    delete ptrReturnedFruitItems;
    delete ptrFindFruitItem;
    delete ptrUpdateFruitItem;
    MyDB::ResetInstance();
}

void MainWindow::on_btnAddItem_clicked()
{
    ptrAddFruitItem->Show();
}

void MainWindow::on_btnUpdateItem_clicked()
{
    ptrUpdateFruitItem->Show();
}

void MainWindow::on_btnSoldItems_clicked()
{
    ptrSoldFruitITems->Show();
}

void MainWindow::on_btnReport_clicked()
{
    ptrFruitItemReport->Show();
}

void MainWindow::on_btnExpiredItems_clicked()
{
    ptrExpiredFruitItems->Show();
}

void MainWindow::on_btnAvailableItems_clicked()
{
    ptrAvailableFruitItems->Show();
}

void MainWindow::on_btnSpoiledItem_clicked()
{
    ptrSpoiledFruitItems->Show();
}

void MainWindow::on_btnReturnItems_clicked()
{
    ptrReturnedFruitItems->Show();
}

void MainWindow::on_btnFindItem_clicked()
{
    ptrFindFruitItem->show();
}

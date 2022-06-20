#include "soldfruits.h"
#include "ui_solditems.h"

SoldFruits::SoldFruits(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SoldItems)
{
    ui->setupUi(this);
}

SoldFruits::~SoldFruits()
{
    delete ui;
}

void SoldFruits::Show()
{
    updateUI();
    this->show();
}

void SoldFruits::updateUI()
{
    qDebug() << "in init()";
    QSqlQueryModel * model = new QSqlQueryModel(this);

    QSqlQuery query( MyDB::getInstance()->getDBInstance());
    query.prepare("select * from Fruit_items where Status='Sold'");

    if(!query.exec())
       qDebug() << query.lastError().text() << query.lastQuery();
    else
       qDebug() << "== success query fetch()";

    while(query.next())
    qDebug()<<query.value(0).toString();

    model->setQuery(query);
    ui->tableView->setModel(model);
    qDebug() << "rows are : " << model->rowCount();
    ui->tableView->show();

}

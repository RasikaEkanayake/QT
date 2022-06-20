#include "returnedfruits.h"
#include "ui_returneditems.h"

ReturnedFruits::ReturnedFruits(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReturnedItems)
{
    ui->setupUi(this);
}

ReturnedFruits::~ReturnedFruits()
{
    delete ui;
}

void ReturnedFruits::Show()
{
    updateUI();
    show();
}

void ReturnedFruits::updateUI()
{
    qDebug() << "in init()";
    QSqlQueryModel * model = new QSqlQueryModel(this);

    QSqlQuery query( MyDB::getInstance()->getDBInstance());
    query.prepare("select * from Fruit_items where Status='Return'");

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

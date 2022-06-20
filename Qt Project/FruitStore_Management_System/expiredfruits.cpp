#include "expiredfruits.h"
#include "ui_expireditems.h"

ExpiredFruits::ExpiredFruits(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExpiredItems)
{
    ui->setupUi(this);
}

ExpiredFruits::~ExpiredFruits()
{
    delete ui;
}

void ExpiredFruits::Show()
{
    updateUI();
    show();
}

void ExpiredFruits::updateUI()
{
    qDebug() << "in init()";
    QSqlQueryModel * model = new QSqlQueryModel(this);

    QSqlQuery query( MyDB::getInstance()->getDBInstance());
    query.prepare("select * from Fruit_items where Status='Expired'");

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

#include "fruitsreport.h"
#include "ui_itemsreport.h"

FruitsReport::FruitsReport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ItemsReport)
{
    ui->setupUi(this);
}

FruitsReport::~FruitsReport()
{
    delete ui;
}

void FruitsReport::Show()
{
    updateUI();
    this->show();
}

void FruitsReport::updateUI()
{
       qDebug() << "in init()";
       QSqlQueryModel * model = new QSqlQueryModel(this);

       QSqlQuery query( MyDB::getInstance()->getDBInstance());
       query.prepare("select * from Fruit_items order by Id desc");

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

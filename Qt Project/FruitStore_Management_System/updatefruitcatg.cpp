#include "updatefruitcatg.h"
#include "ui_updateitem.h"

UpdateFruitCatg::UpdateFruitCatg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdateItem)
{
    ui->setupUi(this);
    QPixmap pix ("C:/Resource/up.jpg");
    ui->label_7->setPixmap(pix);
}

UpdateFruitCatg::~UpdateFruitCatg()
{
    delete ui;
}

void UpdateFruitCatg::updateUI()
{

}

void UpdateFruitCatg::Show()
{
    updateUI();
    this->show();
}

void UpdateFruitCatg::on_pushButton_clicked()
{
    ui->lblInfo->clear();
    QString sId = ui->txtId->text();
    QString sStatus = ui->cmbStatus->currentText();

    QSqlQuery query( MyDB::getInstance()->getDBInstance());
    query.prepare("update Fruit_items set Status='" + sStatus + "' where Id = '" + sId + "'");

    if(!query.exec())
    {
       qDebug() << query.lastError().text() << query.lastQuery();
       ui->lblInfo->setText("Unable to update Item" + query.lastError().text());
    }
    else{
       if(query.numRowsAffected()>0)
       {
            qDebug() << "Item Updated Successfully!";
            ui->lblInfo->setText("Item Updated Successfully!");
       }
       else
       {
        qDebug() << " Unable to update Item";
        ui->lblInfo->setText("Unable to Update Item");
      }
    }
}

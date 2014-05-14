#include "displayindividualiteminformation.h"
#include "ui_displayindividualiteminformation.h"

DisplayIndividualItemInformation::DisplayIndividualItemInformation(QString name, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DisplayIndividualItemInformation)
{
    ui->setupUi(this);
//qDebug() << id;
    setAttribute(Qt::WA_DeleteOnClose);
    query.exec("SELECT `name`, `description`, `price`, `image` FROM `souvenirItems` WHERE `name`=\"" + name + "\";");
itemName = name;

    if(query.next())
    {
       itemPrice = query.value(2).toString();
       ui->itemNameLabel->setText(itemName);
       ui->itemDescriptionLabel->setText(query.value(1).toString());
       ui->pricePerLabel->setText("$" + itemPrice);
       ui->webView->load(query.value(3).toString());
       ui->totalLabel->setText("$0");
    }

    // Country list
    query.exec("SELECT stadiumTeamName FROM stadiums ORDER BY stadiumTeamName ASC");
    while(query.next())
    {
        ui->teamComboBox->addItem(query.value(0).toString());
    }
}

DisplayIndividualItemInformation::~DisplayIndividualItemInformation()
{
    delete ui;
}

void DisplayIndividualItemInformation::on_cancelButton_clicked()
{
    this->close();
}

void DisplayIndividualItemInformation::on_purchaseButton_clicked()
{
    QString id;

    queryName.exec("SELECT `id` FROM `souvenirItems` WHERE `name`=\"" + itemName + "\";");
    if(queryName.next())
    {
        id = queryName.value(0).toString();
    }

    queryUpdate.prepare("INSERT INTO `souvenirCart`(`itemID`, `userID`, `total`, `teamName` ) VALUES (:itemID,:userID,:total, :teamName);");
    queryUpdate.bindValue(":itemID", id);
    queryUpdate.bindValue(":userID", "1");
    queryUpdate.bindValue(":teamName",ui->teamComboBox->currentText());
    queryUpdate.bindValue(":total",ui->totalLabel->text());
    queryUpdate.exec();
    this->close();
}

void DisplayIndividualItemInformation::on_spinBox_valueChanged(int arg1)
{
    double total = arg1 * itemPrice.toDouble();
    ui->totalLabel->setText("$ " + QString::number(total));
}

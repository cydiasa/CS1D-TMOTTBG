#include "admineditselectedoutputlist.h"
#include "ui_admineditselectedoutputlist.h"

AdminEditSelectedOutputList::AdminEditSelectedOutputList(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminEditSelectedOutputList)
{
    ui->setupUi(this);

}

AdminEditSelectedOutputList::~AdminEditSelectedOutputList()
{
    delete ui;
}

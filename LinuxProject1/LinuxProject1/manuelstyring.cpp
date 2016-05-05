#include "manuelstyring.h"
#include "ui_manuelstyring.h"
#include "fifoqueue.h"
#include <QKeyEvent>



manuelStyring::manuelStyring(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manuelStyring)
{
    ui->setupUi(this);

}


manuelStyring::~manuelStyring()
{
    delete ui;
}

void manuelStyring::on_pushButton_clicked()
{


}

void manuelStyring::keyPressEvent(QKeyEvent *e)
{
    QString text;
    text += char(e->key());
    ui->pushButton->setText(text);
}

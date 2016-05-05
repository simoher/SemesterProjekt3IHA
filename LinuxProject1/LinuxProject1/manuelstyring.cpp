#include "manuelstyring.h"
#include "ui_manuelstyring.h"
#include "fifoqueue.h"
#include <QKeyEvent>
#include <QUdpSocket>



manuelStyring::manuelStyring(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manuelStyring)
{
    ui->setupUi(this);
     mSocket = new QUdpSocket(this);
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
    auto datagram = text.toLatin1();
    mSocket->writeDatagram(datagram,QHostAddress::Broadcast,45454);
}

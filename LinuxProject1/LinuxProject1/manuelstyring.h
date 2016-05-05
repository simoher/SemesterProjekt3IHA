#ifndef MANUELSTYRING_H
#define MANUELSTYRING_H

#include <QDialog>

namespace Ui {
class manuelStyring;
}

class QUdpSocket;

class manuelStyring : public QDialog
{
    Q_OBJECT

public:
    explicit manuelStyring(QWidget *parent = 0);
    ~manuelStyring();
    void keyPressEvent(QKeyEvent *e);

private slots:
    void on_pushButton_clicked();

private:
    Ui::manuelStyring *ui;
    QUdpSocket *mSocket;
};

#endif // MANUELSTYRING_H

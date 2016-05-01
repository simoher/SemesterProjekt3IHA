#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QMessageBox>
#include <QLabel>
#include <QTextEdit>
#include <QtGui>
#include "statustextupdater.h"
statusTextUpdater updateObjekt;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //sætter status vindue til Read Only
    ui->textEdit->setReadOnly(true);
    //sætter egenskaber for message output området.
    ui->textEdit->setStyleSheet("QTextEdit { background-color: transparent; border: none;}");
    ui->textEdit->setTextColor("green");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ButtonClicked_Selftest()
{
	// sådan sættes text i label
    ui->label_dynamic->setText("Jeg opdatere den label der hedder dynamic label!");

    //text output i QtextEdit
    ui->textEdit->append(updateObjekt.getMessage());

}

//Der skal sættes slot's også videre inde i QT designeren, så kan man rename slottet og derefter gøre så man kan fortælle den hvad den skal gøre ved hver knap. 
void MainWindow::ButtonClicked_AutoTracking()
{
    // ui->textEdit->append(red);
	QMessageBox msgBox;
    msgBox.setText("Automatisk Styring Aktiveret!");
    msgBox.setWindowTitle("Auto");
	msgBox.exec();
}

void MainWindow::ButtonClicked_ManuelStyring()
{
    // ui->textEdit->append(yellow);
	QMessageBox msgBox;
	msgBox.setText("Velkommen til Manuel Styring!");
    msgBox.setWindowTitle("Manuel");
	msgBox.exec();
}



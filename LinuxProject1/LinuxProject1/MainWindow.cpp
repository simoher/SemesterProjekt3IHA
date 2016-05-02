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


    //s�tter billeder p� knapper og det's lige. OBS p� knapper kan det give et halv d�rligt resultat med scaling.
    // brug evt.  ------  border-image: url(/url/to/image);   ------ i stylesheet i stedet.
    //QPixmap selftest_icon(":/icon-self-test.png");
    //QIcon selftest_ButtonIcon(selftest_icon);
    //ui->pushButton_Selftest->setIcon(selftest_ButtonIcon);
    //ui->pushButton_Selftest->setIconSize(selftest_icon.rect().size());

    //s�tter status vindue til Read Only
    ui->textEdit->setReadOnly(true);

    //s�tter egenskaber for message output omr�det.
    ui->textEdit->setStyleSheet("QTextEdit { background-color: transparent;}");
    ui->textEdit->setTextColor("green");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ButtonClicked_Selftest()
{
	// s�dan s�ttes text i label
    ui->label_dynamic->setText("Jeg opdatere den label der hedder dynamic label!");

    //text output i QtextEdit
    ui->textEdit->append(updateObjekt.getMessage());

}

//Der skal s�ttes slot's ogs� videre inde i QT designeren, s� kan man rename slottet og derefter g�re s� man kan fort�lle den hvad den skal g�re ved hver knap. 
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



#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QMessageBox>
#include <QLabel>
#include <QTextEdit>
#include <QtGui>
#include <QPalette>

QString blue = "Swaggalidoodly";
QString red = "Swaggalidoodly1";
QString yellow = "Swaggalidoodly2";
QString green = "Swaggalidoodly3";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    ui->textEdit->setReadOnly(true);
    // sætter egenskaber for message output området.
    ui->textEdit->setStyleSheet("QTextEdit { background-color: transparent; border: none;}");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ButtonClicked_Selftest()
{
	// sådan sættes text i label
    ui->label_dynamic->setText(blue);
    ui->textEdit->append(blue);
}

//Der skal sættes slot's også videre inde i QT designeren, så kan man rename slottet og derefter gøre så man kan fortælle den hvad den skal gøre ved hver knap. 
void MainWindow::ButtonClicked_AutoTracking()
{
     ui->textEdit->append(red);
	QMessageBox msgBox;
	msgBox.setText("swagger!");
	msgBox.setWindowTitle("VisualGDB Qt Demo");
	msgBox.exec();
}

void MainWindow::ButtonClicked_ManuelStyring()
{
     ui->textEdit->append(yellow);
	QMessageBox msgBox;
	msgBox.setText("Velkommen til Manuel Styring!");
	msgBox.setWindowTitle("VisualGDB Qt Demo");
	msgBox.exec();
}

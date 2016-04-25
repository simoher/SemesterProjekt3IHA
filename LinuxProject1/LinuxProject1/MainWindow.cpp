#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QMessageBox>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ButtonClicked_Selftest()
{
	// sådan sættes text i label
	ui->label_dynamic->setText("Swaggalidoodly");
}

//Der skal sættes slot's også videre inde i QT designeren, så kan man rename slottet og derefter gøre så man kan fortælle den hvad den skal gøre ved hver knap. 
void MainWindow::ButtonClicked_AutoTracking()
{
	QMessageBox msgBox;
	msgBox.setText("swagger!");
	msgBox.setWindowTitle("VisualGDB Qt Demo");
	msgBox.exec();
}

void MainWindow::ButtonClicked_ManuelStyring()
{
	QMessageBox msgBox;
	msgBox.setText("Velkommen til Manuel Styring!");
	msgBox.setWindowTitle("VisualGDB Qt Demo");
	msgBox.exec();
}

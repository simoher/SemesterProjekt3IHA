#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QMessageBox>

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

void MainWindow::ButtonClicked()
{
    QMessageBox msgBox;
    msgBox.setText("Hello, World!");
    msgBox.setWindowTitle("VisualGDB Qt Demo");
    msgBox.exec();
}

//Der skal sættes slot's også videre inde i QT designeren, så kan man rename slottet og derefter gøre så man kan fortælle den hvad den skal gøre ved hver knap. 
void MainWindow::Button2Clicked()
{
	QMessageBox msgBox;
	msgBox.setText("swagger!");
	msgBox.setWindowTitle("VisualGDB Qt Demo");
	msgBox.exec();
}


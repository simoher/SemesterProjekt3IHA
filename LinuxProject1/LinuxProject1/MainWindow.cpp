#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QMessageBox>
#include <QLabel>
#include <QTextEdit>
#include <QtGui>
#include <QTimer>
#include <QDateTime>
#include "statustextupdater.h"
statusTextUpdater updateObjekt;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //sætter billeder på knapper og det's lige. OBS på knapper kan det give et halv dårligt resultat med scaling.
    // brug evt.  ------  border-image: url(/url/to/image);   ------ i stylesheet i stedet.
    //QPixmap selftest_icon(":/icon-self-test.png");
    //QIcon selftest_ButtonIcon(selftest_icon);
    //ui->pushButton_Selftest->setIcon(selftest_ButtonIcon);
    //ui->pushButton_Selftest->setIconSize(selftest_icon.rect().size());

    //sætter status vindue til Read Only
    ui->textEdit->setReadOnly(true);

    //sætter egenskaber for message output området.
    ui->textEdit->setStyleSheet("QTextEdit { background-color: transparent;}");
    ui->textEdit->setTextColor("green");

    // næste tre linjer sørger for at uret bliver opdateret hvert sekund, og er en timer
    QTimer *tidsTimer  = new QTimer(this);
    connect(tidsTimer, SIGNAL(timeout()),this,SLOT(showTime()));
    tidsTimer->start();


}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showTime()
{
    QTime time = QTime::currentTime();  //smider den nuværende tid ind i en variable
    QString time_text = time.toString("hh:mm:ss");  // laver tiden om til en string og sætter en i en string variable

    if ((time.second() % 2) == 0)
    {
        time_text[2] = ' ';  // får den til at blinke
        time_text[5] = ' ';
    }

    ui->Digital_clock->setText(time_text); //Peger på den text label som skal vise tiden

}

void MainWindow::ButtonClicked_Selftest()
{
	// sådan sættes text i label
    ui->label_dynamic->setText("Jeg opdatere den label der hedder dynamic label!");

    //text output i QtextEdit

    // if OK
    ui->textEdit->setTextColor("green");
    ui->textEdit->append(updateObjekt.getMsgOk());

    // if NOT OK
    // ui->textEdit->setTextColor("red");
    // ui->textEdit->append(updateObjekt.getMsgNotOk());

}

//Der skal sættes slot's også videre inde i QT designeren, så kan man rename slottet og derefter gøre så man kan fortælle den hvad den skal gøre ved hver knap. 
void MainWindow::ButtonClicked_AutoTracking()
{
    // ui->textEdit->append(red);
    //QMessageBox msgBox;
    //msgBox.setText("Automatisk Styring Aktiveret!");
    //msgBox.setWindowTitle("Auto");
    //msgBox.exec();

    ui->textEdit->setTextColor("red");
    ui->textEdit->append(updateObjekt.getMsgNotOk());


}

void MainWindow::ButtonClicked_ManuelStyring()
{
    // ui->textEdit->append(yellow);
	QMessageBox msgBox;
	msgBox.setText("Velkommen til Manuel Styring!");
    msgBox.setWindowTitle("Manuel");
	msgBox.exec();
}



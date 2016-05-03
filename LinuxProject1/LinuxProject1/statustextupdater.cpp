#include "MainWindow.h"
#include "statustextupdater.h"
#include <QDateTime>

statusTextUpdater::statusTextUpdater()
{

}

QString statusTextUpdater::getMsgOk()
{
    QString temp;
    QTime time = QTime::currentTime();  //smider den nuværende tid ind i en variable
    QString time_text = time.toString("hh:mm:ss"); // laver tiden om til en string og sætter en i en string variable
    temp = time_text + "     " + i2cOK;
    return temp;
}


QString statusTextUpdater::getMsgNotOk()
{
    QString temp;
    QTime time = QTime::currentTime();  //smider den nuværende tid ind i en variable
    QString time_text = time.toString("hh:mm:ss"); // laver tiden om til en string og sætter en i en string variable
    temp = time_text + "     " + i2cNotOK;
    return temp;

}


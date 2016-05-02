#include "MainWindow.h"
#include <QApplication>
#include "statustextupdater.h"


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.setStyleSheet("background-color: white");
    w.show();
    return a.exec();

}

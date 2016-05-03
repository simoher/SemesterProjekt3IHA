#include "MainWindow.h"
#include "statustextupdater.h"

statusTextUpdater::statusTextUpdater()
{

}

QString statusTextUpdater::getMsgOk()
{
    return i2cOK;
}


QString statusTextUpdater::getMsgNotOk()
{
    return i2cNotOK;
}


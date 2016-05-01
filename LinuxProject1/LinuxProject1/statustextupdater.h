#ifndef STATUSTEXTUPDATER_H
#define STATUSTEXTUPDATER_H
#include <QString>


class statusTextUpdater
{
public:
    statusTextUpdater();
    QString getMessage();
private:
    QString i2cOK = "I2C OK";
    QString i2cNotOK = "I2C NOT OK";
};

#endif // STATUSTEXTUPDATER_H

#include "userdata.h"

UserData::UserData()
{

}

UserData::UserData(const QString &userDataStr)
{
    QStringList list = userDataStr.split(QRegularExpression("\t"));
    if (list.size() != 4) {
        qDebug("load userdata error:list size() != 4");
        return ;
    }
    name = list[0];
    password = list[1];
    isAutoLogin = list[2].toInt();
    isRememberPassword = list[3].toInt();
}

QString UserData::toString()
{
    QString str = QString("%1\t%2\t%3\t%4").arg(name).arg(password).arg(isAutoLogin).arg(isRememberPassword);
    return str;
}

void UserData::setName(const QString &name)
{
    this->name = name;
}

void UserData::setPassword(const QString &password)
{
    this->password = password;
}

void UserData::setAutoLogin(bool status)
{
    this->isAutoLogin = status;
}

void UserData::setRememberPassword(bool status)
{
    this->isRememberPassword = status;
}

QString UserData::getName()
{
    return name;
}

QString UserData::getPassword()
{
    return password;
}

bool UserData::getAutoLogin()
{
    return isAutoLogin;
}

bool UserData::getRememberPassword()
{
    return isRememberPassword;
}

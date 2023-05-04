#include "userdatamodel.h"

UserDataModel::UserDataModel()
{
    readFromFile();
}

UserDataModel::~UserDataModel()
{
    writeToFile();
}

void UserDataModel::readFromFile()
{
    readFromFile("userdata.txt");
}

void UserDataModel::writeToFile()
{
    writeToFile("userdata.txt");
}

void UserDataModel::readFromFile(const QString &filename)
{
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug("readFromFile %s not exists", filename.toLocal8Bit().data());
        return ;
    }

    map.clear();
    QString line;
    QTextStream in(&file);  //用文件构造流

    while (true) {
        line = in.readLine();//读取一行放到字符串里
        if (line.isNull() || line.isEmpty()) break;
        qDebug() << line.toLocal8Bit().data();

        UserData userData(line);
        if (userData.getName().isEmpty()) continue;
        map.insert(userData.getName(), userData);
    }
    file.close();
}

void UserDataModel::writeToFile(const QString &filename)
{
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug("writeToFile %s not exists", filename.toLocal8Bit().data());
        return ;
    }
    QTextStream out(&file);  //用文件构造流
    for (auto iter_b = map.begin(); iter_b != map.end(); ++iter_b) {
        UserData userData = *iter_b;
        out << userData.toString() << QString("\n");
    }
    file.close();
}



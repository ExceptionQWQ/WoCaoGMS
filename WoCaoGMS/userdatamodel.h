#ifndef USERDATAMODEL_H
#define USERDATAMODEL_H

#include <QMap>
#include <fstream>
#include <string>
#include "userdata.h"

class UserDataModel
{
public:
    UserDataModel();
    ~UserDataModel();
    void readFromFile();
    void writeToFile();
    QMap<QString, UserData> map;
private:
    void readFromFile(const QString& filename); //从文件中读取用户数据
    void writeToFile(const QString& filename); //写入用户数据到文件
};

#endif // USERDATAMODEL_H

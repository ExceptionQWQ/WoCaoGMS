#ifndef GLOBALCONFIG_H
#define GLOBALCONFIG_H

#include <QMap>
#include <QString>
#include <string>
#include <fstream>

class GlobalConfig
{
public:
    GlobalConfig();
    ~GlobalConfig();
    void readFromFile();
    void writeToFile();
    QString get(QString key, QString def = "");
    void put(QString key, QString value);
    void commit();
private:
    QMap<QString, QString> map;
    void readFromFile(const QString& filename); //从文件中读取用户数据
    void writeToFile(const QString& filename); //写入用户数据到文件
};

#endif // GLOBALCONFIG_H

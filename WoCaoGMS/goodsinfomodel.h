#ifndef GOODSINFOMODEL_H
#define GOODSINFOMODEL_H

#include <QStandardItemModel>
#include <QMap>
#include <fstream>
#include <string>
#include "goodsinfo.h"

class GoodsInfoModel
{
public:
    GoodsInfoModel();
    ~GoodsInfoModel();
    void readFromFile();
    void writeToFile();
    void readItemModel(QStandardItemModel* model);
    void saveItemModel(QStandardItemModel* model);
    QMap<QString, GoodsInfo> map;
private:
    void readFromFile(const QString& filename); //从文件中读取用户数据
    void writeToFile(const QString& filename); //写入用户数据到文件
};

#endif // GOODSINFOMODEL_H

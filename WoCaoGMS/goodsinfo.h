#ifndef GOODSINFO_H
#define GOODSINFO_H

#include <QString>
#include <QRegularExpression>


class GoodsInfo
{
public:
    GoodsInfo(); //创建一个空商品信息
    GoodsInfo(const QString& goodsInfoStr); //从字符串中创建一个商品信息
    QString toString(); //转换成字符串形式的商品信息，便于保存在文件中
    QString getID();
    QString getName();
    QString getUnit();
    QString getPrice();
    QString getNum();
    void SetID(QString id);
    void SetName(QString name);
    void SetUnit(QString unit);
    void SetPrice(QString price);
    void SetNum(QString num);

private:
    QString id;
    QString name;
    QString unit;
    QString price;
    QString num;
};

#endif // GOODSINFO_H

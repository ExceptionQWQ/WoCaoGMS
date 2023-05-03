#include "goodsinfo.h"

GoodsInfo::GoodsInfo()
{

}


GoodsInfo::GoodsInfo(const QString &goodsInfoStr)
{
    QStringList list = goodsInfoStr.split(QRegularExpression("\t"));
    if (list.size() != 5) {
        qDebug("load goodsinfo error:list size() != 5");
        return ;
    }
    id = list[0];
    name = list[1];
    unit = list[2];
    price = list[3];
    num = list[4];
}

QString GoodsInfo::toString()
{
    QString str = QString("%1\t%2\t%3\t%4\t%5").arg(id).arg(name).arg(unit).arg(price).arg(num);
    return str;
}

QString GoodsInfo::getID()
{
    return id;
}

QString GoodsInfo::getName()
{
    return name;
}

QString GoodsInfo::getUnit()
{
    return unit;
}

QString GoodsInfo::getPrice()
{
    return price;
}

QString GoodsInfo::getNum()
{
    return num;
}

void GoodsInfo::SetID(QString id)
{
    this->id = id;
}

void GoodsInfo::SetName(QString name)
{
    this->name = name;
}

void GoodsInfo::SetUnit(QString unit)
{
    this->unit = unit;
}

void GoodsInfo::SetPrice(QString price)
{
    this->price = price;
}

void GoodsInfo::SetNum(QString num)
{
    this->num = num;
}

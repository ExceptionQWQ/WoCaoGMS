#include "goodsinfomodel.h"

GoodsInfoModel::GoodsInfoModel()
{
    readFromFile();
}

GoodsInfoModel::~GoodsInfoModel()
{
    writeToFile();
}

void GoodsInfoModel::readFromFile()
{
    readFromFile("goodsinfo.txt");
}

void GoodsInfoModel::writeToFile()
{
    writeToFile("goodsinfo.txt");
}

void GoodsInfoModel::readItemModel(QStandardItemModel *model)
{
    model->clear();
    QStringList headers = {"编号", "名称", "单位", "价格", "库存"};
    model->setHorizontalHeaderLabels(headers);

    for (auto iter_b = map.begin(); iter_b != map.end(); ++iter_b) {
        QStandardItem* item1 = new QStandardItem();
        QStandardItem* item2 = new QStandardItem();
        QStandardItem* item3 = new QStandardItem();
        QStandardItem* item4 = new QStandardItem();
        QStandardItem* item5 = new QStandardItem();

        item1->setText(iter_b->getID());
        item1->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        item1->setData(1, Qt::UserRole + 1);
        item2->setText(iter_b->getName());
        item2->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        item3->setText(iter_b->getUnit());
        item3->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        item4->setText(iter_b->getPrice());
        item4->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        item5->setText(iter_b->getNum());
        item5->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        QList<QStandardItem*> list = {item1, item2, item3, item4, item5};
        model->appendRow(list);
    }
}

void GoodsInfoModel::saveItemModel(QStandardItemModel *model)
{

}

void GoodsInfoModel::readFromFile(const QString &filename)
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

        GoodsInfo goodsinfo(line);
        if (goodsinfo.getID().isEmpty()) continue;
        map.insert(goodsinfo.getID(), goodsinfo);
    }
    file.close();
}

void GoodsInfoModel::writeToFile(const QString &filename)
{
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug("writeToFile %s not exists", filename.toLocal8Bit().data());
        return ;
    }
    QTextStream out(&file);  //用文件构造流
    for (auto iter_b = map.begin(); iter_b != map.end(); ++iter_b) {
        GoodsInfo goodsinfo = *iter_b;
        out << goodsinfo.toString() << QString("\n");
    }
    file.close();
}


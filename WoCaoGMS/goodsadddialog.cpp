#include "goodsadddialog.h"
#include "ui_goodsadddialog.h"

GoodsAddDialog::GoodsAddDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GoodsAddDialog)
{
    ui->setupUi(this);
}

GoodsAddDialog::~GoodsAddDialog()
{
    delete ui;
}

GoodsInfo GoodsAddDialog::getGoodsInfo()
{
    return goodsInfo;
}

bool GoodsAddDialog::added()
{
    return hasAdded;
}

void GoodsAddDialog::on_pushButton_clicked()
{
    QString name = ui->nameEdit->text();
    QString unit = ui->unitEdit->text();
    QString price = ui->priceEdit->text();
    name = name.simplified();
    unit = unit.simplified();
    if (name.isEmpty() || unit.isEmpty() || price.isEmpty()) {
        QMessageBox::critical(this, "错误", "商品信息不完整");
        return ;
    }
    GlobalConfig globalConfig;
    QString idStr = globalConfig.get("id", "1000");
    globalConfig.put("id", QString("%1").arg(idStr.toUInt() + 1));
    globalConfig.commit();

    goodsInfo.SetID(idStr);
    goodsInfo.SetName(name);
    goodsInfo.SetUnit(unit);
    goodsInfo.SetPrice(price);
    goodsInfo.SetNum("0");
    hasAdded = true;
    close();
}


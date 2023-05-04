#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actExitLogin, SIGNAL(triggered()), this, SLOT(on_actExitLogin_clicked()));
    connect(ui->actCreateGoods, SIGNAL(triggered()), this, SLOT(on_actGoodsAdd_clicked()));
    connect(ui->actDeleteGoods, SIGNAL(triggered()), this, SLOT(on_actDeleteGoods_clicked()));
    connect(ui->actGoodsIn, SIGNAL(triggered()), this, SLOT(on_actGoodsIn_clicked()));
    connect(ui->actGoodsOut, SIGNAL(triggered()), this, SLOT(on_actGoodsOut_clicked()));
    connect(ui->actPutIn, SIGNAL(triggered()), this, SLOT(on_actPutIn_clicked()));
    connect(ui->actPutOut, SIGNAL(triggered()), this, SLOT(on_actPutOut_clicked()));
    connect(ui->actShowLog, SIGNAL(triggered()), this, SLOT(on_actShowLog_clicked()));
    connect(ui->actFindGoods, SIGNAL(triggered()), this, SLOT(on_actFindGoods_clicked()));

    userDataModel = new UserDataModel();
    goodsInfoModel = new GoodsInfoModel();
    m_model = new QStandardItemModel(this);
    m_smodel = new QItemSelectionModel(m_model);
    ui->tableView->setModel(m_model);
    ui->tableView->setSelectionModel(m_smodel);
    goodsInfoModel->readItemModel(m_model);

}

MainWindow::~MainWindow()
{
    delete userDataModel;
    delete ui;
}

void MainWindow::SetLoginName(const QString& loginName)
{
    this->currentUserName = loginName;
}

void MainWindow::on_actExitLogin_clicked()
{
    UserData userData = userDataModel->map[this->currentUserName];
    userData.setAutoLogin(false);
    userDataModel->map[this->currentUserName] = userData;
    userDataModel->writeToFile();
    close();
}

void MainWindow::on_actGoodsAdd_clicked()
{
    GoodsAddDialog* dialog = new GoodsAddDialog(this);
    dialog->setName(currentUserName);
    dialog->exec();
    if (dialog->added()) {
        GoodsInfo goodsInfo = dialog->getGoodsInfo();
        goodsInfoModel->map.insert(goodsInfo.getID(), goodsInfo);
        goodsInfoModel->writeToFile();
        goodsInfoModel->readItemModel(m_model);
    }
    delete dialog;
}

void MainWindow::on_actDeleteGoods_clicked()
{
    if (!m_smodel->hasSelection()) {
        QMessageBox::critical(this, "提示", "请选中商品的编号");
        return ;
    }
    QModelIndexList list = m_smodel->selectedIndexes();
    bool flag = true;
    for (int i = 0; i < list.size(); ++i) {
        QStandardItem* item = m_model->itemFromIndex(list[i]);
        if (item->data(Qt::UserRole + 1).toBool()) {
            flag = false;
            QString idStr = item->text();
            goodsInfoModel->map.remove(idStr);
            OperationRecord::record(currentUserName, "删除商品 id:" + idStr);
        }
    }

    if (flag) {
        QMessageBox::critical(this, "提示", "请选中商品的编号");
        return ;
    }
    goodsInfoModel->readItemModel(m_model);
}

void MainWindow::on_actGoodsIn_clicked()
{
    if (!m_smodel->hasSelection()) {
        QMessageBox::critical(this, "提示", "请选中商品的编号");
        return ;
    }
    QModelIndexList list = m_smodel->selectedIndexes();

    if (list.size() != 1) {
        QMessageBox::critical(this, "提示", "请只选中一个商品");
        return ;
    }
    QStandardItem* item = m_model->itemFromIndex(list[0]);
    if (!item->data(Qt::UserRole + 1).toBool()) {
        QMessageBox::critical(this, "提示", "请选中商品的编号");
        return ;
    }
    QString idStr = item->text();
    GoodsInfo goodsInfo = goodsInfoModel->map[idStr];
    bool ok = false;
    int ret = QInputDialog::getInt(this, "商品进货", "请输入进货数量(1-99)", 0, 1, 99, 1, &ok);
    if (ok) {
        OperationRecord::record(currentUserName, "商品进货 id:" + idStr + "num:" + QString("%1").arg(ret));
        goodsInfo.SetNum(QString("%1").arg(goodsInfo.getNum().toInt() + ret));
        goodsInfoModel->map.insert(goodsInfo.getID(), goodsInfo);
        goodsInfoModel->writeToFile();
        goodsInfoModel->readItemModel(m_model);
    }
}

void MainWindow::on_actGoodsOut_clicked()
{
    if (!m_smodel->hasSelection()) {
        QMessageBox::critical(this, "提示", "请选中商品的编号");
        return ;
    }
    QModelIndexList list = m_smodel->selectedIndexes();

    if (list.size() != 1) {
        QMessageBox::critical(this, "提示", "请只选中一个商品");
        return ;
    }
    QStandardItem* item = m_model->itemFromIndex(list[0]);
    if (!item->data(Qt::UserRole + 1).toBool()) {
        QMessageBox::critical(this, "提示", "请选中商品的编号");
        return ;
    }
    QString idStr = item->text();
    GoodsInfo goodsInfo = goodsInfoModel->map[idStr];
    bool ok = false;
    int ret = QInputDialog::getInt(this, "商品销售", "请输入销售数量(1-99)", 0, 1, 99, 1, &ok);
    if (ok) {
        int remain = goodsInfo.getNum().toInt();
        if (remain < ret) {
            QMessageBox::critical(this, "提示", "库存不足");
            return ;
        }
        OperationRecord::record(currentUserName, "商品销售 id:" + idStr + " num:" + QString("%1").arg(ret));
        goodsInfo.SetNum(QString("%1").arg(remain - ret));
        goodsInfoModel->map.insert(goodsInfo.getID(), goodsInfo);
        goodsInfoModel->writeToFile();
        goodsInfoModel->readItemModel(m_model);
    }
}

void MainWindow::on_actPutIn_clicked()
{
    if (!m_smodel->hasSelection()) {
        QMessageBox::critical(this, "提示", "请选中商品的编号");
        return ;
    }
    QModelIndexList list = m_smodel->selectedIndexes();

    if (list.size() != 1) {
        QMessageBox::critical(this, "提示", "请只选中一个商品");
        return ;
    }
    QStandardItem* item = m_model->itemFromIndex(list[0]);
    if (!item->data(Qt::UserRole + 1).toBool()) {
        QMessageBox::critical(this, "提示", "请选中商品的编号");
        return ;
    }
    QString idStr = item->text();
    GoodsInfo goodsInfo = goodsInfoModel->map[idStr];
    bool ok = false;
    int ret = QInputDialog::getInt(this, "商品盘点", "请输入入库数量(1-99)", 0, 1, 99, 1, &ok);
    if (ok) {
        OperationRecord::record(currentUserName, "盘点商品（入库） id:" + idStr + " num:" + QString("%1").arg(ret));
        goodsInfo.SetNum(QString("%1").arg(goodsInfo.getNum().toInt() + ret));
        goodsInfoModel->map.insert(goodsInfo.getID(), goodsInfo);
        goodsInfoModel->writeToFile();
        goodsInfoModel->readItemModel(m_model);
    }
}

void MainWindow::on_actPutOut_clicked()
{
    if (!m_smodel->hasSelection()) {
        QMessageBox::critical(this, "提示", "请选中商品的编号");
        return ;
    }
    QModelIndexList list = m_smodel->selectedIndexes();

    if (list.size() != 1) {
        QMessageBox::critical(this, "提示", "请只选中一个商品");
        return ;
    }
    QStandardItem* item = m_model->itemFromIndex(list[0]);
    if (!item->data(Qt::UserRole + 1).toBool()) {
        QMessageBox::critical(this, "提示", "请选中商品的编号");
        return ;
    }
    QString idStr = item->text();
    GoodsInfo goodsInfo = goodsInfoModel->map[idStr];
    bool ok = false;
    int ret = QInputDialog::getInt(this, "商品盘点", "请输入出库数量(1-99)", 0, 1, 99, 1, &ok);
    if (ok) {
        int remain = goodsInfo.getNum().toInt();
        if (remain < ret) {
            QMessageBox::critical(this, "提示", "库存不足");
            return ;
        }
        OperationRecord::record(currentUserName, "盘点商品（出库） id:" + idStr + " num:" + QString("%1").arg(ret));
        goodsInfo.SetNum(QString("%1").arg(remain - ret));
        goodsInfoModel->map.insert(goodsInfo.getID(), goodsInfo);
        goodsInfoModel->writeToFile();
        goodsInfoModel->readItemModel(m_model);
    }
}

void MainWindow::on_actShowLog_clicked()
{
    ShowRecord* showRecord = new ShowRecord(this);
    showRecord->exec();

    delete showRecord;
}

void MainWindow::on_actFindGoods_clicked()
{
    bool ok = false;
    int ret = QInputDialog::getInt(this, "商品搜索", "请输入商品编号(1000-9999)", 0, 1000, 9999, 1, &ok);
    QString id = QString("%1").arg(ret);
    if (ok) {
        OperationRecord::record(currentUserName, "商品搜索 id:" + id);
        //顺序查找
        for (int i = 0; i < m_model->rowCount(); ++i) {
            QStandardItem* item = m_model->item(i);
            if (item->text() == id) {
                QModelIndex index = m_model->indexFromItem(item);
                ui->tableView->scrollTo(index);
                m_smodel->clearSelection();
                m_smodel->setCurrentIndex(index, QItemSelectionModel::Select);
                return ;
            }
        }
        QMessageBox::critical(this, "提示", "商品不存在");
        return ;
    }
}


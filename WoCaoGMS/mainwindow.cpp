#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actExitLogin, SIGNAL(triggered()), this, SLOT(on_actExitLogin_clicked()));
    connect(ui->actCreateGoods, SIGNAL(triggered()), this, SLOT(on_actGoodsAdd_clicked()));

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
    dialog->exec();
    if (dialog->added()) {
        GoodsInfo goodsInfo = dialog->getGoodsInfo();
        goodsInfoModel->map.insert(goodsInfo.getID(), goodsInfo);
        goodsInfoModel->writeToFile();
        goodsInfoModel->readItemModel(m_model);
    }
    delete dialog;
}


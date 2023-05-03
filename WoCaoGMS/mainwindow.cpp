#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    userDataModel = new UserDataModel();


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


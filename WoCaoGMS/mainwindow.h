#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include "userdatamodel.h"
#include "logindialog.h"
#include "goodsadddialog.h"
#include "goodsinfomodel.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void SetLoginName(const QString& loginName);

private slots:
    void on_actExitLogin_clicked();
    void on_actGoodsAdd_clicked();


private:
    Ui::MainWindow *ui;
    UserDataModel* userDataModel;
    GoodsInfoModel* goodsInfoModel;
    QString currentUserName; //当前登录的用户名称
    QStandardItemModel* m_model;
    QItemSelectionModel* m_smodel;
};
#endif // MAINWINDOW_H

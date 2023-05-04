#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include <QInputDialog>
#include "userdatamodel.h"
#include "logindialog.h"
#include "goodsadddialog.h"
#include "goodsinfomodel.h"
#include "showrecord.h"

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
    void on_actDeleteGoods_clicked();
    void on_actGoodsIn_clicked();
    void on_actGoodsOut_clicked();
    void on_actPutIn_clicked();
    void on_actPutOut_clicked();
    void on_actShowLog_clicked();
    void on_actFindGoods_clicked();

private:
    Ui::MainWindow *ui;
    UserDataModel* userDataModel;
    GoodsInfoModel* goodsInfoModel;
    QStandardItemModel* m_model;
    QItemSelectionModel* m_smodel;
    QString currentUserName; //当前登录的用户名称
};
#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "userdatamodel.h"
#include "logindialog.h"

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


private:
    Ui::MainWindow *ui;
    UserDataModel* userDataModel;
    QString currentUserName; //当前登录的用户名称
};
#endif // MAINWINDOW_H

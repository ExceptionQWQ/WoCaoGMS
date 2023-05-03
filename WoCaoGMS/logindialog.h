#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QCryptographicHash>
#include "userdatamodel.h"
#include "registdialog.h"

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

    void setModel(UserDataModel* model);
    void setLoginData(const QString& userName, const QString& userPassword, bool isAutoLogin, bool rememberPassword); //设置打开登录对话框时初始化的数据
    QString getUserName();
    QString getUserPassword();
    bool getLoginStatus(); //获取登录状态

private slots:
    void on_registButton_clicked();

    void on_loginButton_clicked();

    void on_autoLoginChkBox_clicked(bool checked);

private:
    UserData getActiveUser();
    void showUserData();
    bool autoLogin();
    void loginSuccess(UserData userData);

    Ui::LoginDialog *ui;
    QString userName; //用户名称
    QString userPassword; //用户密码
    bool isAutoLogin; //是否自动登录
    bool rememberPassword; //是否记住密码
    UserDataModel* userDataModel;
    bool loginStatus;
};

#endif // LOGINDIALOG_H

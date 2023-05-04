#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    userDataModel = new UserDataModel();
    showUserData();
    autoLogin();
}

LoginDialog::~LoginDialog()
{
    delete userDataModel;
    delete ui;
}

void LoginDialog::setModel(UserDataModel *model)
{
    this->userDataModel = model;
}

void LoginDialog::setLoginData(const QString &userName, const QString &userPassword, bool isAutoLogin, bool rememberPassword)
{
    this->userName = userName;
    this->userPassword = userPassword;
    this->isAutoLogin = isAutoLogin;
    this->rememberPassword = rememberPassword;
}

QString LoginDialog::getUserName()
{
    return userName;
}

QString LoginDialog::getUserPassword()
{
    return userPassword;
}

bool LoginDialog::getLoginStatus()
{
    return loginStatus;
}

void LoginDialog::on_registButton_clicked()
{
    ui->passwdEdit->setText(QString(" "));
    RegistDialog* registDialog = new RegistDialog(this);
    registDialog->setModel(userDataModel);
    registDialog->exec();
    delete registDialog;
}

UserData LoginDialog::getActiveUser()
{
    for (auto iter_b = userDataModel->map.begin(); iter_b != userDataModel->map.end(); ++iter_b) {
        UserData userData = *iter_b;
        if (userData.getAutoLogin()) return userData;
        if (userData.getRememberPassword()) return userData;
    }
    return UserData{};
}

void LoginDialog::showUserData()
{
    UserData userData = getActiveUser();
    userName = userData.getName();
    userPassword = userData.getPassword();
    isAutoLogin = userData.getAutoLogin();
    rememberPassword = userData.getRememberPassword();
    ui->nameEdit->setText(userData.getName());
    if (userData.getRememberPassword()) {
        ui->passwdEdit->setText(userData.getPassword());
        ui->remPasswdChkBox->setChecked(true);
    }
    if (userData.getAutoLogin()) {
        ui->passwdEdit->setText(userData.getPassword());
        ui->remPasswdChkBox->setChecked(true);
        ui->autoLoginChkBox->setChecked(true);
    }
}

bool LoginDialog::autoLogin()
{
    if (isAutoLogin) {
        loginStatus = true;
        ui->loginButton->animateClick();
        return true;
    }
    return false;
}

void LoginDialog::loginSuccess(UserData userData)
{
    userData.setAutoLogin(ui->autoLoginChkBox->isChecked());
    userData.setRememberPassword(ui->remPasswdChkBox->isChecked());
    userDataModel->map[userData.getName()] = userData;
    userName = userData.getName();
    loginStatus = true;
}


void LoginDialog::on_loginButton_clicked()
{
    QString name = ui->nameEdit->text();
    QString passwd = ui->passwdEdit->text();

    if (name.isEmpty()) {
        QMessageBox::critical(this, "错误", "账号不能为空");
        return ;
    }
    if (passwd.isEmpty()) {
        QMessageBox::critical(this, "错误", "密码不能为空");
        return ;
    }
    if (!userDataModel->map.count(name)) {
        QMessageBox::critical(this, "错误", "用户不存在");
        return ;
    }
    QCryptographicHash hash(QCryptographicHash::Md5);
    hash.addData(passwd.toLocal8Bit().data());
    QString hex = hash.result().toHex();
    if (hex == userDataModel->map[name].getPassword() || passwd == userDataModel->map[name].getPassword()) {
        OperationRecord::record(name, "登录账号");
        loginSuccess(userDataModel->map[name]);
        close();
        return ;
    } else {
        QMessageBox::critical(this, "错误", "密码错误");
    }
}


void LoginDialog::on_autoLoginChkBox_clicked(bool checked)
{
    if (checked) {
        ui->remPasswdChkBox->setChecked(true);
    }
}


#include "registdialog.h"
#include "ui_registdialog.h"

RegistDialog::RegistDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistDialog)
{
    ui->setupUi(this);
    connect(ui->nameEdit, SIGNAL(textChanged(QString)), this, SLOT(on_nameEdit_changed(QString)));
}

RegistDialog::~RegistDialog()
{
    delete ui;
}

void RegistDialog::setModel(UserDataModel *model)
{
    this->userDataModel = model;
}

void RegistDialog::on_registButton_clicked()
{
    QString name = ui->nameEdit->text();
    QString passwd1 = ui->passwdEdit1->text();
    QString passwd2 = ui->passwdEdit2->text();
    if (name.isEmpty()) {
        QMessageBox::critical(this, "错误", "账号不能为空");
        return ;
    }
    if (passwd1.isEmpty() || passwd2.isEmpty()) {
        QMessageBox::critical(this, "错误", "密码不能为空");
        return ;
    }
    if (passwd1 != passwd2) {
        QMessageBox::critical(this, "错误", "密码不一致");
        return ;
    }
    if (userDataModel->map.count(name)) {
        QMessageBox::critical(this, "错误", "用户已存在");
        return ;
    }
    QCryptographicHash hash(QCryptographicHash::Md5);
    hash.addData(passwd1.toLocal8Bit().data());
    UserData userData;
    userData.setName(name);
    userData.setPassword(hash.result().toHex());
    userData.setAutoLogin(false);
    userData.setRememberPassword(false);
    userDataModel->map.insert(name, userData);
    QMessageBox::information(this, "提示", "注册成功");
    close();
}

void RegistDialog::on_nameEdit_changed(QString str)
{
    QString ret = ui->nameEdit->text();
    ret.replace(" ", "");
    ret.replace("\t", "");
    ui->nameEdit->setText(ret);
}


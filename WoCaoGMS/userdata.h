#ifndef USERDATA_H
#define USERDATA_H

#include <QString>
#include <QRegularExpression>

class UserData
{
public:
    UserData(); //创建一个空用户数据
    UserData(const QString& userDataStr); //从字符串中创建一个用户数据
    QString toString(); //转换成字符串形式的用户数据，便于保存在文件中
    void setName(const QString& name);
    void setPassword(const QString& password);
    void setAutoLogin(bool status);
    void setRememberPassword(bool status);
    QString getName();
    QString getPassword();
    bool getAutoLogin();
    bool getRememberPassword();

private:
    QString name; //用户名称
    QString password; //使用MD5加密后的用户密码
    bool isAutoLogin = false; //是否设置自动登录
    bool isRememberPassword = false; //是否设置保存密码
};

#endif // USERDATA_H

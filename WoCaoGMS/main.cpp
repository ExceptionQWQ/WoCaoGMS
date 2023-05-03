#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    LoginDialog* loginDialog = new LoginDialog(nullptr);
    loginDialog->exec();

    bool status = loginDialog->getLoginStatus();
    QString loginName = loginDialog->getUserName();

    delete loginDialog;

    qDebug("login:%s", loginName.toLocal8Bit().data());

    MainWindow mainWindow;
    mainWindow.SetLoginName(loginName);
    mainWindow.show();

    return a.exec();
}

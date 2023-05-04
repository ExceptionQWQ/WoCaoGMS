#ifndef REGISTDIALOG_H
#define REGISTDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QCryptographicHash>
#include "userdatamodel.h"
#include "userdata.h"
#include "operationrecord.h"

namespace Ui {
class RegistDialog;
}

class RegistDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RegistDialog(QWidget *parent = nullptr);
    ~RegistDialog();
    void setModel(UserDataModel* model);

private slots:
    void on_registButton_clicked();
    void on_nameEdit_changed(QString str);

private:
    Ui::RegistDialog *ui;
    UserDataModel* userDataModel;
};

#endif // REGISTDIALOG_H

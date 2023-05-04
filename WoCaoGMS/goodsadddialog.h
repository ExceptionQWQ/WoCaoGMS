#ifndef GOODSADDDIALOG_H
#define GOODSADDDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include "globalconfig.h"
#include "goodsinfo.h"
#include "operationrecord.h"
#include "mainwindow.h"

namespace Ui {
class GoodsAddDialog;
}

class GoodsAddDialog : public QDialog
{
    Q_OBJECT

public:
    explicit GoodsAddDialog(QWidget *parent = nullptr);
    ~GoodsAddDialog();

    void setName(QString name);
    GoodsInfo getGoodsInfo();
    bool added();

private slots:
    void on_pushButton_clicked();

private:
    Ui::GoodsAddDialog *ui;
    QString currentUserName;
    GoodsInfo goodsInfo;
    bool hasAdded = false;
};

#endif // GOODSADDDIALOG_H

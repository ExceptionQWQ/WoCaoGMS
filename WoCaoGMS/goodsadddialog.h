#ifndef GOODSADDDIALOG_H
#define GOODSADDDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include "globalconfig.h"
#include "goodsinfo.h"

namespace Ui {
class GoodsAddDialog;
}

class GoodsAddDialog : public QDialog
{
    Q_OBJECT

public:
    explicit GoodsAddDialog(QWidget *parent = nullptr);
    ~GoodsAddDialog();

    GoodsInfo getGoodsInfo();
    bool added();

private slots:
    void on_pushButton_clicked();

private:
    Ui::GoodsAddDialog *ui;
    GoodsInfo goodsInfo;
    bool hasAdded;
};

#endif // GOODSADDDIALOG_H

#ifndef SHOWRECORD_H
#define SHOWRECORD_H

#include <QDialog>
#include <QStringListModel>
#include "operationrecord.h"


namespace Ui {
class ShowRecord;
}

class ShowRecord : public QDialog
{
    Q_OBJECT

public:
    explicit ShowRecord(QWidget *parent = nullptr);
    ~ShowRecord();

private:
    Ui::ShowRecord *ui;
    QStringListModel* m_model;

};

#endif // SHOWRECORD_H

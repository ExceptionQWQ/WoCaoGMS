#include "showrecord.h"
#include "ui_showrecord.h"

ShowRecord::ShowRecord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowRecord)
{
    ui->setupUi(this);
    m_model = new QStringListModel(this);
    QStringList list = OperationRecord::get();

    for (int i = 0; i < list.size(); ++i) {
        QListWidgetItem* item = new QListWidgetItem(ui->listWidget);
        item->setText(list[i]);
        if (list[i].contains("盘点")) {
            item->setForeground(Qt::red);
        }
        ui->listWidget->addItem(item);
    }
}

ShowRecord::~ShowRecord()
{
    delete ui;
}

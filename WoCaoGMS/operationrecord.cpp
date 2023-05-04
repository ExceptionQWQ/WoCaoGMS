#include "operationrecord.h"

OperationRecord::OperationRecord()
{

}

void OperationRecord::record(QString name, QString op)
{
    QTime time = QTime::currentTime();
    QDate date = QDate::currentDate();
    QString info = date.toString("yyyy-MM-dd") + " " + time.toString("HH:mm:ss") +" " + name + " " + op;
    QFile file("record.txt");
    QTextStream out(&file);  //用文件构造流
    file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append);
    out << info << QString("\n");
    file.close();
}

QStringList OperationRecord::get()
{
    QStringList list;
    QFile file("record.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return list;
    }
    QString line;
    QTextStream in(&file);  //用文件构造流

    while (true) {
        line = in.readLine();//读取一行放到字符串里
        if (line.isNull() || line.isEmpty()) break;
        qDebug() << line.toLocal8Bit().data();

        list.push_back(line);

    }
    file.close();
    return list;
}

#include "operationrecord.h"

OperationRecord::OperationRecord()
{

}

void OperationRecord::record(QString name, QString op)
{
    QTime time = QTime::currentTime();
    QDate date = QDate::currentDate();
    QString info = date.toString("yyyy-MM-dd") + " " + time.toString("HH:mm:ss") +" " + name + " " + op;
    std::ofstream out("record.txt", std::ios::app);
    out << info.toLocal8Bit().data() << std::endl;
    out.close();
}

QStringList OperationRecord::get()
{
    QStringList list;
    std::ifstream in("record.txt");
    if (!in.is_open()) {
        return list;
    }
    std::string line;
    while (true) {
        std::getline(in, line);
        if (in.fail()) break;
        list.push_back(QString(line.data()));
    }
    return list;
}

#ifndef OPERATIONRECORD_H
#define OPERATIONRECORD_H

#include <QString>
#include <QDate>
#include <QTime>
#include <fstream>
#include <string>

class OperationRecord
{
public:
    OperationRecord();
    static void record(QString name, QString op);
    static QStringList get();
};

#endif // OPERATIONRECORD_H

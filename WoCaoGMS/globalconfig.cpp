#include "globalconfig.h"

GlobalConfig::GlobalConfig()
{
    readFromFile();
}

GlobalConfig::~GlobalConfig()
{
    writeToFile();
}

void GlobalConfig::readFromFile()
{
    readFromFile("config.txt");
}

void GlobalConfig::writeToFile()
{
    writeToFile("config.txt");
}

QString GlobalConfig::get(QString key, QString def)
{
    if (map.count(key)) return map[key];
    return def;
}

void GlobalConfig::put(QString key, QString value)
{
    map.insert(key, value);
}

void GlobalConfig::commit()
{
    writeToFile();
}

void GlobalConfig::readFromFile(const QString &filename)
{
    std::ifstream in(filename.toLocal8Bit().data());
    if (!in.is_open()) {
        qDebug("readFromFile %s not exists", filename.toLocal8Bit().data());
        return ;
    }
    map.clear();
    std::string key, value;
    while (true) {
        in >> key >> value;
        if (in.fail()) break;
        QString qkey(key.data()), qvalue(value.data());
        if (qkey.isEmpty() || qvalue.isEmpty()) continue;
        map.insert(qkey, qvalue);
    }
    in.close();
}

void GlobalConfig::writeToFile(const QString &filename)
{
    std::ofstream out(filename.toLocal8Bit().data());
    if (!out.is_open()) {
        qDebug("witeToFile %s not exists", filename.toLocal8Bit().data());
        return ;
    }
    for (auto iter_b = map.keyValueBegin(); iter_b != map.keyValueEnd(); ++iter_b) {
        out << iter_b->first.toLocal8Bit().data() << " " << iter_b->second.toLocal8Bit().data() << std::endl;
    }
    out.close();
}



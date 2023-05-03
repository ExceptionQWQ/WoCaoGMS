#include "userdatamodel.h"

UserDataModel::UserDataModel()
{
    readFromFile();
}

UserDataModel::~UserDataModel()
{
    writeToFile();
}

void UserDataModel::readFromFile()
{
    readFromFile("userdata.txt");
}

void UserDataModel::writeToFile()
{
    writeToFile("userdata.txt");
}

void UserDataModel::readFromFile(const QString &filename)
{
    std::ifstream in(filename.toLocal8Bit().data());
    if (!in.is_open()) {
        qDebug("readFromFile %s not exists", filename.toLocal8Bit().data());
        return ;
    }
    map.clear();
    std::string line;
    while (true) {
        std::getline(in, line);
        if (in.fail()) break;
        UserData userData(line.data());
        if (userData.getName().isEmpty()) continue;
        map.insert(userData.getName(), userData);
    }
    in.close();
}

void UserDataModel::writeToFile(const QString &filename)
{
    std::ofstream out(filename.toLocal8Bit().data());
    if (!out.is_open()) {
        qDebug("witeToFile %s not exists", filename.toLocal8Bit().data());
        return ;
    }
    for (auto iter_b = map.begin(); iter_b != map.end(); ++iter_b) {
        UserData userData = *iter_b;
        out << userData.toString().toLocal8Bit().data() << std::endl;
    }
    out.close();
}

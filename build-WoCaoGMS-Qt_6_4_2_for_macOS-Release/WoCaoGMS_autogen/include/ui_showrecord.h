/********************************************************************************
** Form generated from reading UI file 'showrecord.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWRECORD_H
#define UI_SHOWRECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowRecord
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;

    void setupUi(QDialog *ShowRecord)
    {
        if (ShowRecord->objectName().isEmpty())
            ShowRecord->setObjectName("ShowRecord");
        ShowRecord->setWindowModality(Qt::ApplicationModal);
        ShowRecord->resize(400, 300);
        ShowRecord->setWindowOpacity(0.900000000000000);
        horizontalLayout = new QHBoxLayout(ShowRecord);
        horizontalLayout->setObjectName("horizontalLayout");
        listWidget = new QListWidget(ShowRecord);
        listWidget->setObjectName("listWidget");
        listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        horizontalLayout->addWidget(listWidget);


        retranslateUi(ShowRecord);

        QMetaObject::connectSlotsByName(ShowRecord);
    } // setupUi

    void retranslateUi(QDialog *ShowRecord)
    {
        ShowRecord->setWindowTitle(QCoreApplication::translate("ShowRecord", "\346\223\215\344\275\234\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowRecord: public Ui_ShowRecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWRECORD_H

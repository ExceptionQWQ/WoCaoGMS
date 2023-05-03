/********************************************************************************
** Form generated from reading UI file 'goodsadddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOODSADDDIALOG_H
#define UI_GOODSADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GoodsAddDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *unitEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *priceEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *GoodsAddDialog)
    {
        if (GoodsAddDialog->objectName().isEmpty())
            GoodsAddDialog->setObjectName("GoodsAddDialog");
        GoodsAddDialog->setWindowModality(Qt::ApplicationModal);
        GoodsAddDialog->resize(148, 147);
        GoodsAddDialog->setMinimumSize(QSize(148, 147));
        GoodsAddDialog->setMaximumSize(QSize(148, 147));
        verticalLayout = new QVBoxLayout(GoodsAddDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(GoodsAddDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        nameEdit = new QLineEdit(GoodsAddDialog);
        nameEdit->setObjectName("nameEdit");

        horizontalLayout->addWidget(nameEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(GoodsAddDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        unitEdit = new QLineEdit(GoodsAddDialog);
        unitEdit->setObjectName("unitEdit");

        horizontalLayout_2->addWidget(unitEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(GoodsAddDialog);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        priceEdit = new QDoubleSpinBox(GoodsAddDialog);
        priceEdit->setObjectName("priceEdit");

        horizontalLayout_3->addWidget(priceEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton = new QPushButton(GoodsAddDialog);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        retranslateUi(GoodsAddDialog);

        QMetaObject::connectSlotsByName(GoodsAddDialog);
    } // setupUi

    void retranslateUi(QDialog *GoodsAddDialog)
    {
        GoodsAddDialog->setWindowTitle(QCoreApplication::translate("GoodsAddDialog", "\346\267\273\345\212\240\345\225\206\345\223\201", nullptr));
        label->setText(QCoreApplication::translate("GoodsAddDialog", "\345\220\215\347\247\260", nullptr));
        label_2->setText(QCoreApplication::translate("GoodsAddDialog", "\345\215\225\344\275\215", nullptr));
        label_3->setText(QCoreApplication::translate("GoodsAddDialog", "\344\273\267\346\240\274", nullptr));
        pushButton->setText(QCoreApplication::translate("GoodsAddDialog", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GoodsAddDialog: public Ui_GoodsAddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOODSADDDIALOG_H

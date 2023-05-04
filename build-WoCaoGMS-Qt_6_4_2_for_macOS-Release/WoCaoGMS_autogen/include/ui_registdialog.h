/********************************************************************************
** Form generated from reading UI file 'registdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTDIALOG_H
#define UI_REGISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RegistDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *passwdEdit1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *passwdEdit2;
    QPushButton *registButton;

    void setupUi(QDialog *RegistDialog)
    {
        if (RegistDialog->objectName().isEmpty())
            RegistDialog->setObjectName("RegistDialog");
        RegistDialog->setWindowModality(Qt::ApplicationModal);
        RegistDialog->resize(344, 231);
        RegistDialog->setMinimumSize(QSize(344, 231));
        RegistDialog->setMaximumSize(QSize(344, 243));
        RegistDialog->setWindowOpacity(0.900000000000000);
        verticalLayout = new QVBoxLayout(RegistDialog);
        verticalLayout->setObjectName("verticalLayout");
        label_4 = new QLabel(RegistDialog);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(RegistDialog);
        label->setObjectName("label");
        label->setMinimumSize(QSize(53, 45));
        label->setMaximumSize(QSize(53, 45));

        horizontalLayout->addWidget(label);

        nameEdit = new QLineEdit(RegistDialog);
        nameEdit->setObjectName("nameEdit");

        horizontalLayout->addWidget(nameEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(RegistDialog);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(53, 45));
        label_2->setMaximumSize(QSize(53, 45));

        horizontalLayout_2->addWidget(label_2);

        passwdEdit1 = new QLineEdit(RegistDialog);
        passwdEdit1->setObjectName("passwdEdit1");
        passwdEdit1->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwdEdit1);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(RegistDialog);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(53, 45));
        label_3->setMaximumSize(QSize(53, 45));

        horizontalLayout_3->addWidget(label_3);

        passwdEdit2 = new QLineEdit(RegistDialog);
        passwdEdit2->setObjectName("passwdEdit2");
        passwdEdit2->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(passwdEdit2);


        verticalLayout->addLayout(horizontalLayout_3);

        registButton = new QPushButton(RegistDialog);
        registButton->setObjectName("registButton");

        verticalLayout->addWidget(registButton);


        retranslateUi(RegistDialog);

        QMetaObject::connectSlotsByName(RegistDialog);
    } // setupUi

    void retranslateUi(QDialog *RegistDialog)
    {
        RegistDialog->setWindowTitle(QCoreApplication::translate("RegistDialog", "\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        label_4->setText(QCoreApplication::translate("RegistDialog", "WoCao\350\277\233\351\224\200\345\255\230\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("RegistDialog", "\350\264\246\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("RegistDialog", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("RegistDialog", "\351\207\215\345\244\215\345\257\206\347\240\201", nullptr));
        registButton->setText(QCoreApplication::translate("RegistDialog", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistDialog: public Ui_RegistDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTDIALOG_H

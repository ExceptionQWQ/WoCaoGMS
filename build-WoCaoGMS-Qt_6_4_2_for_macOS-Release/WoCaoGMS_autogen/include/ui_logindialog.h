/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *passwdEdit;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *autoLoginChkBox;
    QCheckBox *remPasswdChkBox;
    QPushButton *loginButton;
    QPushButton *registButton;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->setWindowModality(Qt::ApplicationModal);
        LoginDialog->resize(330, 237);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginDialog->sizePolicy().hasHeightForWidth());
        LoginDialog->setSizePolicy(sizePolicy);
        LoginDialog->setMaximumSize(QSize(330, 237));
        LoginDialog->setWindowOpacity(0.900000000000000);
        verticalLayout = new QVBoxLayout(LoginDialog);
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName("label_3");
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(LoginDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        nameEdit = new QLineEdit(LoginDialog);
        nameEdit->setObjectName("nameEdit");
        nameEdit->setInputMethodHints(Qt::ImhNone);

        horizontalLayout->addWidget(nameEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        passwdEdit = new QLineEdit(LoginDialog);
        passwdEdit->setObjectName("passwdEdit");
        passwdEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwdEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        autoLoginChkBox = new QCheckBox(LoginDialog);
        autoLoginChkBox->setObjectName("autoLoginChkBox");

        horizontalLayout_3->addWidget(autoLoginChkBox);

        remPasswdChkBox = new QCheckBox(LoginDialog);
        remPasswdChkBox->setObjectName("remPasswdChkBox");

        horizontalLayout_3->addWidget(remPasswdChkBox);


        verticalLayout->addLayout(horizontalLayout_3);

        loginButton = new QPushButton(LoginDialog);
        loginButton->setObjectName("loginButton");

        verticalLayout->addWidget(loginButton);

        registButton = new QPushButton(LoginDialog);
        registButton->setObjectName("registButton");
        registButton->setFlat(true);

        verticalLayout->addWidget(registButton);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        label_3->setText(QCoreApplication::translate("LoginDialog", "WoCao\350\277\233\351\224\200\345\255\230\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("LoginDialog", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("LoginDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        autoLoginChkBox->setText(QCoreApplication::translate("LoginDialog", "\350\207\252\345\212\250\347\231\273\345\275\225", nullptr));
        remPasswdChkBox->setText(QCoreApplication::translate("LoginDialog", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        registButton->setText(QCoreApplication::translate("LoginDialog", "\346\262\241\346\234\211\350\264\246\345\217\267\357\274\237\347\253\213\345\215\263\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H

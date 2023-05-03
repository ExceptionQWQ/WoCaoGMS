/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actExitLogin;
    QAction *actCreateGoods;
    QAction *actDeleteGoods;
    QAction *actGoodsIn;
    QAction *actGoodsOut;
    QAction *actDeleteSelected;
    QAction *actAbout;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actExitLogin = new QAction(MainWindow);
        actExitLogin->setObjectName("actExitLogin");
        actCreateGoods = new QAction(MainWindow);
        actCreateGoods->setObjectName("actCreateGoods");
        actDeleteGoods = new QAction(MainWindow);
        actDeleteGoods->setObjectName("actDeleteGoods");
        actGoodsIn = new QAction(MainWindow);
        actGoodsIn->setObjectName("actGoodsIn");
        actGoodsOut = new QAction(MainWindow);
        actGoodsOut->setObjectName("actGoodsOut");
        actDeleteSelected = new QAction(MainWindow);
        actDeleteSelected->setObjectName("actDeleteSelected");
        actAbout = new QAction(MainWindow);
        actAbout->setObjectName("actAbout");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName("menu_3");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(actExitLogin);
        menu_2->addAction(actCreateGoods);
        menu_2->addAction(actDeleteGoods);
        menu_2->addAction(actGoodsIn);
        menu_2->addAction(actGoodsOut);
        menu_2->addSeparator();
        menu_2->addAction(actDeleteSelected);
        menu_3->addAction(actAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "WoCao\350\277\233\351\224\200\345\255\230\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        actExitLogin->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        actExitLogin->setToolTip(QCoreApplication::translate("MainWindow", "\344\270\213\346\254\241\345\217\226\346\266\210\350\207\252\345\212\250\347\231\273\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actExitLogin->setShortcut(QCoreApplication::translate("MainWindow", "Meta+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actCreateGoods->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236", nullptr));
#if QT_CONFIG(tooltip)
        actCreateGoods->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236\345\225\206\345\223\201", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actCreateGoods->setShortcut(QCoreApplication::translate("MainWindow", "Meta+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actDeleteGoods->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
#if QT_CONFIG(tooltip)
        actDeleteGoods->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\225\206\345\223\201", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actDeleteGoods->setShortcut(QCoreApplication::translate("MainWindow", "Meta+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actGoodsIn->setText(QCoreApplication::translate("MainWindow", "\350\277\233\350\264\247", nullptr));
#if QT_CONFIG(tooltip)
        actGoodsIn->setToolTip(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\350\277\233\350\264\247", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actGoodsIn->setShortcut(QCoreApplication::translate("MainWindow", "Meta+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actGoodsOut->setText(QCoreApplication::translate("MainWindow", "\351\224\200\345\224\256", nullptr));
#if QT_CONFIG(tooltip)
        actGoodsOut->setToolTip(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\351\224\200\345\224\256", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actGoodsOut->setShortcut(QCoreApplication::translate("MainWindow", "Meta+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actDeleteSelected->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\346\211\200\351\200\211\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        actDeleteSelected->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\346\211\200\351\200\211\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actDeleteSelected->setShortcut(QCoreApplication::translate("MainWindow", "Shift+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actAbout->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\345\212\237\350\203\275", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

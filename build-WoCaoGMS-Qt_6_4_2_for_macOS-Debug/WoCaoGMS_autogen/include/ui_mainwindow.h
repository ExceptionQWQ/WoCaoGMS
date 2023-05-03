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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
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
    QAction *actAbout;
    QAction *actFindGoods;
    QAction *action_2;
    QAction *actPutIn;
    QAction *actPutOut;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QMenu *menu_6;
    QStatusBar *statusbar;
    QToolBar *toolBar;

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
        actAbout = new QAction(MainWindow);
        actAbout->setObjectName("actAbout");
        actFindGoods = new QAction(MainWindow);
        actFindGoods->setObjectName("actFindGoods");
        action_2 = new QAction(MainWindow);
        action_2->setObjectName("action_2");
        actPutIn = new QAction(MainWindow);
        actPutIn->setObjectName("actPutIn");
        actPutOut = new QAction(MainWindow);
        actPutOut->setObjectName("actPutOut");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

        horizontalLayout->addWidget(tableView);

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
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName("menu_4");
        menu_5 = new QMenu(menubar);
        menu_5->setObjectName("menu_5");
        menu_6 = new QMenu(menubar);
        menu_6->setObjectName("menu_6");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_4->menuAction());
        menubar->addAction(menu_5->menuAction());
        menubar->addAction(menu_6->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(actExitLogin);
        menu_2->addAction(actCreateGoods);
        menu_2->addAction(actDeleteGoods);
        menu_2->addAction(actGoodsIn);
        menu_2->addAction(actGoodsOut);
        menu_2->addSeparator();
        menu_3->addAction(actAbout);
        menu_4->addAction(actFindGoods);
        menu_5->addAction(action_2);
        menu_6->addAction(actPutIn);
        menu_6->addAction(actPutOut);
        toolBar->addAction(actCreateGoods);
        toolBar->addAction(actDeleteGoods);
        toolBar->addAction(actGoodsIn);
        toolBar->addAction(actGoodsOut);
        toolBar->addSeparator();
        toolBar->addAction(actPutIn);
        toolBar->addAction(actPutOut);
        toolBar->addSeparator();
        toolBar->addAction(action_2);

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
#if QT_CONFIG(statustip)
        actExitLogin->setStatusTip(QCoreApplication::translate("MainWindow", "\344\270\213\346\254\241\345\217\226\346\266\210\350\207\252\345\212\250\347\231\273\345\275\225", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actExitLogin->setShortcut(QCoreApplication::translate("MainWindow", "Meta+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actCreateGoods->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236\345\225\206\345\223\201", nullptr));
#if QT_CONFIG(tooltip)
        actCreateGoods->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236\345\225\206\345\223\201", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actCreateGoods->setStatusTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236\345\225\206\345\223\201", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actCreateGoods->setShortcut(QCoreApplication::translate("MainWindow", "Meta+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actDeleteGoods->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\225\206\345\223\201", nullptr));
#if QT_CONFIG(tooltip)
        actDeleteGoods->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\225\206\345\223\201", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actDeleteGoods->setStatusTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\225\206\345\223\201", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actDeleteGoods->setShortcut(QCoreApplication::translate("MainWindow", "Meta+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actGoodsIn->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\350\277\233\350\264\247", nullptr));
#if QT_CONFIG(tooltip)
        actGoodsIn->setToolTip(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\350\277\233\350\264\247", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actGoodsIn->setStatusTip(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\350\277\233\350\264\247", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actGoodsIn->setShortcut(QCoreApplication::translate("MainWindow", "Meta+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actGoodsOut->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\351\224\200\345\224\256", nullptr));
#if QT_CONFIG(tooltip)
        actGoodsOut->setToolTip(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\351\224\200\345\224\256", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actGoodsOut->setStatusTip(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\351\224\200\345\224\256", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actGoodsOut->setShortcut(QCoreApplication::translate("MainWindow", "Meta+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actAbout->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
#if QT_CONFIG(statustip)
        actAbout->setStatusTip(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
#endif // QT_CONFIG(statustip)
        actFindGoods->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276\345\225\206\345\223\201", nullptr));
#if QT_CONFIG(tooltip)
        actFindGoods->setToolTip(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276\345\225\206\345\223\201", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actFindGoods->setStatusTip(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276\345\225\206\345\223\201", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actFindGoods->setShortcut(QCoreApplication::translate("MainWindow", "Meta+F", nullptr));
#endif // QT_CONFIG(shortcut)
        action_2->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\223\215\344\275\234\350\256\260\345\275\225", nullptr));
#if QT_CONFIG(statustip)
        action_2->setStatusTip(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\223\215\344\275\234\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(statustip)
        actPutIn->setText(QCoreApplication::translate("MainWindow", "\345\205\245\345\272\223\357\274\210\347\233\230\347\202\271\357\274\211", nullptr));
#if QT_CONFIG(tooltip)
        actPutIn->setToolTip(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\345\205\245\345\272\223", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actPutIn->setStatusTip(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\345\205\245\345\272\223", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actPutIn->setShortcut(QCoreApplication::translate("MainWindow", "Meta+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actPutOut->setText(QCoreApplication::translate("MainWindow", "\345\207\272\345\272\223\357\274\210\347\233\230\347\202\271\357\274\211", nullptr));
#if QT_CONFIG(tooltip)
        actPutOut->setToolTip(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\345\207\272\345\272\223", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actPutOut->setStatusTip(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\345\207\272\345\272\223", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actPutOut->setShortcut(QCoreApplication::translate("MainWindow", "Meta+W", nullptr));
#endif // QT_CONFIG(shortcut)
        menu->setTitle(QCoreApplication::translate("MainWindow", "\345\212\237\350\203\275", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276", nullptr));
        menu_5->setTitle(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272", nullptr));
        menu_6->setTitle(QCoreApplication::translate("MainWindow", "\347\233\230\347\202\271", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

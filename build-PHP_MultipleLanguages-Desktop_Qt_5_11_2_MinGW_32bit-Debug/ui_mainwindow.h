/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionas;
    QAction *actionNew_N;
    QAction *actionOpen_O;
    QAction *actionSave_S;
    QAction *actionSave_As_A;
    QAction *actionCancel_U;
    QAction *actionCut;
    QAction *actionCopy_C;
    QAction *actionPaste_P;
    QAction *actionDelete_L;
    QAction *actionWrap_W;
    QAction *actionFont_F;
    QAction *actionStatus_Bar_S;
    QAction *actionDocument;
    QAction *actionAbout_PHP;
    QAction *actionChinese_Simplify;
    QAction *actionChinese_Traditional;
    QAction *actionEnglish;
    QAction *actionJapanese;
    QAction *actionFrench;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QMenu *menuLanguage;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionas = new QAction(MainWindow);
        actionas->setObjectName(QStringLiteral("actionas"));
        actionNew_N = new QAction(MainWindow);
        actionNew_N->setObjectName(QStringLiteral("actionNew_N"));
        actionOpen_O = new QAction(MainWindow);
        actionOpen_O->setObjectName(QStringLiteral("actionOpen_O"));
        actionSave_S = new QAction(MainWindow);
        actionSave_S->setObjectName(QStringLiteral("actionSave_S"));
        actionSave_As_A = new QAction(MainWindow);
        actionSave_As_A->setObjectName(QStringLiteral("actionSave_As_A"));
        actionCancel_U = new QAction(MainWindow);
        actionCancel_U->setObjectName(QStringLiteral("actionCancel_U"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionCopy_C = new QAction(MainWindow);
        actionCopy_C->setObjectName(QStringLiteral("actionCopy_C"));
        actionPaste_P = new QAction(MainWindow);
        actionPaste_P->setObjectName(QStringLiteral("actionPaste_P"));
        actionDelete_L = new QAction(MainWindow);
        actionDelete_L->setObjectName(QStringLiteral("actionDelete_L"));
        actionWrap_W = new QAction(MainWindow);
        actionWrap_W->setObjectName(QStringLiteral("actionWrap_W"));
        actionFont_F = new QAction(MainWindow);
        actionFont_F->setObjectName(QStringLiteral("actionFont_F"));
        actionStatus_Bar_S = new QAction(MainWindow);
        actionStatus_Bar_S->setObjectName(QStringLiteral("actionStatus_Bar_S"));
        actionDocument = new QAction(MainWindow);
        actionDocument->setObjectName(QStringLiteral("actionDocument"));
        actionAbout_PHP = new QAction(MainWindow);
        actionAbout_PHP->setObjectName(QStringLiteral("actionAbout_PHP"));
        actionChinese_Simplify = new QAction(MainWindow);
        actionChinese_Simplify->setObjectName(QStringLiteral("actionChinese_Simplify"));
        actionChinese_Traditional = new QAction(MainWindow);
        actionChinese_Traditional->setObjectName(QStringLiteral("actionChinese_Traditional"));
        actionEnglish = new QAction(MainWindow);
        actionEnglish->setObjectName(QStringLiteral("actionEnglish"));
        actionJapanese = new QAction(MainWindow);
        actionJapanese->setObjectName(QStringLiteral("actionJapanese"));
        actionFrench = new QAction(MainWindow);
        actionFrench->setObjectName(QStringLiteral("actionFrench"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QStringLiteral("menu_5"));
        menuLanguage = new QMenu(menu_5);
        menuLanguage->setObjectName(QStringLiteral("menuLanguage"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menu->addAction(actionNew_N);
        menu->addAction(actionOpen_O);
        menu->addAction(actionSave_S);
        menu->addAction(actionSave_As_A);
        menu_2->addAction(actionCancel_U);
        menu_2->addSeparator();
        menu_2->addAction(actionCut);
        menu_2->addAction(actionCopy_C);
        menu_2->addAction(actionPaste_P);
        menu_2->addAction(actionDelete_L);
        menu_3->addAction(actionWrap_W);
        menu_3->addAction(actionFont_F);
        menu_4->addAction(actionStatus_Bar_S);
        menu_5->addAction(actionDocument);
        menu_5->addSeparator();
        menu_5->addAction(actionAbout_PHP);
        menu_5->addSeparator();
        menu_5->addAction(menuLanguage->menuAction());
        menuLanguage->addAction(actionChinese_Simplify);
        menuLanguage->addAction(actionChinese_Traditional);
        menuLanguage->addAction(actionEnglish);
        menuLanguage->addAction(actionJapanese);
        menuLanguage->addAction(actionFrench);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionas->setText(QApplication::translate("MainWindow", "as", nullptr));
        actionNew_N->setText(QApplication::translate("MainWindow", "New", nullptr));
        actionOpen_O->setText(QApplication::translate("MainWindow", "Open", nullptr));
        actionSave_S->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionSave_As_A->setText(QApplication::translate("MainWindow", "Save As", nullptr));
        actionCancel_U->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", nullptr));
        actionCopy_C->setText(QApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste_P->setText(QApplication::translate("MainWindow", "Paste", nullptr));
        actionDelete_L->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        actionWrap_W->setText(QApplication::translate("MainWindow", "Wrap", nullptr));
        actionFont_F->setText(QApplication::translate("MainWindow", "Font", nullptr));
        actionStatus_Bar_S->setText(QApplication::translate("MainWindow", "Status Bar", nullptr));
        actionDocument->setText(QApplication::translate("MainWindow", "Document", nullptr));
        actionAbout_PHP->setText(QApplication::translate("MainWindow", "About PHP", nullptr));
        actionChinese_Simplify->setText(QApplication::translate("MainWindow", "Chinese(Simplify)", nullptr));
        actionChinese_Traditional->setText(QApplication::translate("MainWindow", "Chinese(Traditional)", nullptr));
        actionEnglish->setText(QApplication::translate("MainWindow", "English", nullptr));
        actionJapanese->setText(QApplication::translate("MainWindow", "Japanese", nullptr));
        actionFrench->setText(QApplication::translate("MainWindow", "French", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menu_3->setTitle(QApplication::translate("MainWindow", "Format", nullptr));
        menu_4->setTitle(QApplication::translate("MainWindow", "View", nullptr));
        menu_5->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        menuLanguage->setTitle(QApplication::translate("MainWindow", "Language", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

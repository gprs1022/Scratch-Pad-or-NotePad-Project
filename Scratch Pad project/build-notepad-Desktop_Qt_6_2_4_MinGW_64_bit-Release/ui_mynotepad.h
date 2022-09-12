/********************************************************************************
** Form generated from reading UI file 'mynotepad.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYNOTEPAD_H
#define UI_MYNOTEPAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyNotepad
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionFont;
    QAction *actionItalic;
    QAction *actionBold;
    QAction *actionUnderline;
    QAction *actionAbout;
    QAction *actionColor;
    QAction *actioncolor;
    QAction *actionTextBackgroundColor;
    QAction *actionBackgroundColor;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menucolor;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MyNotepad)
    {
        if (MyNotepad->objectName().isEmpty())
            MyNotepad->setObjectName(QString::fromUtf8("MyNotepad"));
        MyNotepad->resize(626, 441);
        MyNotepad->setMinimumSize(QSize(0, 0));
        MyNotepad->setSizeIncrement(QSize(800, 501));
        MyNotepad->setBaseSize(QSize(800, 500));
        MyNotepad->setCursor(QCursor(Qt::PointingHandCursor));
        actionNew = new QAction(MyNotepad);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionNew->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MyNotepad);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionOpen->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MyNotepad);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_as = new QAction(MyNotepad);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionSave_as->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/images/save_as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon3);
        actionPrint = new QAction(MyNotepad);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        actionPrint->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/images/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon4);
        actionExit = new QAction(MyNotepad);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExit->setCheckable(true);
        QIcon icon5;
        QString iconThemeName = QString::fromUtf8("exit.png");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon5 = QIcon::fromTheme(iconThemeName);
        } else {
            icon5.addFile(QString::fromUtf8(":/new/prefix1/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionExit->setIcon(icon5);
        actionCopy = new QAction(MyNotepad);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionCopy->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon6);
        actionCut = new QAction(MyNotepad);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCut->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon7);
        actionPaste = new QAction(MyNotepad);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionPaste->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/prefix1/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon8);
        actionUndo = new QAction(MyNotepad);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionUndo->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/prefix1/images/edit_undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon9);
        actionRedo = new QAction(MyNotepad);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/prefix1/images/edit_redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon10);
        actionFont = new QAction(MyNotepad);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/prefix1/images/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon11);
        actionItalic = new QAction(MyNotepad);
        actionItalic->setObjectName(QString::fromUtf8("actionItalic"));
        actionItalic->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/new/prefix1/images/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon12);
        actionBold = new QAction(MyNotepad);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        actionBold->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/new/prefix1/images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon13);
        actionUnderline = new QAction(MyNotepad);
        actionUnderline->setObjectName(QString::fromUtf8("actionUnderline"));
        actionUnderline->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/new/prefix1/images/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon14);
        actionAbout = new QAction(MyNotepad);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/new/prefix1/images/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon15);
        actionColor = new QAction(MyNotepad);
        actionColor->setObjectName(QString::fromUtf8("actionColor"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8("../../Downloads/textcolor.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColor->setIcon(icon16);
        actioncolor = new QAction(MyNotepad);
        actioncolor->setObjectName(QString::fromUtf8("actioncolor"));
        actioncolor->setIcon(icon16);
        actionTextBackgroundColor = new QAction(MyNotepad);
        actionTextBackgroundColor->setObjectName(QString::fromUtf8("actionTextBackgroundColor"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/new/prefix1/images/color__1_-removebg-preview.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTextBackgroundColor->setIcon(icon17);
        actionBackgroundColor = new QAction(MyNotepad);
        actionBackgroundColor->setObjectName(QString::fromUtf8("actionBackgroundColor"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8("images/background.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBackgroundColor->setIcon(icon18);
        centralWidget = new QWidget(MyNotepad);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(true);
        textEdit->setSizeIncrement(QSize(100, 50));
        textEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));

        horizontalLayout->addWidget(textEdit);

        MyNotepad->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyNotepad);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 626, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menucolor = new QMenu(menuBar);
        menucolor->setObjectName(QString::fromUtf8("menucolor"));
        MyNotepad->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyNotepad);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MyNotepad->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menucolor->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionFont);
        menuEdit->addAction(actionColor);
        menucolor->addAction(actioncolor);
        menucolor->addAction(actionTextBackgroundColor);
        menucolor->addAction(actionBackgroundColor);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionSave_as);
        mainToolBar->addAction(actionPrint);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionCut);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addAction(actionUndo);
        mainToolBar->addAction(actionRedo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFont);
        mainToolBar->addAction(actionBold);
        mainToolBar->addAction(actionItalic);
        mainToolBar->addAction(actionUnderline);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionColor);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAbout);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionExit);
        mainToolBar->addSeparator();

        retranslateUi(MyNotepad);

        QMetaObject::connectSlotsByName(MyNotepad);
    } // setupUi

    void retranslateUi(QMainWindow *MyNotepad)
    {
        MyNotepad->setWindowTitle(QCoreApplication::translate("MyNotepad", "Scratch Pad", nullptr));
        actionNew->setText(QCoreApplication::translate("MyNotepad", "New", nullptr));
#if QT_CONFIG(tooltip)
        actionNew->setToolTip(QCoreApplication::translate("MyNotepad", "New text document", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MyNotepad", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MyNotepad", "Open", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("MyNotepad", "Open file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MyNotepad", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MyNotepad", "Save", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("MyNotepad", "Save file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MyNotepad", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_as->setText(QCoreApplication::translate("MyNotepad", "Save as", nullptr));
#if QT_CONFIG(tooltip)
        actionSave_as->setToolTip(QCoreApplication::translate("MyNotepad", "Save file as", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSave_as->setShortcut(QCoreApplication::translate("MyNotepad", "Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrint->setText(QCoreApplication::translate("MyNotepad", "Print", nullptr));
#if QT_CONFIG(tooltip)
        actionPrint->setToolTip(QCoreApplication::translate("MyNotepad", "Print file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPrint->setShortcut(QCoreApplication::translate("MyNotepad", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MyNotepad", "Exit", nullptr));
#if QT_CONFIG(tooltip)
        actionExit->setToolTip(QCoreApplication::translate("MyNotepad", "Exit notepad", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCopy->setText(QCoreApplication::translate("MyNotepad", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MyNotepad", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("MyNotepad", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("MyNotepad", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MyNotepad", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("MyNotepad", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("MyNotepad", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MyNotepad", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MyNotepad", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("MyNotepad", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFont->setText(QCoreApplication::translate("MyNotepad", "Font", nullptr));
#if QT_CONFIG(shortcut)
        actionFont->setShortcut(QCoreApplication::translate("MyNotepad", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionItalic->setText(QCoreApplication::translate("MyNotepad", "Italic", nullptr));
#if QT_CONFIG(tooltip)
        actionItalic->setToolTip(QCoreApplication::translate("MyNotepad", "Italic font", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionItalic->setShortcut(QCoreApplication::translate("MyNotepad", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBold->setText(QCoreApplication::translate("MyNotepad", "actionBold", nullptr));
#if QT_CONFIG(tooltip)
        actionBold->setToolTip(QCoreApplication::translate("MyNotepad", "Bold", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionBold->setShortcut(QCoreApplication::translate("MyNotepad", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUnderline->setText(QCoreApplication::translate("MyNotepad", "Underline", nullptr));
#if QT_CONFIG(tooltip)
        actionUnderline->setToolTip(QCoreApplication::translate("MyNotepad", "Underline", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionUnderline->setShortcut(QCoreApplication::translate("MyNotepad", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MyNotepad", "About", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout->setToolTip(QCoreApplication::translate("MyNotepad", "About Notepad", nullptr));
#endif // QT_CONFIG(tooltip)
        actionColor->setText(QCoreApplication::translate("MyNotepad", "Color", nullptr));
        actioncolor->setText(QCoreApplication::translate("MyNotepad", "color", nullptr));
        actionTextBackgroundColor->setText(QCoreApplication::translate("MyNotepad", "TextBackgroundColor", nullptr));
        actionBackgroundColor->setText(QCoreApplication::translate("MyNotepad", "BackgroundColor", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MyNotepad", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MyNotepad", "Edit", nullptr));
        menucolor->setTitle(QCoreApplication::translate("MyNotepad", "color", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyNotepad: public Ui_MyNotepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYNOTEPAD_H

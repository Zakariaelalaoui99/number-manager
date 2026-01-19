/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionadd;
    QAction *actionedit;
    QAction *actiondelet;
    QAction *actionExit;
    QAction *actionSpecial_Function;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *addButton;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *spFunctionButton;
    QPushButton *clearButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *ExitButton;
    QMenuBar *menubar;
    QMenu *menunumber;
    QMenu *menuNumber;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(700, 468);
        actionadd = new QAction(MainWindow);
        actionadd->setObjectName("actionadd");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build/add.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionadd->setIcon(icon);
        actionedit = new QAction(MainWindow);
        actionedit->setObjectName("actionedit");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/build/pencil.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionedit->setIcon(icon1);
        actiondelet = new QAction(MainWindow);
        actiondelet->setObjectName("actiondelet");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/build/bin.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actiondelet->setIcon(icon2);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionSpecial_Function = new QAction(MainWindow);
        actionSpecial_Function->setObjectName("actionSpecial_Function");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/gears.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSpecial_Function->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        listWidget = new QListWidget(frame);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        comboBox = new QComboBox(frame);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);

        label = new QLabel(frame);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        addButton = new QPushButton(frame);
        addButton->setObjectName("addButton");

        horizontalLayout->addWidget(addButton);

        editButton = new QPushButton(frame);
        editButton->setObjectName("editButton");

        horizontalLayout->addWidget(editButton);

        deleteButton = new QPushButton(frame);
        deleteButton->setObjectName("deleteButton");

        horizontalLayout->addWidget(deleteButton);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(frame);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        spFunctionButton = new QPushButton(centralwidget);
        spFunctionButton->setObjectName("spFunctionButton");

        horizontalLayout_2->addWidget(spFunctionButton);

        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName("clearButton");

        horizontalLayout_2->addWidget(clearButton);

        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        ExitButton = new QPushButton(centralwidget);
        ExitButton->setObjectName("ExitButton");

        horizontalLayout_2->addWidget(ExitButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 700, 18));
        menunumber = new QMenu(menubar);
        menunumber->setObjectName("menunumber");
        menuNumber = new QMenu(menubar);
        menuNumber->setObjectName("menuNumber");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menuNumber->menuAction());
        menubar->addAction(menunumber->menuAction());
        menunumber->addAction(actionadd);
        menunumber->addAction(actionedit);
        menunumber->addAction(actiondelet);
        menunumber->addAction(actionSpecial_Function);
        menuNumber->addAction(actionExit);
        toolBar->addAction(actionadd);
        toolBar->addAction(actionedit);
        toolBar->addAction(actiondelet);
        toolBar->addSeparator();
        toolBar->addAction(actionSpecial_Function);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(ExitButton, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(addButton, &QPushButton::clicked, actionadd, qOverload<>(&QAction::trigger));
        QObject::connect(editButton, &QPushButton::clicked, actionedit, qOverload<>(&QAction::trigger));
        QObject::connect(deleteButton, &QPushButton::clicked, actiondelet, qOverload<>(&QAction::trigger));
        QObject::connect(spFunctionButton, &QPushButton::clicked, actionSpecial_Function, qOverload<>(&QAction::trigger));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Number Manager", nullptr));
        actionadd->setText(QCoreApplication::translate("MainWindow", "Add Number", nullptr));
        actionedit->setText(QCoreApplication::translate("MainWindow", "Edit Number", nullptr));
        actiondelet->setText(QCoreApplication::translate("MainWindow", "Delete Number", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionSpecial_Function->setText(QCoreApplication::translate("MainWindow", "Special Function", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Sum", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Multiply", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Average", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Add...", nullptr));
        editButton->setText(QCoreApplication::translate("MainWindow", "Edit...", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        spFunctionButton->setText(QCoreApplication::translate("MainWindow", "Special function...", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "Clear...", nullptr));
        ExitButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        menunumber->setTitle(QCoreApplication::translate("MainWindow", "number", nullptr));
        menuNumber->setTitle(QCoreApplication::translate("MainWindow", "List", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

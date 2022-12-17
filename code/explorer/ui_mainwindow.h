/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QTreeView *treeView;
    QVBoxLayout *verticalLayout_2;
    QLabel *FileName;
    QLabel *Size;
    QLabel *resolution;
    QLabel *colordepth;
    QLabel *zip;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(878, 612);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        treeView = new QTreeView(centralwidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        verticalLayout_3->addWidget(treeView);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        FileName = new QLabel(centralwidget);
        FileName->setObjectName(QString::fromUtf8("FileName"));

        verticalLayout_2->addWidget(FileName);

        Size = new QLabel(centralwidget);
        Size->setObjectName(QString::fromUtf8("Size"));

        verticalLayout_2->addWidget(Size);

        resolution = new QLabel(centralwidget);
        resolution->setObjectName(QString::fromUtf8("resolution"));

        verticalLayout_2->addWidget(resolution);

        colordepth = new QLabel(centralwidget);
        colordepth->setObjectName(QString::fromUtf8("colordepth"));

        verticalLayout_2->addWidget(colordepth);

        zip = new QLabel(centralwidget);
        zip->setObjectName(QString::fromUtf8("zip"));

        verticalLayout_2->addWidget(zip);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 2, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 878, 25));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Choose your file:", nullptr));
        FileName->setText(QCoreApplication::translate("MainWindow", "File Name:                                       ", nullptr));
        Size->setText(QCoreApplication::translate("MainWindow", "Size(pixels):", nullptr));
        resolution->setText(QCoreApplication::translate("MainWindow", "Resolution:", nullptr));
        colordepth->setText(QCoreApplication::translate("MainWindow", "Color depth:", nullptr));
        zip->setText(QCoreApplication::translate("MainWindow", "Zip:                                                  ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

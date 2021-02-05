/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_4;
    QDoubleSpinBox *posxof;
    QDoubleSpinBox *posyof;
    QDoubleSpinBox *posxdef;
    QDoubleSpinBox *posydef;
    QPushButton *simular;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1195, 564);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(9, 11, 1000, 500));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(1030, 20, 99, 16));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1030, 65, 99, 16));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1030, 250, 86, 23));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(1030, 140, 111, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(1030, 186, 111, 16));
        posxof = new QDoubleSpinBox(centralwidget);
        posxof->setObjectName(QStringLiteral("posxof"));
        posxof->setGeometry(QRect(1030, 40, 131, 22));
        posxof->setMaximum(1000);
        posyof = new QDoubleSpinBox(centralwidget);
        posyof->setObjectName(QStringLiteral("posyof"));
        posyof->setGeometry(QRect(1030, 90, 131, 22));
        posyof->setMaximum(1000);
        posxdef = new QDoubleSpinBox(centralwidget);
        posxdef->setObjectName(QStringLiteral("posxdef"));
        posxdef->setGeometry(QRect(1030, 160, 131, 22));
        posxdef->setMaximum(1000);
        posydef = new QDoubleSpinBox(centralwidget);
        posydef->setObjectName(QStringLiteral("posydef"));
        posydef->setGeometry(QRect(1030, 210, 131, 22));
        posydef->setMaximum(1000);
        simular = new QPushButton(centralwidget);
        simular->setObjectName(QStringLiteral("simular"));
        simular->setEnabled(false);
        simular->setGeometry(QRect(1030, 290, 101, 23));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1195, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "ca\303\261on ofensivo posx", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "ca\303\261on ofensivo posy", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "graficar", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "ca\303\261on defensivo posx", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "ca\303\261on defensivo posy", Q_NULLPTR));
        simular->setText(QApplication::translate("MainWindow", "iniciar simulacion", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *exitButton;
    QPushButton *hideOptionsButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *fps;
    QLabel *label_2;
    QSpinBox *num2;
    QLabel *label_3;
    QSpinBox *timesecc;
    QLabel *label_4;
    QDoubleSpinBox *v0;
    QLabel *label_5;
    QCheckBox *haveTail;
    QLabel *label_6;
    QSpinBox *timeTail;
    QLabel *label_7;
    QSpinBox *sizeTail;
    QLabel *label_8;
    QSpinBox *sizeSalut;
    QLabel *label_9;
    QComboBox *colorBox;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QLCDNumber *lcdNumber;
    QLabel *label_11;
    QLCDNumber *paterns;
    QLabel *label_12;
    QLCDNumber *numClicks;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1209, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(30, 20, 71, 71));
        QIcon icon;
        icon.addFile(QString::fromUtf8("cross.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitButton->setIcon(icon);
        exitButton->setIconSize(QSize(72, 72));
        hideOptionsButton = new QPushButton(centralwidget);
        hideOptionsButton->setObjectName(QString::fromUtf8("hideOptionsButton"));
        hideOptionsButton->setGeometry(QRect(190, 20, 71, 71));
        hideOptionsButton->setSizeIncrement(QSize(72, 72));
        hideOptionsButton->setBaseSize(QSize(72, 72));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("gear.png"), QSize(), QIcon::Normal, QIcon::Off);
        hideOptionsButton->setIcon(icon1);
        hideOptionsButton->setIconSize(QSize(72, 72));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(32, 140, 229, 227));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        fps = new QSpinBox(layoutWidget);
        fps->setObjectName(QString::fromUtf8("fps"));
        fps->setValue(60);

        gridLayout->addWidget(fps, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        num2 = new QSpinBox(layoutWidget);
        num2->setObjectName(QString::fromUtf8("num2"));
        num2->setMaximum(999999);
        num2->setValue(25);

        gridLayout->addWidget(num2, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        timesecc = new QSpinBox(layoutWidget);
        timesecc->setObjectName(QString::fromUtf8("timesecc"));
        timesecc->setMaximum(99999);
        timesecc->setValue(5);

        gridLayout->addWidget(timesecc, 2, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        v0 = new QDoubleSpinBox(layoutWidget);
        v0->setObjectName(QString::fromUtf8("v0"));
        v0->setMaximum(99990000.000000000000000);
        v0->setValue(50.000000000000000);

        gridLayout->addWidget(v0, 3, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        haveTail = new QCheckBox(layoutWidget);
        haveTail->setObjectName(QString::fromUtf8("haveTail"));

        gridLayout->addWidget(haveTail, 4, 1, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        timeTail = new QSpinBox(layoutWidget);
        timeTail->setObjectName(QString::fromUtf8("timeTail"));
        timeTail->setMaximum(9999999);
        timeTail->setValue(2);

        gridLayout->addWidget(timeTail, 5, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        sizeTail = new QSpinBox(layoutWidget);
        sizeTail->setObjectName(QString::fromUtf8("sizeTail"));
        sizeTail->setMaximum(9999999);
        sizeTail->setValue(1);

        gridLayout->addWidget(sizeTail, 6, 1, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        sizeSalut = new QSpinBox(layoutWidget);
        sizeSalut->setObjectName(QString::fromUtf8("sizeSalut"));
        sizeSalut->setMaximum(99999);
        sizeSalut->setValue(3);

        gridLayout->addWidget(sizeSalut, 7, 1, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        colorBox = new QComboBox(layoutWidget);
        colorBox->addItem(QString());
        colorBox->addItem(QString());
        colorBox->addItem(QString());
        colorBox->addItem(QString());
        colorBox->addItem(QString());
        colorBox->addItem(QString());
        colorBox->setObjectName(QString::fromUtf8("colorBox"));

        gridLayout->addWidget(colorBox, 8, 1, 1, 1);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(281, 10, 333, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout->addWidget(label_10);

        lcdNumber = new QLCDNumber(layoutWidget1);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        horizontalLayout->addWidget(lcdNumber);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout->addWidget(label_11);

        paterns = new QLCDNumber(layoutWidget1);
        paterns->setObjectName(QString::fromUtf8("paterns"));

        horizontalLayout->addWidget(paterns);

        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout->addWidget(label_12);

        numClicks = new QLCDNumber(layoutWidget1);
        numClicks->setObjectName(QString::fromUtf8("numClicks"));

        horizontalLayout->addWidget(numClicks);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1209, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        colorBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        exitButton->setText(QString());
        hideOptionsButton->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "fps", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\275\320\260\321\201\321\213\321\211\320\265\320\275\320\276\321\201\321\202\321\214", nullptr));
        num2->setSpecialValueText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\262\321\200\320\265\320\274\321\217 \321\201\320\262\320\265\321\207\320\265\320\275\320\270\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\270\320\274\320\277\321\203\320\273\321\214\321\201", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\321\205\320\262\320\276\321\201\321\202", nullptr));
        haveTail->setText(QCoreApplication::translate("MainWindow", "\321\205\320\262\320\276\321\201\321\202", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\262\321\200\320\265\320\274\321\217 \321\201\320\262\320\265\321\207\320\265\320\275\320\270\321\217 \321\205\320\262\320\276\321\201\321\202\320\260", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\321\202\320\276\320\273\321\211\320\270\320\275\320\260 \321\205\320\262\320\276\321\201\321\202\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267\320\274\320\265\321\200 \321\201\320\260\320\273\321\216\321\202\320\260", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\321\206\320\262\320\265\321\202", nullptr));
        colorBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\261\320\265\320\273\321\213\320\271", "wit"));
        colorBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\272\321\200\320\260\321\201\320\275\321\213\320\271", nullptr));
        colorBox->setItemText(2, QCoreApplication::translate("MainWindow", "\320\267\320\265\320\273\321\221\320\275\321\213\320\271", nullptr));
        colorBox->setItemText(3, QCoreApplication::translate("MainWindow", "\321\201\320\270\320\275\320\270\320\271", nullptr));
        colorBox->setItemText(4, QCoreApplication::translate("MainWindow", "\320\266\321\221\320\273\321\202\321\213\320\271", nullptr));
        colorBox->setItemText(5, QCoreApplication::translate("MainWindow", "\320\263\320\276\320\273\321\203\320\261\320\276\320\271", nullptr));

        colorBox->setCurrentText(QCoreApplication::translate("MainWindow", "\320\272\321\200\320\260\321\201\320\275\321\213\320\271", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "fps", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\277\320\260\321\202\320\265\321\200\320\275\320\276\320\262", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\267\320\260\320\277\321\203\321\201\320\272\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'robotcontroller.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOTCONTROLLER_H
#define UI_ROBOTCONTROLLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RobotController
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSlider *motorControlSlider_1;
    QSlider *motorControlSlider_2;
    QSlider *motorControlSlider_3;
    QSlider *motorControlSlider_4;
    QSlider *motorControlSlider_5;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLCDNumber *motorLCD_1;
    QLCDNumber *motorLCD_2;
    QLCDNumber *motorLCD_3;
    QLCDNumber *motorLCD_4;
    QLCDNumber *motorLCD_5;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *motorLabel;
    QLabel *motorLabel_2;
    QLabel *motorLabel_3;
    QLabel *motorLabel_4;
    QLabel *motorLabel_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *RobotController)
    {
        if (RobotController->objectName().isEmpty())
            RobotController->setObjectName(QStringLiteral("RobotController"));
        RobotController->resize(695, 580);
        centralWidget = new QWidget(RobotController);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 40, 651, 271));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        motorControlSlider_1 = new QSlider(horizontalLayoutWidget);
        motorControlSlider_1->setObjectName(QStringLiteral("motorControlSlider_1"));
        motorControlSlider_1->setSingleStep(0);
        motorControlSlider_1->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(motorControlSlider_1);

        motorControlSlider_2 = new QSlider(horizontalLayoutWidget);
        motorControlSlider_2->setObjectName(QStringLiteral("motorControlSlider_2"));
        motorControlSlider_2->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(motorControlSlider_2);

        motorControlSlider_3 = new QSlider(horizontalLayoutWidget);
        motorControlSlider_3->setObjectName(QStringLiteral("motorControlSlider_3"));
        motorControlSlider_3->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(motorControlSlider_3);

        motorControlSlider_4 = new QSlider(horizontalLayoutWidget);
        motorControlSlider_4->setObjectName(QStringLiteral("motorControlSlider_4"));
        motorControlSlider_4->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(motorControlSlider_4);

        motorControlSlider_5 = new QSlider(horizontalLayoutWidget);
        motorControlSlider_5->setObjectName(QStringLiteral("motorControlSlider_5"));
        motorControlSlider_5->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(motorControlSlider_5);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 320, 651, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        motorLCD_1 = new QLCDNumber(horizontalLayoutWidget_2);
        motorLCD_1->setObjectName(QStringLiteral("motorLCD_1"));
        motorLCD_1->setSmallDecimalPoint(true);
        motorLCD_1->setDigitCount(4);

        horizontalLayout_2->addWidget(motorLCD_1);

        motorLCD_2 = new QLCDNumber(horizontalLayoutWidget_2);
        motorLCD_2->setObjectName(QStringLiteral("motorLCD_2"));
        motorLCD_2->setSmallDecimalPoint(false);
        motorLCD_2->setDigitCount(4);

        horizontalLayout_2->addWidget(motorLCD_2);

        motorLCD_3 = new QLCDNumber(horizontalLayoutWidget_2);
        motorLCD_3->setObjectName(QStringLiteral("motorLCD_3"));
        motorLCD_3->setSmallDecimalPoint(false);
        motorLCD_3->setDigitCount(4);

        horizontalLayout_2->addWidget(motorLCD_3);

        motorLCD_4 = new QLCDNumber(horizontalLayoutWidget_2);
        motorLCD_4->setObjectName(QStringLiteral("motorLCD_4"));
        motorLCD_4->setSmallDecimalPoint(false);
        motorLCD_4->setDigitCount(4);

        horizontalLayout_2->addWidget(motorLCD_4);

        motorLCD_5 = new QLCDNumber(horizontalLayoutWidget_2);
        motorLCD_5->setObjectName(QStringLiteral("motorLCD_5"));
        motorLCD_5->setSmallDecimalPoint(false);
        motorLCD_5->setDigitCount(4);

        horizontalLayout_2->addWidget(motorLCD_5);

        horizontalLayoutWidget_3 = new QWidget(centralWidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(60, 0, 571, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        motorLabel = new QLabel(horizontalLayoutWidget_3);
        motorLabel->setObjectName(QStringLiteral("motorLabel"));
        motorLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(motorLabel);

        motorLabel_2 = new QLabel(horizontalLayoutWidget_3);
        motorLabel_2->setObjectName(QStringLiteral("motorLabel_2"));
        motorLabel_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(motorLabel_2);

        motorLabel_3 = new QLabel(horizontalLayoutWidget_3);
        motorLabel_3->setObjectName(QStringLiteral("motorLabel_3"));
        motorLabel_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(motorLabel_3);

        motorLabel_4 = new QLabel(horizontalLayoutWidget_3);
        motorLabel_4->setObjectName(QStringLiteral("motorLabel_4"));
        motorLabel_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(motorLabel_4);

        motorLabel_5 = new QLabel(horizontalLayoutWidget_3);
        motorLabel_5->setObjectName(QStringLiteral("motorLabel_5"));
        motorLabel_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(motorLabel_5);

        RobotController->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(RobotController);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 695, 21));
        RobotController->setMenuBar(menuBar);
        mainToolBar = new QToolBar(RobotController);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        RobotController->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(RobotController);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        RobotController->setStatusBar(statusBar);

        retranslateUi(RobotController);

        QMetaObject::connectSlotsByName(RobotController);
    } // setupUi

    void retranslateUi(QMainWindow *RobotController)
    {
        RobotController->setWindowTitle(QApplication::translate("RobotController", "RobotController", 0));
        motorLabel->setText(QApplication::translate("RobotController", "Motor 1", 0));
        motorLabel_2->setText(QApplication::translate("RobotController", "Motor 2", 0));
        motorLabel_3->setText(QApplication::translate("RobotController", "Motor 3", 0));
        motorLabel_4->setText(QApplication::translate("RobotController", "Motor 4", 0));
        motorLabel_5->setText(QApplication::translate("RobotController", "Motor 5", 0));
    } // retranslateUi

};

namespace Ui {
    class RobotController: public Ui_RobotController {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOTCONTROLLER_H

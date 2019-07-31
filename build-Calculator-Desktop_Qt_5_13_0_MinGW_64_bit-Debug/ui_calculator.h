/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *Button4;
    QPushButton *Button9;
    QPushButton *Button7;
    QLineEdit *Display;
    QPushButton *MemAdd;
    QPushButton *Button1;
    QPushButton *Button8;
    QPushButton *Divide;
    QPushButton *Clear;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *Multiply;
    QPushButton *MemClear;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *Add;
    QPushButton *MemGet;
    QPushButton *Button0;
    QPushButton *ChangeSign;
    QPushButton *Subtract;
    QPushButton *Equal;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(400, 300);
        centralWidget = new QWidget(Calculator);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Button4 = new QPushButton(centralWidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        Button4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #c0c0c0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button4, 2, 0, 1, 1);

        Button9 = new QPushButton(centralWidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        Button9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #c0c0c0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button9, 1, 2, 1, 1);

        Button7 = new QPushButton(centralWidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        Button7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #c0c0c0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button7, 1, 0, 1, 1);

        Display = new QLineEdit(centralWidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Gadugi"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #FFD7BE ;\n"
"	border: 1px solid gray;\n"
"	color: #0\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        MemAdd = new QPushButton(centralWidget);
        MemAdd->setObjectName(QString::fromUtf8("MemAdd"));
        MemAdd->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FA843C;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemAdd, 1, 4, 1, 1);

        Button1 = new QPushButton(centralWidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        Button1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #c0c0c0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button1, 3, 0, 1, 1);

        Button8 = new QPushButton(centralWidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        Button8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #c0c0c0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button8, 1, 1, 1, 1);

        Divide = new QPushButton(centralWidget);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        Divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FA843C;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Divide, 1, 3, 1, 1);

        Clear = new QPushButton(centralWidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        Clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FA843C;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Clear, 4, 0, 1, 1);

        Button5 = new QPushButton(centralWidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        Button5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #c0c0c0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button5, 2, 1, 1, 1);

        Button6 = new QPushButton(centralWidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        Button6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #c0c0c0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button6, 2, 2, 1, 1);

        Multiply = new QPushButton(centralWidget);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FA843C;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Multiply, 2, 3, 1, 1);

        MemClear = new QPushButton(centralWidget);
        MemClear->setObjectName(QString::fromUtf8("MemClear"));
        MemClear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FA843C;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemClear, 2, 4, 1, 1);

        Button2 = new QPushButton(centralWidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        Button2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #c0c0c0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button2, 3, 1, 1, 1);

        Button3 = new QPushButton(centralWidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        Button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #c0c0c0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button3, 3, 2, 1, 1);

        Add = new QPushButton(centralWidget);
        Add->setObjectName(QString::fromUtf8("Add"));
        Add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FA843C;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Add, 3, 3, 1, 1);

        MemGet = new QPushButton(centralWidget);
        MemGet->setObjectName(QString::fromUtf8("MemGet"));
        MemGet->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FA843C;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemGet, 3, 4, 1, 1);

        Button0 = new QPushButton(centralWidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        Button0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #c0c0c0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button0, 4, 1, 1, 1);

        ChangeSign = new QPushButton(centralWidget);
        ChangeSign->setObjectName(QString::fromUtf8("ChangeSign"));
        ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FA843C;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ChangeSign, 4, 2, 1, 1);

        Subtract = new QPushButton(centralWidget);
        Subtract->setObjectName(QString::fromUtf8("Subtract"));
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FA843C;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Subtract, 4, 3, 1, 1);

        Equal = new QPushButton(centralWidget);
        Equal->setObjectName(QString::fromUtf8("Equal"));
        Equal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FA843C;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Equal, 4, 4, 1, 1);

        Calculator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Calculator);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        Calculator->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Calculator);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Calculator->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Calculator);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Calculator->setStatusBar(statusBar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Display->setText(QCoreApplication::translate("Calculator", "0.0", nullptr));
        MemAdd->setText(QCoreApplication::translate("Calculator", "M+", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        Clear->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Multiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        MemClear->setText(QCoreApplication::translate("Calculator", "M-", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        MemGet->setText(QCoreApplication::translate("Calculator", "M", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        ChangeSign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Subtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Equal->setText(QCoreApplication::translate("Calculator", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H

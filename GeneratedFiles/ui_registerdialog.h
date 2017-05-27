/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registerDialog
{
public:
    QPushButton *ButtonRegister;
    QPushButton *ButtonBack;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineName;
    QLabel *labelType;
    QLabel *labelSchool;
    QLabel *labelName;
    QComboBox *comboBoxSchool;
    QComboBox *comboBoxType;
    QLabel *labelPw;
    QLineEdit *linePw;
    QLabel *labelID;
    QLineEdit *lineID;

    void setupUi(QDialog *registerDialog)
    {
        if (registerDialog->objectName().isEmpty())
            registerDialog->setObjectName(QStringLiteral("registerDialog"));
        registerDialog->resize(556, 414);
        ButtonRegister = new QPushButton(registerDialog);
        ButtonRegister->setObjectName(QStringLiteral("ButtonRegister"));
        ButtonRegister->setGeometry(QRect(140, 330, 93, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        ButtonRegister->setFont(font);
        ButtonRegister->setFocusPolicy(Qt::NoFocus);
        ButtonBack = new QPushButton(registerDialog);
        ButtonBack->setObjectName(QStringLiteral("ButtonBack"));
        ButtonBack->setGeometry(QRect(310, 330, 93, 41));
        ButtonBack->setFont(font);
        ButtonBack->setFocusPolicy(Qt::NoFocus);
        ButtonBack->setStyleSheet(QStringLiteral(""));
        gridLayoutWidget = new QWidget(registerDialog);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(50, 50, 451, 231));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineName = new QLineEdit(gridLayoutWidget);
        lineName->setObjectName(QStringLiteral("lineName"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        lineName->setFont(font1);

        gridLayout->addWidget(lineName, 0, 1, 1, 1);

        labelType = new QLabel(gridLayoutWidget);
        labelType->setObjectName(QStringLiteral("labelType"));
        labelType->setFont(font1);

        gridLayout->addWidget(labelType, 2, 0, 1, 1);

        labelSchool = new QLabel(gridLayoutWidget);
        labelSchool->setObjectName(QStringLiteral("labelSchool"));
        labelSchool->setFont(font1);

        gridLayout->addWidget(labelSchool, 1, 0, 1, 1);

        labelName = new QLabel(gridLayoutWidget);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setFont(font1);

        gridLayout->addWidget(labelName, 0, 0, 1, 1);

        comboBoxSchool = new QComboBox(gridLayoutWidget);
        comboBoxSchool->setObjectName(QStringLiteral("comboBoxSchool"));
        comboBoxSchool->setFont(font1);

        gridLayout->addWidget(comboBoxSchool, 1, 1, 1, 1);

        comboBoxType = new QComboBox(gridLayoutWidget);
        comboBoxType->setObjectName(QStringLiteral("comboBoxType"));
        comboBoxType->setFont(font1);

        gridLayout->addWidget(comboBoxType, 2, 1, 1, 1);

        labelPw = new QLabel(gridLayoutWidget);
        labelPw->setObjectName(QStringLiteral("labelPw"));
        labelPw->setFont(font1);

        gridLayout->addWidget(labelPw, 4, 0, 1, 1);

        linePw = new QLineEdit(gridLayoutWidget);
        linePw->setObjectName(QStringLiteral("linePw"));
        linePw->setFont(font1);

        gridLayout->addWidget(linePw, 4, 1, 1, 1);

        labelID = new QLabel(gridLayoutWidget);
        labelID->setObjectName(QStringLiteral("labelID"));
        labelID->setFont(font1);

        gridLayout->addWidget(labelID, 3, 0, 1, 1);

        lineID = new QLineEdit(gridLayoutWidget);
        lineID->setObjectName(QStringLiteral("lineID"));
        lineID->setFont(font1);

        gridLayout->addWidget(lineID, 3, 1, 1, 1);


        retranslateUi(registerDialog);

        QMetaObject::connectSlotsByName(registerDialog);
    } // setupUi

    void retranslateUi(QDialog *registerDialog)
    {
        registerDialog->setWindowTitle(QApplication::translate("registerDialog", "Dialog", Q_NULLPTR));
        ButtonRegister->setText(QApplication::translate("registerDialog", "\346\263\250\345\206\214", Q_NULLPTR));
        ButtonBack->setText(QApplication::translate("registerDialog", "\350\277\224\345\233\236", Q_NULLPTR));
        labelType->setText(QApplication::translate("registerDialog", "\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        labelSchool->setText(QApplication::translate("registerDialog", "\345\255\246\351\231\242\357\274\232", Q_NULLPTR));
        labelName->setText(QApplication::translate("registerDialog", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        labelPw->setText(QApplication::translate("registerDialog", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        labelID->setText(QApplication::translate("registerDialog", "\345\255\246\345\217\267/\345\267\245\344\275\234\345\217\267\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class registerDialog: public Ui_registerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLineEdit *NumberText;
    QLineEdit *PwText;
    QPushButton *Login;
    QPushButton *SignUp;
    QLabel *label;
    QLabel *label_2;
    QLabel *WarnLabel;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(556, 414);
        LoginDialog->setStyleSheet(QStringLiteral("background-color:rgb(235, 242, 249)"));
        NumberText = new QLineEdit(LoginDialog);
        NumberText->setObjectName(QStringLiteral("NumberText"));
        NumberText->setGeometry(QRect(160, 100, 231, 51));
        QFont font;
        font.setPointSize(12);
        NumberText->setFont(font);
        NumberText->setMaxLength(16);
        PwText = new QLineEdit(LoginDialog);
        PwText->setObjectName(QStringLiteral("PwText"));
        PwText->setGeometry(QRect(160, 190, 231, 51));
        PwText->setFont(font);
        PwText->setMaxLength(16);
        PwText->setEchoMode(QLineEdit::Password);
        Login = new QPushButton(LoginDialog);
        Login->setObjectName(QStringLiteral("Login"));
        Login->setGeometry(QRect(110, 300, 91, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        Login->setFont(font1);
        Login->setFocusPolicy(Qt::TabFocus);
        Login->setFlat(false);
        SignUp = new QPushButton(LoginDialog);
        SignUp->setObjectName(QStringLiteral("SignUp"));
        SignUp->setGeometry(QRect(330, 300, 91, 41));
        SignUp->setFont(font1);
        SignUp->setFlat(false);
        label = new QLabel(LoginDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 100, 71, 41));
        QFont font2;
        font2.setPointSize(13);
        label->setFont(font2);
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 190, 61, 41));
        label_2->setFont(font2);
        WarnLabel = new QLabel(LoginDialog);
        WarnLabel->setObjectName(QStringLiteral("WarnLabel"));
        WarnLabel->setGeometry(QRect(150, 60, 191, 21));
        QFont font3;
        font3.setPointSize(10);
        WarnLabel->setFont(font3);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", Q_NULLPTR));
        NumberText->setPlaceholderText(QApplication::translate("LoginDialog", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        PwText->setPlaceholderText(QApplication::translate("LoginDialog", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", Q_NULLPTR));
        Login->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", Q_NULLPTR));
        SignUp->setText(QApplication::translate("LoginDialog", "\346\263\250\345\206\214", Q_NULLPTR));
        label->setText(QApplication::translate("LoginDialog", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        WarnLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H

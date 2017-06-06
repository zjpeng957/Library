/********************************************************************************
** Form generated from reading UI file 'dbook.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBOOK_H
#define UI_DBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DBook
{
public:
    QComboBox *comboBox;
    QPushButton *ButtonSure;
    QPushButton *ButtonDiscard;
    QLabel *label;

    void setupUi(QWidget *DBook)
    {
        if (DBook->objectName().isEmpty())
            DBook->setObjectName(QStringLiteral("DBook"));
        DBook->resize(400, 300);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        DBook->setFont(font);
        comboBox = new QComboBox(DBook);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(140, 90, 171, 22));
        comboBox->setFont(font);
        ButtonSure = new QPushButton(DBook);
        ButtonSure->setObjectName(QStringLiteral("ButtonSure"));
        ButtonSure->setGeometry(QRect(80, 190, 93, 28));
        ButtonDiscard = new QPushButton(DBook);
        ButtonDiscard->setObjectName(QStringLiteral("ButtonDiscard"));
        ButtonDiscard->setGeometry(QRect(210, 190, 93, 28));
        label = new QLabel(DBook);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 90, 72, 15));

        retranslateUi(DBook);

        QMetaObject::connectSlotsByName(DBook);
    } // setupUi

    void retranslateUi(QWidget *DBook)
    {
        DBook->setWindowTitle(QApplication::translate("DBook", "DBook", Q_NULLPTR));
        ButtonSure->setText(QApplication::translate("DBook", "\347\241\256\350\256\244", Q_NULLPTR));
        ButtonDiscard->setText(QApplication::translate("DBook", "\345\217\226\346\266\210", Q_NULLPTR));
        label->setText(QApplication::translate("DBook", "\347\274\226\345\217\267\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DBook: public Ui_DBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBOOK_H

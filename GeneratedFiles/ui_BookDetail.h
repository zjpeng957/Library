/********************************************************************************
** Form generated from reading UI file 'BookDetail.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKDETAIL_H
#define UI_BOOKDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookDetail
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *labelAmount;
    QLabel *label;
    QLabel *labelNo;
    QLabel *labelType;
    QLabel *labelWriter;
    QLabel *labelRest;
    QLabel *labelName;
    QLabel *textAmount;
    QLabel *textPress;
    QLabel *textName;
    QLabel *textRest;
    QLabel *textType;
    QLabel *textWriter;
    QLabel *textNo;
    QPushButton *Buttonbnr;
    QPushButton *ButtonCancel;
    QPushButton *ButtonOthers;

    void setupUi(QWidget *BookDetail)
    {
        if (BookDetail->objectName().isEmpty())
            BookDetail->setObjectName(QStringLiteral("BookDetail"));
        BookDetail->resize(652, 710);
        gridLayoutWidget = new QWidget(BookDetail);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 40, 561, 271));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelAmount = new QLabel(gridLayoutWidget);
        labelAmount->setObjectName(QStringLiteral("labelAmount"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        labelAmount->setFont(font);

        gridLayout->addWidget(labelAmount, 2, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        labelNo = new QLabel(gridLayoutWidget);
        labelNo->setObjectName(QStringLiteral("labelNo"));
        labelNo->setFont(font);

        gridLayout->addWidget(labelNo, 3, 0, 1, 1);

        labelType = new QLabel(gridLayoutWidget);
        labelType->setObjectName(QStringLiteral("labelType"));
        labelType->setFont(font);

        gridLayout->addWidget(labelType, 1, 2, 1, 1);

        labelWriter = new QLabel(gridLayoutWidget);
        labelWriter->setObjectName(QStringLiteral("labelWriter"));
        labelWriter->setFont(font);

        gridLayout->addWidget(labelWriter, 0, 2, 1, 1);

        labelRest = new QLabel(gridLayoutWidget);
        labelRest->setObjectName(QStringLiteral("labelRest"));
        labelRest->setFont(font);

        gridLayout->addWidget(labelRest, 2, 2, 1, 1);

        labelName = new QLabel(gridLayoutWidget);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setFont(font);

        gridLayout->addWidget(labelName, 0, 0, 1, 1);

        textAmount = new QLabel(gridLayoutWidget);
        textAmount->setObjectName(QStringLiteral("textAmount"));
        textAmount->setFont(font);

        gridLayout->addWidget(textAmount, 2, 1, 1, 1);

        textPress = new QLabel(gridLayoutWidget);
        textPress->setObjectName(QStringLiteral("textPress"));
        textPress->setFont(font);

        gridLayout->addWidget(textPress, 1, 1, 1, 1);

        textName = new QLabel(gridLayoutWidget);
        textName->setObjectName(QStringLiteral("textName"));
        textName->setFont(font);

        gridLayout->addWidget(textName, 0, 1, 1, 1);

        textRest = new QLabel(gridLayoutWidget);
        textRest->setObjectName(QStringLiteral("textRest"));
        textRest->setFont(font);

        gridLayout->addWidget(textRest, 2, 3, 1, 1);

        textType = new QLabel(gridLayoutWidget);
        textType->setObjectName(QStringLiteral("textType"));
        textType->setFont(font);

        gridLayout->addWidget(textType, 1, 3, 1, 1);

        textWriter = new QLabel(gridLayoutWidget);
        textWriter->setObjectName(QStringLiteral("textWriter"));
        textWriter->setFont(font);

        gridLayout->addWidget(textWriter, 0, 3, 1, 1);

        textNo = new QLabel(gridLayoutWidget);
        textNo->setObjectName(QStringLiteral("textNo"));
        textNo->setFont(font);

        gridLayout->addWidget(textNo, 3, 1, 1, 3);

        Buttonbnr = new QPushButton(BookDetail);
        Buttonbnr->setObjectName(QStringLiteral("Buttonbnr"));
        Buttonbnr->setGeometry(QRect(380, 657, 93, 31));
        Buttonbnr->setFont(font);
        ButtonCancel = new QPushButton(BookDetail);
        ButtonCancel->setObjectName(QStringLiteral("ButtonCancel"));
        ButtonCancel->setGeometry(QRect(510, 657, 93, 31));
        ButtonCancel->setFont(font);
        ButtonOthers = new QPushButton(BookDetail);
        ButtonOthers->setObjectName(QStringLiteral("ButtonOthers"));
        ButtonOthers->setGeometry(QRect(30, 660, 111, 31));
        ButtonOthers->setFont(font);

        retranslateUi(BookDetail);

        QMetaObject::connectSlotsByName(BookDetail);
    } // setupUi

    void retranslateUi(QWidget *BookDetail)
    {
        BookDetail->setWindowTitle(QApplication::translate("BookDetail", "BookDetail", Q_NULLPTR));
        labelAmount->setText(QApplication::translate("BookDetail", "\346\200\273\346\225\260\351\207\217\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("BookDetail", "\345\207\272\347\211\210\347\244\276\357\274\232", Q_NULLPTR));
        labelNo->setText(QApplication::translate("BookDetail", "\347\274\226\345\217\267\357\274\232", Q_NULLPTR));
        labelType->setText(QApplication::translate("BookDetail", "\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        labelWriter->setText(QApplication::translate("BookDetail", "\344\275\234\350\200\205\357\274\232", Q_NULLPTR));
        labelRest->setText(QApplication::translate("BookDetail", "\345\211\251\344\275\231\346\225\260\351\207\217\357\274\232", Q_NULLPTR));
        labelName->setText(QApplication::translate("BookDetail", "\344\271\246\345\220\215\357\274\232", Q_NULLPTR));
        textAmount->setText(QString());
        textPress->setText(QString());
        textName->setText(QString());
        textRest->setText(QString());
        textType->setText(QString());
        textWriter->setText(QString());
        textNo->setText(QString());
        Buttonbnr->setText(QString());
        ButtonCancel->setText(QApplication::translate("BookDetail", "\345\217\226\346\266\210", Q_NULLPTR));
        ButtonOthers->setText(QApplication::translate("BookDetail", "\345\205\266\344\273\226", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BookDetail: public Ui_BookDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKDETAIL_H

/********************************************************************************
** Form generated from reading UI file 'msgWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MSGWIDGET_H
#define UI_MSGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_msgWidget
{
public:
    QListWidget *listWidget;

    void setupUi(QWidget *msgWidget)
    {
        if (msgWidget->objectName().isEmpty())
            msgWidget->setObjectName(QStringLiteral("msgWidget"));
        msgWidget->resize(400, 402);
        listWidget = new QListWidget(msgWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 401, 401));

        retranslateUi(msgWidget);

        QMetaObject::connectSlotsByName(msgWidget);
    } // setupUi

    void retranslateUi(QWidget *msgWidget)
    {
        msgWidget->setWindowTitle(QApplication::translate("msgWidget", "msgWidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class msgWidget: public Ui_msgWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MSGWIDGET_H

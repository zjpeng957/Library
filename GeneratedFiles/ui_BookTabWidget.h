/********************************************************************************
** Form generated from reading UI file 'BookTabWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKTABWIDGET_H
#define UI_BOOKTABWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookTabWidget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *borrow;
    QTableWidget *tableBorrow;
    QWidget *Order;
    QTableWidget *tableOrder;
    QWidget *Buy;
    QTableWidget *tableBuy;

    void setupUi(QWidget *BookTabWidget)
    {
        if (BookTabWidget->objectName().isEmpty())
            BookTabWidget->setObjectName(QStringLiteral("BookTabWidget"));
        BookTabWidget->resize(778, 557);
        verticalLayoutWidget = new QWidget(BookTabWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 781, 561));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(verticalLayoutWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        borrow = new QWidget();
        borrow->setObjectName(QStringLiteral("borrow"));
        tableBorrow = new QTableWidget(borrow);
        if (tableBorrow->columnCount() < 4)
            tableBorrow->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableBorrow->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableBorrow->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableBorrow->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableBorrow->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableBorrow->setObjectName(QStringLiteral("tableBorrow"));
        tableBorrow->setGeometry(QRect(0, 0, 771, 541));
        tabWidget->addTab(borrow, QString());
        Order = new QWidget();
        Order->setObjectName(QStringLiteral("Order"));
        tableOrder = new QTableWidget(Order);
        if (tableOrder->columnCount() < 2)
            tableOrder->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableOrder->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableOrder->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        tableOrder->setObjectName(QStringLiteral("tableOrder"));
        tableOrder->setGeometry(QRect(0, 0, 781, 531));
        tabWidget->addTab(Order, QString());
        Buy = new QWidget();
        Buy->setObjectName(QStringLiteral("Buy"));
        tableBuy = new QTableWidget(Buy);
        if (tableBuy->columnCount() < 2)
            tableBuy->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableBuy->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableBuy->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        tableBuy->setObjectName(QStringLiteral("tableBuy"));
        tableBuy->setGeometry(QRect(0, 0, 781, 541));
        tabWidget->addTab(Buy, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(BookTabWidget);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(BookTabWidget);
    } // setupUi

    void retranslateUi(QWidget *BookTabWidget)
    {
        BookTabWidget->setWindowTitle(QApplication::translate("BookTabWidget", "BookTabWidget", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableBorrow->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("BookTabWidget", "\347\274\226\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableBorrow->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("BookTabWidget", "\345\200\237\351\230\205\344\272\272\347\274\226\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableBorrow->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("BookTabWidget", "\345\200\237\344\271\246\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableBorrow->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("BookTabWidget", "\345\211\251\344\275\231\346\227\266\351\227\264", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(borrow), QApplication::translate("BookTabWidget", "\345\267\262\345\200\237\351\230\205", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableOrder->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("BookTabWidget", "\351\242\204\347\272\246\347\224\250\346\210\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableOrder->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("BookTabWidget", "\351\242\204\347\272\246\346\227\266\351\227\264", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Order), QApplication::translate("BookTabWidget", "\351\242\204\347\272\246\347\224\250\346\210\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableBuy->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("BookTabWidget", "\347\274\226\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableBuy->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("BookTabWidget", "\350\264\255\344\271\246\346\227\245\346\234\237", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Buy), QApplication::translate("BookTabWidget", "\350\264\255\345\205\245\346\227\266\351\227\264", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BookTabWidget: public Ui_BookTabWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKTABWIDGET_H

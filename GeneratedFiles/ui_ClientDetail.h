/********************************************************************************
** Form generated from reading UI file 'ClientDetail.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTDETAIL_H
#define UI_CLIENTDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientDetail
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *labelPw;
    QLabel *labelName;
    QLabel *textSchool;
    QLabel *textType;
    QLabel *labelNumber;
    QLabel *labelID;
    QLabel *labelAuthority;
    QLabel *textAuthority;
    QLabel *textCredit;
    QLabel *textName;
    QLabel *textPw;
    QLabel *labelSchool;
    QLabel *labelCredit;
    QLabel *labelType;
    QLabel *textID;
    QLabel *textNumber;
    QPushButton *pushButton;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tableBorrowed;
    QWidget *tab_2;
    QListWidget *ListOrdered;
    QPushButton *pushButtonClose;

    void setupUi(QWidget *ClientDetail)
    {
        if (ClientDetail->objectName().isEmpty())
            ClientDetail->setObjectName(QStringLiteral("ClientDetail"));
        ClientDetail->resize(952, 842);
        gridLayoutWidget = new QWidget(ClientDetail);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 30, 901, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelPw = new QLabel(gridLayoutWidget);
        labelPw->setObjectName(QStringLiteral("labelPw"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        labelPw->setFont(font);

        gridLayout->addWidget(labelPw, 2, 2, 1, 1);

        labelName = new QLabel(gridLayoutWidget);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setFont(font);

        gridLayout->addWidget(labelName, 0, 0, 1, 1);

        textSchool = new QLabel(gridLayoutWidget);
        textSchool->setObjectName(QStringLiteral("textSchool"));
        textSchool->setFont(font);

        gridLayout->addWidget(textSchool, 0, 3, 1, 1);

        textType = new QLabel(gridLayoutWidget);
        textType->setObjectName(QStringLiteral("textType"));
        textType->setFont(font);

        gridLayout->addWidget(textType, 1, 1, 1, 1);

        labelNumber = new QLabel(gridLayoutWidget);
        labelNumber->setObjectName(QStringLiteral("labelNumber"));
        labelNumber->setFont(font);

        gridLayout->addWidget(labelNumber, 2, 0, 1, 1);

        labelID = new QLabel(gridLayoutWidget);
        labelID->setObjectName(QStringLiteral("labelID"));
        labelID->setFont(font);

        gridLayout->addWidget(labelID, 1, 2, 1, 1);

        labelAuthority = new QLabel(gridLayoutWidget);
        labelAuthority->setObjectName(QStringLiteral("labelAuthority"));
        labelAuthority->setFont(font);

        gridLayout->addWidget(labelAuthority, 3, 2, 1, 1);

        textAuthority = new QLabel(gridLayoutWidget);
        textAuthority->setObjectName(QStringLiteral("textAuthority"));
        textAuthority->setFont(font);

        gridLayout->addWidget(textAuthority, 3, 3, 1, 1);

        textCredit = new QLabel(gridLayoutWidget);
        textCredit->setObjectName(QStringLiteral("textCredit"));
        textCredit->setFont(font);

        gridLayout->addWidget(textCredit, 3, 1, 1, 1);

        textName = new QLabel(gridLayoutWidget);
        textName->setObjectName(QStringLiteral("textName"));
        textName->setFont(font);

        gridLayout->addWidget(textName, 0, 1, 1, 1);

        textPw = new QLabel(gridLayoutWidget);
        textPw->setObjectName(QStringLiteral("textPw"));
        textPw->setFont(font);

        gridLayout->addWidget(textPw, 2, 3, 1, 1);

        labelSchool = new QLabel(gridLayoutWidget);
        labelSchool->setObjectName(QStringLiteral("labelSchool"));
        labelSchool->setFont(font);

        gridLayout->addWidget(labelSchool, 0, 2, 1, 1);

        labelCredit = new QLabel(gridLayoutWidget);
        labelCredit->setObjectName(QStringLiteral("labelCredit"));
        labelCredit->setFont(font);

        gridLayout->addWidget(labelCredit, 3, 0, 1, 1);

        labelType = new QLabel(gridLayoutWidget);
        labelType->setObjectName(QStringLiteral("labelType"));
        labelType->setFont(font);

        gridLayout->addWidget(labelType, 1, 0, 1, 1);

        textID = new QLabel(gridLayoutWidget);
        textID->setObjectName(QStringLiteral("textID"));
        textID->setFont(font);

        gridLayout->addWidget(textID, 1, 3, 1, 1);

        textNumber = new QLabel(gridLayoutWidget);
        textNumber->setObjectName(QStringLiteral("textNumber"));
        textNumber->setFont(font);

        gridLayout->addWidget(textNumber, 2, 1, 1, 1);

        pushButton = new QPushButton(ClientDetail);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(690, 800, 101, 41));
        pushButton->setFont(font);
        tabWidget = new QTabWidget(ClientDetail);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 310, 901, 471));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableBorrowed = new QTableWidget(tab);
        if (tableBorrowed->columnCount() < 4)
            tableBorrowed->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableBorrowed->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableBorrowed->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableBorrowed->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableBorrowed->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableBorrowed->setObjectName(QStringLiteral("tableBorrowed"));
        tableBorrowed->setGeometry(QRect(0, 0, 901, 451));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        ListOrdered = new QListWidget(tab_2);
        ListOrdered->setObjectName(QStringLiteral("ListOrdered"));
        ListOrdered->setGeometry(QRect(0, 0, 901, 451));
        tabWidget->addTab(tab_2, QString());
        pushButtonClose = new QPushButton(ClientDetail);
        pushButtonClose->setObjectName(QStringLiteral("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(820, 800, 101, 41));
        pushButtonClose->setFont(font);

        retranslateUi(ClientDetail);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ClientDetail);
    } // setupUi

    void retranslateUi(QWidget *ClientDetail)
    {
        ClientDetail->setWindowTitle(QApplication::translate("ClientDetail", "ClientDetail", Q_NULLPTR));
        labelPw->setText(QApplication::translate("ClientDetail", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        labelName->setText(QApplication::translate("ClientDetail", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        textSchool->setText(QString());
        textType->setText(QString());
        labelNumber->setText(QApplication::translate("ClientDetail", "\347\274\226\345\217\267\357\274\232", Q_NULLPTR));
        labelID->setText(QApplication::translate("ClientDetail", "\345\255\246\345\217\267/\345\267\245\344\275\234\345\217\267\357\274\232", Q_NULLPTR));
        labelAuthority->setText(QApplication::translate("ClientDetail", "\345\200\237\344\271\246\346\235\203\351\231\220\357\274\232", Q_NULLPTR));
        textAuthority->setText(QString());
        textCredit->setText(QString());
        textName->setText(QString());
        textPw->setText(QString());
        labelSchool->setText(QApplication::translate("ClientDetail", "\345\255\246\351\231\242\357\274\232", Q_NULLPTR));
        labelCredit->setText(QApplication::translate("ClientDetail", "\344\277\241\347\224\250\357\274\232", Q_NULLPTR));
        labelType->setText(QApplication::translate("ClientDetail", "\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        textID->setText(QString());
        textNumber->setText(QString());
        pushButton->setText(QApplication::translate("ClientDetail", "\345\210\240\351\231\244\347\224\250\346\210\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableBorrowed->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ClientDetail", "\344\271\246\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableBorrowed->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ClientDetail", "\347\274\226\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableBorrowed->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ClientDetail", "\345\200\237\344\271\246\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableBorrowed->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ClientDetail", "\345\211\251\344\275\231\345\244\251\346\225\260", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ClientDetail", "\345\267\262\345\200\237\351\230\205", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ClientDetail", "\345\267\262\351\242\204\347\272\246", Q_NULLPTR));
        pushButtonClose->setText(QApplication::translate("ClientDetail", "\345\205\263\351\227\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClientDetail: public Ui_ClientDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTDETAIL_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *PageAdmin;
    QPushButton *ButtonSearchBA;
    QPushButton *ButtonBuyA;
    QStackedWidget *stackedWidgetA;
    QWidget *PageSearchBA;
    QWidget *pageSearchCA;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_2;
    QLabel *labelSchoolS;
    QComboBox *comboBoxType;
    QLineEdit *lineName;
    QLabel *labelNoS;
    QLabel *labelTypeS;
    QComboBox *comboBoxSchool;
    QLineEdit *lineEditNo;
    QLabel *labelNameS;
    QPushButton *ButtonClientSearch;
    QLabel *labelId;
    QLineEdit *lineCId;
    QTableWidget *tableClient;
    QWidget *PageBuyA;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_3;
    QLabel *labelBuyName;
    QLineEdit *lineBuyName;
    QLabel *labelBuyNumber;
    QLineEdit *lineBuyAmount;
    QLabel *labelBuyCategory;
    QLabel *labelBuyPrice;
    QLineEdit *lineBuyPrice;
    QComboBox *BoxBuyCategory;
    QLineEdit *lineBuyAuthor;
    QComboBox *BoxBuyPress;
    QLabel *labelBuyPress;
    QLabel *labelBuyAuthor;
    QPushButton *pushButtonBuyConfirm;
    QLabel *labelBuyHint;
    QWidget *PageHelpA;
    QPushButton *ButtonSearchCA;
    QLabel *label_2;
    QWidget *PageClient;
    QPushButton *ButtonSearch;
    QPushButton *ButtonReturn;
    QPushButton *ButtonInfo;
    QStackedWidget *stackedWidgetC;
    QWidget *PageSearch;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *LabelBName;
    QLineEdit *LineBookNumber;
    QLabel *LabelBNumber;
    QLabel *LabelPress;
    QLabel *LabelCategory;
    QLabel *LabelAuthor;
    QComboBox *CBoxType;
    QLineEdit *LineBookWriter;
    QComboBox *CBoxPress;
    QLineEdit *LineBookName;
    QPushButton *ButtonConfirm;
    QTableWidget *tableResult;
    QLabel *TextResult;
    QPushButton *ButtonRate;
    QWidget *PageReturn;
    QTableWidget *tableReturn;
    QWidget *PageInfo;
    QWidget *gridLayoutWidget_2;
    QGridLayout *LayoutInfo;
    QLabel *labelNumber;
    QLabel *labelCredit;
    QLabel *TextSchool;
    QLabel *labelSchool;
    QLabel *TextPw;
    QLabel *TextCName;
    QLabel *labelName;
    QLabel *TextCredit;
    QLabel *labelType;
    QLabel *TextType;
    QLabel *labelNumberA;
    QLabel *labelPw;
    QLabel *labelID;
    QLabel *TextID;
    QLabel *labelInfo;
    QTabWidget *tabBook;
    QWidget *tabBorrowed;
    QTableWidget *tableBorrowed;
    QWidget *tab2;
    QTableWidget *tableOrdered;
    QWidget *PageHelp;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1010, 735);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1011, 711));
        PageAdmin = new QWidget();
        PageAdmin->setObjectName(QStringLiteral("PageAdmin"));
        ButtonSearchBA = new QPushButton(PageAdmin);
        ButtonSearchBA->setObjectName(QStringLiteral("ButtonSearchBA"));
        ButtonSearchBA->setGeometry(QRect(0, 0, 93, 61));
        ButtonSearchBA->setFlat(false);
        ButtonBuyA = new QPushButton(PageAdmin);
        ButtonBuyA->setObjectName(QStringLiteral("ButtonBuyA"));
        ButtonBuyA->setGeometry(QRect(0, 330, 93, 61));
        stackedWidgetA = new QStackedWidget(PageAdmin);
        stackedWidgetA->setObjectName(QStringLiteral("stackedWidgetA"));
        stackedWidgetA->setGeometry(QRect(90, 0, 921, 681));
        PageSearchBA = new QWidget();
        PageSearchBA->setObjectName(QStringLiteral("PageSearchBA"));
        stackedWidgetA->addWidget(PageSearchBA);
        pageSearchCA = new QWidget();
        pageSearchCA->setObjectName(QStringLiteral("pageSearchCA"));
        gridLayoutWidget_3 = new QWidget(pageSearchCA);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(20, 30, 881, 191));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        labelSchoolS = new QLabel(gridLayoutWidget_3);
        labelSchoolS->setObjectName(QStringLiteral("labelSchoolS"));

        gridLayout_2->addWidget(labelSchoolS, 1, 2, 1, 1);

        comboBoxType = new QComboBox(gridLayoutWidget_3);
        comboBoxType->setObjectName(QStringLiteral("comboBoxType"));

        gridLayout_2->addWidget(comboBoxType, 0, 3, 1, 1);

        lineName = new QLineEdit(gridLayoutWidget_3);
        lineName->setObjectName(QStringLiteral("lineName"));

        gridLayout_2->addWidget(lineName, 0, 1, 1, 1);

        labelNoS = new QLabel(gridLayoutWidget_3);
        labelNoS->setObjectName(QStringLiteral("labelNoS"));

        gridLayout_2->addWidget(labelNoS, 1, 0, 1, 1);

        labelTypeS = new QLabel(gridLayoutWidget_3);
        labelTypeS->setObjectName(QStringLiteral("labelTypeS"));

        gridLayout_2->addWidget(labelTypeS, 0, 2, 1, 1);

        comboBoxSchool = new QComboBox(gridLayoutWidget_3);
        comboBoxSchool->setObjectName(QStringLiteral("comboBoxSchool"));

        gridLayout_2->addWidget(comboBoxSchool, 1, 3, 1, 1);

        lineEditNo = new QLineEdit(gridLayoutWidget_3);
        lineEditNo->setObjectName(QStringLiteral("lineEditNo"));

        gridLayout_2->addWidget(lineEditNo, 1, 1, 1, 1);

        labelNameS = new QLabel(gridLayoutWidget_3);
        labelNameS->setObjectName(QStringLiteral("labelNameS"));

        gridLayout_2->addWidget(labelNameS, 0, 0, 1, 1);

        ButtonClientSearch = new QPushButton(gridLayoutWidget_3);
        ButtonClientSearch->setObjectName(QStringLiteral("ButtonClientSearch"));

        gridLayout_2->addWidget(ButtonClientSearch, 2, 3, 1, 1);

        labelId = new QLabel(gridLayoutWidget_3);
        labelId->setObjectName(QStringLiteral("labelId"));

        gridLayout_2->addWidget(labelId, 2, 0, 1, 1);

        lineCId = new QLineEdit(gridLayoutWidget_3);
        lineCId->setObjectName(QStringLiteral("lineCId"));

        gridLayout_2->addWidget(lineCId, 2, 1, 1, 1);

        tableClient = new QTableWidget(pageSearchCA);
        if (tableClient->columnCount() < 4)
            tableClient->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableClient->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableClient->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableClient->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableClient->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableClient->setObjectName(QStringLiteral("tableClient"));
        tableClient->setGeometry(QRect(20, 280, 881, 401));
        stackedWidgetA->addWidget(pageSearchCA);
        PageBuyA = new QWidget();
        PageBuyA->setObjectName(QStringLiteral("PageBuyA"));
        gridLayoutWidget_4 = new QWidget(PageBuyA);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(70, 60, 761, 281));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        labelBuyName = new QLabel(gridLayoutWidget_4);
        labelBuyName->setObjectName(QStringLiteral("labelBuyName"));

        gridLayout_3->addWidget(labelBuyName, 0, 0, 1, 1);

        lineBuyName = new QLineEdit(gridLayoutWidget_4);
        lineBuyName->setObjectName(QStringLiteral("lineBuyName"));

        gridLayout_3->addWidget(lineBuyName, 0, 1, 1, 1);

        labelBuyNumber = new QLabel(gridLayoutWidget_4);
        labelBuyNumber->setObjectName(QStringLiteral("labelBuyNumber"));

        gridLayout_3->addWidget(labelBuyNumber, 1, 2, 1, 1);

        lineBuyAmount = new QLineEdit(gridLayoutWidget_4);
        lineBuyAmount->setObjectName(QStringLiteral("lineBuyAmount"));

        gridLayout_3->addWidget(lineBuyAmount, 1, 3, 1, 1);

        labelBuyCategory = new QLabel(gridLayoutWidget_4);
        labelBuyCategory->setObjectName(QStringLiteral("labelBuyCategory"));

        gridLayout_3->addWidget(labelBuyCategory, 2, 0, 1, 1);

        labelBuyPrice = new QLabel(gridLayoutWidget_4);
        labelBuyPrice->setObjectName(QStringLiteral("labelBuyPrice"));

        gridLayout_3->addWidget(labelBuyPrice, 2, 2, 1, 1);

        lineBuyPrice = new QLineEdit(gridLayoutWidget_4);
        lineBuyPrice->setObjectName(QStringLiteral("lineBuyPrice"));

        gridLayout_3->addWidget(lineBuyPrice, 2, 3, 1, 1);

        BoxBuyCategory = new QComboBox(gridLayoutWidget_4);
        BoxBuyCategory->setObjectName(QStringLiteral("BoxBuyCategory"));

        gridLayout_3->addWidget(BoxBuyCategory, 2, 1, 1, 1);

        lineBuyAuthor = new QLineEdit(gridLayoutWidget_4);
        lineBuyAuthor->setObjectName(QStringLiteral("lineBuyAuthor"));

        gridLayout_3->addWidget(lineBuyAuthor, 0, 3, 1, 1);

        BoxBuyPress = new QComboBox(gridLayoutWidget_4);
        BoxBuyPress->setObjectName(QStringLiteral("BoxBuyPress"));

        gridLayout_3->addWidget(BoxBuyPress, 1, 1, 1, 1);

        labelBuyPress = new QLabel(gridLayoutWidget_4);
        labelBuyPress->setObjectName(QStringLiteral("labelBuyPress"));

        gridLayout_3->addWidget(labelBuyPress, 1, 0, 1, 1);

        labelBuyAuthor = new QLabel(gridLayoutWidget_4);
        labelBuyAuthor->setObjectName(QStringLiteral("labelBuyAuthor"));

        gridLayout_3->addWidget(labelBuyAuthor, 0, 2, 1, 1);

        pushButtonBuyConfirm = new QPushButton(PageBuyA);
        pushButtonBuyConfirm->setObjectName(QStringLiteral("pushButtonBuyConfirm"));
        pushButtonBuyConfirm->setGeometry(QRect(740, 420, 93, 41));
        labelBuyHint = new QLabel(PageBuyA);
        labelBuyHint->setObjectName(QStringLiteral("labelBuyHint"));
        labelBuyHint->setGeometry(QRect(80, 420, 311, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        labelBuyHint->setFont(font);
        stackedWidgetA->addWidget(PageBuyA);
        PageHelpA = new QWidget();
        PageHelpA->setObjectName(QStringLiteral("PageHelpA"));
        stackedWidgetA->addWidget(PageHelpA);
        ButtonSearchCA = new QPushButton(PageAdmin);
        ButtonSearchCA->setObjectName(QStringLiteral("ButtonSearchCA"));
        ButtonSearchCA->setGeometry(QRect(0, 170, 101, 61));
        label_2 = new QLabel(PageAdmin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-10, 0, 111, 701));
        stackedWidget->addWidget(PageAdmin);
        label_2->raise();
        ButtonBuyA->raise();
        ButtonSearchBA->raise();
        ButtonSearchCA->raise();
        stackedWidgetA->raise();
        PageClient = new QWidget();
        PageClient->setObjectName(QStringLiteral("PageClient"));
        ButtonSearch = new QPushButton(PageClient);
        ButtonSearch->setObjectName(QStringLiteral("ButtonSearch"));
        ButtonSearch->setGeometry(QRect(0, 0, 93, 61));
        ButtonSearch->setFont(font);
        ButtonSearch->setFocusPolicy(Qt::ClickFocus);
        ButtonSearch->setAutoFillBackground(false);
        ButtonSearch->setCheckable(false);
        ButtonSearch->setChecked(false);
        ButtonSearch->setFlat(false);
        ButtonReturn = new QPushButton(PageClient);
        ButtonReturn->setObjectName(QStringLiteral("ButtonReturn"));
        ButtonReturn->setGeometry(QRect(0, 160, 101, 61));
        ButtonReturn->setFont(font);
        ButtonReturn->setFocusPolicy(Qt::ClickFocus);
        ButtonInfo = new QPushButton(PageClient);
        ButtonInfo->setObjectName(QStringLiteral("ButtonInfo"));
        ButtonInfo->setGeometry(QRect(0, 340, 93, 61));
        ButtonInfo->setFont(font);
        ButtonInfo->setFocusPolicy(Qt::ClickFocus);
        stackedWidgetC = new QStackedWidget(PageClient);
        stackedWidgetC->setObjectName(QStringLiteral("stackedWidgetC"));
        stackedWidgetC->setGeometry(QRect(90, 0, 921, 691));
        PageSearch = new QWidget();
        PageSearch->setObjectName(QStringLiteral("PageSearch"));
        gridLayoutWidget = new QWidget(PageSearch);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 0, 871, 191));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        LabelBName = new QLabel(gridLayoutWidget);
        LabelBName->setObjectName(QStringLiteral("LabelBName"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        LabelBName->setFont(font1);

        gridLayout->addWidget(LabelBName, 0, 0, 1, 1);

        LineBookNumber = new QLineEdit(gridLayoutWidget);
        LineBookNumber->setObjectName(QStringLiteral("LineBookNumber"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LineBookNumber->sizePolicy().hasHeightForWidth());
        LineBookNumber->setSizePolicy(sizePolicy);
        LineBookNumber->setFont(font);

        gridLayout->addWidget(LineBookNumber, 2, 1, 1, 1);

        LabelBNumber = new QLabel(gridLayoutWidget);
        LabelBNumber->setObjectName(QStringLiteral("LabelBNumber"));
        LabelBNumber->setFont(font1);

        gridLayout->addWidget(LabelBNumber, 2, 0, 1, 1);

        LabelPress = new QLabel(gridLayoutWidget);
        LabelPress->setObjectName(QStringLiteral("LabelPress"));
        LabelPress->setFont(font1);

        gridLayout->addWidget(LabelPress, 1, 2, 1, 1);

        LabelCategory = new QLabel(gridLayoutWidget);
        LabelCategory->setObjectName(QStringLiteral("LabelCategory"));
        LabelCategory->setFont(font1);

        gridLayout->addWidget(LabelCategory, 0, 2, 1, 1);

        LabelAuthor = new QLabel(gridLayoutWidget);
        LabelAuthor->setObjectName(QStringLiteral("LabelAuthor"));
        LabelAuthor->setFont(font1);

        gridLayout->addWidget(LabelAuthor, 1, 0, 1, 1);

        CBoxType = new QComboBox(gridLayoutWidget);
        CBoxType->setObjectName(QStringLiteral("CBoxType"));
        CBoxType->setFont(font);

        gridLayout->addWidget(CBoxType, 0, 3, 1, 1);

        LineBookWriter = new QLineEdit(gridLayoutWidget);
        LineBookWriter->setObjectName(QStringLiteral("LineBookWriter"));
        sizePolicy.setHeightForWidth(LineBookWriter->sizePolicy().hasHeightForWidth());
        LineBookWriter->setSizePolicy(sizePolicy);
        LineBookWriter->setFont(font1);

        gridLayout->addWidget(LineBookWriter, 1, 1, 1, 1);

        CBoxPress = new QComboBox(gridLayoutWidget);
        CBoxPress->setObjectName(QStringLiteral("CBoxPress"));
        CBoxPress->setFont(font);

        gridLayout->addWidget(CBoxPress, 1, 3, 1, 1);

        LineBookName = new QLineEdit(gridLayoutWidget);
        LineBookName->setObjectName(QStringLiteral("LineBookName"));
        sizePolicy.setHeightForWidth(LineBookName->sizePolicy().hasHeightForWidth());
        LineBookName->setSizePolicy(sizePolicy);
        LineBookName->setMinimumSize(QSize(0, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(14);
        LineBookName->setFont(font2);

        gridLayout->addWidget(LineBookName, 0, 1, 1, 1);

        ButtonConfirm = new QPushButton(gridLayoutWidget);
        ButtonConfirm->setObjectName(QStringLiteral("ButtonConfirm"));
        ButtonConfirm->setFont(font);

        gridLayout->addWidget(ButtonConfirm, 2, 3, 1, 1);

        tableResult = new QTableWidget(PageSearch);
        if (tableResult->columnCount() < 5)
            tableResult->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableResult->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableResult->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableResult->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableResult->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableResult->setHorizontalHeaderItem(4, __qtablewidgetitem8);
        if (tableResult->rowCount() < 2)
            tableResult->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableResult->setVerticalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableResult->setVerticalHeaderItem(1, __qtablewidgetitem10);
        tableResult->setObjectName(QStringLiteral("tableResult"));
        tableResult->setGeometry(QRect(20, 250, 881, 431));
        tableResult->setFont(font);
        tableResult->setFocusPolicy(Qt::NoFocus);
        TextResult = new QLabel(PageSearch);
        TextResult->setObjectName(QStringLiteral("TextResult"));
        TextResult->setGeometry(QRect(20, 210, 101, 31));
        TextResult->setFont(font1);
        ButtonRate = new QPushButton(PageSearch);
        ButtonRate->setObjectName(QStringLiteral("ButtonRate"));
        ButtonRate->setGeometry(QRect(800, 210, 93, 28));
        stackedWidgetC->addWidget(PageSearch);
        PageReturn = new QWidget();
        PageReturn->setObjectName(QStringLiteral("PageReturn"));
        tableReturn = new QTableWidget(PageReturn);
        if (tableReturn->columnCount() < 4)
            tableReturn->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableReturn->setHorizontalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableReturn->setHorizontalHeaderItem(1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableReturn->setHorizontalHeaderItem(2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableReturn->setHorizontalHeaderItem(3, __qtablewidgetitem14);
        tableReturn->setObjectName(QStringLiteral("tableReturn"));
        tableReturn->setGeometry(QRect(0, 50, 911, 491));
        stackedWidgetC->addWidget(PageReturn);
        PageInfo = new QWidget();
        PageInfo->setObjectName(QStringLiteral("PageInfo"));
        gridLayoutWidget_2 = new QWidget(PageInfo);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 60, 861, 231));
        LayoutInfo = new QGridLayout(gridLayoutWidget_2);
        LayoutInfo->setObjectName(QStringLiteral("LayoutInfo"));
        LayoutInfo->setContentsMargins(0, 0, 0, 0);
        labelNumber = new QLabel(gridLayoutWidget_2);
        labelNumber->setObjectName(QStringLiteral("labelNumber"));

        LayoutInfo->addWidget(labelNumber, 1, 2, 1, 1);

        labelCredit = new QLabel(gridLayoutWidget_2);
        labelCredit->setObjectName(QStringLiteral("labelCredit"));

        LayoutInfo->addWidget(labelCredit, 0, 2, 1, 1);

        TextSchool = new QLabel(gridLayoutWidget_2);
        TextSchool->setObjectName(QStringLiteral("TextSchool"));

        LayoutInfo->addWidget(TextSchool, 2, 1, 1, 1);

        labelSchool = new QLabel(gridLayoutWidget_2);
        labelSchool->setObjectName(QStringLiteral("labelSchool"));

        LayoutInfo->addWidget(labelSchool, 2, 0, 1, 1);

        TextPw = new QLabel(gridLayoutWidget_2);
        TextPw->setObjectName(QStringLiteral("TextPw"));

        LayoutInfo->addWidget(TextPw, 2, 3, 1, 1);

        TextCName = new QLabel(gridLayoutWidget_2);
        TextCName->setObjectName(QStringLiteral("TextCName"));

        LayoutInfo->addWidget(TextCName, 0, 1, 1, 1);

        labelName = new QLabel(gridLayoutWidget_2);
        labelName->setObjectName(QStringLiteral("labelName"));

        LayoutInfo->addWidget(labelName, 0, 0, 1, 1);

        TextCredit = new QLabel(gridLayoutWidget_2);
        TextCredit->setObjectName(QStringLiteral("TextCredit"));

        LayoutInfo->addWidget(TextCredit, 0, 3, 1, 1);

        labelType = new QLabel(gridLayoutWidget_2);
        labelType->setObjectName(QStringLiteral("labelType"));

        LayoutInfo->addWidget(labelType, 1, 0, 1, 1);

        TextType = new QLabel(gridLayoutWidget_2);
        TextType->setObjectName(QStringLiteral("TextType"));

        LayoutInfo->addWidget(TextType, 1, 1, 1, 1);

        labelNumberA = new QLabel(gridLayoutWidget_2);
        labelNumberA->setObjectName(QStringLiteral("labelNumberA"));

        LayoutInfo->addWidget(labelNumberA, 1, 3, 1, 1);

        labelPw = new QLabel(gridLayoutWidget_2);
        labelPw->setObjectName(QStringLiteral("labelPw"));

        LayoutInfo->addWidget(labelPw, 2, 2, 1, 1);

        labelID = new QLabel(gridLayoutWidget_2);
        labelID->setObjectName(QStringLiteral("labelID"));

        LayoutInfo->addWidget(labelID, 3, 0, 1, 1);

        TextID = new QLabel(gridLayoutWidget_2);
        TextID->setObjectName(QStringLiteral("TextID"));

        LayoutInfo->addWidget(TextID, 3, 1, 1, 1);

        labelInfo = new QLabel(PageInfo);
        labelInfo->setObjectName(QStringLiteral("labelInfo"));
        labelInfo->setGeometry(QRect(10, 30, 72, 15));
        tabBook = new QTabWidget(PageInfo);
        tabBook->setObjectName(QStringLiteral("tabBook"));
        tabBook->setGeometry(QRect(10, 330, 871, 361));
        tabBorrowed = new QWidget();
        tabBorrowed->setObjectName(QStringLiteral("tabBorrowed"));
        tableBorrowed = new QTableWidget(tabBorrowed);
        if (tableBorrowed->columnCount() < 4)
            tableBorrowed->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableBorrowed->setHorizontalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableBorrowed->setHorizontalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableBorrowed->setHorizontalHeaderItem(2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableBorrowed->setHorizontalHeaderItem(3, __qtablewidgetitem18);
        tableBorrowed->setObjectName(QStringLiteral("tableBorrowed"));
        tableBorrowed->setGeometry(QRect(-5, 1, 871, 331));
        tabBook->addTab(tabBorrowed, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QStringLiteral("tab2"));
        tableOrdered = new QTableWidget(tab2);
        if (tableOrdered->columnCount() < 3)
            tableOrdered->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableOrdered->setHorizontalHeaderItem(0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableOrdered->setHorizontalHeaderItem(1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableOrdered->setHorizontalHeaderItem(2, __qtablewidgetitem21);
        tableOrdered->setObjectName(QStringLiteral("tableOrdered"));
        tableOrdered->setGeometry(QRect(-5, 1, 871, 321));
        tabBook->addTab(tab2, QString());
        stackedWidgetC->addWidget(PageInfo);
        PageHelp = new QWidget();
        PageHelp->setObjectName(QStringLiteral("PageHelp"));
        stackedWidgetC->addWidget(PageHelp);
        label = new QLabel(PageClient);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-9, 0, 101, 691));
        stackedWidget->addWidget(PageClient);
        label->raise();
        ButtonSearch->raise();
        ButtonReturn->raise();
        ButtonInfo->raise();
        stackedWidgetC->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1010, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        stackedWidgetC->setCurrentIndex(0);
        tabBook->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        ButtonSearchBA->setText(QApplication::translate("MainWindow", "\344\271\246\347\261\215\346\237\245\350\257\242", Q_NULLPTR));
        ButtonBuyA->setText(QApplication::translate("MainWindow", "\350\264\255\344\271\246", Q_NULLPTR));
        labelSchoolS->setText(QApplication::translate("MainWindow", "\345\255\246\351\231\242\357\274\232", Q_NULLPTR));
        labelNoS->setText(QApplication::translate("MainWindow", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        labelTypeS->setText(QApplication::translate("MainWindow", "\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        labelNameS->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        ButtonClientSearch->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242", Q_NULLPTR));
        labelId->setText(QApplication::translate("MainWindow", "\345\255\246\345\217\267/\345\267\245\344\275\234\345\217\267\357\274\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableClient->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableClient->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\347\274\226\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableClient->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\347\261\273\345\236\213", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableClient->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\345\255\246\351\231\242", Q_NULLPTR));
        labelBuyName->setText(QApplication::translate("MainWindow", "\344\271\246\345\220\215\357\274\232", Q_NULLPTR));
        labelBuyNumber->setText(QApplication::translate("MainWindow", "\346\225\260\351\207\217\357\274\232", Q_NULLPTR));
        labelBuyCategory->setText(QApplication::translate("MainWindow", "\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        labelBuyPrice->setText(QApplication::translate("MainWindow", "\344\273\267\346\240\274\357\274\232", Q_NULLPTR));
        labelBuyPress->setText(QApplication::translate("MainWindow", "\345\207\272\347\211\210\347\244\276\357\274\232", Q_NULLPTR));
        labelBuyAuthor->setText(QApplication::translate("MainWindow", "\344\275\234\350\200\205\357\274\232", Q_NULLPTR));
        pushButtonBuyConfirm->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244\350\264\255\345\205\245", Q_NULLPTR));
        labelBuyHint->setText(QString());
        ButtonSearchCA->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\346\237\245\350\257\242", Q_NULLPTR));
        label_2->setText(QString());
        ButtonSearch->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242/\345\200\237\344\271\246", Q_NULLPTR));
        ButtonReturn->setText(QApplication::translate("MainWindow", "\350\277\230\344\271\246", Q_NULLPTR));
        ButtonInfo->setText(QApplication::translate("MainWindow", "\344\270\252\344\272\272\344\277\241\346\201\257", Q_NULLPTR));
        LabelBName->setText(QApplication::translate("MainWindow", "\344\271\246\345\220\215\357\274\232", Q_NULLPTR));
        LabelBNumber->setText(QApplication::translate("MainWindow", "\347\274\226\345\217\267\357\274\232", Q_NULLPTR));
        LabelPress->setText(QApplication::translate("MainWindow", "\345\207\272\347\211\210\347\244\276\357\274\232", Q_NULLPTR));
        LabelCategory->setText(QApplication::translate("MainWindow", "\347\261\273\345\236\213", Q_NULLPTR));
        LabelAuthor->setText(QApplication::translate("MainWindow", "\344\275\234\350\200\205\357\274\232", Q_NULLPTR));
        ButtonConfirm->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableResult->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\344\271\246\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableResult->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\344\275\234\350\200\205", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableResult->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableResult->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\347\261\273\345\236\213", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableResult->horizontalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "\345\211\251\344\275\231\346\225\260\351\207\217", Q_NULLPTR));
        TextResult->setText(QApplication::translate("MainWindow", "\347\273\223\346\236\234\357\274\232", Q_NULLPTR));
        ButtonRate->setText(QApplication::translate("MainWindow", "\345\200\237\351\230\205\347\216\207", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableReturn->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "\344\271\246\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableReturn->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "\347\274\226\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableReturn->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "\345\200\237\344\271\246\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableReturn->horizontalHeaderItem(3);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "\345\211\251\344\275\231\346\227\266\351\227\264", Q_NULLPTR));
        labelNumber->setText(QApplication::translate("MainWindow", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        labelCredit->setText(QApplication::translate("MainWindow", "\344\277\241\347\224\250\357\274\232", Q_NULLPTR));
        TextSchool->setText(QString());
        labelSchool->setText(QApplication::translate("MainWindow", "\345\255\246\351\231\242\357\274\232", Q_NULLPTR));
        TextPw->setText(QString());
        TextCName->setText(QString());
        labelName->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        TextCredit->setText(QString());
        labelType->setText(QApplication::translate("MainWindow", "\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        TextType->setText(QString());
        labelNumberA->setText(QString());
        labelPw->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        labelID->setText(QApplication::translate("MainWindow", "\345\255\246\345\217\267/\345\267\245\344\275\234\345\217\267\357\274\232", Q_NULLPTR));
        TextID->setText(QString());
        labelInfo->setText(QApplication::translate("MainWindow", "\345\237\272\346\234\254\344\277\241\346\201\257\357\274\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableBorrowed->horizontalHeaderItem(0);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "\344\271\246\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableBorrowed->horizontalHeaderItem(1);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "\347\274\226\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableBorrowed->horizontalHeaderItem(2);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "\345\200\237\344\271\246\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableBorrowed->horizontalHeaderItem(3);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "\345\211\251\344\275\231\345\244\251\346\225\260", Q_NULLPTR));
        tabBook->setTabText(tabBook->indexOf(tabBorrowed), QApplication::translate("MainWindow", "\345\267\262\345\200\237\351\230\205", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableOrdered->horizontalHeaderItem(0);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "\344\271\246\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableOrdered->horizontalHeaderItem(1);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "\351\242\204\347\272\246\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableOrdered->horizontalHeaderItem(2);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "\346\230\257\345\220\246\346\234\211\344\275\231", Q_NULLPTR));
        tabBook->setTabText(tabBook->indexOf(tab2), QApplication::translate("MainWindow", "\345\267\262\351\242\204\347\272\246", Q_NULLPTR));
        label->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include<fstream>
#include<iostream>
#include<vector>
#include<string>

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	setStyleSheet("background-color:rgb(235, 242, 249)");
	Time.start();
	//ClientInit();
	//AdminInit();
	ui->stackedWidgetC->setCurrentIndex(0);
	ui->stackedWidgetA->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
	delete ui;
	//delete CurrentClient;
}

void MainWindow::ChoosePage(Client *CurClient)
{
	CurrentClient = CurClient;
	if (CurClient->type == ADMIN)
	{
		ui->stackedWidget->setCurrentIndex(0);
		AdminInit();
	}
	else
	{
		ui->stackedWidget->setCurrentIndex(1);
		//OrderReminder(CurrentClient, BookInfo);
		ClientInit();
	}
}

//��ͨ�û���ťѡ�����
void MainWindow::on_ButtonSearch_clicked()
{
	if (ui->stackedWidgetC->currentIndex() != 0)
	{
		ui->stackedWidgetC->setCurrentIndex(0);
	}
}

void MainWindow::on_ButtonReturn_clicked()
{
	if (ui->stackedWidgetC->currentIndex() != 1)
	{
		ui->stackedWidgetC->setCurrentIndex(1);
	}
}

void MainWindow::on_ButtonInfo_clicked()
{
	if (ui->stackedWidgetC->currentIndex() != 2)
	{
		ui->stackedWidgetC->setCurrentIndex(2);
	}
}

void MainWindow::on_ButtonHelpA_clicked(){}
void MainWindow::on_ButtonHelp_clicked()
{
	if (ui->stackedWidgetC->currentIndex() != 3)
	{
		ui->stackedWidgetC->setCurrentIndex(3);
	}
}

//����Ա��ťѡ�����
void MainWindow::on_ButtonSearchCA_clicked()
{
	if (ui->stackedWidgetA->currentIndex() != 1)
	{
		ui->stackedWidgetA->setCurrentIndex(1);
	}
}

void MainWindow::on_ButtonBuyA_clicked()
{
	if (ui->stackedWidgetA->currentIndex() != 2)
	{
		ui->stackedWidgetA->setCurrentIndex(2);
	}
}


void MainWindow::on_ButtonSearchBA_clicked()
{
	if (ui->stackedWidgetA->currentIndex() != 0)
	{
		ui->stackedWidgetA->setCurrentIndex(0);
	}
}

//��ʾ�鼮�������
void MainWindow::ShowSearchBook()
{
	//��ȡ�û���ǰ����
	string BookName = qstr2str(ui->LineBookName->text());
	string BookWriter = qstr2str(ui->LineBookWriter->text());
	string number = qstr2str(ui->LineBookNumber->text());
	unsigned BookNumber = atoi(number.c_str());
	int BookCategory = ui->CBoxType->currentIndex();
	int BookPress = ui->CBoxPress->currentIndex();
	auto n = number != string() ? stoi(number) : 0;
	SearchBook(BookName.c_str(), BookCategory, BookPress, BookWriter.c_str(), n, SearchedBook, BookInfo);
	
	ui->tableResult->clearContents();
	ui->tableResult->setRowCount(0);
	for (int i = 0; SearchedBook[i]!=nullptr; i++)
	{
		ui->tableResult->setRowCount(i + 1);
		ui->tableResult->setItem(i, 0, new QTableWidgetItem(SearchedBook[i]->name));
		ui->tableResult->setItem(i, 1, new QTableWidgetItem(SearchedBook[i]->writer));
		ui->tableResult->setItem(i, 2, new QTableWidgetItem(str2qstr(press[SearchedBook[i]->press])));
		ui->tableResult->setItem(i, 3, new QTableWidgetItem(str2qstr(category[SearchedBook[i]->category])));
		ui->tableResult->setItem(i, 4, new QTableWidgetItem(QString::number(SearchedBook[i]->currentNumber)));
	}
}
//��ʾ���ҵ����û�
void MainWindow::ShowSearchClient()
{
	QString name = ui->lineName->text();
	string number = qstr2str(ui->lineEditNo->text());
	string id = qstr2str(ui->lineCId->text());
	unsigned s = ui->comboBoxSchool->currentIndex();
	unsigned type = ui->comboBoxType->currentIndex();
	auto n = number == string() ? 0 : stoi(number);
	auto i = number == string() ? 0 : stoi(id);
	
	SearchClient(name, n, i, type,s,SearchedClient, ClientInfo);
	ui->tableResult->clearContents();
	ui->tableClient->setRowCount(0);
	for (size_t i = 0; i < MAX_C&&SearchedClient[i]; i++)
	{
		ui->tableClient->setRowCount(ui->tableClient->rowCount() + 1);
		ui->tableClient->setItem(i, 0, new QTableWidgetItem(SearchedClient[i]->name));
		ui->tableClient->setItem(i, 1, new QTableWidgetItem(str2qstr(to_string(SearchedClient[i]->number))));
		ui->tableClient->setItem(i, 2, new QTableWidgetItem(str2qstr(SearchedClient[i]->type==STUDENT?"ѧ��":"��ʦ")));
		ui->tableClient->setItem(i, 3, new QTableWidgetItem(str2qstr(school[SearchedClient[i]->type])));
	}
	QObject::connect(ui->tableClient, &QTableWidget::itemClicked, this, &MainWindow::ShowClientDetail,Qt::UniqueConnection);
}


void MainWindow::ChangeBook(int row, DetailType type)
{	
	switch (type)
	{
	case TBorrow://�����鼮
		if (BorrowBook(SearchedBook[row], CurrentClient, &totalBorrowedBook, day))
		{
			QMessageBox::information(this, str2qstr("��ʾ"), str2qstr("����ɹ���"), QMessageBox::Ok);
			ClientInfoInit();
			ClientReturnInit();
			ui->tableResult->setItem(row, 4, new QTableWidgetItem(QString::number(SearchedBook[row]->currentNumber)));
				}
		else QMessageBox::information(this, str2qstr("��ʾ"), str2qstr("����ʧ�ܣ�"), QMessageBox::Ok);
		break;
	case TOrder://ԤԼ�鼮
		if (OrderBook(SearchedBook[row],CurrentClient))
		{
			QMessageBox::information(this, str2qstr("��ʾ"), str2qstr("ԤԼ�ɹ���"), QMessageBox::Ok);
			ClientInfoInit();
		}
		else QMessageBox::information(this, str2qstr("��ʾ"), str2qstr("ԤԼʧ�ܣ�"), QMessageBox::Ok);
		break;
	case TDelete:
				ui->tableResult->removeRow(row);
		break;
	default:
		break;
	}
}
//��ʾ��Ϣ
void MainWindow::ShowMsg()
{
	msgWidget *msg = new msgWidget;
	
	for (int i = 0; i < MAX_B; i++)
	{
		if (CurrentClient->message[i] != 0)
		{
			msg->addMsg(i, CurrentClient->OrderedBook[i]);
		}
	}
	QObject::connect(msg, &msgWidget::msgClicked, this, &MainWindow::DealMsgClicked);
	msg->show();
}
//ɾ���û�
void MainWindow::DeleteClient()
{
	auto r=ui->tableClient->currentRow();
	cancel_client(SearchedClient[r]->id);
	ui->tableClient->removeRow(r);
}
//�û������Ϣ����
void MainWindow::DealMsgClicked(bool decision,int index)
{
	OrdertoBorrow(decision, CurrentClient, &totalBorrowedBook, BookInfo, day, index);
	ClientInfoInit();
}
//10�����¼����һ��
void MainWindow::mousePressEvent(QMouseEvent * event)
{
	int duration = Time.restart();
	if (duration > 10) day += duration / 10;
}

//�û������ʼ��
void MainWindow::ClientInit()
{
	ui->ButtonSearch->setStyleSheet(SideButtonStyle);
	ui->ButtonReturn->setStyleSheet(SideButtonStyle);
	ui->ButtonInfo->setStyleSheet(SideButtonStyle);
	ui->label->setStyleSheet("background-color: rgb(60, 195, 245)");
	ui->ButtonSearch->setFocus();

	ClientSearchInit();
	ClientReturnInit();
	ClientInfoInit();
	MessageInit();
}
//����ȷ��
QString n = "first";
void MainWindow::ReturnBorrowedBook(QTableWidgetItem * Item)
{
	auto reply = QMessageBox::question(this, n, str2qstr("ȷ�Ϲ黹��"), QMessageBox::Yes | QMessageBox::No);
	if (reply == QMessageBox::Yes)
	{
		int i = 0,j=0;
		while (CurrentClient->bookNo[j] == 0) j++;
		while(i!=Item->row())
		{
			j++;
			while (CurrentClient->bookNo[j] == 0) j++;
			i++;
		}
		ReturnBook(CurrentClient->bookNo[j], CurrentClient, &totalBorrowedBook, BookInfo, day);
		//ClientInfoInit();
		//ClientReturnInit();
		//ui->tableReturn->removeRow(i);
	}
	n = "second";
}

//�û���ѯ�����ʼ��
void MainWindow::ClientSearchInit()
{
	ui->tableResult->setStyleSheet(OddTableUnitStyle);
	ui->tableResult->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui->tableResult->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui->tableResult->setShowGrid(false);
	ui->tableResult->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

	//�鼮���͸�ѡ���ʼ��
	for (auto s : category)
	{
		ui->CBoxType->addItem(str2qstr(s.second));
	}

	//�����縴ѡ���ʼ��
	for (auto s : press)
	{
		ui->CBoxPress->addItem(str2qstr(s.second));
	}

	//��ť��ʼ��
	ui->ButtonConfirm->setStyleSheet(NormalButtonStyle);

	QObject::connect(ui->ButtonConfirm, &QPushButton::clicked, this, &MainWindow::ShowSearchBook);
	QObject::connect(ui->tableResult, &QTableWidget::itemClicked, this, &MainWindow::ShowBookDtail);
}
//��������ʼ��
void MainWindow::ClientReturnInit()
{
	ui->tableReturn->setStyleSheet(OddTableUnitStyle);
	ui->tableReturn->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui->tableReturn->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui->tableReturn->setShowGrid(false);
	ui->tableReturn->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	ui->tableReturn->setRowCount(0);
	for (int i = 0; i < MAX_B; i++)
	{
		if (CurrentClient->bookNo[i] != 0)
		{
			ui->tableReturn->setRowCount(ui->tableReturn->rowCount() + 1);
			//-------------------------------ui.tableBorrowed->setItem(i, 0,new QTableWidgetItem());
			ui->tableReturn->setItem(i, 0, new QTableWidgetItem(CurrentClient->BorrowedBook[i]));
			ui->tableReturn->setItem(i, 1, new QTableWidgetItem(str2qstr(to_string(CurrentClient->bookNo[i]))));
			ui->tableReturn->setItem(i, 2, new QTableWidgetItem(str2qstr(to_string(CurrentClient->time[i]))));
			ui->tableReturn->setItem(i, 3, new QTableWidgetItem(str2qstr(to_string(MAX_DAYS - CurrentClient->time[i]))));
		}
	}

	QObject::connect(ui->tableReturn, &QTableWidget::itemClicked, this, &MainWindow::ReturnBorrowedBook,Qt::UniqueConnection);
}
//�û���Ϣ�����ʼ��
void MainWindow::ClientInfoInit()
{
	
	ui->stackedWidgetC->removeWidget(ui->PageInfo);
	ui->stackedWidgetC->insertWidget(2, new ClientDetail(CurrentClient));
}
//��Ϣ�����ʼ��
void MainWindow::MessageInit()
{
	int flag = 0;
	for (int i = 0; i < MAX_B; i++)
	{
		if (CurrentClient->message[i]) flag = 1;
	}
	QWidget *spacer = new QWidget(this);
	spacer->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
	ui->toolBar->addWidget(spacer);
	if(flag) msgAction = new QAction(QIcon("msg_in.png"), "new", this);
	else msgAction = new QAction(QIcon("msg_void.png"), "new", this);
	QAction *quitAction= new QAction(QIcon("quit.png"), "new", this);
	ui->toolBar->addAction(msgAction);
	ui->toolBar->addAction(quitAction);
	QObject::connect(msgAction, &QAction::triggered, this, &MainWindow::ShowMsg);
	QObject::connect(quitAction, &QAction::triggered, this, &MainWindow::close);
}

//����Ա�����ʼ��
void MainWindow::AdminInit()
{
	ui->ButtonSearchBA->setStyleSheet(SideButtonStyle);
	ui->ButtonSearchCA->setStyleSheet(SideButtonStyle);
	ui->ButtonBuyA->setStyleSheet(SideButtonStyle);
	ui->label_2->setStyleSheet("background-color: rgb(60, 195, 245)");
	ui->ButtonSearchBA->setFocus();

	ui->stackedWidgetA->removeWidget(ui->PageSearchBA);
	ui->stackedWidgetA->insertWidget(0, ui->PageSearch);
	ClientSearchInit();
	AdminSearchCInit();
	AdminBuyInit();
	ui->stackedWidgetA->setCurrentIndex(0);

}
//�����û������ʼ��
void MainWindow::AdminSearchCInit()
{
	ui->tableClient->setStyleSheet(OddTableUnitStyle);
	ui->tableClient->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui->tableClient->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui->tableClient->setShowGrid(false);
	ui->tableClient->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

	ui->comboBoxType->addItem(str2qstr("ѧ��"));
	ui->comboBoxType->addItem(str2qstr("��ʦ"));

	for (auto s : school)
	{
		ui->comboBoxSchool->addItem(str2qstr(s.second));
	}

	QObject::connect(ui->ButtonClientSearch, &QPushButton::clicked, this, &MainWindow::ShowSearchClient);
}

void MainWindow::BuyBook()
{
	QString name = ui->lineBuyName->text();
	QString writer = ui->lineBuyAuthor->text();
	int press = ui->CBoxPress->currentIndex();
	int number= stoi(qstr2str(ui->lineBuyAmount->text()));
	int type = ui->CBoxType->currentIndex();
	double price = stof(qstr2str(ui->lineBuyPrice->text()));
	//----------------��������鼮��Ϣ���ݸ����麯��
	buy_book(name, writer, press, type, number, price, day);
	
	//���������
	ui->lineBuyName->clear();
	ui->lineBuyAuthor->clear();
	ui->lineBuyAmount->clear();
	ui->lineBuyPrice->clear();
	ui->CBoxPress->setCurrentIndex(0);
	ui->CBoxType->setCurrentIndex(0);
}
//��������ʼ��
void MainWindow::AdminBuyInit()
{
	for (auto s : category)
	{
		ui->BoxBuyCategory->addItem(str2qstr(s.second));
	}
	for (auto s : press)
	{
		ui->BoxBuyPress->addItem(str2qstr(s.second));
	}

	QObject::connect(ui->pushButtonBuyConfirm, &QPushButton::clicked, this, &MainWindow::BuyBook);
}

//����鼮�б��е�ĳһ�к���ʾ�鼮����
void MainWindow::ShowBookDtail(QTableWidgetItem * Item)
{
	QTableWidget *CurrentWidget = (QTableWidget *)sender();
	DetailType t;
	Book *TargetBook = SearchedBook[Item->row()];

	if (CurrentClient->type == ADMIN) t = TDelete;
	//else if (CurrentWidget == ui->tabBorrowed) t = TReturn;
	else if (CurrentWidget == ui->tableResult)
	{ 
		if (TargetBook->currentNumber > 0) t = TBorrow;
		else t = TOrder;
	}

	BookDetail *BD = new BookDetail(TargetBook, Item->row(), t);
	BD->setAttribute(Qt::WA_DeleteOnClose);
	BD->show();
	QObject::connect(BD, &BookDetail::changeItem, this, &MainWindow::ChangeBook);
}
//��ʾ�û���ϸ��Ϣ
void MainWindow::ShowClientDetail(QTableWidgetItem * Item)
{
	Client *TargetClient = SearchedClient[Item->row()];
	
	ClientDetail *CD = new ClientDetail(TargetClient);
	CD->setAttribute(Qt::WA_DeleteOnClose);
	CD->show();
	
	QObject::connect(CD, &ClientDetail::deleted, this, &MainWindow::DeleteClient);
}




#include "ClientDetail.h"

ClientDetail::ClientDetail(Client *TC, QWidget *parent)
	: TargetClient(TC),QWidget(parent)
{
	ui.setupUi(this);
	ui.textName->setText(TargetClient->name);
	ui.textSchool->setText(str2qstr(school[TargetClient->school]));
	ui.textType->setText(str2qstr(TargetClient->type == STUDENT ? "学生" : "教师"));
	ui.textNumber->setText(str2qstr(to_string(TargetClient->number)));
	ui.textID->setText(str2qstr(to_string(TargetClient->id)));
	ui.textCredit->setText(str2qstr(to_string(TargetClient->credit)));
	ui.textAuthority->setText(str2qstr(to_string(TargetClient->authority)));
	ui.textPw->setText(TargetClient->password);
	//ui.textOrder->setText(TargetClient->OrderedBook[0]);

	TableBorrowInit();
	ListOrderInit();
	QObject::connect(ui.pushButton, &QPushButton::clicked, this, &ClientDetail::deleted);
	QObject::connect(ui.pushButtonClose, &QPushButton::clicked, this, &ClientDetail::close);
}

void ClientDetail::HideButton()
{
	ui.pushButton->hide();
	ui.pushButtonClose->hide();
}

ClientDetail::~ClientDetail()
{
	//delete TargetClient;
}

void ClientDetail::TableBorrowInit()
{
	for (int i = 0; i < MAX_B; i++)
	{
		if (TargetClient->bookNo[i] != 0)
		{
			ui.tableBorrowed->setRowCount(ui.tableBorrowed->rowCount() + 1);
			//-------------------------------ui.tableBorrowed->setItem(i, 0,new QTableWidgetItem());
			ui.tableBorrowed->setItem(i, 0, new QTableWidgetItem(TargetClient->BorrowedBook[i]));
			ui.tableBorrowed->setItem(i, 1, new QTableWidgetItem(str2qstr(to_string(TargetClient->bookNo[i]))));
			ui.tableBorrowed->setItem(i, 2, new QTableWidgetItem(str2qstr(to_string(TargetClient->time[i]))));
			ui.tableBorrowed->setItem(i, 3, new QTableWidgetItem(str2qstr(to_string(MAX_DAYS - TargetClient->time[i]))));
		}
	}
}

void ClientDetail::ListOrderInit()
{
	for (int i = 0; i < MAX_B; i++)
	{
		if (TargetClient->OrderedBook[i] != "aaa")
		{
			ui.ListOrdered->addItem(TargetClient->OrderedBook[i]);
		}
	}
}

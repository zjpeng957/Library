#include "BookTabWidget.h"

BookTabWidget::BookTabWidget(Book *TB, QWidget *parent)
	: TargetBook(TB),QWidget(parent)
{
	ui.setupUi(this);

	TabBorrowInit();
	TabOrderInit();
	TabBuyInit();
}

BookTabWidget::~BookTabWidget()
{
}

void BookTabWidget::TabBorrowInit()
{
	for (int i = 0; i < MAX_B&&TargetBook->number[i]!=0; i++)
	{
		if (TargetBook->status[i] != 0)
		{
			ui.tableBorrow->setRowCount(ui.tableBorrow->rowCount() + 1);
			ui.tableBorrow->setItem(i, 0, new QTableWidgetItem(str2qstr(to_string(TargetBook->number[i]))));
			ui.tableBorrow->setItem(i, 1, new QTableWidgetItem(str2qstr(to_string(TargetBook->status[i]))));
			ui.tableBorrow->setItem(i, 2, new QTableWidgetItem(str2qstr("第" + to_string(TargetBook->BorrowTime[i]) + "天")));
			ui.tableBorrow->setItem(i, 3, new QTableWidgetItem(str2qstr(to_string(MAX_DAYS-TargetBook->BorrowTime[i]) + "天")));
		}
	}
}

void BookTabWidget::TabOrderInit()
{
	for (int i = 0; i < TargetBook->ordered.size(); i++)
	{
		ui.tableOrder->setRowCount(ui.tableOrder->rowCount() + 1);
		ui.tableOrder->setItem(i, 0, new QTableWidgetItem(str2qstr(to_string(TargetBook->ordered[i]))));
		//ui.tableOrder->setItem(i, 1, new QTableWidgetItem(str2qstr("第"+to_string(TargetBook->OrderTime[i])+"天")));
	}
}

void BookTabWidget::TabBuyInit()
{
	for (int i = 0; i < MAX_B&&TargetBook->number[i] != 0; i++)
	{
		ui.tableBuy->setRowCount(ui.tableBuy->rowCount() + 1);
		ui.tableBuy->setItem(i, 0, new QTableWidgetItem(str2qstr(to_string(TargetBook->number[i]))));
		ui.tableBuy->setItem(i, 1, new QTableWidgetItem(str2qstr("第"+to_string(TargetBook->buyTime[i])+"天")));
	}
}



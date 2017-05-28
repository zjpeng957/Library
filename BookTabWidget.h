#pragma once
//�鼮�Ľ��ġ�ԤԼ�����������
#include <QWidget>
#include "ui_BookTabWidget.h"
#include "book.h"
#include "global.h"

class BookTabWidget : public QWidget
{
	Q_OBJECT

public:
	BookTabWidget(Book *TB, QWidget *parent = Q_NULLPTR);
	~BookTabWidget();

private:
	void TabBorrowInit();
	void TabOrderInit();
	void TabBuyInit();

	Book *TargetBook;
	Ui::BookTabWidget ui;
};

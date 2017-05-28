#pragma once
//书籍的借阅、预约购入详情界面
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

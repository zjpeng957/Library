#pragma once
//书籍详情界面
#include <QWidget>
#include "ui_BookDetail.h"
#include "global.h"
#include "book.h"
#include "BookTabWidget.h"

enum DetailType
{
	TBorrow,TOrder,TDelete,TReturn,TNorder
};

class BookDetail : public QWidget
{
	Q_OBJECT

public:
	BookDetail(Book *Target,int r, DetailType t, QWidget *parent = Q_NULLPTR);
	~BookDetail();
signals:
	void changeItem(int row, DetailType type);
	void on_Buttonbnr_clicked();
private:
	void present();
	void OpenMore();
	Ui::BookDetail ui;
	Book *TargetBook;
	int row;
	DetailType type;
};

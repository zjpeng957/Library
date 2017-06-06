#pragma once

#include <QWidget>
#include "ui_dbook.h"
#include "global.h"
#include "book.h"

class DBook : public QWidget
{
	Q_OBJECT

public:
	DBook(Book *target, QWidget *parent = Q_NULLPTR);
	~DBook();

	void DeleteSure();
signals:
	void DeleteNo(unsigned n);
private:
	Ui::DBook ui;
};

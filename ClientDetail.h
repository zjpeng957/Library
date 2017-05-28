#pragma once
//用户详情界面
#include <QWidget>
#include "ui_ClientDetail.h"
#include "client.h"
#include "global.h"

class ClientDetail : public QWidget
{
	Q_OBJECT

public:
	ClientDetail(Client *TC, QWidget *parent = Q_NULLPTR);
	void HideButton();
	~ClientDetail();
	void TableBorrowInit();
	void ListOrderInit();
signals:
	void deleted();
private:
	
	Ui::ClientDetail ui;
	Client *TargetClient;
	int row;
};

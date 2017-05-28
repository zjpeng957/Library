#pragma once
//消息界面
#include <QWidget>
#include <qmessagebox.h>
#include <qstring.h>
#include <qlabel.h>
#include <vector>
#include "global.h"
#include "ui_msgWidget.h"

class msgWidget : public QWidget
{
	Q_OBJECT

public:
	msgWidget(QWidget *parent = Q_NULLPTR);
	~msgWidget();
	void addMsg(int i, QString msg);
signals:
	void msgClicked(bool decision,int index);
private:
	void ChooseMsg(QListWidgetItem *Item);
	Ui::msgWidget ui;
	vector<int> msgIndex;
};

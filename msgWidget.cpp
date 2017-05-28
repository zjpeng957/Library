#include "msgWidget.h"

msgWidget::msgWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.listWidget, &QListWidget::itemClicked, this, &msgWidget::ChooseMsg);
}

msgWidget::~msgWidget()
{
}
//增加要显示的信息
void msgWidget::addMsg(int i, QString msg)
{
	ui.listWidget->addItem(str2qstr("您预约的书《")+msg+str2qstr("》到了"));
	msgIndex.push_back(i);
}
//用户选择某一条信息
void msgWidget::ChooseMsg(QListWidgetItem * Item)
{
	auto reply = QMessageBox::question(this, str2qstr("预约转借出"), str2qstr("确认借阅？"),
					QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
	if (reply != QMessageBox::Cancel)
	{
		emit msgClicked(reply==QMessageBox::Yes?true:false, msgIndex[ui.listWidget->currentRow()]);
		close();
	}
}

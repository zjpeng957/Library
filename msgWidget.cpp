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
//����Ҫ��ʾ����Ϣ
void msgWidget::addMsg(int i, QString msg)
{
	ui.listWidget->addItem(str2qstr("��ԤԼ���顶")+msg+str2qstr("������"));
	msgIndex.push_back(i);
}
//�û�ѡ��ĳһ����Ϣ
void msgWidget::ChooseMsg(QListWidgetItem * Item)
{
	auto reply = QMessageBox::question(this, str2qstr("ԤԼת���"), str2qstr("ȷ�Ͻ��ģ�"),
					QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
	if (reply != QMessageBox::Cancel)
	{
		emit msgClicked(reply==QMessageBox::Yes?true:false, msgIndex[ui.listWidget->currentRow()]);
		close();
	}
}

#include "BookDetail.h"

BookDetail::BookDetail(Book *Target,int r, DetailType t, QWidget *parent)
	: QWidget(parent),TargetBook(Target),row(r),type(t)
{
	ui.setupUi(this);
	
	switch (type)
	{
	case TBorrow:ui.Buttonbnr->setText(str2qstr("����"));
		break;
	case TOrder:ui.Buttonbnr->setText(str2qstr("ԤԼ"));
		break;
	case TDelete:ui.Buttonbnr->setText(str2qstr("ɾ��"));
		QObject::connect(ui.ButtonOthers, &QPushButton::clicked, this, &BookDetail::OpenMore);
		break;
	case TReturn:ui.Buttonbnr->setText(str2qstr("����"));
		break;
	case TNorder:ui.Buttonbnr->setText(str2qstr("ȡ��ԤԼ"));
		break;
	default:
		break;
	}
	present();
	QObject::connect(ui.ButtonCancel, &QPushButton::clicked, this, &BookDetail::close);
}

BookDetail::~BookDetail()
{
}

void BookDetail::on_Buttonbnr_clicked()
{
	close();
	emit changeItem(row, type);
}

//��ʾ�鼮��ϸ��Ϣ
void BookDetail::present()
{
	ui.textName->setText(TargetBook->name);
	ui.textWriter->setText(TargetBook->writer);
	ui.textPress->setText(str2qstr(press[TargetBook->press]));
	ui.textType->setText(str2qstr(category[TargetBook->category]));
	ui.textAmount->setText(str2qstr(to_string(TargetBook->totalNumber)));
	ui.textRest->setText(str2qstr(to_string(TargetBook->currentNumber)));

	string numberList;
	for (int i = 0; i < MAX_B &&TargetBook->number[i] != 0; i++)
	{
		if ((i+1) % 6 == 0) numberList = numberList + "\n";
		numberList = numberList + to_string(TargetBook->number[i]) + " ";
	}
	ui.textNo->setText(str2qstr(numberList));
}

//�鿴ԤԼ�����ĸ�����û��Լ���Ĺ�����Ϣ
void BookDetail::OpenMore()
{
	BookTabWidget *BTW=new BookTabWidget(TargetBook);
	BTW->setAttribute(Qt::WA_DeleteOnClose);
	BTW->show();
}


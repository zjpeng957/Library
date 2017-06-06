#include "dbook.h"

DBook::DBook(Book *target,QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	for (int i = 0; i < MAX_B; i++)
	{
		if (target->number[i] != 0)
		{
			ui.comboBox->addItem(str2qstr(to_string(target->number[i])));
		}
	}

	QObject::connect(ui.ButtonDiscard, &QPushButton::clicked, this, &QWidget::close);
	QObject::connect(ui.ButtonSure, &QPushButton::clicked, this, &DBook::DeleteSure);
}

DBook::~DBook()
{
}

void DBook::DeleteSure()
{
	auto t = ui.comboBox->currentText();
	unsigned n = stoi(qstr2str(t));
	emit DeleteNo(n);
	close();
}

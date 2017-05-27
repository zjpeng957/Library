#include "registerdialog.h"
#include "ui_registerdialog.h"
#include "header.h"

registerDialog::registerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registerDialog)
{
    ui->setupUi(this);
    ui->comboBoxType->addItem("学生");
    ui->comboBoxType->addItem("教师");

	for (auto s : school)
	{
		ui->comboBoxSchool->addItem(str2qstr(s.second));
	}
    setStyleSheet("background-color:rgb(235, 242, 249)");
    ui->ButtonBack->setStyleSheet(NormalButtonStyle);
    ui->ButtonRegister->setStyleSheet(NormalButtonStyle);
}

registerDialog::~registerDialog()
{
    delete ui;
}

void registerDialog::on_ButtonRegister_clicked()
{
	//---------获取用户输入，生成用户编号并将用户信息写入链表
	Client *CurrentClient;
	/*CurrentClient->name = "zjp";
    CurrentClient->number=2015211;
	CurrentClient->type = STUDENT;
	CurrentClient->school = 0;
	CurrentClient->id = 2015444;
	CurrentClient->credit = 100;
	CurrentClient->password = "wwfwiw";*/
	QString name = ui->lineName->text();
	QString pw = ui->linePw->text();
	unsigned id = stoi(qstr2str(ui->lineID->text()));
	CurrentClient = client_register(name, pw, ui->comboBoxType->currentIndex(), ui->comboBoxSchool->currentIndex(), id);
	while (CurrentClient==nullptr)
	{
		CurrentClient = client_register(name, pw, ui->comboBoxType->currentIndex(), ui->comboBoxSchool->currentIndex(), id);
	}
	QString info = str2qstr(to_string(CurrentClient->id));
	auto reply = QMessageBox::information(this, "succeed!", info, QMessageBox::Ok);
	if (reply == QMessageBox::Ok)
	{
		accept();
		totalClient++;
		emit registerClient(CurrentClient);
	}
}

void registerDialog::on_ButtonBack_clicked()
{
	Client *CurrentClient = new Client;
    CurrentClient->number=0;
    accept();
    emit registerClient(CurrentClient);
}

#include "logindialog.h"
#include "ui_logindialog.h"
#include "mainwindow.h"
#include "registerdialog.h"
#include<QObject>
#include<regex>
LoginDialog::LoginDialog(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::LoginDialog)
{
	ui->setupUi(this);
	ui->Login->setStyleSheet(NormalButtonStyle);
	ui->SignUp->setStyleSheet(NormalButtonStyle);
	ui->Login->setFocus();
}

LoginDialog::~LoginDialog()
{
	delete ui;
}

void LoginDialog::returnedClient(Client* CurrentClient)
{
	if (CurrentClient->number != 0)
	{
		accept();
		emit LoginType(CurrentClient);
	}
}

void LoginDialog::on_Login_clicked()
{
	
	if (ui->NumberText->text() != QString() && ui->PwText->text()!=QString())
	{
		//¹ÜÀíÔ±µÇÂ¼
		if (ui->NumberText->text() == "admin")
		{
			if (ui->PwText->text() == "123456")
			{
				Client *admin = new Client;
				admin->name = "admin";
				admin->password = "123456";
				admin->type = ADMIN;
				accept();
				emit LoginType(admin);
			}
			else
			{
				ui->WarnLabel->setText(str2qstr("µÇÂ¼Ê§°Ü!"));
			}
		}
		else
		{//ÆÕÍ¨ÓÃ»§
			regex reg("^[0-9]+$");
			smatch result;
			string Uid = qstr2str(ui->NumberText->text());
			if (regex_match(Uid,result,reg))
			{
				unsigned UserId = stoi(qstr2str(ui->NumberText->text()));
				string pw = qstr2str(ui->PwText->text());
				Client *CurrentClient = login(UserId, pw);
				if (CurrentClient != nullptr)
				{
					accept();
					emit LoginType(CurrentClient);
				}
				else
				{
					ui->WarnLabel->setText(str2qstr("µÇÂ¼Ê§°Ü!"));
				}
			}
			else
			{
				ui->WarnLabel->setText(str2qstr("ÕËºÅÓ¦ÎªÊý×Ö£¡"));
			}
		}
	}
	else
	{
		ui->WarnLabel->setText(str2qstr("µÇÂ¼Ê§°Ü!"));
	}
}

void LoginDialog::on_SignUp_clicked()
{
	registerDialog *Reg = new registerDialog;

	QObject::connect(Reg, &registerDialog::registerClient, this, &LoginDialog::returnedClient);
	Reg->setAttribute(Qt::WA_DeleteOnClose);
	Reg->exec();
}

void LoginDialog::saveToQuit()
{
	inter_to_book(BookInfo);
	inter_to_client(ClientInfo);
	saveCount();
	accept();
}

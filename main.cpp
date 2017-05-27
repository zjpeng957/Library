#include "mainwindow.h"
#include "logindialog.h"
#include <QApplication>
#include <QStyle>
#include <QObject>
#include "global.h"

int main(int argc, char *argv[])
{	
	dataInit();
	client_to_inter(ClientInfo);
	book_to_inter(BookInfo);
    QApplication a(argc, argv);
    MainWindow win;
    LoginDialog ld,temp;
    QObject::connect(&ld,&LoginDialog::LoginType,&win,&MainWindow::ChoosePage);

    ld.show();
    if(ld.exec()==LoginDialog::Accepted)
        win.show();
	QObject::connect(&a, &QApplication::aboutToQuit, &temp, &LoginDialog::saveToQuit);
    return a.exec();
	/*client_to_inter(ClientInfo);
	book_to_inter(BookInfo);
	ClientInfo = new Client;
	ClientInfo->name = str2qstr("张俊鹏");
	ClientInfo->Amount = 1;
	ClientInfo->authority = 10;
	ClientInfo->bookNo[0] = 1311;
	ClientInfo->credit = 100;
	ClientInfo->id = 2015211444;
	//ClientInfo->message[0];
	//for (int i = 1; i < MAX_B; i++) ClientInfo->message[i] = 0;
	ClientInfo->next = nullptr;
	ClientInfo->number = 2015211444;
	ClientInfo->BorrowedBook[0] = str2qstr("算法导论");
	ClientInfo->password = str2qstr("191");
	ClientInfo->school = 1;
	ClientInfo->time[0] = 1;
	ClientInfo->type = STUDENT;

	inter_to_client(ClientInfo);
	//return 0;

	BookInfo = new Book;
	BookInfo->name = str2qstr("算法导论");
	BookInfo->writer = "ast";
	BookInfo->BorrowTime[0] = 1;
	//BookInfo->BorrowTime[1] = 0;
	BookInfo->buyTime[0] = 1;
	//BookInfo->buyTime[1] = 0;
	BookInfo->category = 1;
	BookInfo->currentNumber = 1;
	BookInfo->next = nullptr;
	BookInfo->number[0] = 1311;
	BookInfo->number[1] = 12345;
	//BookInfo->number[1] = 0;
	BookInfo->ordered.push_back(1444);
	//BookInfo->OrderTime.push_back(2);
	BookInfo->press = 2;
	BookInfo->price = 12.1;
	BookInfo->status[0] = 2015211444;
	//BookInfo->status[1] = 0;
	BookInfo->totalNumber = 2;
	inter_to_book(BookInfo);
	return 0;*/
}

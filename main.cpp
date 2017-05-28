#include "mainwindow.h"
#include "logindialog.h"
#include <QApplication>
#include <QStyle>
#include <QObject>
#include "global.h"

int main(int argc, char *argv[])
{	
	//数据初始化
	dataInit();
	client_to_inter(ClientInfo);
	book_to_inter(BookInfo);
    QApplication a(argc, argv);
    MainWindow win;
    LoginDialog ld,temp;//ld为登录窗口，temp为接受退出时间的变量
    QObject::connect(&ld,&LoginDialog::LoginType,&win,&MainWindow::ChoosePage);

    ld.show();
    if(ld.exec()==LoginDialog::Accepted)
        win.show();
	QObject::connect(&a, &QApplication::aboutToQuit, &temp, &LoginDialog::saveToQuit);
    return a.exec();
}

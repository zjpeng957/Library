#include "mainwindow.h"
#include "logindialog.h"
#include <QApplication>
#include <QStyle>
#include <QObject>
#include "global.h"

int main(int argc, char *argv[])
{	
	//���ݳ�ʼ��
	dataInit();
	client_to_inter(ClientInfo);
	book_to_inter(BookInfo);
    QApplication a(argc, argv);
    MainWindow win;
    LoginDialog ld,temp;//ldΪ��¼���ڣ�tempΪ�����˳�ʱ��ı���
    QObject::connect(&ld,&LoginDialog::LoginType,&win,&MainWindow::ChoosePage);

    ld.show();
    if(ld.exec()==LoginDialog::Accepted)
        win.show();
	QObject::connect(&a, &QApplication::aboutToQuit, &temp, &LoginDialog::saveToQuit);
    return a.exec();
}

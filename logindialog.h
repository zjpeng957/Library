#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include "header.h"
#include"client.h"
#include "global.h"
#include "login.h"
namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    void returnedClient(Client *CurrentClient);
	void saveToQuit();
    ~LoginDialog();
signals:
    void LoginType(Client *CurrentClient);

private slots:
    void on_Login_clicked();

    void on_SignUp_clicked();

	

private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H

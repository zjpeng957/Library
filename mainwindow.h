#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qtablewidget.h>
#include <qdatetime.h>
#include <qmessagebox.h>
#include "BookDetail.h"
#include "ClientDetail.h"
#include <QObject>
#include <vector>
#include "client.h"
#include "booklist.h"
#include "book.h"
#include"global.h"
#include "msgWidget.h"
#include "buy.h"
#include "SearchAndCount.h"
#include "BorrowAndReturn.h"
#include "ClientInfo.h"
#include "BookInfo.h"

const int MAX_LINE = 20;

namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void ChoosePage(Client *CurrentClient);

private slots:
    void on_ButtonSearch_clicked();

    void on_ButtonSearchCA_clicked();

    void on_ButtonBuyA_clicked();

    void on_ButtonHelpA_clicked();

    void on_ButtonSearchBA_clicked();

    void on_ButtonReturn_clicked();

    void on_ButtonInfo_clicked();

    void on_ButtonHelp_clicked();

	void ChangeBook(int row,DetailType type);

	void ShowMsg();

	void DeleteClient();
	

	void DealMsgClicked(bool decision,int index);
protected:
	void mousePressEvent(QMouseEvent *event);
private:
    Ui::MainWindow *ui;

    void ClientInit();
    void ClientSearchInit();
    void ClientReturnInit();
    void ClientInfoInit();
	void MessageInit();

    void AdminInit();
    
    void AdminSearchCInit();
    void AdminBuyInit();

	void ShowSearchBook();
	void ShowSearchClient();

	void ShowBookDtail(QTableWidgetItem *Item);
	void ShowClientDetail(QTableWidgetItem *Item);

	void BuyBook();
	void ReturnBorrowedBook(QTableWidgetItem *Item);
	void ShowBorrowRate();
    Client *CurrentClient;
	Book *SearchedBook[MAX_BOOK];
	Client *SearchedClient[MAX_C];
	QAction *msgAction;
	msgWidget *msg;
	QTime Time;
};

#endif // MAINWINDOW_H

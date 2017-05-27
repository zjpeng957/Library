#ifndef BOOK_H
#define BOOK_H
#include<Qstring>
#include<deque>
using namespace std;
#include "client.h"
enum BItem{BookN,BName,Writer,Press,Category};

class Book{
public:
	Book();
    unsigned int number[MAX_B];//编号
    QString name;//书名
    QString writer;//作者
    int press;//出版社
    int category;//类别
    unsigned int buyTime[MAX_B];//购入时间(与书号一一对应）
    int totalNumber;//总数量
    int currentNumber;//当前数量
    unsigned int status[MAX_B];//借阅状态（书号与借阅人号一一对应）
	unsigned int BorrowTime[MAX_B];//借书时间（与书号一一对应）
    deque<unsigned> ordered;//预约用户队列
	//deque<unsigned> OrderTime;//预约时间（与用户队列一一对应）
    double price;//价格
	Book *next = nullptr;
};
#endif // BOOK_H

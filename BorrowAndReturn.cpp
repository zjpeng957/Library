#include"fuction.h"
#include"header.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"global.h"

//计算用户的信用分数
void ComputeCredit(Client *customer, unsigned int time)
{
	int i;

	for (i = 0;i < MAX_B;i++)
	{
		if (customer->time[i] != '\0')
		{
			if (time - customer->time[i]>20)//若借书时间超过20天
			{
				customer->credit -= 5;
			}
		}
	}
}


//借书
int BorrowBook(Book *BorrowingBook, Client *customer, int *TotalBorrowedBook,unsigned int time)
{
	int result;

	if (customer->credit < 60 ||customer->Amount > 10)//如果用户的信用分数过低或借书数量超过10本
	{
		result = 0;
	}
	else
	{
		if (BorrowingBook->currentNumber)//如果还有剩余书
		{
			int minB, minC;
			
			//找到编号序号最小的那本没被借的书
			for (minB = 0;BorrowingBook->status[minB] != 0;minB++);
			 
			//找到用户所借书数组的最小空闲位置
			for (minC = 0;customer->bookNo[minC] != 0;minC++);
			
			//修改书的信息
			BorrowingBook->status[minB] = customer->number;
			(BorrowingBook->currentNumber)--;

			//修改用户的信息
			customer->bookNo[minC] = BorrowingBook->number[minB];
			customer->BorrowedBook[minC] = BorrowingBook->name;
			customer->time[minC] = time;
			(customer->Amount)++;


			(*TotalBorrowedBook)++;//图书馆借书总量加一
			result = 1;
			
			//记入日志
			borrow_book(time, qstr2str(customer->name).c_str(), customer->number, customer->school, BorrowingBook->number, qstr2str(BorrowingBook->name).c_str(), qstr2str(BorrowingBook->writer).c_str(), BorrowingBook->press, BorrowingBook->totalNumber, 1);
		}
		else
		{
			result = -1;//书已被借出
		}
	}

	return result;
}

//还书
bool ReturnBook(const unsigned long number , Client *customer, int *TotalBorrowedBook, Book *head, unsigned int time)
{
	Book *BorrowingBook[10];
	int result=0,flag=1;

	//根据编号找到该书
	SearchBook("\0", 0, 0, "\0", number, BorrowingBook, head);

	while (flag)
	{
		int positionB,positionC;

		//找到被还的书的序号
		for (positionB = 0;BorrowingBook[0]->status[positionB] != customer->number;positionB++);
		
		//找到被还的书在用户所借书中的序号
		for (positionC = 0;customer->bookNo[positionC] != BorrowingBook[0]->number[positionB];positionC++);
		

		//修改书的信息
		BorrowingBook[0]->status[positionB] = '\0';
		(BorrowingBook[0]->currentNumber)++;

		//修改用户的信息
		customer->bookNo[positionC] = 0;
		customer->BorrowedBook[positionC] = "aaa";
		customer->time[positionC] = 0;
		(customer->Amount)--;


		(*TotalBorrowedBook)--;//图书馆借书总量减一
		result = 1;
		flag = 0;
		
		//记入日志
		back_book(time, qstr2str(customer->name).c_str(), customer->number, customer->school, BorrowingBook[0]->number, qstr2str(BorrowingBook[0]->name).c_str(), qstr2str(BorrowingBook[0]->writer).c_str(), BorrowingBook[0]->press, BorrowingBook[0]->totalNumber, 1);
	}

	if (result)
		return true;
	else
		return false;
}

//用户预约书
bool OrderBook(Book *BorrowingBook, Client *customer)
{
	int result=0,min,flag;

	//判断用户能否预约书。能，flag=1，min=用户预约数组中能用的最小编号;不能，flag=0。
	for (min = 0,flag=0;min < MAX_B&&(!flag);min++)
	{
		if(customer->OrderedBook==QString())
		//if ('\0' == customer->OrderedBook[min][0])
			flag = 1;
	}

	if (flag)//如果用户能预约书(用户已预约的书的数量小于MAX_B)
	{
		//将用户编号写入该书的预约用户队列
		BorrowingBook->ordered.push_back(customer->number);

		//将用户预约的书改为该书
		//strcpy_s(customer->OrderedBook[min], strlen(BorrowingBook->name), BorrowingBook->name);
		customer->OrderedBook[min] = BorrowingBook->name;
		result = 1;
	}

	if (result)
		return true;
	else
		return false;
}


//预约提醒
void OrderReminder(Client *customer,Book *head)
{
	Book *orderedbook;
	unsigned int number;
	int i;

	//用户预约几本书查几次
	for (i = 0;i < MAX_B;i++)
	{
		if(customer->OrderedBook[i]!=QString())
		//if (customer->OrderedBook[i][0] != '\0')
		{
			//通过预约的书的名字找到该书的类
			SearchBook(qstr2str(customer->OrderedBook[i]).c_str(), 0, 0, "\0", 0, &orderedbook, head);

			//获得该书预约队列的首个用户的编码
			number = orderedbook->ordered.front();

			//如果预约的书可以借了且该用户是预约队列的第一个人
			if ((number == customer->number) && (orderedbook->currentNumber > 0))
			{
				customer->message[i] = 1;
				//int i = 0;
				//while (customer->messager[i] != QString()) i++;
				//customer->messager[i] = str2qstr("您预约的书《" + qstr2str(orderedbook->name) + "》到了");
			}
		}
	}

	//SearchBook(qstr2str(customer->OrderedBook).c_str(), 0, 0, "\0", 0, &orderedbook, head);
}

//预约转借书,decision:0,不借；1，借。num：用户要借预约的第几本书
int OrdertoBorrow(const int decision, Client *customer, int *TotalBorrowedBook, Book *head,unsigned int time,int num)
{
	int result;
	Book *orderedbook;
	
	//通过书名找到该书的类
	SearchBook(qstr2str(customer->OrderedBook[num]).c_str(), 0, 0, "\0", 0, &orderedbook, head);
	//SearchBook(qstr2str(customer->OrderedBook).c_str(), 0, 0, "\0", 0, &orderedbook, head);

	if (decision)//选择借书
	{
		result = BorrowBook(orderedbook,customer, TotalBorrowedBook, time);
	}
	else//选择不借则取消预约
	{
		int i;

		//除去用户类的预约信息
		for (i = 0;i < MAX_B;i++)
		{
			customer->OrderedBook[num]="aaa";
			customer->message[num] = 0;
		}

		//从该图书的预约队列中除去该用户
		//orderedbook->ordered.pop();
		orderedbook->ordered.pop_front();
		
		result = -1;
	}

	return result;
}
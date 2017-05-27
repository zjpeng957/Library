#include"client.h"
#include"book.h"
#include"global.h"
#include"buy.h"
#include"global.h"
  /*
    queue<unsigned> ordered;//预约用户队列
    仍未初始化*/

int Book_water;

int buy_book(QString bookname,QString writer,int press,int category,int num,double price,unsigned int time)
{
    int i;
    Book *newbook=NULL;
    Book *last;
    last=BookInfo;
    newbook=new Book[1];
    if(newbook==NULL)
    {
        return 0;
    }
    //strcpy(newbook->name,bookname);
	newbook->name = bookname;
    newbook->category=category;
    //strcpy(newbook->writer,writer);
	newbook->writer = writer;
    newbook->press=press;
    newbook->next=NULL;
    newbook->price=price;
    newbook->totalNumber=num;
    newbook->currentNumber=num;
    newbook->buyTime[0]=time;
	totalBook += num;
    for(i=0;i<num;i++)
    {
        newbook->status[i]=0;
        newbook->number[i]=book_making(category,press);
		//-------------------------------编号参数
        add_N_book(time,newbook->number,qstr2str(newbook->name).c_str(),qstr2str(newbook->writer).c_str(),newbook->press,newbook->totalNumber,num);
    }
	if (BookInfo == nullptr) BookInfo = newbook;
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = newbook;
	}
	
    return 1;
}

unsigned int book_making(const int category,const int press)
{
    unsigned int num=0;
    Book_water++;
    num=category*10000000+press*100000+Book_water;
    return num;
}

#include"client.h"
#include"book.h"
#include "global.h"


int buy_book(QString bookname, QString writer,int press,int category,int num,double price,unsigned int time)
{
    int i;
    Book *newbook=NULL;
    Book *last;
    last=BookInfo;
    for(newbook=BookInfo;newbook!=NULL;newbook=newbook->next)
    {
     
		if(newbook->name==bookname)
        {
            
			if(newbook->writer == writer)
            {
                for(i=0;i<num;i++)
                {
                    newbook->status[newbook->totalNumber+i]=0;
                    newbook->buyTime[newbook->totalNumber+i]=time;
                    newbook->number[newbook->totalNumber+i]=book_making(category,press);
                    //add_N_book(time,newbook->number[newbook->totalNumber+i],newbook->name,newbook->writer,newbook->press,newbook->totalNumber+num,num);
                }
                newbook->totalNumber+=num;
                newbook->currentNumber+=num;
				totalBook += num;
                return 1;
            }
        }
    }
    newbook=new Book;
    if(newbook==NULL)
    {
        return 0;
    }
    
	newbook->name = bookname;
    newbook->category=category;
    
	newbook->writer = writer;
    newbook->press=press;
    newbook->next=NULL;
    newbook->price=price;
    newbook->totalNumber=num;
    newbook->currentNumber=num;
	
    for(i=0;i<num;i++)
    {
        newbook->status[i]=0;
        newbook->number[i]=book_making(category,press);
        newbook->buyTime[i]=time;
        //add_N_book(time,newbook->number[i],newbook->name,newbook->writer,newbook->press,newbook->totalNumber,num);
    }
	if (last == nullptr)
	{
		BookInfo = newbook;
		totalBook += num;
		return 1;
	}
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=newbook;
	totalBook += num;
    return 1;
}

unsigned int book_making(const int category,const int press)
{
    unsigned int num=0;
    Book_water++;
    num=category*10000000+press*100000+Book_water;
    return num;
}

//读取书籍信息文件
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include"Client.h"
#include"Book.h" 
#include "global.h"

void book_to_inter( Book *&bookInfo)
{
	FILE *tp;
	Book *book = new Book;//用于动态申请 
	int i;
	int temp;//存临时信息 
	char tamp;
	bool flag = false;
	unsigned long t;

	//p = (Book *)malloc(sizeof( Book));//动态申请结构 
	bookInfo = book;

	fopen_s(&tp, "book.txt", "r");

	fscanf_s(tp, "%d", &temp);//文件的首信息存于temp 
	while (temp != -1)//该位置之后没有信息 
	{
		flag = true;
		for (i = 0; i < MAX_B; i++) {//读取所有编号 
			book->number[i] = temp;
			fscanf_s(tp, "%d", &temp);//编号
		}
		
		char name[MAX_L];
		fscanf(tp, "%s", name);//书名
		book->name = str2qstr(name);
		
		
		char writer[MAX_L];
		fscanf(tp, "%s", writer);//作者
		book->writer = str2qstr(writer);
		fscanf_s(tp, "%d", &(book->press));//出版社
		fscanf_s(tp, "%d", &(book->category));//类别


		
		for (i = 0; i<MAX_B; i++) {//购入时间
			fscanf_s(tp, "%d", &tamp, sizeof(char));//读空格
			
			book->buyTime[i] = tamp;
		}
		

		fscanf_s(tp, "%d", &(book->totalNumber));//总数量
		fscanf_s(tp, "%d", &(book->currentNumber));//当前数量

		
		for (i = 0; i<MAX_B; i++) {//读取所有状态 
			
			fscanf_s(tp, "%d", &book->status[i]);//借阅状态
		}
		

		fscanf_s(tp, "%d", &temp);//预约用户队列
		for (i = 0; temp != 0; i++){
			book->ordered.push_back(temp);
		    fscanf_s(tp, "%d", &temp);
         }


		fscanf_s(tp, "%lf", &(book->price));//价格

		fscanf_s(tp, "%d", &temp);//下一结构的首信息 
		if (-1 == temp)
			book->next = NULL;
		else {
			  book->next = new Book;//动态申请结构 
              book = book->next;//下一个结构
		}
	}
	if (!flag)
	{
		delete book;
		bookInfo = nullptr;
	}
	fclose(tp);
}
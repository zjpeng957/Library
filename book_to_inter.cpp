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
	unsigned long t;

	//p = (Book *)malloc(sizeof( Book));//动态申请结构 
	bookInfo = book;

	fopen_s(&tp, "book.txt", "r");

	fscanf_s(tp, "%d", &temp);//文件的首信息存于temp 
	while (temp != -1)//该位置之后没有信息 
	{
		for (i = 0; i < MAX_B; i++) {//读取所有编号 
			book->number[i] = temp;
			fscanf_s(tp, "%d", &temp);//编号
		}
		//book->number[i] = 1;

		/*fscanf_s(tp, "%c", &tamp, sizeof(char));//读空格
		fscanf_s(tp, "%c", &tamp, sizeof(char));//书名
		for (i = 0; tamp != '#'; i++) {
			book->name[i] = tamp;
			fscanf_s(tp, "%c", &tamp, sizeof(char));//读空格
			fscanf_s(tp, "%c", &tamp, sizeof(char));
		}
		book->name[i] = '\0';*/
		char name[MAX_L];
		fscanf(tp, "%s", name);//书名
		book->name = str2qstr(name);
		
		/*fscanf_s(tp, "%c", &tamp, sizeof(char));//读空格
		fscanf_s(tp, "%c", &tamp, sizeof(char));//作者
		for (i = 0; tamp != '#'; i++) {
			book->writer[i] = tamp;
			fscanf_s(tp, "%c", &tamp, sizeof(char));//读空格
			fscanf_s(tp, "%c", &tamp, sizeof(char));
		}
		book->writer[i] = '\0';*/
		char writer[MAX_L];
		fscanf(tp, "%s", writer);//作者
		book->writer = str2qstr(writer);
		fscanf_s(tp, "%d", &(book->press));//出版社
		fscanf_s(tp, "%d", &(book->category));//类别


		//fscanf_s(tp, "%c", &tamp, sizeof(char));//读空格
		//fscanf_s(tp, "%c", &tamp, sizeof(char));
		for (i = 0; i<MAX_B; i++) {//购入时间
			fscanf_s(tp, "%d", &tamp, sizeof(char));//读空格
			//fscanf_s(tp, "%d", &tamp, sizeof(char));
			book->buyTime[i] = tamp;
		}
		//book->buyTime[i] = '\0';

		fscanf_s(tp, "%d", &(book->totalNumber));//总数量
		fscanf_s(tp, "%d", &(book->currentNumber));//当前数量

		//fscanf_s(tp, "%d", &t);//文件中状态的首信息存于temp
		for (i = 0; i<MAX_B; i++) {//读取所有状态 
			//book->status[i] = t;
			fscanf_s(tp, "%d", &book->status[i]);//借阅状态
		}
		//book->status[i] = 0;

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

	fclose(tp);
}
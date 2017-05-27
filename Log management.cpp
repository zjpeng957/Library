//日志管理 
#include<stdio.h>
#include"Client.h"
#include"Book.h" 

//当天书籍增加的信息写入日志管理文件
void add_N_book(const unsigned int day, const unsigned long number[], const char* name, const char* writer, const  int press, const int totalNumber, const int buyBNumber)//buyBNumber新增书的数量 
{
	int i;
	FILE * book;

	if ((book = fopen("日志管理.txt", "a")) == NULL)//打开文件失败 
	{
		printf("无法打开文件。");
		return;
	}

	fprintf(book, "编号为'");
	for (i = 0; number[i] != 1; i++)
		fprintf(book, "%d ", number[i]);
	fprintf(book, "'的，书名为'");
	fputs(name, book);
	fprintf(book, "'的，由'");
	fputs(writer, book);
	fprintf(book, "'编辑，'");
	fprintf(book, "%d ", press);
	fprintf(book, "'出版，于%d引进%d本,当前总量为：%d", day, buyBNumber, totalNumber);
	fprintf(book, "\n");
	fclose(book);
}


//当天书籍减少的信息写入日志管理文件
void reduce_book(const unsigned int day, const unsigned long number[], const char* name, const char* writer, const int press, const int totalNumber, const int reduceBNumber)//reduceBNumber减少书的数量 
{
	int i;
	FILE * book;

	if ((book = fopen("日志管理.txt", "a")) == NULL)//打开文件失败 
	{
		printf("无法打开文件。");
		return;
	}

	fprintf(book, "编号为'");
	for (i = 0; number[i] != 1; i++)
		fprintf(book, "%d ", number[i]);
	fprintf(book, "'的，书名为'");
	fputs(name, book);
	fprintf(book, "'的，由'");
	fputs(writer, book);
	fprintf(book, "'编辑，'");
	fprintf(book, "%d ", press);
	fprintf(book, "'出版，于%d减少%d本,当前总量为：%d", day, reduceBNumber, totalNumber);
	fprintf(book, "\n");
	fclose(book);
}


//当天书籍借走的信息写入日志管理文件
void borrow_book(const unsigned int day, const char* r_name, const unsigned int r_number, const int school, const unsigned long number[], const char* name, const char* writer, const int press, const int totalNumber, const int borrowBNumber)
{
	int i;
	FILE * book;

	if ((book = fopen("日志管理.txt", "a")) == NULL)//打开文件失败 
	{
		printf("无法打开文件。");
		return;
	}

	fprintf(book, "名为'");
	fputs(r_name, book);
	fprintf(book, "'的读者，所在院系为'");
	fprintf(book, "%d ", school);
	fprintf(book, "',证件号码为'");
	fprintf(book, "%d ", r_number);
	fprintf(book, "'，与%d借走了编号为'", day);
	for (i = 0; number[i] != 1; i++)
		fprintf(book, "%d ", number[i]);
	fprintf(book, "'的，书名为'");
	fputs(name, book);
	fprintf(book, "'的，由'");
	fputs(writer, book);
	fprintf(book, "'编辑，'");
	fprintf(book, "%d ", press);
	fprintf(book, "'出版，共借走了%d本，当前总量为：%d", borrowBNumber, totalNumber);
	fprintf(book, "\n");
	fclose(book);
}


//当天书籍归还的信息写入日志管理文件
void back_book(const unsigned int day, const char* r_name, const unsigned int r_number, const int school, const unsigned long number[], const char* name, const char* writer, const int press, const int totalNumber, const int backBNumber)
{
	int i;
	FILE * book;

	if ((book = fopen("日志管理.txt", "a")) == NULL)//打开文件失败 
	{
		printf("无法打开文件。");
		return;
	}

	fprintf(book, "名为'");
	fputs(r_name, book);
	fprintf(book, "'的读者，所在院系为'");
	fprintf(book, "%d ", school);
	fprintf(book, "',证件号码为'");
	fprintf(book, "%d ", r_number);
	fprintf(book, "'，与%d借走了编号为'", day);
	for (i = 0; number[i] != 1; i++)
		fprintf(book, "%d ", number[i]);
	fprintf(book, "'的，书名为'");
	fputs(name, book);
	fprintf(book, "'的，由'");
	fputs(writer, book);
	fprintf(book, "'编辑，'");
	fprintf(book, "%d ", press);
	fprintf(book, "'出版，共还回来了%d本，当前总量为：%d", backBNumber, totalNumber);
	fprintf(book, "\n");
	fclose(book);
}
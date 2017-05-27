//��־���� 
#include<stdio.h>
#include"Client.h"
#include"Book.h" 

//�����鼮���ӵ���Ϣд����־�����ļ�
void add_N_book(const unsigned int day, const unsigned long number[], const char* name, const char* writer, const  int press, const int totalNumber, const int buyBNumber)//buyBNumber����������� 
{
	int i;
	FILE * book;

	if ((book = fopen("��־����.txt", "a")) == NULL)//���ļ�ʧ�� 
	{
		printf("�޷����ļ���");
		return;
	}

	fprintf(book, "���Ϊ'");
	for (i = 0; number[i] != 1; i++)
		fprintf(book, "%d ", number[i]);
	fprintf(book, "'�ģ�����Ϊ'");
	fputs(name, book);
	fprintf(book, "'�ģ���'");
	fputs(writer, book);
	fprintf(book, "'�༭��'");
	fprintf(book, "%d ", press);
	fprintf(book, "'���棬��%d����%d��,��ǰ����Ϊ��%d", day, buyBNumber, totalNumber);
	fprintf(book, "\n");
	fclose(book);
}


//�����鼮���ٵ���Ϣд����־�����ļ�
void reduce_book(const unsigned int day, const unsigned long number[], const char* name, const char* writer, const int press, const int totalNumber, const int reduceBNumber)//reduceBNumber����������� 
{
	int i;
	FILE * book;

	if ((book = fopen("��־����.txt", "a")) == NULL)//���ļ�ʧ�� 
	{
		printf("�޷����ļ���");
		return;
	}

	fprintf(book, "���Ϊ'");
	for (i = 0; number[i] != 1; i++)
		fprintf(book, "%d ", number[i]);
	fprintf(book, "'�ģ�����Ϊ'");
	fputs(name, book);
	fprintf(book, "'�ģ���'");
	fputs(writer, book);
	fprintf(book, "'�༭��'");
	fprintf(book, "%d ", press);
	fprintf(book, "'���棬��%d����%d��,��ǰ����Ϊ��%d", day, reduceBNumber, totalNumber);
	fprintf(book, "\n");
	fclose(book);
}


//�����鼮���ߵ���Ϣд����־�����ļ�
void borrow_book(const unsigned int day, const char* r_name, const unsigned int r_number, const int school, const unsigned long number[], const char* name, const char* writer, const int press, const int totalNumber, const int borrowBNumber)
{
	int i;
	FILE * book;

	if ((book = fopen("��־����.txt", "a")) == NULL)//���ļ�ʧ�� 
	{
		printf("�޷����ļ���");
		return;
	}

	fprintf(book, "��Ϊ'");
	fputs(r_name, book);
	fprintf(book, "'�Ķ��ߣ�����ԺϵΪ'");
	fprintf(book, "%d ", school);
	fprintf(book, "',֤������Ϊ'");
	fprintf(book, "%d ", r_number);
	fprintf(book, "'����%d�����˱��Ϊ'", day);
	for (i = 0; number[i] != 1; i++)
		fprintf(book, "%d ", number[i]);
	fprintf(book, "'�ģ�����Ϊ'");
	fputs(name, book);
	fprintf(book, "'�ģ���'");
	fputs(writer, book);
	fprintf(book, "'�༭��'");
	fprintf(book, "%d ", press);
	fprintf(book, "'���棬��������%d������ǰ����Ϊ��%d", borrowBNumber, totalNumber);
	fprintf(book, "\n");
	fclose(book);
}


//�����鼮�黹����Ϣд����־�����ļ�
void back_book(const unsigned int day, const char* r_name, const unsigned int r_number, const int school, const unsigned long number[], const char* name, const char* writer, const int press, const int totalNumber, const int backBNumber)
{
	int i;
	FILE * book;

	if ((book = fopen("��־����.txt", "a")) == NULL)//���ļ�ʧ�� 
	{
		printf("�޷����ļ���");
		return;
	}

	fprintf(book, "��Ϊ'");
	fputs(r_name, book);
	fprintf(book, "'�Ķ��ߣ�����ԺϵΪ'");
	fprintf(book, "%d ", school);
	fprintf(book, "',֤������Ϊ'");
	fprintf(book, "%d ", r_number);
	fprintf(book, "'����%d�����˱��Ϊ'", day);
	for (i = 0; number[i] != 1; i++)
		fprintf(book, "%d ", number[i]);
	fprintf(book, "'�ģ�����Ϊ'");
	fputs(name, book);
	fprintf(book, "'�ģ���'");
	fputs(writer, book);
	fprintf(book, "'�༭��'");
	fprintf(book, "%d ", press);
	fprintf(book, "'���棬����������%d������ǰ����Ϊ��%d", backBNumber, totalNumber);
	fprintf(book, "\n");
	fclose(book);
}
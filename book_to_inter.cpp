//��ȡ�鼮��Ϣ�ļ�
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include"Client.h"
#include"Book.h" 
#include "global.h"

void book_to_inter( Book *&bookInfo)
{
	FILE *tp;
	Book *book = new Book;//���ڶ�̬���� 
	int i;
	int temp;//����ʱ��Ϣ 
	char tamp;
	bool flag = false;
	unsigned long t;

	//p = (Book *)malloc(sizeof( Book));//��̬����ṹ 
	bookInfo = book;

	fopen_s(&tp, "book.txt", "r");

	fscanf_s(tp, "%d", &temp);//�ļ�������Ϣ����temp 
	while (temp != -1)//��λ��֮��û����Ϣ 
	{
		flag = true;
		for (i = 0; i < MAX_B; i++) {//��ȡ���б�� 
			book->number[i] = temp;
			fscanf_s(tp, "%d", &temp);//���
		}
		
		char name[MAX_L];
		fscanf(tp, "%s", name);//����
		book->name = str2qstr(name);
		
		
		char writer[MAX_L];
		fscanf(tp, "%s", writer);//����
		book->writer = str2qstr(writer);
		fscanf_s(tp, "%d", &(book->press));//������
		fscanf_s(tp, "%d", &(book->category));//���


		
		for (i = 0; i<MAX_B; i++) {//����ʱ��
			fscanf_s(tp, "%d", &tamp, sizeof(char));//���ո�
			
			book->buyTime[i] = tamp;
		}
		

		fscanf_s(tp, "%d", &(book->totalNumber));//������
		fscanf_s(tp, "%d", &(book->currentNumber));//��ǰ����

		
		for (i = 0; i<MAX_B; i++) {//��ȡ����״̬ 
			
			fscanf_s(tp, "%d", &book->status[i]);//����״̬
		}
		

		fscanf_s(tp, "%d", &temp);//ԤԼ�û�����
		for (i = 0; temp != 0; i++){
			book->ordered.push_back(temp);
		    fscanf_s(tp, "%d", &temp);
         }


		fscanf_s(tp, "%lf", &(book->price));//�۸�

		fscanf_s(tp, "%d", &temp);//��һ�ṹ������Ϣ 
		if (-1 == temp)
			book->next = NULL;
		else {
			  book->next = new Book;//��̬����ṹ 
              book = book->next;//��һ���ṹ
		}
	}
	if (!flag)
	{
		delete book;
		bookInfo = nullptr;
	}
	fclose(tp);
}
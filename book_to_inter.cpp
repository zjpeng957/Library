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
	unsigned long t;

	//p = (Book *)malloc(sizeof( Book));//��̬����ṹ 
	bookInfo = book;

	fopen_s(&tp, "book.txt", "r");

	fscanf_s(tp, "%d", &temp);//�ļ�������Ϣ����temp 
	while (temp != -1)//��λ��֮��û����Ϣ 
	{
		for (i = 0; i < MAX_B; i++) {//��ȡ���б�� 
			book->number[i] = temp;
			fscanf_s(tp, "%d", &temp);//���
		}
		//book->number[i] = 1;

		/*fscanf_s(tp, "%c", &tamp, sizeof(char));//���ո�
		fscanf_s(tp, "%c", &tamp, sizeof(char));//����
		for (i = 0; tamp != '#'; i++) {
			book->name[i] = tamp;
			fscanf_s(tp, "%c", &tamp, sizeof(char));//���ո�
			fscanf_s(tp, "%c", &tamp, sizeof(char));
		}
		book->name[i] = '\0';*/
		char name[MAX_L];
		fscanf(tp, "%s", name);//����
		book->name = str2qstr(name);
		
		/*fscanf_s(tp, "%c", &tamp, sizeof(char));//���ո�
		fscanf_s(tp, "%c", &tamp, sizeof(char));//����
		for (i = 0; tamp != '#'; i++) {
			book->writer[i] = tamp;
			fscanf_s(tp, "%c", &tamp, sizeof(char));//���ո�
			fscanf_s(tp, "%c", &tamp, sizeof(char));
		}
		book->writer[i] = '\0';*/
		char writer[MAX_L];
		fscanf(tp, "%s", writer);//����
		book->writer = str2qstr(writer);
		fscanf_s(tp, "%d", &(book->press));//������
		fscanf_s(tp, "%d", &(book->category));//���


		//fscanf_s(tp, "%c", &tamp, sizeof(char));//���ո�
		//fscanf_s(tp, "%c", &tamp, sizeof(char));
		for (i = 0; i<MAX_B; i++) {//����ʱ��
			fscanf_s(tp, "%d", &tamp, sizeof(char));//���ո�
			//fscanf_s(tp, "%d", &tamp, sizeof(char));
			book->buyTime[i] = tamp;
		}
		//book->buyTime[i] = '\0';

		fscanf_s(tp, "%d", &(book->totalNumber));//������
		fscanf_s(tp, "%d", &(book->currentNumber));//��ǰ����

		//fscanf_s(tp, "%d", &t);//�ļ���״̬������Ϣ����temp
		for (i = 0; i<MAX_B; i++) {//��ȡ����״̬ 
			//book->status[i] = t;
			fscanf_s(tp, "%d", &book->status[i]);//����״̬
		}
		//book->status[i] = 0;

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

	fclose(tp);
}
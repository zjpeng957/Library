//���ļ�д���鼮��Ϣ
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include"Client.h"
#include"Book.h" 
#include "global.h"
void inter_to_book(const Book *book)
{
	FILE *tp;
	int i;
	unsigned end;
	unsigned t;
	fopen_s(&tp, "book.txt", "w");

	while (book)//�ýṹ������Ϣ 
	{
		end = book->ordered.size();
		for (i = 0; i<MAX_B; i++)
			fprintf(tp, "%d ", book->number[i]);//���
		
		fprintf(tp, "%s ", qstr2str(book->name).c_str());//����

		
		fprintf(tp, "%s ", qstr2str(book->writer).c_str());//����

		fprintf(tp, "%d ", book->press);//������
		fprintf(tp, "%d ", book->category);//���

		for (i = 0; i<MAX_B; i++)
			fprintf(tp, "%d ", book->buyTime[i]);//����ʱ��
		
		fprintf(tp, "%d ", book->totalNumber);//������
		fprintf(tp, "%d ", book->currentNumber);//��ǰ����

		for (i = 0; i<MAX_B;i++)
			fprintf(tp, "%d ", book->status[i]);//����״̬
		
		
		for(t=0;t<end;t++)
            fprintf(tp, "%d ", book->ordered[t]);//ԤԼ�û�����
		fprintf(tp, "0 ");
		
		fprintf(tp, "%lf ", book->price);//�۸�
		book = book->next;//��һ���ṹ����Ϣ 
	}

	fprintf(tp, "-1");
	fclose(tp);
}
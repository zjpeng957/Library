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
	unsigned end = book->ordered.size();
	unsigned t;
	fopen_s(&tp, "book.txt", "w");

	while (book)//�ýṹ������Ϣ 
	{
		for (i = 0; i<MAX_B; i++)
			fprintf(tp, "%d ", book->number[i]);//���
		//fprintf(tp, "1 ");//�ԡ�1���������� 

		/*for (i = 0; book->name[i] !='\0'; i++)
			fprintf(tp, "%c ", book->name[i]);//����
		fprintf(tp, "# ");//�ԡ�#���������� */
		fprintf(tp, "%s ", qstr2str(book->name).c_str());//����

		/*for (i = 0; book->writer[i] != '\0'; i++)
			fprintf(tp, "%c ", book->writer[i]);//����
		fprintf(tp, "# ");//�ԡ�#���������� */
		fprintf(tp, "%s ", qstr2str(book->writer).c_str());//����

		fprintf(tp, "%d ", book->press);//������
		fprintf(tp, "%d ", book->category);//���

		for (i = 0; i<MAX_B; i++)
			fprintf(tp, "%d ", book->buyTime[i]);//����ʱ��
		//fprintf(tp, "# ");//�ԡ�#����������

		fprintf(tp, "%d ", book->totalNumber);//������
		fprintf(tp, "%d ", book->currentNumber);//��ǰ����

		for (i = 0; i<MAX_B;i++)
			fprintf(tp, "%d ", book->status[i]);//����״̬
		//fprintf(tp, "0 "); //�ԡ�0����������  

		
		for(t=0;t<end;t++)
            fprintf(tp, "%d ", book->ordered[t]);//ԤԼ�û�����
		fprintf(tp, "0 ");
		
		fprintf(tp, "%lf ", book->price);//�۸�
		book = book->next;//��һ���ṹ����Ϣ 
	}

	fprintf(tp, "-1");
	fclose(tp);
}
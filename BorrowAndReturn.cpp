#include"fuction.h"
#include"header.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"global.h"

//�����û������÷���
void ComputeCredit(Client *customer, unsigned int time)
{
	int i;

	for (i = 0;i < MAX_B;i++)
	{
		if (customer->time[i] != '\0')
		{
			if (time - customer->time[i]>20)//������ʱ�䳬��20��
			{
				customer->credit -= 5;
			}
		}
	}
}


//����
int BorrowBook(Book *BorrowingBook, Client *customer, int *TotalBorrowedBook,unsigned int time)
{
	int result;

	if (customer->credit < 60 ||customer->Amount > 10)//����û������÷������ͻ������������10��
	{
		result = 0;
	}
	else
	{
		if (BorrowingBook->currentNumber)//�������ʣ����
		{
			int minB, minC;
			
			//�ҵ���������С���Ǳ�û�������
			for (minB = 0;BorrowingBook->status[minB] != 0;minB++);
			 
			//�ҵ��û��������������С����λ��
			for (minC = 0;customer->bookNo[minC] != 0;minC++);
			
			//�޸������Ϣ
			BorrowingBook->status[minB] = customer->number;
			(BorrowingBook->currentNumber)--;

			//�޸��û�����Ϣ
			customer->bookNo[minC] = BorrowingBook->number[minB];
			customer->BorrowedBook[minC] = BorrowingBook->name;
			customer->time[minC] = time;
			(customer->Amount)++;


			(*TotalBorrowedBook)++;//ͼ��ݽ���������һ
			result = 1;
			
			//������־
			borrow_book(time, qstr2str(customer->name).c_str(), customer->number, customer->school, BorrowingBook->number, qstr2str(BorrowingBook->name).c_str(), qstr2str(BorrowingBook->writer).c_str(), BorrowingBook->press, BorrowingBook->totalNumber, 1);
		}
		else
		{
			result = -1;//���ѱ����
		}
	}

	return result;
}

//����
bool ReturnBook(const unsigned long number , Client *customer, int *TotalBorrowedBook, Book *head, unsigned int time)
{
	Book *BorrowingBook[10];
	int result=0,flag=1;

	//���ݱ���ҵ�����
	SearchBook("\0", 0, 0, "\0", number, BorrowingBook, head);

	while (flag)
	{
		int positionB,positionC;

		//�ҵ�������������
		for (positionB = 0;BorrowingBook[0]->status[positionB] != customer->number;positionB++);
		
		//�ҵ������������û��������е����
		for (positionC = 0;customer->bookNo[positionC] != BorrowingBook[0]->number[positionB];positionC++);
		

		//�޸������Ϣ
		BorrowingBook[0]->status[positionB] = '\0';
		(BorrowingBook[0]->currentNumber)++;

		//�޸��û�����Ϣ
		customer->bookNo[positionC] = 0;
		customer->BorrowedBook[positionC] = "aaa";
		customer->time[positionC] = 0;
		(customer->Amount)--;


		(*TotalBorrowedBook)--;//ͼ��ݽ���������һ
		result = 1;
		flag = 0;
		
		//������־
		back_book(time, qstr2str(customer->name).c_str(), customer->number, customer->school, BorrowingBook[0]->number, qstr2str(BorrowingBook[0]->name).c_str(), qstr2str(BorrowingBook[0]->writer).c_str(), BorrowingBook[0]->press, BorrowingBook[0]->totalNumber, 1);
	}

	if (result)
		return true;
	else
		return false;
}

//�û�ԤԼ��
bool OrderBook(Book *BorrowingBook, Client *customer)
{
	int result=0,min,flag;

	//�ж��û��ܷ�ԤԼ�顣�ܣ�flag=1��min=�û�ԤԼ���������õ���С���;���ܣ�flag=0��
	for (min = 0,flag=0;min < MAX_B&&(!flag);min++)
	{
		if(customer->OrderedBook==QString())
		//if ('\0' == customer->OrderedBook[min][0])
			flag = 1;
	}

	if (flag)//����û���ԤԼ��(�û���ԤԼ���������С��MAX_B)
	{
		//���û����д������ԤԼ�û�����
		BorrowingBook->ordered.push_back(customer->number);

		//���û�ԤԼ�����Ϊ����
		//strcpy_s(customer->OrderedBook[min], strlen(BorrowingBook->name), BorrowingBook->name);
		customer->OrderedBook[min] = BorrowingBook->name;
		result = 1;
	}

	if (result)
		return true;
	else
		return false;
}


//ԤԼ����
void OrderReminder(Client *customer,Book *head)
{
	Book *orderedbook;
	unsigned int number;
	int i;

	//�û�ԤԼ������鼸��
	for (i = 0;i < MAX_B;i++)
	{
		if(customer->OrderedBook[i]!=QString())
		//if (customer->OrderedBook[i][0] != '\0')
		{
			//ͨ��ԤԼ����������ҵ��������
			SearchBook(qstr2str(customer->OrderedBook[i]).c_str(), 0, 0, "\0", 0, &orderedbook, head);

			//��ø���ԤԼ���е��׸��û��ı���
			number = orderedbook->ordered.front();

			//���ԤԼ������Խ����Ҹ��û���ԤԼ���еĵ�һ����
			if ((number == customer->number) && (orderedbook->currentNumber > 0))
			{
				customer->message[i] = 1;
				//int i = 0;
				//while (customer->messager[i] != QString()) i++;
				//customer->messager[i] = str2qstr("��ԤԼ���顶" + qstr2str(orderedbook->name) + "������");
			}
		}
	}

	//SearchBook(qstr2str(customer->OrderedBook).c_str(), 0, 0, "\0", 0, &orderedbook, head);
}

//ԤԼת����,decision:0,���裻1���衣num���û�Ҫ��ԤԼ�ĵڼ�����
int OrdertoBorrow(const int decision, Client *customer, int *TotalBorrowedBook, Book *head,unsigned int time,int num)
{
	int result;
	Book *orderedbook;
	
	//ͨ�������ҵ��������
	SearchBook(qstr2str(customer->OrderedBook[num]).c_str(), 0, 0, "\0", 0, &orderedbook, head);
	//SearchBook(qstr2str(customer->OrderedBook).c_str(), 0, 0, "\0", 0, &orderedbook, head);

	if (decision)//ѡ�����
	{
		result = BorrowBook(orderedbook,customer, TotalBorrowedBook, time);
	}
	else//ѡ�񲻽���ȡ��ԤԼ
	{
		int i;

		//��ȥ�û����ԤԼ��Ϣ
		for (i = 0;i < MAX_B;i++)
		{
			customer->OrderedBook[num]="aaa";
			customer->message[num] = 0;
		}

		//�Ӹ�ͼ���ԤԼ�����г�ȥ���û�
		//orderedbook->ordered.pop();
		orderedbook->ordered.pop_front();
		
		result = -1;
	}

	return result;
}
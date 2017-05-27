#include"fuction.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//����ͼ�飬�鵽�������FindingBook������
void SearchBook(const char *name,int category,int press,const char *writer,unsigned long number, Book *FindingBook[],Book *head)
{
	int flag1, flag2, flag3, flag4, flag5, i = 0;

	while (head)
	{
		//�ж�name�Ƿ���ͬ
		if ('\0' == name[0])//���û������name
		{
			flag1 = 1;
		}
		else
		{
			if (!strcmp(qstr2str(head->name).c_str(), name))
			{
				flag1 = 1;
			}
			else
			{
				flag1 = 0;
			}
		}

		//�ж�category�Ƿ���ͬ
		if (0 == category)//���û������category
		{
			flag2 = 1;
		}
		else
		{
			if (head->category == category)
			{
				flag2 = 1;
			}
			else
			{
				flag2 = 0;
			}
		}

		//�ж�press�Ƿ���ͬ
		if (0 == press)//���û������press
		{
			flag3 = 1;
		}
		else
		{
			if (head->press == press)
			{
				flag3 = 1;
			}
			else
			{
				flag3 = 0;
			}
		}

		//�ж�writer�Ƿ���ͬ
		if ('\0' == writer[0])//���û������writer
		{
			flag4 = 1;
		}
		else
		{
			if (!strcmp(qstr2str(head->writer).c_str(), writer))
			{
				flag4 = 1;
			}
			else
			{
				flag4 = 0;
			}
		}

		//�ж�number�Ƿ���ͬ
		if (0 == number)//���û������number
		{
			flag5 = 1;
		}
		else
		{
			int i;
			for (i = 0;(i < head->totalNumber) && (head->number[i] != number);i++);
			
			if (i < head->totalNumber)
			{
				flag5 = 1;
			}
			else
			{
				flag5 = 0;
			}
		}

		//���ҵ�������������,����浽FindingBook������
		if (flag1&&flag2&&flag3&&flag4&&flag5)
		{
			FindingBook[i] = head;
			i++;
		}

		head = head->next;
	}
	FindingBook[i] = nullptr;
}

//�����û�,�����������û��浽FindingClient������
void SearchClient(QString name, unsigned int number, unsigned int id, int type, int school, Client *FindingClient[], Client *head)
{
	int flag1, flag2, flag3, flag4, flag5, i = 0;

	while (head)
	{
		//�ж�name�Ƿ���ͬ
		if (name==QString())//���û������name
		{
			flag1 = 1;
		}
		else
		{
			if (head->name==name)
			{
				flag1 = 1;
			}
			else
			{
				flag1 = 0;
			}
		}

		//�ж�number�Ƿ���ͬ
		if (0 == number)//���û������number
		{
			flag2 = 1;
		}
		else
		{
			if (head->number == number)
			{
				flag2 = 1;
			}
			else
			{
				flag2 = 0;
			}
		}

		//�ж�id�Ƿ���ͬ
		if (0 == id)//���û������id
		{
			flag3 = 1;
		}
		else
		{
			if (head->id == id)
			{
				flag3 = 1;
			}
			else
			{
				flag3 = 0;
			}
		}

		//�ж�type�Ƿ���ͬ(typeһ��������)
		if (head->type == type)
		{
			flag4 = 1;
		}
		else
		{
			flag4 = 0;
		}

		//�ж�school�Ƿ���ͬ
		if (0 == school)//���û������school
		{
			flag5 = 1;
		}
		else
		{
			if (head->school == school)
			{
				flag5 = 1;
			}
			else
			{
				flag5 = 0;
			}
		}

		//���ҵ�������������,����浽FindingBook������
		if (flag1 && flag2 && flag3 && flag4 && flag5)
		{
			FindingClient[i] = head;
			i++;
		}

		head = head->next;
	}
	FindingClient[i] = nullptr;
}

//����ͼ�������
double BorrowRate(int TotalBookNum,int TotalBorrowedBook)
{
	double total, borrow;
	
	total = TotalBookNum;
	borrow = TotalBorrowedBook;

	return borrow / total;
}

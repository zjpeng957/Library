#include"fuction.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//查找图书，查到的书存在FindingBook数组里
void SearchBook(const char *name,int category,int press,const char *writer,unsigned long number, Book *FindingBook[],Book *head)
{
	int flag1, flag2, flag3, flag4, flag5, i = 0;

	while (head)
	{
		//判断name是否相同
		if ('\0' == name[0])//如果没有输入name
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

		//判断category是否相同
		if (0 == category)//如果没有输入category
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

		//判断press是否相同
		if (0 == press)//如果没有输入press
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

		//判断writer是否相同
		if ('\0' == writer[0])//如果没有输入writer
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

		//判断number是否相同
		if (0 == number)//如果没有输入number
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

		//若找到符合条件的书,将其存到FindingBook数组中
		if (flag1&&flag2&&flag3&&flag4&&flag5)
		{
			FindingBook[i] = head;
			i++;
		}

		head = head->next;
	}
	FindingBook[i] = nullptr;
}

//查找用户,符合条件的用户存到FindingClient数组中
void SearchClient(QString name, unsigned int number, unsigned int id, int type, int school, Client *FindingClient[], Client *head)
{
	int flag1, flag2, flag3, flag4, flag5, i = 0;

	while (head)
	{
		//判断name是否相同
		if (name==QString())//如果没有输入name
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

		//判断number是否相同
		if (0 == number)//如果没有输入number
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

		//判断id是否相同
		if (0 == id)//如果没有输入id
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

		//判断type是否相同(type一定有输入)
		if (head->type == type)
		{
			flag4 = 1;
		}
		else
		{
			flag4 = 0;
		}

		//判读school是否相同
		if (0 == school)//如果没有输入school
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

		//若找到符合条件的书,将其存到FindingBook数组中
		if (flag1 && flag2 && flag3 && flag4 && flag5)
		{
			FindingClient[i] = head;
			i++;
		}

		head = head->next;
	}
	FindingClient[i] = nullptr;
}

//计算图书借阅率
double BorrowRate(int TotalBookNum,int TotalBorrowedBook)
{
	double total, borrow;
	
	total = TotalBookNum;
	borrow = TotalBorrowedBook;

	return borrow / total;
}

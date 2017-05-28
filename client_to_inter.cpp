//读取用户信息文件
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include"header.h"
#include"Client.h"
#include"Book.h" 
#include"global.h"

void client_to_inter(Client  *&clientInfo)
{
	FILE *tp;
	int i;
	int temp;
	char tamp; 
	bool flag = false;
	Client *client = new Client;
	clientInfo = client;

	if ((tp = fopen("client.txt", "r")) == NULL)//打开文件失败 
	{
		printf("无法打开文件。");
		return;
	}

	fscanf_s(tp, "%d", &temp);//从文件中读取第一个信息 

	while (temp != -1)//信息读完 
	{
		flag = true;
		client->type = temp;//类型 

		
		char name[MAX_L];
		fscanf(tp, "%s", name);//姓名
		client->name = str2qstr(name);
		fscanf_s(tp, "%d", &(client->number));//工作证号或学生证号
		fscanf_s(tp, "%d", &(client->id));//学号和工作证号
		fscanf_s(tp, "%d", &(client->school));//所在学院
		fscanf_s(tp, "%d", &(client->authority));//借书权限
		fscanf_s(tp, "%d", &(client->Amount));//借书数量
		fscanf_s(tp, "%d", &(client->credit));//信用分数

		
		char pw[MAX_L];
		

		fscanf(tp, "%s", pw);
		client->password = str2qstr(pw);
		
		for (i = 0; i<MAX_B; i++)
		{
			
			fscanf_s(tp, "%d", &client->bookNo[i]);
		}
		

		char ob[MAX_L];
		for (i = 0; i<MAX_B/* charm[0] != '#'*/; i++)
		{
			fscanf(tp, "%s", ob);
			client->OrderedBook[i] = str2qstr(ob);
			
		}
		
		char bb[MAX_L];
		for (i = 0; i<MAX_B; i++)//用户借走的书籍名
		{
			fscanf(tp, "%s ", bb);
			client->BorrowedBook[i] = str2qstr(bb);
		}

		
		for (i = 0; i<MAX_B; i++)
		{
			
			fscanf(tp, "%d", &client->time[i]);
		}
		


		
		for (i = 0; i<MAX_B; i++)
		{
			
			fscanf(tp, "%d", &client->message[i]);
		}
		
		fscanf(tp, "%d", &temp);//获取另外一个结构的首信息 
		if (-1 == temp)
		{
			client->next = NULL;
		}
		else
		{
			client->next = new Client;//下一个结构 
			client = client->next;
		}
	}
	if (!flag)
	{
		delete client;
		clientInfo = nullptr;
	}
	fclose(tp);
}
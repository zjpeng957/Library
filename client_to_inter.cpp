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
		client->type = temp;//类型 

		/*fscanf_s(tp, "%c", &tamp, sizeof(char));//读空格
		fscanf_s(tp, "%c", &tamp,sizeof(char));//姓名 
		for (i = 0; tamp != '#'; i++)
		{
			client->name[i] = tamp;
			fscanf_s(tp, "%c", &tamp, sizeof(char));//读空格
			fscanf_s(tp, "%c", &tamp, sizeof(char));
		}
		client->name[i] = '\0';*/
		char name[MAX_L];
		fscanf(tp, "%s", name);//姓名
		client->name = str2qstr(name);
		fscanf_s(tp, "%d", &(client->number));//工作证号或学生证号
		fscanf_s(tp, "%d", &(client->id));//学号和工作证号
		fscanf_s(tp, "%d", &(client->school));//所在学院
		fscanf_s(tp, "%d", &(client->authority));//借书权限
		fscanf_s(tp, "%d", &(client->Amount));//借书数量
		fscanf_s(tp, "%d", &(client->credit));//信用分数

		fscanf_s(tp, "%d", &temp);//密码
		char pw[MAX_L];
		decipher(temp, pw);
		client->password = str2qstr(pw);
		//fscanf_s(tp, "%d", &temp);//所借书的编号
		for (i = 0; i<MAX_B; i++)
		{
			//client->bookNo[i] = temp;
			fscanf_s(tp, "%d", &client->bookNo[i]);
		}
		//client->bookNo[i] = 0;

		//char charm[10];
		//fscanf(tp, "%s", charm);//用户预约的书籍名

		char ob[MAX_L];
		for (i = 0; i<MAX_B/* charm[0] != '#'*/; i++)
		{
			fscanf(tp, "%s", ob);
			client->OrderedBook[i] = str2qstr(ob);
			//strcpy(client->OrderedBook[i], charm);
			//fscanf(tp, "%s", charm);
		}
		//client->OrderedBook[i][0] = '\0';
		char bb[MAX_L];
		for (i = 0; i<MAX_B; i++)//用户借走的书籍名
		{
			fscanf(tp, "%s ", bb);
			client->BorrowedBook[i] = str2qstr(bb);
		}

		//fscanf_s(tp, "%d", &temp);//借书时间
		for (i = 0; i<MAX_B; i++)
		{
			//client->time[i] = temp;
			fscanf(tp, "%d", &client->time[i]);
		}
		//client->time[i] = 0;


		//fscanf_s(tp, "%d", &temp);//借书时间
		for (i = 0; i<MAX_B; i++)
		{
			//client->message[i] = temp;
			fscanf(tp, "%d", &client->message[i]);
		}
		//client->message[i] = 0;
		//fscanf_s(tp, "%c", &tamp, sizeof(char));//读空格
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

	fclose(tp);
}
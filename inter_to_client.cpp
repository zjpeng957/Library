//向文件写入用户信息
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include"header.h"
#include"Client.h"
#include"Book.h" 
#include"global.h"
void inter_to_client(const Client *client )
{
	FILE *tp;
	int i;
	if ((tp = fopen("client.txt", "w")) == NULL)//文件打开失败 
	{
		printf("无法打开文件。");
		return;
	}

	while (client)//没有该书籍的首信息 
	{
		fprintf(tp, "%d ", client->type);//类型
		
		/*for (i = 0; client->name[i] !='\0'; i++)//姓名
		{
			fprintf(tp, "%c ", client->name[i]); 
		}
		fprintf(tp, "# ");//对于数组，添加‘#’区别*/
		fprintf(tp, "%s ", qstr2str(client->name).c_str());

		fprintf(tp, "%d ", client->number);//工作证号或学生证号
		fprintf(tp, "%d ", client->id);//学号和工作证号
		fprintf(tp, "%d ", client->school);//所在学院
		fprintf(tp, "%d ", client->authority);//借书权限
		fprintf(tp, "%d ", client->Amount);//借书数量
		fprintf(tp, "%d ", client->credit);//信用分数

		encrypt(qstr2str(client->password).c_str(),tp);//密码

		for (i = 0; i<MAX_B/*client->bookNo[i] != 0*/; i++)//所借书的编号
		{
			fprintf(tp, "%d ", client->bookNo[i]); 
		}
		//fprintf(tp, "0 ");//对于数组，添加‘0’区别 

		for (i = 0; i<MAX_B; i++)//用户预约的书籍名
		{
			fprintf(tp, "%s ", qstr2str(client->OrderedBook[i]).c_str()); 
		}
		//fprintf(tp, "# ");//对于数组，添加‘#’区别
		//fprintf(tp, "%s ", client->OrderedBook[]);//用户预约的书籍名

		for (i = 0; i<MAX_B; i++)//用户借走的书籍名
		{
			fprintf(tp, "%s ", qstr2str(client->BorrowedBook[i]).c_str());
		}


		for (i = 0; i<MAX_B; i++)//借书时间
		{
			fprintf(tp, "%d ", client->time[i]); 
		}
		//fprintf(tp, "0 ");//对于数组，添加‘0’区别 

		for (i = 0; i<MAX_B; i++)
		{
			fprintf(tp, "%d ", client->message[i]);
		}
		//fprintf(tp, "0 ");//对于数组，添加‘0’区别
		
		client = client->next;//下一个结构 
	}
	fprintf(tp, "-1");

	fclose(tp);
}
//��ȡ�û���Ϣ�ļ�
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

	if ((tp = fopen("client.txt", "r")) == NULL)//���ļ�ʧ�� 
	{
		printf("�޷����ļ���");
		return;
	}

	fscanf_s(tp, "%d", &temp);//���ļ��ж�ȡ��һ����Ϣ 

	while (temp != -1)//��Ϣ���� 
	{
		flag = true;
		client->type = temp;//���� 

		
		char name[MAX_L];
		fscanf(tp, "%s", name);//����
		client->name = str2qstr(name);
		fscanf_s(tp, "%d", &(client->number));//����֤�Ż�ѧ��֤��
		fscanf_s(tp, "%d", &(client->id));//ѧ�ź͹���֤��
		fscanf_s(tp, "%d", &(client->school));//����ѧԺ
		fscanf_s(tp, "%d", &(client->authority));//����Ȩ��
		fscanf_s(tp, "%d", &(client->Amount));//��������
		fscanf_s(tp, "%d", &(client->credit));//���÷���

		
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
		for (i = 0; i<MAX_B; i++)//�û����ߵ��鼮��
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
		
		fscanf(tp, "%d", &temp);//��ȡ����һ���ṹ������Ϣ 
		if (-1 == temp)
		{
			client->next = NULL;
		}
		else
		{
			client->next = new Client;//��һ���ṹ 
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
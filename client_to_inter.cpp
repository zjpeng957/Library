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
		client->type = temp;//���� 

		/*fscanf_s(tp, "%c", &tamp, sizeof(char));//���ո�
		fscanf_s(tp, "%c", &tamp,sizeof(char));//���� 
		for (i = 0; tamp != '#'; i++)
		{
			client->name[i] = tamp;
			fscanf_s(tp, "%c", &tamp, sizeof(char));//���ո�
			fscanf_s(tp, "%c", &tamp, sizeof(char));
		}
		client->name[i] = '\0';*/
		char name[MAX_L];
		fscanf(tp, "%s", name);//����
		client->name = str2qstr(name);
		fscanf_s(tp, "%d", &(client->number));//����֤�Ż�ѧ��֤��
		fscanf_s(tp, "%d", &(client->id));//ѧ�ź͹���֤��
		fscanf_s(tp, "%d", &(client->school));//����ѧԺ
		fscanf_s(tp, "%d", &(client->authority));//����Ȩ��
		fscanf_s(tp, "%d", &(client->Amount));//��������
		fscanf_s(tp, "%d", &(client->credit));//���÷���

		fscanf_s(tp, "%d", &temp);//����
		char pw[MAX_L];
		decipher(temp, pw);
		client->password = str2qstr(pw);
		//fscanf_s(tp, "%d", &temp);//������ı��
		for (i = 0; i<MAX_B; i++)
		{
			//client->bookNo[i] = temp;
			fscanf_s(tp, "%d", &client->bookNo[i]);
		}
		//client->bookNo[i] = 0;

		//char charm[10];
		//fscanf(tp, "%s", charm);//�û�ԤԼ���鼮��

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
		for (i = 0; i<MAX_B; i++)//�û����ߵ��鼮��
		{
			fscanf(tp, "%s ", bb);
			client->BorrowedBook[i] = str2qstr(bb);
		}

		//fscanf_s(tp, "%d", &temp);//����ʱ��
		for (i = 0; i<MAX_B; i++)
		{
			//client->time[i] = temp;
			fscanf(tp, "%d", &client->time[i]);
		}
		//client->time[i] = 0;


		//fscanf_s(tp, "%d", &temp);//����ʱ��
		for (i = 0; i<MAX_B; i++)
		{
			//client->message[i] = temp;
			fscanf(tp, "%d", &client->message[i]);
		}
		//client->message[i] = 0;
		//fscanf_s(tp, "%c", &tamp, sizeof(char));//���ո�
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

	fclose(tp);
}
//���ļ�д���û���Ϣ
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
	if ((tp = fopen("client.txt", "w")) == NULL)//�ļ���ʧ�� 
	{
		printf("�޷����ļ���");
		return;
	}

	while (client)//û�и��鼮������Ϣ 
	{
		fprintf(tp, "%d ", client->type);//����
		
		/*for (i = 0; client->name[i] !='\0'; i++)//����
		{
			fprintf(tp, "%c ", client->name[i]); 
		}
		fprintf(tp, "# ");//�������飬��ӡ�#������*/
		fprintf(tp, "%s ", qstr2str(client->name).c_str());

		fprintf(tp, "%d ", client->number);//����֤�Ż�ѧ��֤��
		fprintf(tp, "%d ", client->id);//ѧ�ź͹���֤��
		fprintf(tp, "%d ", client->school);//����ѧԺ
		fprintf(tp, "%d ", client->authority);//����Ȩ��
		fprintf(tp, "%d ", client->Amount);//��������
		fprintf(tp, "%d ", client->credit);//���÷���

		encrypt(qstr2str(client->password).c_str(),tp);//����

		for (i = 0; i<MAX_B/*client->bookNo[i] != 0*/; i++)//������ı��
		{
			fprintf(tp, "%d ", client->bookNo[i]); 
		}
		//fprintf(tp, "0 ");//�������飬��ӡ�0������ 

		for (i = 0; i<MAX_B; i++)//�û�ԤԼ���鼮��
		{
			fprintf(tp, "%s ", qstr2str(client->OrderedBook[i]).c_str()); 
		}
		//fprintf(tp, "# ");//�������飬��ӡ�#������
		//fprintf(tp, "%s ", client->OrderedBook[]);//�û�ԤԼ���鼮��

		for (i = 0; i<MAX_B; i++)//�û����ߵ��鼮��
		{
			fprintf(tp, "%s ", qstr2str(client->BorrowedBook[i]).c_str());
		}


		for (i = 0; i<MAX_B; i++)//����ʱ��
		{
			fprintf(tp, "%d ", client->time[i]); 
		}
		//fprintf(tp, "0 ");//�������飬��ӡ�0������ 

		for (i = 0; i<MAX_B; i++)
		{
			fprintf(tp, "%d ", client->message[i]);
		}
		//fprintf(tp, "0 ");//�������飬��ӡ�0������
		
		client = client->next;//��һ���ṹ 
	}
	fprintf(tp, "-1");

	fclose(tp);
}
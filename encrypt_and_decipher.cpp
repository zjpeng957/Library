//���������

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h> 
#include"Client.h"
#include"Book.h" 

//����
void encrypt(const char * en_number,FILE *tp)//������Ҫ���ܵ��ַ�������ܺ��ŵ��ļ�
{
	int num, i = 0, tem;//num��ʾһ���ַ����ܺ��ֵ��Num��ʾȫ���ַ����ܺ��ֵ��tem���ڴ���ַ�û����ǰ��ֵ 
	unsigned int Num = 0;
	tem = en_number[0];//��һ���ַ���ֵ 
	for (i = 1; tem != '\0'; i++)//���ζ�ȡÿ���ַ� 
	{
		tem = tem + 5;//���� 
		num = (int)(tem);
		Num = Num * 1000 + num;//��ȡȫ���ַ���ֵ 
		tem = en_number[i];//��һ���ַ� 
	}

	fprintf(tp, "%d ", Num);//�����ܺ��ֵд���ļ� 
}


//����
void decipher(int Num, char number[]) //��������ܵ�ֵ����ܺ��ַ�Ѱ��ŵ��ַ��� 
{
	int num, temp = 1, i = 0, j = 0, lost = 0, t;//num���ڴ��ÿ�λ�ȡ�ַ�ʱ�����ڲ�����ֵ��temp��ŵ�ǰ��ֵ�����ж���0��lost��ʾ��ֵβ������ 

	for (i = 0; Num>40; i++)//���λ�ȡ��һ���ַ� 
	{
		num = Num;//��ǰ��Ҫ���ܵ���ֵ 
		for (j = 0; num>1000; j++)//�жϵ�ǰ��ֵ�ǲ���ֻʣ��һ���ַ�������� ֵ 
		{
			t = j;//��ǰλ�ú��滹�ж����ַ� 
			while (t--)//��ȡ����ֵ���0 
				temp = temp * 1000;
			lost = lost + num % 1000 * temp;//��ȥǰ��λ��ǰ��λʣ�µ�ֵ 
			temp = 1;//��ʼ�� 
			num = num / 1000;//���ǰ��λ��ǰ��λ 
		}
		Num = lost;//ʣ�µ���ֵ 
		lost = 0;//��ʼ��
		num = num - 5;//���� 
		number[i] = num;//�����ַ��� 
	}
	number[i ] = '\0';
}

//加密与解密

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h> 
#include"Client.h"
#include"Book.h" 

//加密
void encrypt(const char * en_number,FILE *tp)//输入需要加密的字符串与加密后存放的文件
{
	int num, i = 0, tem;//num表示一个字符加密后的值，Num表示全部字符加密后的值，tem用于存放字符没加密前的值 
	unsigned int Num = 0;
	tem = en_number[0];//第一个字符的值 
	for (i = 1; tem != '\0'; i++)//依次读取每个字符 
	{
		tem = tem + 5;//加密 
		num = (int)(tem);
		Num = Num * 1000 + num;//获取全部字符的值 
		tem = en_number[i];//下一个字符 
	}

	fprintf(tp, "%d ", Num);//将加密后的值写入文件 
}


//解密
void decipher(int Num, char number[]) //传入需解密的值与解密后字符寻存放的字符串 
{
	int num, temp = 1, i = 0, j = 0, lost = 0, t;//num用于存放每次获取字符时，用于操作的值；temp存放当前数值后面有多少0；lost表示数值尾部的数 

	for (i = 0; Num>40; i++)//依次获取第一个字符 
	{
		num = Num;//当前需要解密的数值 
		for (j = 0; num>1000; j++)//判断当前数值是不是只剩第一个字符所代表的 值 
		{
			t = j;//当前位置后面还有多少字符 
			while (t--)//获取该数值后的0 
				temp = temp * 1000;
			lost = lost + num % 1000 * temp;//出去前三位或前两位剩下的值 
			temp = 1;//初始化 
			num = num / 1000;//获得前三位或前两位 
		}
		Num = lost;//剩下的数值 
		lost = 0;//初始化
		num = num - 5;//解密 
		number[i] = num;//存入字符串 
	}
	number[i ] = '\0';
}

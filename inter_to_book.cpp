//向文件写入书籍信息
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include"Client.h"
#include"Book.h" 
#include "global.h"
void inter_to_book(const Book *book)
{
	FILE *tp;
	int i;
	unsigned end = book->ordered.size();
	unsigned t;
	fopen_s(&tp, "book.txt", "w");

	while (book)//该结构的首信息 
	{
		for (i = 0; i<MAX_B; i++)
			fprintf(tp, "%d ", book->number[i]);//编号
		//fprintf(tp, "1 ");//以‘1’结束数组 

		/*for (i = 0; book->name[i] !='\0'; i++)
			fprintf(tp, "%c ", book->name[i]);//书名
		fprintf(tp, "# ");//以‘#’结束数组 */
		fprintf(tp, "%s ", qstr2str(book->name).c_str());//书名

		/*for (i = 0; book->writer[i] != '\0'; i++)
			fprintf(tp, "%c ", book->writer[i]);//作者
		fprintf(tp, "# ");//以‘#’结束数组 */
		fprintf(tp, "%s ", qstr2str(book->writer).c_str());//作者

		fprintf(tp, "%d ", book->press);//出版社
		fprintf(tp, "%d ", book->category);//类别

		for (i = 0; i<MAX_B; i++)
			fprintf(tp, "%d ", book->buyTime[i]);//购入时间
		//fprintf(tp, "# ");//以‘#’结束数组

		fprintf(tp, "%d ", book->totalNumber);//总数量
		fprintf(tp, "%d ", book->currentNumber);//当前数量

		for (i = 0; i<MAX_B;i++)
			fprintf(tp, "%d ", book->status[i]);//借阅状态
		//fprintf(tp, "0 "); //以‘0’结束数组  

		
		for(t=0;t<end;t++)
            fprintf(tp, "%d ", book->ordered[t]);//预约用户队列
		fprintf(tp, "0 ");
		
		fprintf(tp, "%lf ", book->price);//价格
		book = book->next;//下一个结构的信息 
	}

	fprintf(tp, "-1");
	fclose(tp);
}
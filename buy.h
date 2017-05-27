#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"client.h"
#include"book.h"
#include"header.h"
extern int Book_water;
extern int buy_book(QString bookname,QString writer,int press,int category,int num,double price,unsigned int time);
extern unsigned int book_making(const int category,const int press);

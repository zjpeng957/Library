#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"client.h"
#include"book.h"
#include"header.h"

extern int Client_water;
extern Client* client_register(QString clientname,QString code,int type,int academy,int clientcard);
extern unsigned int id_making(const int type,const int academy);

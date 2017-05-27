#include"client.h"
#include"book.h"
#include<stdio.h>
#include"register.h"
#include"global.h"

int Client_water;


Client* client_register(QString clientname,QString code,int type,int academy,int clientcard)
{
    int i;
    Client *newclient=NULL;
    Client *last;
    last=ClientInfo;
    newclient=new Client;
    if(newclient==NULL)
    {
        return nullptr;
    }
    newclient->Amount=0;
    //strcpy(newclient->name,clientname);
	newclient->name = clientname;
    newclient->type=type;
    if(type==0)
    {
        newclient->authority=5;//change
    }
    else
    {
        newclient->authority=10;//change
    }
    //strcpy(newclient->password,code);
	newclient->password = code;
    newclient->school=academy;
    newclient->number=clientcard;
    newclient->next=NULL;
    newclient->credit=100;
    for(i=0;i<MAX_B;i++)
    {
        newclient->time[i]=0;
        newclient->bookNo[i]=0;
        newclient->message[i]=0;
    }
    //newclient->OrderedBook[0]='/0';
    newclient->id=id_making(type,academy);
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=newclient;
    //return 1;
	return newclient;
}

unsigned int id_making(const int type,const int academy)
{
    unsigned int num=0;
    Client_water++;
    num=type*1000000+academy*10000+Client_water;
    return num;
}







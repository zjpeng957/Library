#include"client.h"
#include"book.h"
#include<stdio.h>
#include"global.h"
#include"login.h"


Client* login(unsigned int idnum,string pw)
{
	char code[MAX_L];
	strcpy(code, pw.c_str());
    Client *cliptr;
    cliptr=ClientInfo;
    while(cliptr!=NULL)
    {
        if(cliptr->id==idnum)
        {
            if(!strcmp(code,qstr2str(cliptr->password).c_str()))
            {
				return cliptr;
            }
            else
            {
                return nullptr;
            }
        }
        cliptr=cliptr->next;
    }
    return nullptr;
}

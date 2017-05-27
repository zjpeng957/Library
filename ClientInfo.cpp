#include"client.h"
#include"book.h"
#include<stdio.h>
#include"ClientInfo.h"
#include"global.h"



int cancel_client(const unsigned int id)
{
    Client *beptr,*cuptr;
    beptr=ClientInfo;
    if(beptr==NULL)
    {
        return 0;
    }
    cuptr=beptr->next;
    while(cuptr!=NULL)
    {
        if(cuptr->id==id)
        {
            beptr->next=cuptr->next;
            //可以free一下
			delete cuptr;
            return 1;
        }
        else
        {
            beptr=cuptr;
            cuptr=cuptr->next;
        }
    }
    return 0;
}

#include"Book.h"
#include"book.h"
#include<stdio.h>
#include"global.h"
#include"BookInfo.h"


int cancel_book(const unsigned long id,unsigned int time)
{
    int i;
    Book *beptr,*cuptr;
    beptr=BookInfo;
    cuptr=BookInfo->next;
    if(cuptr==NULL)
    {
        return 0;
    }
    while(cuptr!=NULL)
    {
        for(i=0;i<cuptr->totalNumber;i++)
        {
            if(cuptr->number[i]==id)
            {
                if(cuptr->totalNumber==1)
                {
                    if(cuptr==BookInfo)
                    {
                        BookInfo=BookInfo->next;
                    }
                    else
                        beptr->next=cuptr->next;
                }
                else
                {
                    cuptr->totalNumber--;
                    if(cuptr->status[i]==0)
                        cuptr->currentNumber--;
                    cuptr->number[i]=cuptr->number[cuptr->totalNumber];
                    cuptr->number[cuptr->totalNumber]=0;
                    cuptr->status[i]=cuptr->status[cuptr->totalNumber];
                    cuptr->status[cuptr->totalNumber]=0;
                }
				
                return 1;
            }
        }
        beptr=cuptr;
        cuptr=cuptr->next;
    }
    return 0;
}

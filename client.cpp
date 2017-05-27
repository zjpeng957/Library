#include "client.h"

Client::Client()
{
	for (int i = 0; i < MAX_B; i++)
	{
		bookNo[i] = 0;
		OrderedBook[i] = "aaa";
		BorrowedBook[i] = "aaa";
		time[i] = 0;
		message[i] = 0;
	}
}

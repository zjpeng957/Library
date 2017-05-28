#include "book.h"
Book::Book()
{
	for (int i = 0; i < MAX_B; i++)
	{
		number[i] = 0;
		buyTime[i] = 0;
		status[i] = 0;
		BorrowTime[0] = 0;
	}
	ordered = deque<unsigned>();
	next = nullptr;
}
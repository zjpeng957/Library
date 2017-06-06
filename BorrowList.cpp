#include "BorrowList.h"

borrowList::borrowList()
{
	readList();
}

void borrowList::BorrowBook(unsigned CN, string BN, unsigned BT)
{
	ClientNo.push_back(CN);
	BookName.push_back(BN);
	BorrowTime.push_back(BT);
	ReturnTime.push_back(0);
}

void borrowList::returnBook(unsigned CN, string BN, unsigned RT)
{
	for (int i = 0; i < ClientNo.size(); i++)
	{
		if (BookName[i] == BN)
		{
			ReturnTime[i] = RT;
		}
	}
}

borrowList::~borrowList()
{
	saveList();
}

void borrowList::readList()
{
	ifstream in("List.txt");
	unsigned client, bTime, rTime;
	string bName;
	while (in>>client)
	{
		in >> bName >> bTime >> rTime;
		ClientNo.push_back(client);
		BookName.push_back(bName);
		BorrowTime.push_back(bTime);
		ReturnTime.push_back(rTime);
	}
	in.close();
}

void borrowList::saveList()
{
	ofstream out("List.txt");
	for (int i = 0; i < ClientNo.size(); i++)
	{
		out << ClientNo[i] << " " << BookName[i] << " " << BorrowTime[i] << " " << ReturnTime[i] << endl;
	}
	out.close();
}

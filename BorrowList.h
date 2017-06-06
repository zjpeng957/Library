#pragma once
#include <string>
#include <vector>
#include <fstream>
using namespace std;
class borrowList {
public:
	borrowList();
	void BorrowBook(unsigned CN, string BN, unsigned BT);
	void returnBook(unsigned CN,string BN,unsigned RT);
	vector<unsigned> ClientNo;
	vector<string> BookName;
	vector<unsigned> BorrowTime;
	vector<unsigned> ReturnTime;
	~borrowList();
private:
	void readList();
	void saveList();
	
	
};
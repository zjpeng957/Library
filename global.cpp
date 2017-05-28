#include"global.h"

Book *BookInfo=nullptr;//书籍信息链表
Client *ClientInfo=nullptr;//用户信息链表
map<int, string> press;//出版社信息
map<int, string> category;//书籍类型信息
map<int, string> school;//学院信息
int totalBook;//图书馆藏书量
int totalBorrowedBook;//总借书量
int totalClient;//总用户数
int day;//当前日期
int Book_water;//当前图书流水号

void readMap(map<int, string> &data, const char *path)
{
	ifstream in(path);
	int i = 0;
	string s;
	while (in >> s)
	{
		data.insert(make_pair(i, s));
		++i;
	}
	in.close();
}
void readCount()
{
	ifstream in("count.txt");
	in >> totalBook >>totalBorrowedBook>> totalClient >> Client_water>> Book_water >> day;
	in.close();
}
void saveCount()
{
	ofstream out("count.txt");
	out << totalBook<<" " << " " <<totalBorrowedBook << " " << totalClient << " " << Client_water << " "<<Book_water<<" " <<day;
	out.close();
}

void dataInit()
{
	readMap(press, "press.txt");
	readMap(category, "category.txt");
	readMap(school, "school.txt");
	readCount();
}

QString str2qstr(const string s)
{
	return QString::fromLocal8Bit(s.data());
}
string qstr2str(const QString s)
{
	QByteArray data = s.toLocal8Bit();
	return string(data);
}
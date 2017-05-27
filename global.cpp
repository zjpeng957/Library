#include"global.h"

Book *BookInfo=nullptr;
Client *ClientInfo=nullptr;
map<int, string> press;
map<int, string> category;
map<int, string> school;
int totalBook;
int totalBorrowedBook;
int totalClient;
int day = 0;

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
	in >> totalBook >> Book_water >>totalBorrowedBook>> totalClient >> Client_water>>day;
	in.close();
}
void saveCount()
{
	ofstream out("count.txt");
	out << totalBook << Book_water<<totalBorrowedBook << totalClient << Client_water<<day;
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
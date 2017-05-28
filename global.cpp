#include"global.h"

Book *BookInfo=nullptr;//�鼮��Ϣ����
Client *ClientInfo=nullptr;//�û���Ϣ����
map<int, string> press;//��������Ϣ
map<int, string> category;//�鼮������Ϣ
map<int, string> school;//ѧԺ��Ϣ
int totalBook;//ͼ��ݲ�����
int totalBorrowedBook;//�ܽ�����
int totalClient;//���û���
int day;//��ǰ����
int Book_water;//��ǰͼ����ˮ��

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
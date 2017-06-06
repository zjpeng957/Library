#ifndef CLIENT_H
#define CLIENT_H
#include<Qstring>
using namespace std;
const int MAX_B=20;
enum CItem{ClientN,CName,Type,School};
enum Type{STUDENT,TEACHER,ADMIN};
class Client
{
public:
	Client();
    int type;
    QString name;//姓名
    unsigned int number;//工作证号或学生证号
    unsigned int id;//学号和工作证号
    int school;//所在学院
    int authority;//借书权限
    int Amount;//借书数量
    int credit=100;//信用分数
    QString password;//密码
    unsigned int bookNo[MAX_B];//所借书的编号
	QString OrderedBook[MAX_B];//用户预约的书籍名
	QString BorrowedBook[MAX_B];
    unsigned int time[MAX_B];//借书时间
	int message[MAX_B];
	Client *next = nullptr;
};

#endif // CLIENT_H

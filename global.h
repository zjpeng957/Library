#pragma once

//全局变量模块
#include<vector>
#include<map>
#include<fstream>
#include<QString>
#include"book.h"
#include"client.h"
#include"buy.h"
#include"register.h"
using namespace std;

const int MAX_DAYS = 20;
const int MAX_C = 1000;
const int MAX_BOOK = 4000;
const int MAX_L = 20;
extern int day;
extern Book *BookInfo;
extern Client *ClientInfo;
extern int totalBook;
extern int totalBorrowedBook;
extern int nextBookNo;
extern int totalClient;
extern int nextClientNo;
extern map<int, string> press;
extern map<int, string> category;
extern map<int, string> school;
extern int Book_water;

const QString TableButtonStyle("QPushButton{border:0px;padding:2px 4px;background-color:rgb(60, 195, 245);color:rgb(235, 242, 249);}"
	"QPushButton:hover{border:0px;padding:2px 4px;background-color:rgb(60, 220, 245);color:rgb(235, 242, 249);}"
	"QPushButton:pressed{border:0px;padding:2px 4px;background-color:rgb(60, 170, 245);color:rgb(235, 242, 249);}");

const QString SideButtonStyle("QPushButton{border:0px;background-color: rgb(60, 195, 245);color:rgb(235, 242, 249)}"
	"QPushButton:hover{border:0px;background-color: rgb(60, 195, 245);color:rgb(0, 0, 0)}"
	"QPushButton:focus{border:0px;background-color: rgb(235, 242, 249);color:rgb(0, 0, 0)}");

const QString NormalButtonStyle("QPushButton{border:0px groove gray;border-radius:4px;padding:2px 4px;background-color:rgb(60, 195, 245);color:rgb(235, 242, 249);}"
	"QPushButton:hover{border:0px groove gray;border-radius:4px;padding:2px 4px;background-color:rgb(60, 220, 245);color:rgb(235, 242, 249);}"
	"QPushButton:pressed{border:0px groove gray;border-radius:4px;padding:2px 4px;background-color:rgb(60, 170, 245);color:rgb(235, 242, 249);}");

const QString OddTableUnitStyle("back-ground-color:white;alternate-background-color:red;selection-background-color:rgb(235,236,237);selection-color:rgb(0,0,0);");

const QString EvenTableUnitStyle("{background-color:rgb(235, 242, 249);color:rgb(128,128,128);}"
	"hover{background-color:rgb(235,236,237);color:rgb(0,0,0);}");

const QString OddTableButtonStyle("{background-color:rgb(245,245,247);color:rgb(60, 220, 245);}"
	"hover{background-color:rgb(235,236,237);color:rgb(0,0,0);}");

const QString EvenTableButtonStyle("{background-color:rgb(235, 242, 249);color:rgb(60, 220, 245);}"
	"hover{background-color:rgb(235,236,237);color:rgb(0,0,0);}");

enum ClientButton { SEARCH, RETURN, INFO, HELP };
enum AdminButton { SEARCHB, SEARCHA, BUY, HELPA };

void dataInit();
void saveCount();
QString str2qstr(const string s);
string qstr2str(const QString s);
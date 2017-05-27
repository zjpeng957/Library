
#include"Client.h"
#include"Book.h" 

extern void inter_to_book(const Book *book);
extern void inter_to_client(const Client *client);
extern void add_N_book(const unsigned int day, const unsigned int number[], const char* name, const char* writer, const  int press, const int totalNumber, const int buyBNumber);
//day表示当前日期，number[]表示书的编号，name表示书名，writer表示作者，press表示出版社，totalNumber表示该类书的总量，buyBNumber表示当天增加的书的数量
extern void reduce_book(const unsigned int day, const unsigned int number[], const char* name, const char* writer, const int press, const int totalNumber, const int reduceBNumber);
//day表示当前日期，number[]表示书的编号，name表示书名，writer表示作者，press表示出版社，totalNumber表示该类书的总量，reduceBNumber表示当天减少的书的数量
extern void borrow_book(const unsigned int day, const char* r_name, const unsigned int r_number, const int school, const unsigned int number[], const char* name, const char* writer, const int press, const int totalNumber, const int borrowBNumber);
//day表示当前日期，r_name表示用户姓名，r_number表示工作证号或学生证号，school表示所在学院，number[]表示书的编号，name表示书名，writer表示作者，press表示出版社，totalNumber表示该类书的总量，borrowBNumber表示当天借走的书的数量
extern void back_book(const unsigned int day, const char* r_name, const unsigned int r_number, const int school, const unsigned int number[], const char* name, const char* writer, const int press, const int totalNumber, const int backBNumber);
//day表示当前日期，r_name表示用户姓名，r_number表示工作证号或学生证号，school表示所在学院，number[]表示书的编号，name表示书名，writer表示作者，press表示出版社，totalNumber表示该类书的总量，backBNumber表示当天返还的书的数量
extern void encrypt(const char * en_number,FILE *tp);
extern void book_to_inter(Book *&book);
extern void decipher(int Num, char number[]);
extern void client_to_inter(Client  *&clientInfo);
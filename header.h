
#include"Client.h"
#include"Book.h" 

extern void inter_to_book(const Book *book);
extern void inter_to_client(const Client *client);
extern void add_N_book(const unsigned int day, const unsigned int number[], const char* name, const char* writer, const  int press, const int totalNumber, const int buyBNumber);
//day��ʾ��ǰ���ڣ�number[]��ʾ��ı�ţ�name��ʾ������writer��ʾ���ߣ�press��ʾ�����磬totalNumber��ʾ�������������buyBNumber��ʾ�������ӵ��������
extern void reduce_book(const unsigned int day, const unsigned int number[], const char* name, const char* writer, const int press, const int totalNumber, const int reduceBNumber);
//day��ʾ��ǰ���ڣ�number[]��ʾ��ı�ţ�name��ʾ������writer��ʾ���ߣ�press��ʾ�����磬totalNumber��ʾ�������������reduceBNumber��ʾ������ٵ��������
extern void borrow_book(const unsigned int day, const char* r_name, const unsigned int r_number, const int school, const unsigned int number[], const char* name, const char* writer, const int press, const int totalNumber, const int borrowBNumber);
//day��ʾ��ǰ���ڣ�r_name��ʾ�û�������r_number��ʾ����֤�Ż�ѧ��֤�ţ�school��ʾ����ѧԺ��number[]��ʾ��ı�ţ�name��ʾ������writer��ʾ���ߣ�press��ʾ�����磬totalNumber��ʾ�������������borrowBNumber��ʾ������ߵ��������
extern void back_book(const unsigned int day, const char* r_name, const unsigned int r_number, const int school, const unsigned int number[], const char* name, const char* writer, const int press, const int totalNumber, const int backBNumber);
//day��ʾ��ǰ���ڣ�r_name��ʾ�û�������r_number��ʾ����֤�Ż�ѧ��֤�ţ�school��ʾ����ѧԺ��number[]��ʾ��ı�ţ�name��ʾ������writer��ʾ���ߣ�press��ʾ�����磬totalNumber��ʾ�������������backBNumber��ʾ���췵�����������
extern void encrypt(const char * en_number,FILE *tp);
extern void book_to_inter(Book *&book);
extern void decipher(int Num, char number[]);
extern void client_to_inter(Client  *&clientInfo);
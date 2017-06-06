#pragma once

#include"client.h"
#include"book.h"
#include"global.h"
extern void ComputeCredit(Client *customer, unsigned int time);

extern int BorrowBook(Book *BorrowingBook, Client *customer, int *TotalBorrowedBook, unsigned int time);

extern bool ReturnBook(unsigned int number, Client *customer, int *TotalBorrowedBook, Book *head, unsigned int time, string &name);

extern bool OrderBook(Book *BorrowingBook, Client *customer);

extern void OrderReminder(Client *customer, Book *head);

extern int OrdertoBorrow(const int decision, Client *customer, int *TotalBorrowedBook, Book *head, unsigned int time, int num);
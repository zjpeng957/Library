#pragma once

#include"client.h"
#include"book.h"
#include"global.h"

extern void SearchBook(const char *name, int category, int press, const char *writer, unsigned long number, Book *FindingBook[], Book *head);

extern void SearchClient(QString name, unsigned int number, unsigned int id, int type, int school, Client *FindingClient[], Client *head);

extern double BorrowRate(int TotalBookNum, int TotalBorrowedBook);
#include "booklist.h"
#include "ui_booklist.h"

BookList::BookList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BookList)
{
    ui->setupUi(this);
}

BookList::~BookList()
{
    delete ui;
}

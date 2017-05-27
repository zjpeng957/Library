#ifndef BOOKLIST_H
#define BOOKLIST_H

#include <QWidget>

namespace Ui {
class BookList;
}

class BookList : public QWidget
{
    Q_OBJECT

public:
    explicit BookList(QWidget *parent = 0);
    ~BookList();

private:
    Ui::BookList *ui;
};

#endif // BOOKLIST_H

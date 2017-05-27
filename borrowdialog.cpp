#include "borrowdialog.h"
#include "ui_borrowdialog.h"

BorrowDialog::BorrowDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BorrowDialog)
{
    ui->setupUi(this);
}

BorrowDialog::~BorrowDialog()
{
    delete ui;
}

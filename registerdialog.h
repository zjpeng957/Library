#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H
//×¢²á´°¿Ú
#include <QDialog>
#include"client.h"
#include "global.h"
#include "register.h"
#include<qmessagebox.h>

namespace Ui {
class registerDialog;
}

class registerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit registerDialog(QWidget *parent = 0);
    ~registerDialog();
signals:
    void registerClient(Client *CurrentClient);
private slots:
    void on_ButtonRegister_clicked();

    void on_ButtonBack_clicked();

private:
    Ui::registerDialog *ui;
};

#endif // REGISTERDIALOG_H

#include "adminwindow.h"
#include "ui_adminwindow.h"

adminwindow::adminwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminwindow)
{
    ui->setupUi(this);
    QFont btnfont("Times", 20, QFont::Bold);

    ui->pushButton->setFont(btnfont);
}

adminwindow::~adminwindow()
{
    delete ui;
}

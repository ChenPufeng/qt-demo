#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("UserInfo"));
    //left
    UserNameLabel =new QLabel(tr("username"));
    UserNameEdit=new QLineEdit;
    NameLabel =new QLabel(tr("name"));
    NameEdit=new QLineEdit;
    SexLabel=new QLabel(tr("sex"));
    SexEdit=new QComboBox;
    SexEdit->addItem(tr("1"));
    SexEdit->addItem(tr("0"));

    UserNameLabel =new QLabel(tr("username"));
    UserNameEdit=new QLineEdit;
    UserNameLabel =new QLabel(tr("username"));
    UserNameEdit=new QLineEdit;
}

Dialog::~Dialog()
{
}


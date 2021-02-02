#include "stackdlg.h"
#include<QHBoxLayout>
StackDlg::StackDlg(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("Stacked Widget"));
    list=new QListWidget(this);

    //
    list->insertItem(0,tr("window1"));
    list->insertItem(1,tr("windows2"));
    list->insertItem(2,tr("windows3"));
    //
    label1=new QLabel(tr("Windows test1"));
    label2=new QLabel(tr("Windwo test2"));
    label3=new QLabel(tr("Windows test3"));
    stack=new QStackedWidget(this);

    //
    stack->addWidget(label1);
    stack->addWidget(label2);
    stack->addWidget(label3);

    QHBoxLayout *mainLayout = new QHBoxLayout(this);

    mainLayout->setMargin(5);
    mainLayout->setSpacing(5);
    mainLayout->addWidget(list);
    mainLayout->addWidget(stack,0,Qt::AlignCenter);
    mainLayout->setStretchFactor(list,1);
    mainLayout->setStretchFactor(stack,3);
    connect(list,SIGNAL(currentRowChanged(int)),stack,SLOT(setCurrentIndex(int)));



}

StackDlg::~StackDlg()
{
}


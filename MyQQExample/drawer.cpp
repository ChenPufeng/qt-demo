#include "drawer.h"
#include<QGroupBox>
#include<QVBoxLayout>
Drawer::Drawer(QWidget *parent,Qt::WindowFlags f):QToolBox(parent,f)
{
    setWindowTitle(tr("My QQ"));
    toolBtn1_1=new QToolButton;
    toolBtn1_1->setText(tr("zhangsan"));
//    toolBtn1_1->setIcon()
    toolBtn1_1->setAutoRaise(true);

    toolBtn1_2=new QToolButton;
    toolBtn1_2->setText(tr("lisi"));
//    toolBtn1_1->setIcon()
    toolBtn1_2->setAutoRaise(true);

    toolBtn1_3=new QToolButton;
    toolBtn1_3->setText(tr("wangwu"));
//    toolBtn1_1->setIcon()
    toolBtn1_3->setAutoRaise(true);

    toolBtn1_4 =new QToolButton;
    toolBtn1_4->setText(tr("xiaozhao"));
    toolBtn1_4->setAutoRaise(true);

    toolBtn1_5 =new QToolButton;
    toolBtn1_5->setText(tr("xiaosun"));
    toolBtn1_5->setAutoRaise(true);

    QGroupBox *groupBox1 = new QGroupBox;
    QVBoxLayout *layout = new QVBoxLayout(groupBox1);
    layout->setMargin(10);
    layout->setAlignment(Qt::AlignCenter);

    layout->addWidget(toolBtn1_1);
    layout->addWidget(toolBtn1_2);
    layout->addWidget(toolBtn1_3);
    layout->addWidget(toolBtn1_4);
    layout->addWidget(toolBtn1_5);

    layout->addStretch();

    toolBtn2_1=new QToolButton;
    toolBtn2_1->setText(tr("xiaowang"));
    toolBtn2_1->setAutoRaise(true);

    toolBtn2_2=new QToolButton;
    toolBtn2_2->setText(tr("xiaozhang"));
    toolBtn2_2->setAutoRaise(true);


    QGroupBox *groupBox2= new QGroupBox;
    QVBoxLayout *layout2 = new QVBoxLayout(groupBox2);
    layout2->setMargin(10);
    layout2->setAlignment(Qt::AlignCenter);

    layout2->addWidget(toolBtn2_1);
    layout2->addWidget(toolBtn2_2);

    toolBtn3_1 = new QToolButton;
    toolBtn3_1->setText(tr("xiaocheng"));
    toolBtn3_1->setAutoRaise(true);

    toolBtn3_2 = new QToolButton;
    toolBtn3_2->setText(tr("xiaoli"));
    toolBtn3_2->setAutoRaise(true);


    QGroupBox *groupBox3= new QGroupBox;
    QVBoxLayout *layout3 = new QVBoxLayout(groupBox3);
    layout3->setMargin(10);
    layout3->setAlignment(Qt::AlignCenter);

    layout3->addWidget(toolBtn3_1);
    layout3->addWidget(toolBtn3_2);

    this->addItem((QWidget*)groupBox1,tr("friends"));
    this->addItem((QWidget*)groupBox2,tr("black"));
    this->addItem((QWidget*)groupBox3,tr("fick"));



}

























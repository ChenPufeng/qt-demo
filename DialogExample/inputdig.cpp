#include "inputdig.h"
#include<QInputDialog>
InputDig::InputDig(QWidget* parent):QDialog(parent)
{
    setWindowTitle(tr("input dialog"));
    nameLabel1=new QLabel;
    nameLabel1->setText(tr("name:"));
    nameLabel2=new QLabel;
    nameLabel2->setText(tr("aaaa"));
    nameLabel2->setFrameStyle(QFrame::Panel|QFrame::Sunken);

    nameBtn=new QPushButton;
    nameBtn->setText(tr("change name"));

    sexLabel1 = new QLabel;
    sexLabel1->setText(tr("gender:"));
    sexLabel2=new QLabel;
    sexLabel2->setText(tr("man"));
    sexLabel2->setFrameStyle(QFrame::Panel|QFrame::Sunken);

    sexBtn=new QPushButton;
    sexBtn->setText(tr("change gender"));


    ageLabel1 = new QLabel;
    ageLabel1->setText(tr("age:"));
    ageLabel2=new QLabel;
    ageLabel2->setText(tr("12"));
    ageLabel2->setFrameStyle(QFrame::Panel|QFrame::Sunken);

    ageBtn=new QPushButton;
    ageBtn->setText(tr("change age"));

    scoreLabel1 = new QLabel;
    scoreLabel1->setText(tr("score:"));
    scoreLabel2=new QLabel;
    scoreLabel2->setText(tr("99"));
    scoreLabel2->setFrameStyle(QFrame::Panel|QFrame::Sunken);

    scoreBtn=new QPushButton;
    scoreBtn->setText(tr("change age"));



    mainLayout=new QGridLayout(this);


    mainLayout->addWidget(nameLabel1,3,0);
    mainLayout->addWidget(nameLabel2,3,1);
    mainLayout->addWidget(nameBtn,3,2);
    mainLayout->addWidget(sexLabel1,4,0);
    mainLayout->addWidget(sexLabel2,4,1);
    mainLayout->addWidget(sexBtn,4,2);
    mainLayout->addWidget(ageLabel1,5,0);
    mainLayout->addWidget(ageLabel2,5,1);
    mainLayout->addWidget(ageBtn,5,2);
    mainLayout->addWidget(scoreLabel1,6,0);
    mainLayout->addWidget(scoreLabel2,6,1);
    mainLayout->addWidget(scoreBtn,6,2);

    mainLayout->setMargin(15);
    mainLayout->setSpacing(10);

    connect(nameBtn,SIGNAL(clicked()),this,SLOT(ChangeName()));
    connect(sexBtn,SIGNAL(clicked()),this,SLOT(ChangeSex()));
    connect(ageBtn,SIGNAL(clicked()),this,SLOT(ChangeAge()));
    connect(scoreBtn,SIGNAL(clicked()),this,SLOT(ChangeScore()));

}

void InputDig::ChangeName(){
    bool ok;
    QString text= QInputDialog::getText(this,tr("input string"),tr("name"),QLineEdit::Normal,nameLabel2->text(),&ok);
    if(ok&&!text.isEmpty()){
        nameLabel2->setText(text);
    }
}

void InputDig::ChangeSex(){
    QStringList SexItems;
    SexItems<<tr("man")<<tr("woman");
    bool ok;
    QString SexItem = QInputDialog::getItem(this,tr("select"),tr("gender"),SexItems,0,false,&ok);
    if(ok&&!SexItem.isEmpty()){
        sexLabel2->setText(SexItem);
    }
}
void InputDig::ChangeScore(){
    bool ok;
    double score = QInputDialog::getDouble(this,tr("double"),tr("score"),scoreLabel2->text().toDouble(&ok),0,100,1,&ok);
    if(ok){
        scoreLabel2->setText(QString(tr("%1")).arg(score));
    }
}

void InputDig::ChangeAge(){
    bool ok;
    int age = QInputDialog::getInt(this,tr("int"),tr("age"),ageLabel2->text().toInt(&ok),0,100,1,&ok);
    if(ok){
        ageLabel2->setText(QString(tr("%1")).arg(age));
    }
}

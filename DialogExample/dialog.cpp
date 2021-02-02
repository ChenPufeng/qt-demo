#include "dialog.h"
#include "ui_dialog.h"
#include<QFileDialog>
#include<QColorDialog>
#include<QFontDialog>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setWindowTitle(tr("dialog examples"));
    fileBtn=new QPushButton;
    fileBtn->setText(tr("file open dialog"));
    fileLineEdit=new QLineEdit;

    colorBtn=new QPushButton;
    colorBtn->setText(tr("color dialog"));
    colorFrame = new QFrame;
    colorFrame->setFrameShape(QFrame::Box);
    colorFrame->setAutoFillBackground(true);

    fontBtn = new QPushButton;
    fontBtn->setText(tr("font dialog"));
    fontLineEdit=new QLineEdit;
    fontLineEdit->setText(tr("welcome~~~"));

    inputBtn = new QPushButton;
    inputBtn->setText(tr("input dialog"));

    mainLayout=new QGridLayout(this);
    mainLayout->addWidget(fileBtn,0,0);
    mainLayout->addWidget(fileLineEdit,0,1);
    mainLayout->addWidget(colorBtn,1,0);
    mainLayout->addWidget(colorFrame,1,1);
    mainLayout->addWidget(fontBtn,2,0);
    mainLayout->addWidget(fontLineEdit,2,1);
    mainLayout->addWidget(inputBtn,3,0);


    connect(fileBtn,SIGNAL(clicked()),this,SLOT(showFile()));
    connect(colorBtn,SIGNAL(clicked()),this,SLOT(showColor()));
    connect(fontBtn,SIGNAL(clicked()),this,SLOT(showFont()));

    connect(inputBtn,SIGNAL(clicked()),this,SLOT(showDig()));
}
void Dialog::showDig(){
    inputDig=new InputDig(this);
    inputDig->show();
}


void Dialog::showFont(){
    bool ok;
    QFont f=QFontDialog::getFont(&ok);
    if(ok){
        fontLineEdit->setFont(f);
    }
}

void Dialog::showColor(){
    QColor c= QColorDialog::getColor(Qt::blue);
    if(c.isValid()){
        colorFrame->setPalette(QPalette(c));
    }
}

void Dialog::showFile(){
    QString s = QFileDialog::getOpenFileName(this,"open file dialog","./",
                                               "C++ files(*.cpp);;Head files(*.h)");
    fileLineEdit->setText(s);
}

Dialog::~Dialog()
{
    delete ui;
}


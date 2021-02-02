#include "digclock.h"
#include<QTimer>
#include<QTime>
#include<QMouseEvent>
DigClock::DigClock(QWidget *parent):QLCDNumber(parent)
{
    QPalette p =palette();
    p.setColor(QPalette::Window,Qt::blue);

    setPalette(p);

    setWindowFlags(Qt::FramelessWindowHint);
    setWindowOpacity(0.5);
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(showTime()));

    timer->start(1000);
    showTime();
    resize(150,60);
    showColon=true;
}

void DigClock::showTime(){
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm");
    if(showColon){
        text[2]=':';
        showColon=false;
    }else{
    text[2]=' ';
    showColon=true;
    }
    display(text);
}

void DigClock::mousePressEvent(QMouseEvent *event){
    if(event->button()==Qt::LeftButton){
        dragPosition = event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
    if(event->button()==Qt::RightButton){
        close();
    }
}

void DigClock::mouseMoveEvent(QMouseEvent *event){
    if(event->button()&Qt::LeftButton){
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}














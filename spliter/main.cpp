#include "mainwindow.h"

#include <QApplication>
#include<QSplitter>
#include<QTextEdit>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont font("monopace",20);
    a.setFont(font);

    //main spliter
    QSplitter *spliterMain =new QSplitter(Qt::Horizontal,0);
    QTextEdit *textLeft = new QTextEdit(QObject::tr("Left widget"),spliterMain);
    textLeft->setAlignment(Qt::AlignCenter);
    //
    QSplitter *spliterRight = new  QSplitter(Qt::Vertical,spliterMain);
//    spliterRight->setOpaqueResize(false);
    spliterRight->setOpaqueResize(true);
    QTextEdit *textUp = new QTextEdit(QObject::tr("Top widget"),spliterRight);
    textUp->setAlignment(Qt::AlignCenter);


    QTextEdit *textBottom = new QTextEdit(QObject::tr("bottom widget"),spliterRight);
    textBottom->setAlignment(Qt::AlignCenter);

    spliterMain->setStretchFactor(1,1);
    spliterMain->setWindowTitle(QObject::tr("spliter"));
    spliterMain->show();



//    MainWindow w;
//    w.show();
    return a.exec();
}

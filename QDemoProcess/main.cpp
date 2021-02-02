#include "dialog.h"
#include<digclock.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    Dialog w;

//    w.show();
    DigClock clock;
    clock.show();

    return a.exec();
}

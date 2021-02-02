#include "geomeary.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Geomeary w;
    w.show();
    return a.exec();
}

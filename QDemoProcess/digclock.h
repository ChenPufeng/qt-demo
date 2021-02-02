#ifndef DIGCLOCK_H
#define DIGCLOCK_H

#include <QLCDNumber>

class DigClock : public QLCDNumber
{
    Q_OBJECT
public:
    DigClock(QWidget *parent=0);
    void mousePressEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
private slots:
    void showTime();
private:
    QPoint dragPosition;
    bool showColon;
};

#endif // DIGCLOCK_H

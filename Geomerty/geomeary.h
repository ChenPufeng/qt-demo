#ifndef GEOMEARY_H
#define GEOMEARY_H

#include <QDialog>
#include<QLabel>
#include<QGridLayout>
#include<QMoveEvent>
#include<QResizeEvent>


class Geomeary : public QDialog
{
    Q_OBJECT

public:
    Geomeary(QWidget *parent = nullptr);
    ~Geomeary();
    void updateLabel();


private:
    QLabel *xLabel;
    QLabel *xValueLabel;
    QLabel *yLabel;
    QLabel *yValueLabel;
    QLabel *FrmLabel;
    QLabel *FrmValueLabel;
    QLabel *posLabel;
    QLabel *posValueLabel;
    QLabel *geoLabel;
    QLabel *geoValueLabel;
    QLabel *widthLabel;
    QLabel *widthValueLabel;
    QLabel *heightLabel;
    QLabel *heightValueLabel;
    QLabel *rectLabel;
    QLabel *rectValueLabel;
    QLabel *sizeLabel;
    QLabel *sizeValueLabel;
    QGridLayout *mainLayout;










protected:
    void moveEvent(QMoveEvent *);
    void resizeEvent(QResizeEvent *);










};
#endif // GEOMEARY_H

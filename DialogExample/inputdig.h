#ifndef INPUTDIG_H
#define INPUTDIG_H

#include <QDialog>
#include <QDialog>
#include<QPushButton>
#include<QLineEdit>
#include<QGridLayout>
#include<QFrame>
#include<QLabel>

class InputDig : public QDialog
{
    Q_OBJECT
public:
    InputDig(QWidget* parent=0);

private slots:
    void ChangeName();
    void ChangeSex();
    void ChangeAge();
    void ChangeScore();
private:
    QLabel *nameLabel1;
    QLabel *sexLabel1;
    QLabel *ageLabel1;
    QLabel *scoreLabel1;
    QLabel *nameLabel2;
    QLabel *sexLabel2;
    QLabel *ageLabel2;
    QLabel *scoreLabel2;

    QPushButton *nameBtn;
    QPushButton *sexBtn;
    QPushButton *ageBtn;
    QPushButton *scoreBtn;

    QGridLayout *mainLayout;
};

#endif // INPUTDIG_H

#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QPushButton>
#include<QLineEdit>
#include<QGridLayout>
#include<QFrame>
#include<QLabel>
#include<qinputdialog.h>
#include<inputdig.h>
QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void showFile();
    void showColor();
    void showFont();

    void showDig();


private:
    Ui::Dialog *ui;
    QPushButton *fileBtn;
    QPushButton *colorBtn;
    QFrame *colorFrame;
    QLineEdit *fileLineEdit;
    QGridLayout *mainLayout;
    QPushButton *fontBtn;
    QLineEdit *fontLineEdit;


    InputDig *inputDig;
    QPushButton *inputBtn;

};
#endif // DIALOG_H

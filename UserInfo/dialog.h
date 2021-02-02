#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QLabel>
#include<QLineEdit>
#include<QComboBox>
#include<QGridLayout>
#include<QTextEdit>
class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    // left
    QLabel *UserNameLabel;
    QLabel *NameLabel;
    QLabel *SexLabel;
    QLabel *DepartmentLabel;
    QLabel *AgeLabel;
    QLabel *OtherLabel;
    QLineEdit *UserNameEdit;
    QLineEdit *NameEdit;
    QComboBox *SexEdit;
    QLineEdit *DepartmentEdit;
    QLineEdit *AgeEdit;

    QGridLayout *LeftLayout;

    //rigth
    QLabel *HeadLabel;
    QLabel *HeadIconLabel;
    QPushButton *UpdateHeadBtn;
    QHBoxLayout *TopRightLayout;
    QLabel *IntrodictionLable;
    QTextEdit *IntroductionTextEdit;
    QVBoxLayout *RightLayout;

    //
    QPushButton *OkBtn;
    QPushButton *CancelBtn;
    QHBoxLayout *ButtomLayout;













};
#endif // DIALOG_H









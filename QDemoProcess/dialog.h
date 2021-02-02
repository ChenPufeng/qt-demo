#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

#include<QLabel>
#include<QLineEdit>
#include<QProgressBar>
#include<QComboBox>
#include<QPushButton>
#include<QGridLayout>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
private slots:
    void startProgress();
private:
    QLabel *FileName;
    QLineEdit *FileLineEdit;
    QLabel *ProcessType;
    QComboBox *comboBox;
    QProgressBar *progressBar;
    QPushButton *starBtn;
    QGridLayout *mainLayout;
};
#endif // DIALOG_H

#include "dialog.h"
#include<QProgressDialog>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{

    //set font
    setWindowTitle("progress bar");
    FileName = new QLabel;
    FileName->setText(tr("file count:"));
    FileLineEdit = new QLineEdit;
    FileLineEdit->setText(tr("100000"));
    ProcessType =  new QLabel;
    ProcessType->setText(tr("show type:"));
    comboBox = new QComboBox;
    comboBox->addItem(tr("processbar"));
    comboBox->addItem(tr("processdialog"));
    progressBar = new QProgressBar;
    starBtn = new QPushButton;
    starBtn->setText(tr("start"));
    mainLayout=new QGridLayout(this);
    mainLayout->addWidget(FileName,0,0);
    mainLayout->addWidget(FileLineEdit,0,1);
    mainLayout->addWidget(ProcessType,1,0);
    mainLayout->addWidget(comboBox,1,1);
    mainLayout->addWidget(progressBar,2,0,1,2);
    mainLayout->addWidget(starBtn,3,1);
    mainLayout->setMargin(15);
    mainLayout->setSpacing(10);
    connect(starBtn,SIGNAL(clicked()),this,SLOT(startProgress()));


}
void Dialog::startProgress(){
    bool ok;
    int num = FileLineEdit->text().toInt(&ok);
    if(comboBox->currentIndex()==0){
        progressBar->setRange(0,num);
        for(int i=1;i<num+1;i++){
            progressBar->setValue(i);
        }
    }else if(comboBox->currentIndex()==1){
        QProgressDialog *progressDialog = new QProgressDialog(this);
        progressDialog->setWindowModality(Qt::WindowModal);
        progressDialog->setMinimumDuration(5);
        progressDialog->setLabelText(tr("copying ......"));
        progressDialog->setCancelButtonText(tr("cancel"));
        progressDialog->setRange(0,num);
        for(int i=1;i<num+1;i++){
            progressDialog->setValue(i);
            if(progressDialog->wasCanceled()){
                return;
            }
        }
    }

}

Dialog::~Dialog()
{
}


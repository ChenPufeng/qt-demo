#include "dockwindow.h"
#include<QTextEdit>
#include<QDockWidget>

DockWindow::DockWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("Dock Windows"));
    QTextEdit *te = new QTextEdit(this);
    te->setText(tr("Main windows"));
    te->setAlignment(Qt::AlignCenter);
    setCentralWidget(te);

    //
    QDockWidget *dock = new QDockWidget(tr("DockWindows"),this);
    //
    dock->setFeatures(QDockWidget::DockWidgetMovable);
    dock->setAllowedAreas(Qt::LeftDockWidgetArea);

    QTextEdit *tel = new QTextEdit();
    tel->setText(tr("Window1 "));
    dock->setWidget(tel);
    addDockWidget(Qt::RightDockWidgetArea,dock);

    //
    dock=new QDockWidget(tr("Dockwindow22222"));
    dock->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable);
    QTextEdit *tel2 = new QTextEdit();
    tel2->setText(tr("window 222"));
    dock->setWidget(tel2);
    addDockWidget(Qt::RightDockWidgetArea,dock);

    dock=new QDockWidget(tr("Dockwindow3"));
    dock->setFeatures(QDockWidget::AllDockWidgetFeatures);
    QTextEdit *tel3 = new QTextEdit();
    tel3->setText(tr("window 3333"));
    dock->setWidget(tel3);
    addDockWidget(Qt::RightDockWidgetArea,dock);


}

DockWindow::~DockWindow()
{
}


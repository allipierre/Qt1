 #include "mywindow.h"

MyWindow::MyWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QLabel *lbhello=new QLabel("Hallo Welt!");
    lbhello->setGeometry(10,10,60,10);
    lbhello->setText("bonjour");
    this->layout()->addWidget(lbhello);
}

MyWindow::~MyWindow()
{

}

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <playgame.h>
#include <clickokay.h>
#include<QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(1022,603);
    //QPixmap mainbackground(":/../../../Downloads/background100.png");
    //int w = ui->label_2->width();
    //int h = ui->label_2->height();
    //ui->label_2->setPixmap(mainbackground.scaled(w,h,Qt::KeepAspectRatio));
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    hide();
    if(ui->checkBox->isChecked())
    {
        playgame a;
                a.setModal(true);
                a.exec();
    }
    else
    {
        clickokay a;
        a.setModal(true);
        a.exec();
    }

}


void MainWindow::on_pushButton_2_clicked()
{
    this->close();
}





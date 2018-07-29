#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QString>
int c=2;
MainWindow::MainWindow(QWidget *parent) :

    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
       fun();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(c%2==0){
    ui->pushButton->setText("X");
    c++;
    }
    else{
         ui->pushButton->setText("0");
         c++;
}
}

void MainWindow::on_pushButton_2_clicked()
{
    if(c%2==0){
    ui->pushButton_2->setText("X");
    c++;
    }
    else{
         ui->pushButton_2->setText("0");
         c++;
}
}

void MainWindow::on_pushButton_3_clicked()
{
    if(c%2==0){
    ui->pushButton_3->setText("X");
    c++;
    }
    else{
         ui->pushButton_3->setText("0");
         c++;
}
}

void MainWindow::on_pushButton_5_clicked()
{
    if(c%2==0){
    ui->pushButton_5->setText("X");
    c++;
    }
    else{
         ui->pushButton_5->setText("0");
         c++;
}
}

void MainWindow::on_pushButton_6_clicked()
{
    if(c%2==0){
    ui->pushButton_6->setText("X");
    c++;
    }
    else{
         ui->pushButton_6->setText("0");
         c++;
}
}

void MainWindow::on_pushButton_4_clicked()
{
    if(c%2==0){
    ui->pushButton_4->setText("X");
    c++;
    }
    else{
         ui->pushButton_4->setText("0");
         c++;
}
}

void MainWindow::on_pushButton_7_clicked()
{
    if(c%2==0){
    ui->pushButton_7->setText("X");
    c++;
    }
    else{
         ui->pushButton_7->setText("0");
         c++;
}
}

void MainWindow::on_pushButton_8_clicked()
{
    if(c%2==0){
    ui->pushButton_8->setText("X");
    c++;
    }
    else{
         ui->pushButton_8->setText("0");
         c++;
}
}

void MainWindow::on_pushButton_9_clicked()
{
    if(c%2==0){
    ui->pushButton_9->setText("X");
    c++;
    }
    else{
         ui->pushButton_9->setText("0");
         c++;
}
}

void MainWindow::on_pushButton_11_clicked()
{
    c=0;
    ui->pushButton->setText("Press");
    ui->pushButton_2->setText("Press");
    ui->pushButton_3->setText("Press");
    ui->pushButton_4->setText("Press");
    ui->pushButton_5->setText("Press");
    ui->pushButton_6->setText("Press");
    ui->pushButton_7->setText("Press");
    ui->pushButton_8->setText("Press");
    ui->pushButton_9->setText("Press");
}

void MainWindow::on_pushButton_10_clicked()
{
    QMessageBox::StandardButton r = QMessageBox::question(this,"Do U want to quit -__- ", "QUIT!!",QMessageBox::Yes|QMessageBox ::No);
    if(r==QMessageBox::Yes){
        QApplication::quit();
    }

}
MainWindow::fun(){
QString a = ui->pushButton->text();
}

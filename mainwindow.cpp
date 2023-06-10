
#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    QString str=ui->lineEdit->text();
    Validator valid("^[a-zA-Z]{2}(\\d{2})(\\d{6})(\\d{19})$");
    if (valid.isValid(str)){
        ui->label_2->setStyleSheet("color:#0000ff");
        ui->label_2->setText("Номер рахунку коректний");

    }
    else{
     ui->label_2->setStyleSheet("color:#F70000");
     ui->label_2->setText("Номер рахунку некоректний");
    }

}


void MainWindow::on_lineEdit_returnPressed()
{
    MainWindow::on_pushButton_clicked();
}


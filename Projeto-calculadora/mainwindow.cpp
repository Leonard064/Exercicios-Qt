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

void MainWindow::on_btIgual_clicked()
{
    ui->result->setText("Funcionando");
}


void MainWindow::on_btApaga_clicked()
{
    ui->result->setText("");
}


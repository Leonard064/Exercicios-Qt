#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QIntValidator>
#include <QMessageBox>
#include <QButtonGroup>

#include <iostream>
using namespace std;

/*=================================
        Projeto Calculadora

    cálculos de todas as casas
    decimais funcionando

=================================*/


/* Variáveis Globais */

//string de fórmula
QString texto = "";

//string para armazenar valor digitado
QString valor = "";

//operação
QString op = "";

//produtos
int num1, num2 = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->result->setText(texto);

    ui->statusbar->showMessage("Leonard064 - 2022/2023");

}

MainWindow::~MainWindow()
{
    delete ui;
}

/* Função de cálculo dos valores */
QString operacoes(int num1, int num2, QString op){

    if(op == ""){
        texto += "Operação Inválida";
    }
    if(op == "+"){
        int resultado = num1 + num2;
        texto += " = "+ QString::number(resultado);
    }
    if(op == "-"){
        int resultado = num1 - num2;
        texto += " = "+ QString::number(resultado);
    }
    if(op == "x"){
        int resultado = num1 * num2;
        texto += " = "+ QString::number(resultado);
    }
    if(op == "/"){
        int resultado = num1 / num2;
        texto += " = "+ QString::number(resultado);
    }

    return texto;
}


/*
    recebe um número de parâmtero
    coloca o N na primeira variável
    vazia
*/
void checaNum(int num){
    if(num1 == 0){
        num1 = num;
    }else if (num2 == 0){
        num2 = num;
    }

}


/* Restaura a variavel valor a vazio */
void limpaValor(){
    valor = "";
}


/* --- Botões de Operações --- */

void MainWindow::on_btIgual_clicked()
{

    checaNum(valor.toInt());

    QString result = operacoes(num1,num2,op);

    ui->result->setText(result);

}


void MainWindow::on_btApaga_clicked()
{
    texto = "";
    op = "";
    num1 = 0;
    num2 = 0;
    limpaValor();
    ui->result->setText(texto);

}


void MainWindow::on_butSoma_clicked()
{
    texto += " + ";
    op = "+";

    checaNum(valor.toInt());

    limpaValor();

    ui->result->setText(texto);
}

void MainWindow::on_butSub_clicked()
{
    texto += " - ";
    op = "-";

    checaNum(valor.toInt());

    limpaValor();

    ui->result->setText(texto);
}


void MainWindow::on_butMult_clicked()
{
    texto += " X ";
    op = "x";

    checaNum(valor.toInt());

    limpaValor();

    ui->result->setText(texto);
}

void MainWindow::on_butDiv_clicked()
{
    texto += " / ";
    op = "/";

    checaNum(valor.toInt());

    limpaValor();

    ui->result->setText(texto);
}

/* --- Botões de Numeros --- */

void MainWindow::on_but7_clicked()
{
    texto += "7";

    valor += "7";
    //checaNum(7);

    ui->result->setText(texto);
}

void MainWindow::on_but9_clicked()
{
    texto += "9";

    valor += "9";

    //checaNum(9);

    ui->result->setText(texto);
}


void MainWindow::on_but8_clicked()
{
    texto += "8";

    valor += "8";

    //checaNum(8);

    ui->result->setText(texto);
}


void MainWindow::on_but4_clicked()
{
    texto += "4";

    valor += "4";

    //checaNum(4);

    ui->result->setText(texto);
}


void MainWindow::on_but5_clicked()
{
    texto += "5";

    valor += "5";

    //checaNum(5);

    ui->result->setText(texto);
}


void MainWindow::on_but6_clicked()
{
    texto += "6";

    valor += "6";

    //checaNum(6);

    ui->result->setText(texto);
}


void MainWindow::on_but1_clicked()
{
    texto += "1";

    valor += "1";

    //checaNum(1);

    ui->result->setText(texto);
}


void MainWindow::on_but2_clicked()
{
    texto += "2";

    valor += "2";

    //checaNum(2);

    ui->result->setText(texto);
}


void MainWindow::on_but3_clicked()
{
    texto += "3";

    valor += "3";

    //checaNum(3);

    ui->result->setText(texto);
}


void MainWindow::on_but0_clicked()
{
    texto += "0";

    valor += "0";

    //checaNum(0);

    ui->result->setText(texto);
}


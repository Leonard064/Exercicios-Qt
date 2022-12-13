#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusbar->showMessage("Created by: Leonard064.");
}

MainWindow::~MainWindow()
{
    delete ui;
}

//a única forma de retorno em array é passando uma função de ponteiro
int * criaArray(int tam, int min, int max){

    int * valores = new int[tam];

    srand(10); //seed precisará ser aleatória

    //método para aleatoriedade com range
    for (int i = 0; i < tam; ++i) {
        int random = min + (rand() % (max+1));
        valores[i] = random;
    }

    return valores;
}

//função de ordenação
void bubbleSort(int array[], int tamanho){
    for (int i = 0; i < tamanho; ++i) {
        for(int j = 0; j < tamanho - i; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

}

void MainWindow::on_btOrdena_clicked()
{

    //pega os valores inseridos
    QString textoTam = ui->tamanhoEdit->text();
    QString textoMin = ui->minEdit->text();
    QString textoMax = ui->maxEdit->text();

    //checa se há valores inseridos nos campos
    if(textoTam != "" && textoMin != "" && textoMax != ""){

        ui->labelResult->setText("Bubble Sort: ");

        //transforma-os em int
        int tamanho = textoTam.toInt();
        int min = textoMin.toInt();
        int max = textoMax.toInt();

        //cria um ponteiro para um array
        int* array = criaArray(tamanho, min, max);

        bubbleSort(array,tamanho);

        for (int i = 0; i < tamanho; ++i) {
            ui->listWidget->addItem(QString::number(array[i]));
        }

        delete[] array;

    }else{
        QMessageBox msg;
        msg.information(this,"Erro","ERRO - insira as informações");
    }


}




#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();




private slots:

    void on_btIgual_clicked();

    void on_btApaga_clicked();

    void on_but7_clicked();

    void on_butSoma_clicked();

    void on_butSub_clicked();

    void on_butMult_clicked();

    void on_butDiv_clicked();

    void on_but9_clicked();

    void on_but8_clicked();

    void on_but4_clicked();

    void on_but5_clicked();

    void on_but6_clicked();

    void on_but1_clicked();

    void on_but2_clicked();

    void on_but3_clicked();

    void on_but0_clicked();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

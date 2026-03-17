#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->btnAdd, &QPushButton::clicked, this, &MainWindow::add);
    connect(ui->btnSub, &QPushButton::clicked, this, &MainWindow::sub);
    connect(ui->btnMul, &QPushButton::clicked, this, &MainWindow::mul);
    connect(ui->btnDiv, &QPushButton::clicked, this, &MainWindow::div);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::add() {
    bool ok1, ok2;
    int a = ui->number1->text().toInt(&ok1);
    int b = ui->number2->text().toInt(&ok2);
    if(!ok1 || !ok2) { ui->result->setText("ERROR"); return; }
    ui->result->setText(QString::number(a + b));
}

void MainWindow::sub() {
    bool ok1, ok2;
    int a = ui->number1->text().toInt(&ok1);
    int b = ui->number2->text().toInt(&ok2);
    if(!ok1 || !ok2) { ui->result->setText("ERROR"); return; }
    ui->result->setText(QString::number(a - b));
}

void MainWindow::mul() {
    bool ok1, ok2;
    int a = ui->number1->text().toInt(&ok1);
    int b = ui->number2->text().toInt(&ok2);
    if(!ok1 || !ok2) { ui->result->setText("ERROR"); return; }
    ui->result->setText(QString::number(a * b));
}

void MainWindow::div() {
    bool ok1, ok2;
    int a = ui->number1->text().toInt(&ok1);
    int b = ui->number2->text().toInt(&ok2);
    if(!ok1 || !ok2 || b == 0) { ui->result->setText("ERROR"); return; }
    ui->result->setText(QString::number(a / b));
}

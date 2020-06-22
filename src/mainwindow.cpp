#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::setButtonChecked(QPushButton *btn)
{

    ui->btnAll->setChecked(ui->btnAll == btn);
    ui->btnOften->setChecked(ui->btnOften == btn);
    ui->btnRecent->setChecked(ui->btnRecent == btn);
}


void MainWindow::on_btnAll_clicked()
{

    setButtonChecked(ui->btnAll);


}

void MainWindow::on_btnRecent_clicked()
{
    setButtonChecked(ui->btnRecent);
}

void MainWindow::on_btnOften_clicked()
{
    setButtonChecked(ui->btnOften);

}

void MainWindow::on_btnAdd_clicked()
{
    ui->wgtPages->setCurrentIndex(1);
    // ui->btnDelete->setHidden(true);
}

void MainWindow::on_btnBack_clicked()
{
    ui->wgtPages->setCurrentIndex(0);
}

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setButtonChecked(QPushButton *btn);

private slots:
    void on_btnAll_clicked();

    void on_btnRecent_clicked();

    void on_btnOften_clicked();

    void on_btnAdd_clicked();

    void on_btnBack_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
